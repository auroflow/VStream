package cn.edu.zju.daily.function;

import static java.util.stream.Collectors.toList;

import cn.edu.zju.daily.data.vector.FloatVector;
import cn.edu.zju.daily.data.vector.VectorDeletion;
import cn.edu.zju.daily.util.*;
import cn.edu.zju.daily.util.chromadb.ChromaClient;
import cn.edu.zju.daily.util.chromadb.ChromaCollection;
import cn.edu.zju.daily.util.chromadb.ChromaUtil;
import cn.edu.zju.daily.util.chromadb.EmptyChromaEmbeddingFunction;
import java.util.*;
import org.apache.flink.configuration.Configuration;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.amikos.chromadb.handler.ApiException;

/** Chroma insert function. */
public class ChromaDBKeyedDataProcessFunction extends VectorKeyedDataProcessFunction {

    private static final Logger LOG =
            LoggerFactory.getLogger(ChromaDBKeyedDataProcessFunction.class);

    private ChromaClient client;
    private String collectionName;
    private ChromaCollection collection;
    private final Parameters params;

    // private ExecutorService insertExecutor;

    public ChromaDBKeyedDataProcessFunction(Parameters params) {
        super(params.getChromaInsertBatchSize());
        this.params = params;
    }

    @Override
    public void open(Configuration parameters) throws Exception {
        super.open(parameters);

        int subtaskIndex = getRuntimeContext().getIndexOfThisSubtask();
        collectionName = params.getChromaCollectionNamePrefix() + "_" + subtaskIndex;
        String chromaAddress = ChromaUtil.getChromaAddress(params, getRuntimeContext());
        LOG.info("Subtask {}: Using Chroma server at {}", subtaskIndex, chromaAddress);

        client = new ChromaClient(chromaAddress);
        client.setTimeout(600); // 10 minutes

        // Clear the collection if it already exists
        if (params.isChromaClearData()) {
            try {
                client.deleteCollection(collectionName);
            } catch (Exception ignored) {
            }
        }

        this.collection = getOrCreateCollection();
    }

    private ChromaCollection getOrCreateCollection() {
        try {
            Map<String, Object> metadata = ChromaUtil.getHnswParams(params);
            return collection =
                    client.createCollection(
                            collectionName,
                            metadata,
                            true,
                            EmptyChromaEmbeddingFunction.getInstance());
        } catch (ApiException e) {
            LOG.error("Error creating collection", e);
            return null;
        }
    }

    @Override
    protected void flushInserts(List<FloatVector> pendingInserts) {
        try {
            List<float[]> vectors =
                    pendingInserts.stream().map(FloatVector::getValue).collect(toList());
            List<String> ids =
                    pendingInserts.stream()
                            .map(FloatVector::getId)
                            .map(Object::toString)
                            .collect(toList());
            // Insertion with metadata is extremely slow, if it weren't so slow we would have used
            // it to store the timestamp, and perform time-based search. For now, we insert without
            // the timestamp, and search the whole data.
            List<Map<String, String>> metadatas = null;
            long now = System.currentTimeMillis();
            addToCollection(vectors, ids, metadatas);
            LOG.info(
                    "Partition {}: Inserted {} vectors (from #{}) in {} ms",
                    getRuntimeContext().getIndexOfThisSubtask(),
                    pendingInserts.size(),
                    pendingInserts.get(0).getId(),
                    System.currentTimeMillis() - now);
        } catch (Exception e) {
            LOG.error("Error inserting vectors to {}", collectionName, e);
        }
    }

    private void addToCollection(
            List<float[]> vectors, List<String> ids, List<Map<String, String>> metadatas) {
        if (collection == null) {
            collection = getOrCreateCollection();
        }
        try {
            collection.add(vectors, metadatas, ids, ids);
        } catch (Exception e) {
            LOG.error("Error adding vectors, resetting collection.");
            collection = null;
        }
    }

    @Override
    protected void flushDeletes(Map<Long, VectorDeletion> pendingDeletes) {
        try {
            long now = System.currentTimeMillis();
            deleteFromCollection(
                    pendingDeletes.keySet().stream().map(Object::toString).collect(toList()));
            LOG.info(
                    "Partition {}: Deleted {} vectors in {} ms",
                    getRuntimeContext().getIndexOfThisSubtask(),
                    pendingDeletes.size(),
                    System.currentTimeMillis() - now);
        } catch (Exception e) {
            LOG.error("Error deleting vectors", e);
        }
    }

    private void deleteFromCollection(List<String> ids) {
        if (collection == null) {
            collection = getOrCreateCollection();
        }
        try {
            assert collection != null;
            collection.delete(ids, null, null);
        } catch (Exception e) {
            LOG.error("Error deleting vectors, resetting collection.");
            collection = null;
        }
    }
}
