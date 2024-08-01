package cn.edu.zju.daily.pipeline;

import cn.edu.zju.daily.data.PartitionedData;
import cn.edu.zju.daily.data.result.SearchResult;
import cn.edu.zju.daily.data.vector.FloatVector;
import cn.edu.zju.daily.function.MilvusKeyedProcessFunction;
import cn.edu.zju.daily.function.PartialResultProcessFunction;
import cn.edu.zju.daily.function.partitioner.PartitionFunction;
import cn.edu.zju.daily.util.MilvusUtil;
import cn.edu.zju.daily.util.Parameters;
import org.apache.flink.streaming.api.datastream.SingleOutputStreamOperator;
import org.apache.flink.streaming.api.functions.KeyedProcessFunction;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.Map;
import java.util.Random;

public class MilvusStreamingPipeline {

    private final Parameters params;
    MilvusUtil milvusUtil = new MilvusUtil();

    Logger LOG = LoggerFactory.getLogger(MilvusStreamingPipeline.class);

    public MilvusStreamingPipeline(Parameters params) throws InterruptedException {
        this.params = params;
        milvusUtil.connect(params.getMilvusHost(), params.getMilvusPort());

        String collectionName = params.getMilvusCollectionName();
        System.out.println("Preparing collection...");

        if (milvusUtil.collectionExists(collectionName)) {
            boolean deleted = milvusUtil.dropCollection(collectionName);
            if (deleted) {
                LOG.warn("Collection {} already exists, deleted.", collectionName);
            } else {
                throw new RuntimeException("Failed to delete existed collection.");
            }
        }
        milvusUtil.createCollection(params.getMilvusCollectionName(), params.getVectorDim(), params.getMilvusNumShards());
        int numPartitions = params.getParallelism();
        Map<Integer, Integer> map = PartitionFunction.getNodeIdMap(numPartitions);
        for (int i = 0; i < numPartitions; i++) {
            String partitionName = Integer.toString(map.get(i));
            milvusUtil.createPartition(collectionName, partitionName);
        }
        boolean indexBuilt = milvusUtil.buildHnswIndex(params.getMilvusCollectionName(), params.getMetricType(), params.getHnswM(), params.getHnswEfConstruction(), params.getHnswEfSearch());
        boolean loaded = milvusUtil.loadCollection(collectionName);

        if (indexBuilt && loaded) {
            while (!milvusUtil.hasIndex(collectionName) || !milvusUtil.isLoaded(collectionName)) {
                System.out.println("Waiting for loading and collection build...");
                Thread.sleep(5000);
            }
            System.out.println("Done.");
        }

        System.out.println("Prepared.");
    }

    private PartitionFunction getPartitioner() {
        Random random = new Random(2345678L);
        return PartitionFunction.getPartitionFunction(params, random);
    }

    /**
     * Apply the streaming pipeline to the throttled vectors and queries.
     *
     * @param vectors
     * @param queries
     * @return
     */
    public SingleOutputStreamOperator<SearchResult> apply(
            SingleOutputStreamOperator<FloatVector> vectors,
            SingleOutputStreamOperator<FloatVector> queries) {

        if (params.getParallelism() < params.getNumCopies()) {
            throw new RuntimeException("parallelism must be >= numCopies");
        }
        PartitionFunction partitioner = getPartitioner();
        return applyToPartitionedData(vectors.connect(queries).flatMap(partitioner).name("partition"));
    }

    /**
     * Apply the streaming pipeline to an unpartitioned PartitionedData stream.
     */
    public SingleOutputStreamOperator<SearchResult> applyToHybridStream(
            SingleOutputStreamOperator<PartitionedData> data) {

        PartitionFunction partitioner = getPartitioner();
        return applyToPartitionedData(data.flatMap(partitioner).name("partition"));
    }

    /**
     * Apply the stream pipelines to a streaming data set containing first vectors, then queries.
     */
    public SingleOutputStreamOperator<SearchResult> applyToPartitionedData(
            SingleOutputStreamOperator<PartitionedData> data) {

        KeyedProcessFunction<Integer, PartitionedData, SearchResult> processFunction = new MilvusKeyedProcessFunction(params);

        return data.keyBy(PartitionedData::getPartitionId)
                .process(processFunction)
                .setParallelism(params.getParallelism())
                .setMaxParallelism(params.getParallelism())
                .name("insert & search")
                .keyBy(SearchResult::getQueryId)
//            .countWindow(numPartitions)
                .process(new PartialResultProcessFunction(params.getK()))
                .setParallelism(params.getReduceParallelism())
                .name("reduce");
    }
}
