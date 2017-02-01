/*
 * PerformanceR1_private.h
 *
 * Code generation for model "PerformanceR1.mdl".
 *
 * Model version              : 1.931
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Mar  7 18:53:11 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_PerformanceR1_private_h_
#define RTW_HEADER_PerformanceR1_private_h_
#include "rtwtypes.h"
#if !defined(RTW_GNERATED_SFCN_NOT_PRIVATE_Robot_sf)
#define RTW_GNERATED_SFCN_NOT_PRIVATE_Robot_sf
#endif

#if !defined(MATLAB_MEX_FILE)
#undef S_FUNCTION_NAME
#include "Robot_sfcn_rtw/Robot_sf.h"
#include "Robot_sfcn_rtw/Robot_sf_private.h"
#endif

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

int_T rt_WriteMat4FileHeader(FILE *fp,
  int32_T m,
  int32_T n,
  const char_T *name);
extern void ref3(SimStruct *rts);
extern void sf_rt_scope(SimStruct *rts);
extern void Robot_sf(SimStruct *rts);

#endif                                 /* RTW_HEADER_PerformanceR1_private_h_ */
