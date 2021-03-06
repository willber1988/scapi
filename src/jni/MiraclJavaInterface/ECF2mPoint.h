/**
* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* 
* Copyright (c) 2012 - SCAPI (http://crypto.biu.ac.il/scapi)
* This file is part of the SCAPI project.
* DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
* and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
* FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* 
* We request that any publication and/or code referring to and/or based on SCAPI contain an appropriate citation to SCAPI, including a reference to
* http://crypto.biu.ac.il/SCAPI.
* 
* SCAPI uses Crypto++, Miracl, NTL and Bouncy Castle. Please see these projects for any further licensing issues.
* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* 
*/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl */

#ifndef _Included_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
#define _Included_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
 * Method:    createF2mPoint
 * Signature: (J[B[B[Z)J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl_createF2mPoint
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
 * Method:    checkInfinityF2m
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl_checkInfinityF2m
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
 * Method:    getXValue
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl_getXValueF2mPoint
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
 * Method:    getYValue
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl_getYValueF2mPoint
  (JNIEnv *, jobject, jlong, jlong);
/*
 * Class:     edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl
 * Method:    deletePointF2m
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_edu_biu_scapi_primitives_dlog_miracl_ECF2mPointMiracl_deletePointF2m
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
