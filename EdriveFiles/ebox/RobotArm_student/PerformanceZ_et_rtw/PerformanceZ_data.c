/*
 * PerformanceZ_data.c
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
#include "PerformanceZ.h"
#include "PerformanceZ_private.h"

/* Block parameters (auto storage) */
Parameters_PerformanceZ PerformanceZ_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X1'
                                        */
  0.002,                               /* Expression: 0.002
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S6>/fc pos'
                                        */
  -0.35,                               /* Expression: -0.35
                                        * Referenced by: '<S6>/fc neg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/speed0'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S6>/Gain1'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<S6>/gravitation'
                                        */
  40.0,                                /* Expression: 40
                                        * Referenced by: '<S5>/Gain'
                                        */

  /*  Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S5>/Dctintegrator'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: f_num
                                        * Referenced by: '<S5>/Dctintegrator'
                                        */

  /*  Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S5>/Dctintegrator'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctintegrator'
                                        */

  /*  Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },
  23.0,                                /* Expression: f_num
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },
  300.0,                               /* Expression: f_den
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */

  /*  Computed Parameter: Dct2lowpass_P1_Size
   * Referenced by: '<S5>/Dct2lowpass'
   */
  { 1.0, 1.0 },
  600.0,                               /* Expression: f_den
                                        * Referenced by: '<S5>/Dct2lowpass'
                                        */

  /*  Computed Parameter: Dct2lowpass_P2_Size
   * Referenced by: '<S5>/Dct2lowpass'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: b_den
                                        * Referenced by: '<S5>/Dct2lowpass'
                                        */

  /*  Computed Parameter: Dct2lowpass_P3_Size
   * Referenced by: '<S5>/Dct2lowpass'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct2lowpass'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward R'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S7>/S-Function'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */

  /*  Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S8>/S-Function'
   */
  { 1.0, 6.0 },

  /*  Expression: ref_part
   * Referenced by: '<S8>/S-Function'
   */
  { 0.0, 0.0, 0.3, 4.998, 0.059980000000000006, 10000.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};
