/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_TtlDB */

#ifndef _Included_org_rocksdb_TtlDB
#define _Included_org_rocksdb_TtlDB
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_TtlDB_NOT_FOUND
#define org_rocksdb_TtlDB_NOT_FOUND -1L
/*
 * Class:     org_rocksdb_TtlDB
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TtlDB_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TtlDB
 * Method:    open
 * Signature: (JLjava/lang/String;IZ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TtlDB_open
  (JNIEnv *, jclass, jlong, jstring, jint, jboolean);

/*
 * Class:     org_rocksdb_TtlDB
 * Method:    openCF
 * Signature: (JLjava/lang/String;[[B[J[IZ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_TtlDB_openCF
  (JNIEnv *, jclass, jlong, jstring, jobjectArray, jlongArray, jintArray, jboolean);

/*
 * Class:     org_rocksdb_TtlDB
 * Method:    createColumnFamilyWithTtl
 * Signature: (J[BJI)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TtlDB_createColumnFamilyWithTtl
  (JNIEnv *, jobject, jlong, jbyteArray, jlong, jint);

/*
 * Class:     org_rocksdb_TtlDB
 * Method:    closeDatabase
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TtlDB_closeDatabase
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
