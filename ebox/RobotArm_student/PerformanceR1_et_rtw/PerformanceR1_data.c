/*
 * PerformanceR1_data.c
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
#include "PerformanceR1.h"
#include "PerformanceR1_private.h"

/* Block parameters (auto storage) */
Parameters_PerformanceR1 PerformanceR1_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S8>/S-Function'
   */
  { 1.0, 6.0 },

  /*  Expression: ref_part
   * Referenced by: '<S8>/S-Function'
   */
  { 0.0, 0.0, 0.6, 6.0, 0.07, 10000.0 },
  60.0,                                /* Expression: 60
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Discrete Transfer Fcn'
                                        */

  /*  Expression: [1 -0.9923]
   * Referenced by: '<S3>/Discrete Transfer Fcn'
   */
  { 1.0, -0.9923 },

  /*  Expression: [1 -1]
   * Referenced by: '<S3>/Discrete Transfer Fcn'
   */
  { 1.0, -1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Discrete Transfer Fcn1'
                                        */

  /*  Expression: [0.14 0.1049]
   * Referenced by: '<S3>/Discrete Transfer Fcn1'
   */
  { 0.14, 0.1049 },

  /*  Expression: [1  -1.179 0.4236]
   * Referenced by: '<S3>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.179, 0.4236 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Leadlag filter T'
                                        */

  /*  Expression: [13.33 -13.07]
   * Referenced by: '<S3>/Leadlag filter T'
   */
  { 13.33, -13.07 },

  /*  Expression: [1 -0.7358]
   * Referenced by: '<S3>/Leadlag filter T'
   */
  { 1.0, -0.7358 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Gain'
                                        */
  0.003,                               /* Expression: 0.003
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.0001,                              /* Expression: 0.0001
                                        * Referenced by: '<S6>/Gain1'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S6>/fc pos'
                                        */
  -0.17,                               /* Expression: -0.17
                                        * Referenced by: '<S6>/fc neg1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward Z'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */

  /*  Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S7>/S-Function'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};
