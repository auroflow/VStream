/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_VectorColumnFamilyHandle */

#ifndef _Included_org_rocksdb_VectorColumnFamilyHandle
#define _Included_org_rocksdb_VectorColumnFamilyHandle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_VectorColumnFamilyHandle
 * Method:    getName
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_VectorColumnFamilyHandle_getName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_VectorColumnFamilyHandle
 * Method:    getID
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_VectorColumnFamilyHandle_getID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_VectorColumnFamilyHandle
 * Method:    getDescriptor
 * Signature: (J)Lorg/rocksdb/VectorCFDescriptor;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_VectorColumnFamilyHandle_getDescriptor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_VectorColumnFamilyHandle
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_VectorColumnFamilyHandle_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
