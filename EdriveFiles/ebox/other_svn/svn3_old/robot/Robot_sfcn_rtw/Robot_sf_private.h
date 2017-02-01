/*
 * Robot_sf_private.h
 *
 * Code generation for model "Robot_sf.mdl".
 *
 * Model version              : 1.877
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Wed Jun  4 14:52:16 2014
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Robot_sf_private_h_
#define RTW_HEADER_Robot_sf_private_h_
#include "rtwtypes.h"
#define CALL_EVENT                     (-1)
#ifndef RTW_COMMON_DEFINES_
# define RTW_COMMON_DEFINES_
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
 }
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers delcare free without const! */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif                                 /* RTW_COMMON_DEFINES_ */

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h
#ifndef RTWTYPES_ID_C08S16I32L64N64F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L64N64F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

extern void ec_Ebox(SimStruct *childS);
extern void dweakint(SimStruct *childS);
extern void dpd(SimStruct *childS);
extern void dnotch(SimStruct *childS);
extern void dlowpass2(SimStruct *childS);
extern void ec_EboxResetEnc(SimStruct *childS);

#endif                                 /* RTW_HEADER_Robot_sf_private_h_ */
