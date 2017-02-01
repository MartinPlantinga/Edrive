/*
 * RA_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RA".
 *
 * Model version              : 1.899
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Wed Mar 23 16:29:19 2016
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
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S1>/Reference R'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S3>/Gain'
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
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Feedforward Z'
                                        */
  -0.4,                                /* Expression: -0.4
                                        * Referenced by: '<S1>/Uniform Random Number'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S1>/Uniform Random Number'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Uniform Random Number'
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
