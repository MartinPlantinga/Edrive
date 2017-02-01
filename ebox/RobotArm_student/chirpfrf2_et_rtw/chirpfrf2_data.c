/*
 * chirpfrf2_data.c
 *
 * Code generation for model "chirpfrf2.mdl".
 *
 * Model version              : 1.916
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Nov 28 14:50:34 2015
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "chirpfrf2.h"
#include "chirpfrf2_private.h"

/* Block parameters (auto storage) */
Parameters_chirpfrf2 chirpfrf2_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  10.0,                                /* Expression: Tsweep
                                        * Referenced by: '<S1>/Chirp'
                                        */
  0.0,                                 /* Expression: phase
                                        * Referenced by: '<S1>/Chirp'
                                        */
  10.0,                                /* Expression: t1
                                        * Referenced by: '<S1>/Chirp'
                                        */
  1.0,                                 /* Expression: f0
                                        * Referenced by: '<S1>/Chirp'
                                        */
  20.0,                                /* Expression: f1
                                        * Referenced by: '<S1>/Chirp'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S1>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S1>/Gain'
                                        */
  1.0,                                 /* Expression: 1
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
  1.0,                                 /* Expression: 1
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
