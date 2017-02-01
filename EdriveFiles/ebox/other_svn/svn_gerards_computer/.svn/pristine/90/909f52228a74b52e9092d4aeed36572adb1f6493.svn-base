/*
 * printer_supervisor01_sf.h
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
#ifndef RTW_HEADER_printer_supervisor01_sf_h_
#define RTW_HEADER_printer_supervisor01_sf_h_
#ifndef printer_supervisor01_sf_COMMON_INCLUDES_
# define printer_supervisor01_sf_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>
#define S_FUNCTION_NAME                printer_supervisor01_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* printer_supervisor01_sf_COMMON_INCLUDES_ */

#include "printer_supervisor01_sf_types.h"

/* Block signals (auto storage) */
typedef struct {
  real_T ec_Ebox_o1[2];                /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o3[8];                /* '<S5>/ec_Ebox' */
  real_T Constant;                     /* '<S2>/Constant' */
  real_T Constant1;                    /* '<S7>/Constant1' */
  real_T Gain1;                        /* '<S6>/Gain1' */
  real_T Dctintegrator2;               /* '<S6>/Dctintegrator2' */
  real_T Dctintegrator3;               /* '<S6>/Dctintegrator3' */
  real_T Dctleadlag4;                  /* '<S6>/Dctleadlag4' */
  real_T Dct2lowpass5;                 /* '<S6>/Dct2lowpass5' */
  real_T Gain1_b;                      /* '<S9>/Gain1' */
  real_T Dctpd2;                       /* '<S9>/Dctpd2' */
  real_T Dct2lowpass3;                 /* '<S9>/Dct2lowpass3' */
  real_T Saturation;                   /* '<S2>/Saturation' */
  real_T TSamp;                        /* '<S10>/TSamp' */
  real_T LimitAcceleration;            /* '<S7>/Limit Acceleration' */
  real_T Gain;                         /* '<S4>/Gain' */
  real_T jogSpeed;                     /* '<S3>/Supervisor' */
  real_T toPoint;                      /* '<S3>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S3>/Supervisor' */
  real_T resetEnc;                     /* '<S3>/Supervisor' */
  real_T homingBusy;                   /* '<S3>/Supervisor' */
  real_T airBagEnabled;                /* '<S3>/Supervisor' */
  real_T airBagRef;                    /* '<S3>/Supervisor' */
  real_T controlEnabled;               /* '<S3>/Supervisor' */
  uint32_T FixPtSwitch;                /* '<S13>/FixPt Switch' */
  boolean_T LogicalOperator3;          /* '<S3>/Logical Operator3' */
} BlockIO_printer_supervisor01;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *motor;                       /* '<Root>/motor [-]' */
} ExternalUPtrs_printer_supervisor01;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T *times;                       /* '<Root>/time [s]' */
  boolean_T *runningstatus;            /* '<Root>/running status' */
  boolean_T *airbagstatus;             /* '<Root>/airbag status' */
  real_T *CarPoscounts;                /* '<Root>/CarPos [counts]' */
} ExternalOutputs_printer_supervisor01;

/* Parameters (auto storage) */
struct Parameters_printer_supervisor01_ {
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S3>/Homing Running Switch'
                                        */
  real_T trialTime_Y0;                 /* Expression: 0
                                        * Referenced by: '<S4>/trialTime'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T ec_Ebox_P1_Size[2];           /* Computed Parameter: ec_Ebox_P1_Size
                                        * Referenced by: '<S5>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1;                   /* Expression: link_id
                                        * Referenced by: '<S5>/ec_Ebox'
                                        */
  real_T CountstoMeter_Gain;           /* Expression: 1/(600*100/2.54)
                                        * Referenced by: '<S2>/Counts to Meter'
                                        */
  real_T Metertocounts_Gain;           /* Expression: (600*100/2.54)
                                        * Referenced by: '<S1>/Meter to counts'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S3>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_m;/* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                          * Referenced by: '<S7>/Discrete-Time Integrator'
                                          */
  real_T Gain1_Gain;                   /* Expression: 66
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Dctintegrator2_P1_Size[2];    /* Computed Parameter: Dctintegrator2_P1_Size
                                        * Referenced by: '<S6>/Dctintegrator2'
                                        */
  real_T Dctintegrator2_P1[2];         /* Expression: [f_num 0.001]
                                        * Referenced by: '<S6>/Dctintegrator2'
                                        */
  real_T Dctintegrator3_P1_Size[2];    /* Computed Parameter: Dctintegrator3_P1_Size
                                        * Referenced by: '<S6>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P1[2];         /* Expression: [f_num 0.001]
                                        * Referenced by: '<S6>/Dctintegrator3'
                                        */
  real_T Dctleadlag4_P1_Size[2];       /* Computed Parameter: Dctleadlag4_P1_Size
                                        * Referenced by: '<S6>/Dctleadlag4'
                                        */
  real_T Dctleadlag4_P1[3];            /* Expression: [f_num f_den 0.001]
                                        * Referenced by: '<S6>/Dctleadlag4'
                                        */
  real_T Dct2lowpass5_P1_Size[2];      /* Computed Parameter: Dct2lowpass5_P1_Size
                                        * Referenced by: '<S6>/Dct2lowpass5'
                                        */
  real_T Dct2lowpass5_P1[3];           /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S6>/Dct2lowpass5'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 8
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Dctpd2_P1_Size[2];            /* Computed Parameter: Dctpd2_P1_Size
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P1[3];                 /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dct2lowpass3_P1_Size[2];      /* Computed Parameter: Dct2lowpass3_P1_Size
                                        * Referenced by: '<S9>/Dct2lowpass3'
                                        */
  real_T Dct2lowpass3_P1[3];           /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S9>/Dct2lowpass3'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 2.5
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -2.5
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T ResetEncoder_P1_Size[2];      /* Computed Parameter: ResetEncoder_P1_Size
                                        * Referenced by: '<S3>/Reset Encoder'
                                        */
  real_T ResetEncoder_P1;              /* Expression: link_id
                                        * Referenced by: '<S3>/Reset Encoder'
                                        */
  real_T LimitSpeed_RisingLim;         /* Computed Parameter: LimitSpeed_RisingLim
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Computed Parameter: LimitSpeed_FallingLim
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S7>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S10>/TSamp'
                                        */
  real_T UD_X0;                        /* Expression: ICPrevScaledInput
                                        * Referenced by: '<S10>/UD'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Computed Parameter: LimitAcceleration_RisingLim
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Computed Parameter: LimitAcceleration_FallingLim
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S7>/Limit Acceleration'
                                        */
  uint32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S13>/Constant'
                                        */
  uint32_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S12>/FixPt Constant'
                                        */
  uint32_T Output_X0;                  /* Computed Parameter: Output_X0
                                        * Referenced by: '<S11>/Output'
                                        */
  uint32_T FixPtSwitch_Threshold;      /* Computed Parameter: FixPtSwitch_Threshold
                                        * Referenced by: '<S13>/FixPt Switch'
                                        */
};

extern Parameters_printer_supervisor01 printer_supervisor01_DefaultParameters;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'printer_supervisor01_sf'
 * '<S1>'   : 'printer_supervisor01_sf/Printer'
 * '<S2>'   : 'printer_supervisor01_sf/Printer/E//BOX I-O'
 * '<S3>'   : 'printer_supervisor01_sf/Printer/Supervisory Controller'
 * '<S4>'   : 'printer_supervisor01_sf/Printer/trialTime'
 * '<S5>'   : 'printer_supervisor01_sf/Printer/E//BOX I-O/E-box'
 * '<S6>'   : 'printer_supervisor01_sf/Printer/Supervisory Controller/Homing controller'
 * '<S7>'   : 'printer_supervisor01_sf/Printer/Supervisory Controller/Point-to-point trajectory'
 * '<S8>'   : 'printer_supervisor01_sf/Printer/Supervisory Controller/Supervisor'
 * '<S9>'   : 'printer_supervisor01_sf/Printer/Supervisory Controller/airbagController'
 * '<S10>'  : 'printer_supervisor01_sf/Printer/Supervisory Controller/Point-to-point trajectory/Discrete Derivative'
 * '<S11>'  : 'printer_supervisor01_sf/Printer/trialTime/Counter Free-Running'
 * '<S12>'  : 'printer_supervisor01_sf/Printer/trialTime/Counter Free-Running/Increment Real World'
 * '<S13>'  : 'printer_supervisor01_sf/Printer/trialTime/Counter Free-Running/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_printer_supervisor01_sf_h_ */
