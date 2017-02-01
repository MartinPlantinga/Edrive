/*
 * chirpfrf_data.c
 *
 * Code generation for model "chirpfrf.mdl".
 *
 * Model version              : 1.907
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Nov 21 15:46:52 2015
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "chirpfrf.h"
#include "chirpfrf_private.h"

/* Block parameters (auto storage) */
Parameters_chirpfrf chirpfrf_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  5.6548667764616276,                  /* Expression: 2*pi*(f2-f1)
                                        * Referenced by: '<S3>/deltaFreq'
                                        */
  10.0,                                /* Expression: T
                                        * Referenced by: '<S3>/targetTime'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.62831853071795862,                 /* Expression: 2*pi*f1
                                        * Referenced by: '<S3>/initialFreq'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Gain'
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
