/*
 * testcompz_data.c
 *
 * Code generation for model "testcompz.mdl".
 *
 * Model version              : 1.916
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Dec 19 13:37:57 2015
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "testcompz.h"
#include "testcompz_private.h"

/* Block parameters (auto storage) */
Parameters_testcompz testcompz_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  62.831853071795862,                  /* Expression: 2*pi*10
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S1>/Reference X'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Gain'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size
   * Referenced by: '<S5>/Dctpd'
   */
  { 1.0, 1.0 },
  75.0,                                /* Expression: kp
                                        * Referenced by: '<S5>/Dctpd'
                                        */

  /*  Computed Parameter: Dctpd_P2_Size
   * Referenced by: '<S5>/Dctpd'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: kv
                                        * Referenced by: '<S5>/Dctpd'
                                        */

  /*  Computed Parameter: Dctpd_P3_Size
   * Referenced by: '<S5>/Dctpd'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctpd'
                                        */

  /*  Computed Parameter: Dct2lowpass_P1_Size
   * Referenced by: '<S5>/Dct2lowpass'
   */
  { 1.0, 1.0 },
  150.0,                               /* Expression: f_den
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
                                        * Referenced by: '<S1>/Feedforward R'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<S1>/Gravity comp'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/friction left'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/friction right'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
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
