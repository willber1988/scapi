/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Examples */

#ifndef _Included_Examples
#define _Included_Examples
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     JavaCryptopp
 * Method:    invokeThousandRSA
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaCryptopp_invokeThousandRSA
  (JNIEnv *, jobject);

/*
 * Class:     JavaCryptopp
 * Method:    invokeECC
 * Signature: ()V
 */
JNIEXPORT jdouble JNICALL Java_JavaCryptopp_invokeECC
  (JNIEnv *, jobject);

/*
 * Class:     JavaCryptopp
 * Method:    initInvertibleRSA
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_JavaCryptopp_initInvertibleRSA
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     JavaCryptopp
 * Method:    createRandNumber
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_JavaCryptopp_createRandNumber
  (JNIEnv *, jobject, jint);

/*
 * Class:     JavaCryptopp
 * Method:    applyRSAFunction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JavaCryptopp_applyRSAFunction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     JavaCryptopp
 * Method:    invertRSAFunction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JavaCryptopp_invertRSAFunction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     JavaCryptopp
 * Method:    loadRabinName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JavaCryptopp_loadRabinName
  (JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif
#endif