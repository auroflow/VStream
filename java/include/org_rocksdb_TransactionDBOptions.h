/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_TransactionDBOptions */

#ifndef _Included_org_rocksdb_TransactionDBOptions
#define _Included_org_rocksdb_TransactionDBOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    newTransactionDBOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDBOptions_newTransactionDBOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    getMaxNumLocks
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDBOptions_getMaxNumLocks
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    setMaxNumLocks
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_setMaxNumLocks
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    getNumStripes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDBOptions_getNumStripes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    setNumStripes
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_setNumStripes
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    getTransactionLockTimeout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDBOptions_getTransactionLockTimeout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    setTransactionLockTimeout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_setTransactionLockTimeout
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    getDefaultLockTimeout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDBOptions_getDefaultLockTimeout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    setDefaultLockTimeout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_setDefaultLockTimeout
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    getWritePolicy
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_TransactionDBOptions_getWritePolicy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    setWritePolicy
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_setWritePolicy
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_rocksdb_TransactionDBOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDBOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
