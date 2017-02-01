/*
 * Performancetot_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Performancetot".
 *
 * Model version              : 1.957
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Tue Mar 29 15:40:58 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Performancetot.h"
#include "Performancetot_private.h"

/* Block parameters (auto storage) */
P_Performancetot_T Performancetot_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/offset X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/offset Z'
                                        */
  60.0,                                /* Expression: 60
                                        * Referenced by: '<S3>/GainR'
                                        */

  /*  Computed Parameter: DctintegratorR_P1_Size
   * Referenced by: '<S3>/DctintegratorR'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: f_num
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctintegratorR_P2_Size
   * Referenced by: '<S3>/DctintegratorR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctleadlagR_P1_Size
   * Referenced by: '<S3>/DctleadlagR'
   */
  { 1.0, 1.0 },
  15.0,                                /* Expression: f_num
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P2_Size
   * Referenced by: '<S3>/DctleadlagR'
   */
  { 1.0, 1.0 },
  200.0,                               /* Expression: f_den
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P3_Size
   * Referenced by: '<S3>/DctleadlagR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P1_Size
   * Referenced by: '<S3>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  400.0,                               /* Expression: f_den
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P2_Size
   * Referenced by: '<S3>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.7,                                 /* Expression: b_den
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P3_Size
   * Referenced by: '<S3>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<S4>/GainR'
                                        */

  /*  Computed Parameter: DctintegratorR_P1_Size_f
   * Referenced by: '<S4>/DctintegratorR'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: f_num
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctintegratorR_P2_Size_h
   * Referenced by: '<S4>/DctintegratorR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctleadlagR_P1_Size_g
   * Referenced by: '<S4>/DctleadlagR'
   */
  { 1.0, 1.0 },
  15.0,                                /* Expression: f_num
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P2_Size_e
   * Referenced by: '<S4>/DctleadlagR'
   */
  { 1.0, 1.0 },
  140.0,                               /* Expression: f_den
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P3_Size_l
   * Referenced by: '<S4>/DctleadlagR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P1_Size_n
   * Referenced by: '<S4>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  500.0,                               /* Expression: f_den
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P2_Size_k
   * Referenced by: '<S4>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: b_den
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P3_Size_f
   * Referenced by: '<S4>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  110.0,                               /* Expression: 110
                                        * Referenced by: '<S5>/GainR'
                                        */

  /*  Computed Parameter: DctintegratorR_P1_Size_a
   * Referenced by: '<S5>/DctintegratorR'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: f_num
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctintegratorR_P2_Size_j
   * Referenced by: '<S5>/DctintegratorR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */

  /*  Computed Parameter: DctleadlagR_P1_Size_h
   * Referenced by: '<S5>/DctleadlagR'
   */
  { 1.0, 1.0 },
  23.0,                                /* Expression: f_num
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P2_Size_a
   * Referenced by: '<S5>/DctleadlagR'
   */
  { 1.0, 1.0 },
  300.0,                               /* Expression: f_den
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */

  /*  Computed Parameter: DctleadlagR_P3_Size_b
   * Referenced by: '<S5>/DctleadlagR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P1_Size_i
   * Referenced by: '<S5>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  600.0,                               /* Expression: f_den
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P2_Size_h
   * Referenced by: '<S5>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: b_den
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */

  /*  Computed Parameter: Dct2lowpassR_P3_Size_m
   * Referenced by: '<S5>/Dct2lowpassR'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  0.003,                               /* Expression: 0.003
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S6>/Gain1'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S6>/fc pos'
                                        */
  -0.17,                               /* Expression: -0.17
                                        * Referenced by: '<S6>/fc neg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/speed0'
                                        */
  0.0015,                              /* Expression: 0.0015
                                        * Referenced by: '<S7>/Gain'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S7>/Gain1'
                                        */
  0.15,                                /* Expression: 0.15
                                        * Referenced by: '<S7>/fc pos'
                                        */
  -0.3,                                /* Expression: -0.3
                                        * Referenced by: '<S7>/fc neg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/speed0'
                                        */
  0.002,                               /* Expression: 0.002
                                        * Referenced by: '<S8>/Gain'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S8>/Gain1'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S8>/fc pos'
                                        */
  -0.35,                               /* Expression: -0.35
                                        * Referenced by: '<S8>/fc neg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/speed0'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<S8>/gravitation constant'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S9>/S-Function'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};
