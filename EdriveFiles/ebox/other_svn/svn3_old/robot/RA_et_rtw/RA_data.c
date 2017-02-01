/*
 * RA_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RA".
 *
 * Model version              : 1.933
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Fri Apr  8 10:14:30 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RA.h"
#include "RA_private.h"

/* Block parameters (auto storage) */
P_RA_T RA_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward R'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Feedforward Z'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  109.0,                               /* Expression: 109
                                        * Referenced by: '<S4>/Gain1'
                                        */

  /*  Computed Parameter: Dctleadlag2_P1_Size
   * Referenced by: '<S4>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  17.0,                                /* Expression: f_num
                                        * Referenced by: '<S4>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P2_Size
   * Referenced by: '<S4>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  200.0,                               /* Expression: f_den
                                        * Referenced by: '<S4>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P3_Size
   * Referenced by: '<S4>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S4>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: f_num
                                        * Referenced by: '<S4>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dctintegrator3_P2_Size
   * Referenced by: '<S4>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P1_Size
   * Referenced by: '<S4>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  1000.0,                              /* Expression: f_den
                                        * Referenced by: '<S4>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P2_Size
   * Referenced by: '<S4>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.7,                                 /* Expression: b_den
                                        * Referenced by: '<S4>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P3_Size
   * Referenced by: '<S4>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/Dct2lowpass4'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S1>/Reference X'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  38.0,                                /* Expression: 38
                                        * Referenced by: '<S5>/Gain1'
                                        */

  /*  Computed Parameter: Dctleadlag2_P1_Size_e
   * Referenced by: '<S5>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  10.0,                                /* Expression: f_num
                                        * Referenced by: '<S5>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P2_Size_f
   * Referenced by: '<S5>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  220.0,                               /* Expression: f_den
                                        * Referenced by: '<S5>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P3_Size_i
   * Referenced by: '<S5>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctintegrator3_P1_Size_o
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: f_num
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dctintegrator3_P2_Size_c
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P1_Size_h
   * Referenced by: '<S5>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  1000.0,                              /* Expression: f_den
                                        * Referenced by: '<S5>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P2_Size_l
   * Referenced by: '<S5>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.7,                                 /* Expression: b_den
                                        * Referenced by: '<S5>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P3_Size_p
   * Referenced by: '<S5>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct2lowpass4'
                                        */
  45.0,                                /* Expression: 45
                                        * Referenced by: '<S6>/Gain1'
                                        */

  /*  Computed Parameter: Dctleadlag2_P1_Size_o
   * Referenced by: '<S6>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: f_num
                                        * Referenced by: '<S6>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P2_Size_g
   * Referenced by: '<S6>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  200.0,                               /* Expression: f_den
                                        * Referenced by: '<S6>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctleadlag2_P3_Size_h
   * Referenced by: '<S6>/Dctleadlag2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S6>/Dctleadlag2'
                                        */

  /*  Computed Parameter: Dctintegrator3_P1_Size_e
   * Referenced by: '<S6>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: f_num
                                        * Referenced by: '<S6>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dctintegrator3_P2_Size_o
   * Referenced by: '<S6>/Dctintegrator3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S6>/Dctintegrator3'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P1_Size_n
   * Referenced by: '<S6>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  1000.0,                              /* Expression: f_den
                                        * Referenced by: '<S6>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P2_Size_e
   * Referenced by: '<S6>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.7,                                 /* Expression: b_den
                                        * Referenced by: '<S6>/Dct2lowpass4'
                                        */

  /*  Computed Parameter: Dct2lowpass4_P3_Size_f
   * Referenced by: '<S6>/Dct2lowpass4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S6>/Dct2lowpass4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S3>/S-Function'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
};
