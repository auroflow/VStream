package cn.edu.zju.daily.data.source;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import org.apache.flink.connector.file.src.FileSourceSplit;
import org.apache.flink.connector.file.src.enumerate.FileEnumerator;
import org.apache.flink.connector.file.src.enumerate.NonSplittingRecursiveEnumerator;
import org.apache.flink.core.fs.Path;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class LoopingNonSplittingRecursiveEnumerator extends NonSplittingRecursiveEnumerator {

    private static final Logger LOG =
            LoggerFactory.getLogger(LoopingNonSplittingRecursiveEnumerator.class);
    private final int numLoops;

    public LoopingNonSplittingRecursiveEnumerator(int numLoops) {
        this.numLoops = numLoops;
    }

    @Override
    public Collection<FileSourceSplit> enumerateSplits(Path[] paths, int minDesiredSplits)
            throws IOException {
        Collection<FileSourceSplit> splits = super.enumerateSplits(paths, minDesiredSplits);
        ArrayList<FileSourceSplit> loopedSplits = new ArrayList<>();
        for (int i = 0; i < numLoops; i++) {
            loopedSplits.addAll(splits);
        }
        LOG.info("{} splits in total.", loopedSplits.size());
        return loopedSplits;
    }

    public static class Provider implements FileEnumerator.Provider {

        private final int numLoops;

        public Provider(int numLoops) {
            this.numLoops = numLoops;
        }

        @Override
        public FileEnumerator create() {
            LOG.info("Creating LoopingNonSplittingRecursiveEnumerator with {} loops.", numLoops);
            return new LoopingNonSplittingRecursiveEnumerator(numLoops);
        }
    }
}
