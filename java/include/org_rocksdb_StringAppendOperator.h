/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_StringAppendOperator */

#ifndef _Included_org_rocksdb_StringAppendOperator
#define _Included_org_rocksdb_StringAppendOperator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_StringAppendOperator
 * Method:    newSharedStringAppendOperator
 * Signature: (C)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_StringAppendOperator_newSharedStringAppendOperator__C
  (JNIEnv *, jclass, jchar);

/*
 * Class:     org_rocksdb_StringAppendOperator
 * Method:    newSharedStringAppendOperator
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_StringAppendOperator_newSharedStringAppendOperator__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_rocksdb_StringAppendOperator
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_StringAppendOperator_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
