/*
 * RArfrf2_data.c
 *
 * Code generation for model "RArfrf2.mdl".
 *
 * Model version              : 1.912
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Fri Dec  4 18:02:55 2015
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "RArfrf2.h"
#include "RArfrf2_private.h"

/* Block parameters (auto storage) */
Parameters_RArfrf2 RArfrf2_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/Constant'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S7>/S-Function'
   */
  { 3.0, 6.0 },

  /*  Expression: ref_part
   * Referenced by: '<S7>/S-Function'
   */
  { -1.2, 1.2, 0.0, 0.0, 2.65, -1.0, 1.2, -1.2, 0.0, 1.0, 1.0, 0.0, 0.25, 0.25,
    0.0, 100.0, 100.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Random Number'
                                        */
  0.54772255750516607,                 /* Computed Parameter: RandomNumber_StdDev
                                        * Referenced by: '<S1>/Random Number'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Random Number'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<S3>/Gain'
                                        */

  /*  Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },
  15.0,                                /* Expression: f_num
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },
  200.0,                               /* Expression: f_den
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dct1lowpass_P1_Size
   * Referenced by: '<S3>/Dct1lowpass'
   */
  { 1.0, 1.0 },
  350.0,                               /* Expression: f_den
                                        * Referenced by: '<S3>/Dct1lowpass'
                                        */

  /*  Computed Parameter: Dct1lowpass_P2_Size
   * Referenced by: '<S3>/Dct1lowpass'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/Dct1lowpass'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Gain'
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

  /*  Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S6>/S-Function'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};
