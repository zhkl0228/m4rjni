/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class m4rjni_Mzd */

#ifndef _Included_m4rjni_Mzd
#define _Included_m4rjni_Mzd
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     m4rjni_Mzd
 * Method:    m4ri_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_m4rjni_Mzd_m4ri_1init
  (JNIEnv *, jclass);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_init
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_m4rjni_Mzd_mzd_1init
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_get_nrows
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_m4rjni_Mzd_mzd_1get_1nrows
  (JNIEnv *, jclass, jlong);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_get_ncols
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_m4rjni_Mzd_mzd_1get_1ncols
  (JNIEnv *, jclass, jlong);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_m4rjni_Mzd_mzd_1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_write_bit
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_m4rjni_Mzd_mzd_1write_1bit
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_read_bit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_m4rjni_Mzd_mzd_1read_1bit
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     m4rjni_Mzd
 * Method:    mzd_mul_m4rm
 * Signature: (JJJI)J
 */
JNIEXPORT jlong JNICALL Java_m4rjni_Mzd_mzd_1mul_1m4rm
  (JNIEnv *, jclass, jlong, jlong, jlong, jint);

/*
 * Class:     m4rjni_Mzd
 * Method:    process_mzd
 * Signature: (Ljava/nio/ByteBuffer;[BJJJ)V
 */
JNIEXPORT void JNICALL Java_m4rjni_Mzd_process_1mzd
  (JNIEnv *, jclass, jobject, jbyteArray, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
