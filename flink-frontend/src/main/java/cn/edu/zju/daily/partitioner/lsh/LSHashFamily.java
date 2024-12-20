package cn.edu.zju.daily.partitioner.lsh;

import cn.edu.zju.daily.data.vector.VectorData;
import java.io.Serializable;

public interface LSHashFamily extends Serializable {

    int[] hash(VectorData vector);

    int getNumHashFunctions();
}
