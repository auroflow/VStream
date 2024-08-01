package cn.edu.zju.daily;

import cn.edu.zju.daily.data.result.SearchResult;
import cn.edu.zju.daily.data.result.SearchResultEncoder;
import cn.edu.zju.daily.data.vector.FloatVector;
import cn.edu.zju.daily.pipeline.HDFSVectorSource;

import cn.edu.zju.daily.pipeline.RocksDBStreamingPipeline;
import cn.edu.zju.daily.util.Parameters;
import org.apache.flink.connector.file.sink.FileSink;
import org.apache.flink.core.fs.Path;
import org.apache.flink.streaming.api.datastream.SingleOutputStreamOperator;
import org.apache.flink.streaming.api.environment.StreamExecutionEnvironment;


import java.time.LocalDateTime;

/**
 * Insert while search.
 */
public class VStreamSearchJob {

    private static final String DEFAULT_PARAM_PATH = "/home/auroflow/code/vector-search/rocksdb-stream/src/main/resources/params.yaml";


    public static void main(String[] args) throws Exception {

        String paramPath = args.length > 0 ? args[0] : DEFAULT_PARAM_PATH;

        Parameters params = Parameters.load(paramPath, false);

        StreamExecutionEnvironment env = StreamExecutionEnvironment.getExecutionEnvironment();
        new VectorEnvironmentCreator(params).prepareVectorEnvironment(env);

        HDFSVectorSource source = new HDFSVectorSource(env, params);
        RocksDBStreamingPipeline pipeline = new RocksDBStreamingPipeline(params);

        SingleOutputStreamOperator<FloatVector> vectors = source.getSourceStream(true);
        SingleOutputStreamOperator<FloatVector> queries = source.getQueryStream(true);

        SingleOutputStreamOperator<SearchResult> results = pipeline.apply(vectors, queries);
        String fileSinkPath = params.getFileSinkPath() + "/"
             + (LocalDateTime.now().toString().split("\\.")[0].replace(":", "-"));
        FileSink<SearchResult> sink = FileSink.<SearchResult>forRowFormat(new Path(fileSinkPath),
                new SearchResultEncoder()).build();
        results.sinkTo(sink);

        env.executeAsync();
    }
}
