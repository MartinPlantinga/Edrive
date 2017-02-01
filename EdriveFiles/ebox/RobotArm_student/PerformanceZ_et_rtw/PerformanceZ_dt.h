/*
 * PerformanceZ_dt.h
 *
 * Code generation for model "PerformanceZ.mdl".
 *
 * Model version              : 1.943
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Apr  2 10:57:51 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&PerformanceZ_B.UnitDelay1[0]), 0, 0, 27 },

  { (char_T *)(&PerformanceZ_B.RobotArm_sfcn_o3[0]), 8, 0, 3 }
  ,

  { (char_T *)(&PerformanceZ_DWork.UnitDelay1_DSTATE[0]), 0, 0, 146 },

  { (char_T *)(&PerformanceZ_DWork.ToFile1_PWORK.FilePtr), 11, 0, 1 },

  { (char_T *)(&PerformanceZ_DWork.RobotArm_sfcn_DWORK37), 6, 0, 1 },

  { (char_T *)(&PerformanceZ_DWork.RobotArm_sfcn_DWORK38), 7, 0, 9 },

  { (char_T *)(&PerformanceZ_DWork.ToFile1_IWORK.Count), 10, 0, 1 },

  { (char_T *)(&PerformanceZ_DWork.RobotArm_sfcn_DWORK47), 5, 0, 3 },

  { (char_T *)(&PerformanceZ_DWork.Controller_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&PerformanceZ_DWork.RobotArm_sfcn_DWORK50), 3, 0, 6 },

  { (char_T *)(&PerformanceZ_DWork.Controller_MODE), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  11U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&PerformanceZ_P.Switch_Threshold), 0, 0, 55 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] PerformanceZ_dt.h */
