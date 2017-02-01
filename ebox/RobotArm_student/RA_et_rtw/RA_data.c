/*
 * RA_data.c
 *
 * Code generation for model "RA.mdl".
 *
 * Model version              : 1.899
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Thu Mar 17 11:00:15 2016
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
Parameters_RA RA_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S5>/Gain'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<S1>/Reference R'
                                        */
  20.0,                                /* Expression: 20
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S1>/Reference X'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S4>/Gain'
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
