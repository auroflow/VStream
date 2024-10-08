/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_RocksDB */

#ifndef _Included_org_rocksdb_RocksDB
#define _Included_org_rocksdb_RocksDB
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_RocksDB_NOT_FOUND
#define org_rocksdb_RocksDB_NOT_FOUND -1L
/*
 * Class:     org_rocksdb_RocksDB
 * Method:    open
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_open__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    open
 * Signature: (JLjava/lang/String;[[B[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_open__JLjava_lang_String_2_3_3B_3J
  (JNIEnv *, jclass, jlong, jstring, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    open
 * Signature: (JLjava/lang/String;[[B[J[[B[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_open__JLjava_lang_String_2_3_3B_3J_3_3B_3J
  (JNIEnv *, jclass, jlong, jstring, jobjectArray, jlongArray, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    openROnly
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_openROnly__JLjava_lang_String_2Z
  (JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    openROnly
 * Signature: (JLjava/lang/String;[[B[JZ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_openROnly__JLjava_lang_String_2_3_3B_3JZ
  (JNIEnv *, jclass, jlong, jstring, jobjectArray, jlongArray, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    openAsSecondary
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_openAsSecondary__JLjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    openAsSecondary
 * Signature: (JLjava/lang/String;Ljava/lang/String;[[B[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_openAsSecondary__JLjava_lang_String_2Ljava_lang_String_2_3_3B_3J
  (JNIEnv *, jclass, jlong, jstring, jstring, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    closeDatabase
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_closeDatabase
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    listColumnFamilies
 * Signature: (JLjava/lang/String;)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_listColumnFamilies
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createColumnFamily
 * Signature: (J[BIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_createColumnFamily
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createVectorColumnFamily
 * Signature: (J[BIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_createVectorColumnFamily
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createColumnFamilies
 * Signature: (JJ[[B)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_createColumnFamilies__JJ_3_3B
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createVectorColumnFamilies
 * Signature: (JJ[[B)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_createVectorColumnFamilies__JJ_3_3B
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createColumnFamilies
 * Signature: (J[J[[B)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_createColumnFamilies__J_3J_3_3B
  (JNIEnv *, jobject, jlong, jlongArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    createVectorColumnFamilies
 * Signature: (J[J[[B)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_createVectorColumnFamilies__J_3J_3_3B
  (JNIEnv *, jobject, jlong, jlongArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    dropColumnFamily
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_dropColumnFamily
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    dropColumnFamilies
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_dropColumnFamilies
  (JNIEnv *, jobject, jlong, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    put
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_put__J_3BII_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    put
 * Signature: (J[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_put__J_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    putVector
 * Signature: (J[BII[BIIJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_putVector__J_3BII_3BIIJJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    put
 * Signature: (JJ[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_put__JJ_3BII_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    put
 * Signature: (JJ[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_put__JJ_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    putVector
 * Signature: (JJ[BII[BIIJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_putVector__JJ_3BII_3BIIJJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    delete
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_delete__J_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    delete
 * Signature: (J[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_delete__J_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteVector
 * Signature: (J[BIIJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteVector__J_3BIIJJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    delete
 * Signature: (JJ[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_delete__JJ_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    delete
 * Signature: (JJ[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_delete__JJ_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteVector
 * Signature: (JJ[BIIJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteVector__JJ_3BIIJJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    singleDelete
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_singleDelete__J_3BI
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    singleDelete
 * Signature: (J[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_singleDelete__J_3BIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    singleDelete
 * Signature: (JJ[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_singleDelete__JJ_3BI
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    singleDelete
 * Signature: (JJ[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_singleDelete__JJ_3BIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteRange
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteRange__J_3BII_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteRange
 * Signature: (J[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteRange__J_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteRange
 * Signature: (JJ[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteRange__JJ_3BII_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteRange
 * Signature: (JJ[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteRange__JJ_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    merge
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_merge__J_3BII_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    merge
 * Signature: (J[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_merge__J_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    merge
 * Signature: (JJ[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_merge__JJ_3BII_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    merge
 * Signature: (JJ[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_merge__JJ_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    write0
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_write0
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    write1
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_write1
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_get__J_3BII_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (J[BII[BIIJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_get__J_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    vectorSearch
 * Signature: (J[BII[BIIJJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_vectorSearch__J_3BII_3BIIJJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (JJ[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_get__JJ_3BII_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (JJ[BII[BIIJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_get__JJ_3BII_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    vectorSearch
 * Signature: (JJ[BII[BIIJJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_vectorSearch__JJ_3BII_3BIIJJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (J[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_get__J_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (J[BIIJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_get__J_3BIIJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    vectorSearch
 * Signature: (J[BIIJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_vectorSearch__J_3BIIJJ
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (JJ[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_get__JJ_3BII
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    get
 * Signature: (JJ[BIIJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_get__JJ_3BIIJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    vectorSearch
 * Signature: (JJ[BIIJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_RocksDB_vectorSearch__JJ_3BIIJJ
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    multiGet
 * Signature: (J[[B[I[I)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_multiGet__J_3_3B_3I_3I
  (JNIEnv *, jobject, jlong, jobjectArray, jintArray, jintArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    multiGet
 * Signature: (J[[B[I[I[J)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_multiGet__J_3_3B_3I_3I_3J
  (JNIEnv *, jobject, jlong, jobjectArray, jintArray, jintArray, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    multiGet
 * Signature: (JJ[[B[I[I)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_multiGet__JJ_3_3B_3I_3I
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jintArray, jintArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    multiGet
 * Signature: (JJ[[B[I[I[J)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_multiGet__JJ_3_3B_3I_3I_3J
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jintArray, jintArray, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    multiGet
 * Signature: (JJ[J[Ljava/nio/ByteBuffer;[I[I[Ljava/nio/ByteBuffer;[I[Lorg/rocksdb/Status;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_multiGet__JJ_3J_3Ljava_nio_ByteBuffer_2_3I_3I_3Ljava_nio_ByteBuffer_2_3I_3Lorg_rocksdb_Status_2
  (JNIEnv *, jobject, jlong, jlong, jlongArray, jobjectArray, jintArray, jintArray, jobjectArray, jintArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    keyMayExist
 * Signature: (JJJ[BII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_RocksDB_keyMayExist
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    keyMayExistFoundValue
 * Signature: (JJJ[BII)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_keyMayExistFoundValue
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    putDirect
 * Signature: (JJLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_putDirect
  (JNIEnv *, jobject, jlong, jlong, jobject, jint, jint, jobject, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    iterator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_iterator__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    iterator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_iterator__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    iteratorCF
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_iteratorCF__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    iteratorCF
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_iteratorCF__JJJ
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    iterators
 * Signature: (J[JJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_iterators
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getSnapshot
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getSnapshot
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    releaseSnapshot
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_releaseSnapshot
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getProperty
 * Signature: (JJLjava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_RocksDB_getProperty
  (JNIEnv *, jobject, jlong, jlong, jstring, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getMapProperty
 * Signature: (JJLjava/lang/String;I)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_RocksDB_getMapProperty
  (JNIEnv *, jobject, jlong, jlong, jstring, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getDirect
 * Signature: (JJLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_getDirect
  (JNIEnv *, jobject, jlong, jlong, jobject, jint, jint, jobject, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    keyMayExistDirect
 * Signature: (JJJLjava/nio/ByteBuffer;II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_RocksDB_keyMayExistDirect
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    keyMayExistDirectFoundValue
 * Signature: (JJJLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)[I
 */
JNIEXPORT jintArray JNICALL Java_org_rocksdb_RocksDB_keyMayExistDirectFoundValue
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteDirect
 * Signature: (JJLjava/nio/ByteBuffer;IIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteDirect
  (JNIEnv *, jobject, jlong, jlong, jobject, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getLongProperty
 * Signature: (JJLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getLongProperty
  (JNIEnv *, jobject, jlong, jlong, jstring, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    resetStats
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_resetStats
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getAggregatedLongProperty
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getAggregatedLongProperty
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getApproximateSizes
 * Signature: (JJ[JB)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_getApproximateSizes
  (JNIEnv *, jobject, jlong, jlong, jlongArray, jbyte);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getApproximateMemTableStats
 * Signature: (JJJJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_getApproximateMemTableStats
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    compactRange
 * Signature: (J[BI[BIJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_compactRange
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jbyteArray, jint, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    setOptions
 * Signature: (JJ[Ljava/lang/String;[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_setOptions
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    setVectorOptions
 * Signature: (JJ[Ljava/lang/String;[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_setVectorOptions
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getOptions
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_RocksDB_getOptions
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getVectorOptions
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_RocksDB_getVectorOptions
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    setDBOptions
 * Signature: (J[Ljava/lang/String;[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_setDBOptions
  (JNIEnv *, jobject, jlong, jobjectArray, jobjectArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getDBOptions
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_RocksDB_getDBOptions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    compactFiles
 * Signature: (JJJ[Ljava/lang/String;IIJ)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_compactFiles
  (JNIEnv *, jobject, jlong, jlong, jlong, jobjectArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    cancelAllBackgroundWork
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_cancelAllBackgroundWork
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    pauseBackgroundWork
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_pauseBackgroundWork
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    continueBackgroundWork
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_continueBackgroundWork
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    enableAutoCompaction
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_enableAutoCompaction
  (JNIEnv *, jobject, jlong, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    numberLevels
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_numberLevels
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    maxMemCompactionLevel
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_maxMemCompactionLevel
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    level0StopWriteTrigger
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_level0StopWriteTrigger
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_RocksDB_getName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getEnv
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getEnv
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    flush
 * Signature: (JJ[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_flush
  (JNIEnv *, jobject, jlong, jlong, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    flushWal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_flushWal
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    syncWal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_syncWal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getLatestSequenceNumber
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getLatestSequenceNumber
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    disableFileDeletions
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_disableFileDeletions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    enableFileDeletions
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_enableFileDeletions
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getLiveFiles
 * Signature: (JZ)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_getLiveFiles
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getSortedWalFiles
 * Signature: (J)[Lorg/rocksdb/LogFile;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_getSortedWalFiles
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getUpdatesSince
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getUpdatesSince
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteFile
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteFile
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getLiveFilesMetaData
 * Signature: (J)[Lorg/rocksdb/LiveFileMetaData;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_RocksDB_getLiveFilesMetaData
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getColumnFamilyMetaData
 * Signature: (JJ)Lorg/rocksdb/ColumnFamilyMetaData;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_RocksDB_getColumnFamilyMetaData
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    ingestExternalFile
 * Signature: (JJ[Ljava/lang/String;IJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_ingestExternalFile
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jint, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    verifyChecksum
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_verifyChecksum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getDefaultColumnFamily
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RocksDB_getDefaultColumnFamily
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getPropertiesOfAllTables
 * Signature: (JJ)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_RocksDB_getPropertiesOfAllTables
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    getPropertiesOfTablesInRange
 * Signature: (JJ[J)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_RocksDB_getPropertiesOfTablesInRange
  (JNIEnv *, jobject, jlong, jlong, jlongArray);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    suggestCompactRange
 * Signature: (JJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_RocksDB_suggestCompactRange
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    promoteL0
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_promoteL0
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    startTrace
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_startTrace
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    endTrace
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_endTrace
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    tryCatchUpWithPrimary
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_tryCatchUpWithPrimary
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    deleteFilesInRanges
 * Signature: (JJ[[BZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_deleteFilesInRanges
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jboolean);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    destroyDB
 * Signature: (Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RocksDB_destroyDB
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     org_rocksdb_RocksDB
 * Method:    version
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_RocksDB_version
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
