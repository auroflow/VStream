// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
// This file implements the "bridge" between Java and C++ and enables
// calling c++ ROCKSDB_NAMESPACE::Checkpoint methods from Java side.

#include "rocksdb/utilities/checkpoint.h"

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>

#include "include/org_rocksdb_Checkpoint.h"
#include "rocksdb/db.h"
#include "rocksjni/cplusplus_to_java_convert.h"
#include "rocksjni/portal.h"
/*
 * Class:     org_rocksdb_Checkpoint
 * Method:    newCheckpoint
 * Signature: (J)J
 */
jlong Java_org_rocksdb_Checkpoint_newCheckpoint(JNIEnv* /*env*/,
                                                jclass /*jclazz*/,
                                                jlong jdb_handle) {
  auto* db = reinterpret_cast<ROCKSDB_NAMESPACE::DB*>(jdb_handle);
  ROCKSDB_NAMESPACE::Checkpoint* checkpoint;
  ROCKSDB_NAMESPACE::Checkpoint::Create(db, &checkpoint);
  return GET_CPLUSPLUS_POINTER(checkpoint);
}

/*
 * Class:     org_rocksdb_Checkpoint
 * Method:    dispose
 * Signature: (J)V
 */
void Java_org_rocksdb_Checkpoint_disposeInternal(JNIEnv* /*env*/,
                                                 jobject /*jobj*/,
                                                 jlong jhandle) {
  auto* checkpoint = reinterpret_cast<ROCKSDB_NAMESPACE::Checkpoint*>(jhandle);
  assert(checkpoint != nullptr);
  delete checkpoint;
}

/*
 * Class:     org_rocksdb_Checkpoint
 * Method:    createCheckpoint
 * Signature: (JLjava/lang/String;)V
 */
void Java_org_rocksdb_Checkpoint_createCheckpoint__JLjava_lang_String_2(JNIEnv* env, jobject /*jobj*/,
                                                                        jlong jcheckpoint_handle,
                                                                        jstring jcheckpoint_path) {
  const char* checkpoint_path = env->GetStringUTFChars(jcheckpoint_path, 0);
  if (checkpoint_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }

  auto* checkpoint =
      reinterpret_cast<ROCKSDB_NAMESPACE::Checkpoint*>(jcheckpoint_handle);
  ROCKSDB_NAMESPACE::Status s = checkpoint->CreateCheckpoint(checkpoint_path);

  env->ReleaseStringUTFChars(jcheckpoint_path, checkpoint_path);

  if (!s.ok()) {
    ROCKSDB_NAMESPACE::RocksDBExceptionJni::ThrowNew(env, s);
  }
}


void Java_org_rocksdb_Checkpoint_createCheckpoint__JLjava_lang_String_2J(JNIEnv* env, jobject /*jobj*/,
                                                                         jlong jcheckpoint_handle,
                                                                         jstring jcheckpoint_path,
                                                                         jlong jlog_size_for_flush) {

  const char* checkpoint_path = env->GetStringUTFChars(jcheckpoint_path, 0);
  if (checkpoint_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }

  auto* checkpoint =
      reinterpret_cast<ROCKSDB_NAMESPACE::Checkpoint*>(jcheckpoint_handle);
  ROCKSDB_NAMESPACE::Status s = checkpoint->CreateCheckpoint(checkpoint_path,
                                                             static_cast<uint64_t>(jlog_size_for_flush));

  env->ReleaseStringUTFChars(jcheckpoint_path, checkpoint_path);

  if (!s.ok()) {
    ROCKSDB_NAMESPACE::RocksDBExceptionJni::ThrowNew(env, s);
  }
}