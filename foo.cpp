#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <jni.h>
#include "JNIFoo.h"

JNIEXPORT jstring JNICALL Java_JNIFoo_nativeFoo (JNIEnv *env, jobject obj) {
  jstring ret = 0;

  ret = env->NewStringUTF("Hello, Java!");

  return ret;
}
