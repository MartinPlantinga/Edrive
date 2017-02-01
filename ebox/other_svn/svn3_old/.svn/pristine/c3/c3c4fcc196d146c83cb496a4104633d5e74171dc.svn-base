/*
 * printer_supervisor01_sf_data.c
 *
 * Code generation for model "printer_supervisor01_sf.mdl".
 *
 * Model version              : 1.10
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Tue Oct  2 10:09:03 2012
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "printer_supervisor01_sf.h"
#include "printer_supervisor01_sf_private.h"

/* Block parameters (auto storage) */
Parameters_printer_supervisor01 printer_supervisor01_DefaultParameters = {
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S3>/Homing Running Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/trialTime'
                                        */
  0.001,                               /* Expression: 1/1000
                                        * Referenced by: '<S4>/Gain'
                                        */

  /*  Computed Parameter: ec_Ebox_P1_Size
   * Referenced by: '<S5>/ec_Ebox'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: link_id
                                        * Referenced by: '<S5>/ec_Ebox'
                                        */
  4.2333333333333337E-5,               /* Expression: 1/(600*100/2.54)
                                        * Referenced by: '<S2>/Counts to Meter'
                                        */
  23622.047244094487,                  /* Expression: (600*100/2.54)
                                        * Referenced by: '<S1>/Meter to counts'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  0.00048828125,                       /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  0.00048828125,                       /* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                        * Referenced by: '<S7>/Discrete-Time Integrator'
                                        */
  66.0,                                /* Expression: 66
                                        * Referenced by: '<S6>/Gain1'
                                        */

  /*  Computed Parameter: Dctintegrator2_P1_Size
   * Referenced by: '<S6>/Dctintegrator2'
   */
  { 1.0, 2.0 },

  /*  Expression: [f_num 0.001]
   * Referenced by: '<S6>/Dctintegrator2'
   */
  { 2.0, 0.001 },

  /*  Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S6>/Dctintegrator3'
   */
  { 1.0, 2.0 },

  /*  Expression: [f_num 0.001]
   * Referenced by: '<S6>/Dctintegrator3'
   */
  { 0.1, 0.001 },

  /*  Computed Parameter: Dctleadlag4_P1_Size
   * Referenced by: '<S6>/Dctleadlag4'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_num f_den 0.001]
   * Referenced by: '<S6>/Dctleadlag4'
   */
  { 1.6667, 20.0, 0.001 },

  /*  Computed Parameter: Dct2lowpass5_P1_Size
   * Referenced by: '<S6>/Dct2lowpass5'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S6>/Dct2lowpass5'
   */
  { 30.0, 0.7, 0.001 },
  8.0,                                 /* Expression: 8
                                        * Referenced by: '<S9>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd2_P1_Size
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S9>/Dctpd2'
   */
  { 40.0, 1.0, 0.001 },

  /*  Computed Parameter: Dct2lowpass3_P1_Size
   * Referenced by: '<S9>/Dct2lowpass3'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S9>/Dct2lowpass3'
   */
  { 40.0, 0.7, 0.001 },
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S2>/Saturation'
                                        */
  -2.5,                                /* Expression: -2.5
                                        * Referenced by: '<S2>/Saturation'
                                        */

  /*  Computed Parameter: ResetEncoder_P1_Size
   * Referenced by: '<S3>/Reset Encoder'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: link_id
                                        * Referenced by: '<S3>/Reset Encoder'
                                        */
  4.8828125E-5,                        /* Computed Parameter: LimitSpeed_RisingLim
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  -4.8828125E-5,                       /* Computed Parameter: LimitSpeed_FallingLim
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  2048.0,                              /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S10>/TSamp'
                                        */
  0.0,                                 /* Expression: ICPrevScaledInput
                                        * Referenced by: '<S10>/UD'
                                        */
  0.000244140625,                      /* Computed Parameter: LimitAcceleration_RisingLim
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  -0.000244140625,                     /* Computed Parameter: LimitAcceleration_FallingLim
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S13>/Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S12>/FixPt Constant'
                                        */
  0U,                                  /* Computed Parameter: Output_X0
                                        * Referenced by: '<S11>/Output'
                                        */
  4294967295U                          /* Computed Parameter: FixPtSwitch_Threshold
                                        * Referenced by: '<S13>/FixPt Switch'
                                        */
};
