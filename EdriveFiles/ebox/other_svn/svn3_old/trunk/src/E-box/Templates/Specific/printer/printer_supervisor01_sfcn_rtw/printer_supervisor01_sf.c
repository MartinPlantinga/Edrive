/*
 * printer_supervisor01_sf.c
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
#include <math.h>
#include "printer_supervisor01_sf.h"
#include "printer_supervisor01_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S3>/Supervisor' */
#define printer_s_IN_EnableRunAndSafety (5U)
#define printer_super_IN_DisableControl (3U)
#define printer_super_IN_DisableOutputs (4U)
#define printer_supervis_IN_AirbagRight (2U)
#define printer_superviso_IN_AirbagLeft (1U)
#define printer_supervisor01_IN_Homing (6U)
#define printer_supervisor0_IN_MovetoX0 (7U)
#define printer_supervisor0_IN_ResetEnc (8U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *printer_supervisor01_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* Initial conditions for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  /* InitializeConditions for Chart: '<S3>/Supervisor' */
  ((uint8_T *)ssGetDWork(S, 16))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 17))[0] = 0U;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->jogSpeed = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->toPoint = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homeControllerEnabled
    = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->resetEnc = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy = 1.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagEnabled = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagRef = 0.0;
  ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->controlEnabled = 1.0;
  ((uint32_T *)ssGetDWork(S, 12))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 13))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 14))[0] = 0U;

  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 0))[0] = ((Parameters_printer_supervisor01 *)
    ssGetLocalDefaultParam(S))->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 1))[0] = ((BlockIO_printer_supervisor01 *)
    ssGetLocalBlockIO(S))->Constant1;

  /* InitializeConditions for RateLimiter: '<S7>/Limit Speed' */
  ((real_T *)ssGetDWork(S, 3))[0] = ((Parameters_printer_supervisor01 *)
    ssGetLocalDefaultParam(S))->LimitSpeed_IC;

  /* InitializeConditions for UnitDelay: '<S10>/UD' */
  ((real_T *)ssGetDWork(S, 2))[0] = ((Parameters_printer_supervisor01 *)
    ssGetLocalDefaultParam(S))->UD_X0;

  /* InitializeConditions for RateLimiter: '<S7>/Limit Acceleration' */
  ((real_T *)ssGetDWork(S, 4))[0] = ((Parameters_printer_supervisor01 *)
    ssGetLocalDefaultParam(S))->LimitAcceleration_IC;
}

/* Enable for root system: '<Root>' */
#define RTW_GENERATED_ENABLE

static void mdlEnable(SimStruct *S)
{
  /* Enable for Chart: '<S3>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 12))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.00048828125+0.5)));
  ((uint32_T *)ssGetDWork(S, 14))[0] = ((uint32_T *)ssGetDWork(S, 12))[0];
}

/* Disable for root system: '<Root>' */
#define RTW_GENERATED_DISABLE

static void mdlDisable(SimStruct *S)
{
  /* Disable for Chart: '<S3>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 12))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.00048828125+0.5)));
  ((uint32_T *)ssGetDWork(S, 13))[0] = ((uint32_T *)ssGetDWork(S, 12))[0] -
    ((uint32_T *)ssGetDWork(S, 14))[0];
  ((uint32_T *)ssGetDWork(S, 14))[0] = ((uint32_T *)ssGetDWork(S, 12))[0];
  if ((uint32_T)((uint16_T *)ssGetDWork(S, 15))[0] + ((uint32_T *)ssGetDWork(S,
        13))[0] <= 4095U) {
    ((uint16_T *)ssGetDWork(S, 15))[0] = (uint16_T)((uint32_T)((uint16_T *)
      ssGetDWork(S, 15))[0] + ((uint32_T *)ssGetDWork(S, 13))[0]);
  } else {
    ((uint16_T *)ssGetDWork(S, 15))[0] = 4095U;
  }

  /* End of Disable for Chart: '<S3>/Supervisor' */

  /* Disable for Enabled SubSystem: '<S1>/trialTime' */
  ((boolean_T *)ssGetDWork(S, 18))[0] = FALSE;

  /* End of Disable for SubSystem: '<S1>/trialTime' */
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Check for invalid switching between solver types */
  if (ssIsVariableStepSolver(S)) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "a solver type of variable-step "
                     "because this S-Function was created from a model with "
                     "solver type of fixed-step and it has continuous time blocks. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

  if (fabs(ssGetFixedStepSize(S) - 0.00048828125) > mxGetEps()*100*0.00048828125)
  {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "the current fixed step size "
                     "because this S-Function was created from a model with "
                     "a fixed step size of 0.00048828125 and had both "
                     "continuous blocks and discrete blocks running at this rate. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

#  endif

  printer_supervisor01_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    /* Start for Enabled SubSystem: '<S1>/trialTime' */
    ((boolean_T *)ssGetDWork(S, 18))[0] = FALSE;

    /* InitializeConditions for UnitDelay: '<S11>/Output' */
    ((uint32_T *)ssGetDWork(S, 11))[0] = ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->Output_X0;

    /* VirtualOutportStart for Outport: '<S4>/trialTime' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Gain =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->trialTime_Y0;

    /* End of Start for SubSystem: '<S1>/trialTime' */

    /* Start for Outport: '<Root>/time [s]' */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = ((BlockIO_printer_supervisor01 *)
      ssGetLocalBlockIO(S))->Gain;

    /* Start for Outport: '<Root>/running status' */
    ((boolean_T *)ssGetOutputPortSignal(S, 1))[0] =
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LogicalOperator3;

    /* Start for Constant: '<S2>/Constant' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Constant =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Constant_Value;

    /* Start for Constant: '<S7>/Constant1' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Constant1 =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Constant1_Value;

    /* Level2 S-Function Block: '<S6>/Dctintegrator2' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 1);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dctleadlag4' (dleadlag) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dct2lowpass5' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S9>/Dct2lowpass3' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  real_T rateLimiterRate;
  real_T rtb_CountstoMeter;
  boolean_T rtb_LogicalOperator1;
  uint32_T rtb_FixPtSum1;
  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 0);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Gain: '<S2>/Counts to Meter' */
    rtb_CountstoMeter = ((Parameters_printer_supervisor01 *)
                         ssGetLocalDefaultParam(S))->CountstoMeter_Gain *
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->ec_Ebox_o2[0];

    /* Chart: '<S3>/Supervisor' */
    ((uint32_T *)ssGetDWork(S, 12))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
      0.00048828125+0.5)));
    ((uint32_T *)ssGetDWork(S, 13))[0] = ((uint32_T *)ssGetDWork(S, 12))[0] -
      ((uint32_T *)ssGetDWork(S, 14))[0];
    ((uint32_T *)ssGetDWork(S, 14))[0] = ((uint32_T *)ssGetDWork(S, 12))[0];
    if ((uint32_T)((uint16_T *)ssGetDWork(S, 15))[0] + ((uint32_T *)ssGetDWork(S,
          13))[0] <= 4095U) {
      ((uint16_T *)ssGetDWork(S, 15))[0] = (uint16_T)((uint32_T)((uint16_T *)
        ssGetDWork(S, 15))[0] + ((uint32_T *)ssGetDWork(S, 13))[0]);
    } else {
      ((uint16_T *)ssGetDWork(S, 15))[0] = 4095U;
    }

    /* Gateway: Printer/Supervisory Controller/Supervisor */
    /* During: Printer/Supervisory Controller/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 16))[0] == 0U) {
      /* Entry: Printer/Supervisory Controller/Supervisor */
      ((uint8_T *)ssGetDWork(S, 16))[0] = 1U;

      /* Transition: '<S8>:7' */
      ((uint8_T *)ssGetDWork(S, 17))[0] = printer_supervisor01_IN_Homing;

      /* Entry 'Homing': '<S8>:6' */
      /* Set jog speed and homing state */
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->toPoint = 0.0;
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy = 1.0;
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->jogSpeed = -0.2;
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
        ->homeControllerEnabled = 1.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 17))[0]) {
       case printer_superviso_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S8>:71' */
        if (((uint16_T *)ssGetDWork(S, 15))[0] >= 2048U) {
          /* Transition: '<S8>:79' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_super_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S8>:77' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
            ->controlEnabled = 0.0;
        }
        break;

       case printer_supervis_IN_AirbagRight:
        /* During 'AirbagRight': '<S8>:74' */
        if (((uint16_T *)ssGetDWork(S, 15))[0] >= 2048U) {
          /* Transition: '<S8>:78' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_super_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S8>:77' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
            ->controlEnabled = 0.0;
        }
        break;

       case printer_super_IN_DisableControl:
        /* During 'DisableControl': '<S8>:58' */
        /* Allow settling of belt */
        if (((uint16_T *)ssGetDWork(S, 15))[0] >= 1024U) {
          /* Transition: '<S8>:62' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_supervisor0_IN_ResetEnc;
          ((uint16_T *)ssGetDWork(S, 15))[0] = 0U;

          /* Entry 'ResetEnc': '<S8>:61' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->resetEnc =
            1.0;
        }
        break;

       case printer_super_IN_DisableOutputs:
        break;

       case printer_s_IN_EnableRunAndSafety:
        /* During 'EnableRunAndSafety': '<S8>:65' */
        if (rtb_CountstoMeter < -0.01) {
          /* Transition: '<S8>:72' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_superviso_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 15))[0] = 0U;

          /* Entry 'AirbagLeft': '<S8>:71' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagEnabled
            = 1.0;
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagRef =
            -0.01;
        } else {
          if (rtb_CountstoMeter > 0.35) {
            /* Transition: '<S8>:75' */
            ((uint8_T *)ssGetDWork(S, 17))[0] = printer_supervis_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 15))[0] = 0U;

            /* Entry 'AirbagRight': '<S8>:74' */
            ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
              ->airBagEnabled = 1.0;
            ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagRef =
              0.35;
          }
        }
        break;

       case printer_supervisor01_IN_Homing:
        /* During 'Homing': '<S8>:6' */
        /* Transition if homeswitch becomes high */
        if (((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->ec_Ebox_o3
            [1] != 0.0) {
          /* Transition: '<S8>:10' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_supervisor0_IN_MovetoX0;
          ((uint16_T *)ssGetDWork(S, 15))[0] = 0U;

          /* Entry 'MovetoX0': '<S8>:19' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->jogSpeed =
            0.0;
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->toPoint =
            0.04;
        }
        break;

       case printer_supervisor0_IN_MovetoX0:
        /* During 'MovetoX0': '<S8>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 15))[0] >= 1024U) {
          /* Transition: '<S8>:59' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_super_IN_DisableControl;
          ((uint16_T *)ssGetDWork(S, 15))[0] = 0U;

          /* Entry 'DisableControl': '<S8>:58' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
            ->homeControllerEnabled = 0.0;
        }
        break;

       case printer_supervisor0_IN_ResetEnc:
        /* During 'ResetEnc': '<S8>:61' */
        if (((uint16_T *)ssGetDWork(S, 15))[0] >= 205U) {
          /* Transition: '<S8>:66' */
          ((uint8_T *)ssGetDWork(S, 17))[0] = printer_s_IN_EnableRunAndSafety;

          /* Entry 'EnableRunAndSafety': '<S8>:65' */
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->resetEnc =
            0.0;
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy =
            0.0;
        }
        break;

       default:
        /* Transition: '<S8>:7' */
        ((uint8_T *)ssGetDWork(S, 17))[0] = printer_supervisor01_IN_Homing;

        /* Entry 'Homing': '<S8>:6' */
        /* Set jog speed and homing state */
        ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->toPoint = 0.0;
        ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy =
          1.0;
        ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->jogSpeed = -0.2;
        ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
          ->homeControllerEnabled = 1.0;
        break;
      }
    }

    /* End of Chart: '<S3>/Supervisor' */

    /* Logic: '<S3>/Logical Operator3' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LogicalOperator3 =
      !(((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy !=
        0.0);

    /* Outputs for Enabled SubSystem: '<S1>/trialTime' incorporates:
     *  EnablePort: '<S4>/Enable'
     */
    if (ssIsSampleHit(S, 1, tid)) {
      if (((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
          ->LogicalOperator3) {
        if (!((boolean_T *)ssGetDWork(S, 18))[0]) {
          /* InitializeConditions for UnitDelay: '<S11>/Output' */
          ((uint32_T *)ssGetDWork(S, 11))[0] = ((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(S))->Output_X0;
          ((boolean_T *)ssGetDWork(S, 18))[0] = TRUE;
        }

        /* Sum: '<S12>/FixPt Sum1' incorporates:
         *  Constant: '<S12>/FixPt Constant'
         *  UnitDelay: '<S11>/Output'
         */
        rtb_FixPtSum1 = ((uint32_T *)ssGetDWork(S, 11))[0] +
          ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
          ->FixPtConstant_Value;

        /* Switch: '<S13>/FixPt Switch' incorporates:
         *  Constant: '<S13>/Constant'
         */
        if (rtb_FixPtSum1 > ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(S))->FixPtSwitch_Threshold)
        {
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->FixPtSwitch =
            ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
            ->Constant_Value_o;
        } else {
          ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->FixPtSwitch =
            rtb_FixPtSum1;
        }

        /* End of Switch: '<S13>/FixPt Switch' */

        /* Gain: '<S4>/Gain' incorporates:
         *  DataTypeConversion: '<S4>/Data Type Conversion'
         *  UnitDelay: '<S11>/Output'
         */
        ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Gain =
          ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
          ->Gain_Gain * (real_T)((uint32_T *)ssGetDWork(S, 11))[0];

        /* Stop: '<S4>/Stop Simulation' */
        if (0.0 != 0.0) {
          ssSetStopRequested(S, 1);
        }

        /* End of Stop: '<S4>/Stop Simulation' */
      } else {
        if (((boolean_T *)ssGetDWork(S, 18))[0]) {
          ((boolean_T *)ssGetDWork(S, 18))[0] = FALSE;
        }
      }
    }

    /* End of Outputs for SubSystem: '<S1>/trialTime' */

    /* Outport: '<Root>/time [s]' */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = ((BlockIO_printer_supervisor01 *)
      ssGetLocalBlockIO(S))->Gain;

    /* Outport: '<Root>/running status' */
    ((boolean_T *)ssGetOutputPortSignal(S, 1))[0] =
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LogicalOperator3;

    /* Outport: '<Root>/airbag status' incorporates:
     *  Logic: '<S3>/Logical Operator2'
     */
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[0] =
      !(((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->controlEnabled
        != 0.0);

    /* Outport: '<Root>/CarPos [counts]' incorporates:
     *  Gain: '<S1>/Meter to counts'
     */
    ((real_T *)ssGetOutputPortSignal(S, 3))[0] =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Metertocounts_Gain * rtb_CountstoMeter;

    /* Constant: '<S2>/Constant' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Constant =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Constant_Value;

    /* Constant: '<S7>/Constant1' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Constant1 =
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Constant1_Value;

    /* Gain: '<S6>/Gain1' incorporates:
     *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
     *  Sum: '<S3>/Sum'
     *  Sum: '<S3>/Sum2'
     */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Gain1 = ((((real_T *)
      ssGetDWork(S, 0))[0] + ((real_T *)ssGetDWork(S, 1))[0]) -
      rtb_CountstoMeter) * ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->Gain1_Gain;

    /* Level2 S-Function Block: '<S6>/Dctintegrator2' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 1);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dctleadlag4' (dleadlag) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S6>/Dct2lowpass5' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Logic: '<S3>/Logical Operator1' */
    rtb_LogicalOperator1 = !(((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO
                              (S))->airBagEnabled != 0.0);

    /* Gain: '<S9>/Gain1' incorporates:
     *  Sum: '<S3>/Sum1'
     */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Gain1_b =
      (((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->airBagRef -
       rtb_CountstoMeter) * ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->Gain1_Gain_k;

    /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S9>/Dct2lowpass3' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Switch: '<S3>/AirbagSwitch' */
    if (rtb_LogicalOperator1) {
      /* Switch: '<S3>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/motor [-]'
       *  Product: '<S3>/Product'
       */
      if (((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->homingBusy >=
          ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
          ->HomingRunningSwitch_Threshold) {
        rtb_CountstoMeter = ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO
                             (S))->Dct2lowpass5 * ((BlockIO_printer_supervisor01
          *) ssGetLocalBlockIO(S))->homeControllerEnabled;
      } else {
        rtb_CountstoMeter = (*(((const real_T **)ssGetInputPortSignalPtrs(S, 0))
          [0]));
      }

      /* End of Switch: '<S3>/Homing Running Switch' */
    } else {
      rtb_CountstoMeter = ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
        ->Dct2lowpass3;
    }

    /* End of Switch: '<S3>/AirbagSwitch' */

    /* Product: '<S3>/Product1' */
    rtb_CountstoMeter *= ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S)
      )->controlEnabled;

    /* Saturate: '<S2>/Saturation' */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->Saturation =
      rtb_CountstoMeter >= ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->Saturation_UpperSat ?
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Saturation_UpperSat : rtb_CountstoMeter <=
      ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
      ->Saturation_LowerSat ? ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->Saturation_LowerSat : rtb_CountstoMeter;
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S3>/Reset Encoder' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Sum: '<S7>/Sum' */
    rtb_CountstoMeter = ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S)
      )->toPoint + ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))
      ->Constant1;

    /* RateLimiter: '<S7>/Limit Speed' */
    rateLimiterRate = rtb_CountstoMeter - ((real_T *)ssGetDWork(S, 3))[0];
    if (rateLimiterRate > ((Parameters_printer_supervisor01 *)
                           ssGetLocalDefaultParam(S))->LimitSpeed_RisingLim) {
      rtb_CountstoMeter = ((real_T *)ssGetDWork(S, 3))[0] +
        ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
        ->LimitSpeed_RisingLim;
    } else {
      if (rateLimiterRate < ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(S))->LimitSpeed_FallingLim)
      {
        rtb_CountstoMeter = ((real_T *)ssGetDWork(S, 3))[0] +
          ((Parameters_printer_supervisor01 *) ssGetLocalDefaultParam(S))
          ->LimitSpeed_FallingLim;
      }
    }

    ((real_T *)ssGetDWork(S, 3))[0] = rtb_CountstoMeter;

    /* End of RateLimiter: '<S7>/Limit Speed' */

    /* SampleTimeMath: '<S10>/TSamp'
     *
     * About '<S10>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->TSamp =
      rtb_CountstoMeter * ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->TSamp_WtEt;

    /* Sum: '<S10>/Diff' incorporates:
     *  UnitDelay: '<S10>/UD'
     */
    rtb_CountstoMeter = ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S)
      )->TSamp - ((real_T *)ssGetDWork(S, 2))[0];

    /* RateLimiter: '<S7>/Limit Acceleration' */
    rateLimiterRate = rtb_CountstoMeter - ((real_T *)ssGetDWork(S, 4))[0];
    if (rateLimiterRate > ((Parameters_printer_supervisor01 *)
                           ssGetLocalDefaultParam(S))
        ->LimitAcceleration_RisingLim) {
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LimitAcceleration
        = ((real_T *)ssGetDWork(S, 4))[0] + ((Parameters_printer_supervisor01 *)
        ssGetLocalDefaultParam(S))->LimitAcceleration_RisingLim;
    } else if (rateLimiterRate < ((Parameters_printer_supervisor01 *)
                ssGetLocalDefaultParam(S))->LimitAcceleration_FallingLim) {
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LimitAcceleration
        = ((real_T *)ssGetDWork(S, 4))[0] + ((Parameters_printer_supervisor01 *)
        ssGetLocalDefaultParam(S))->LimitAcceleration_FallingLim;
    } else {
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LimitAcceleration
        = rtb_CountstoMeter;
    }

    ((real_T *)ssGetDWork(S, 4))[0] = ((BlockIO_printer_supervisor01 *)
      ssGetLocalBlockIO(S))->LimitAcceleration;

    /* End of RateLimiter: '<S7>/Limit Acceleration' */
  }
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  /* Update for Enabled SubSystem: '<S1>/trialTime' incorporates:
   *  Update for EnablePort: '<S4>/Enable'
   */
  if (ssIsSampleHit(S, 1, tid)) {
    if (((boolean_T *)ssGetDWork(S, 18))[0]) {
      /* Update for UnitDelay: '<S11>/Output' */
      ((uint32_T *)ssGetDWork(S, 11))[0] = ((BlockIO_printer_supervisor01 *)
        ssGetLocalBlockIO(S))->FixPtSwitch;
    }

    /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 0))[0] = ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->DiscreteTimeIntegrator_gainval *
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->jogSpeed +
      ((real_T *)ssGetDWork(S, 0))[0];

    /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 1))[0] = ((Parameters_printer_supervisor01 *)
      ssGetLocalDefaultParam(S))->DiscreteTimeIntegrator_gainva_m *
      ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(S))->LimitAcceleration
      + ((real_T *)ssGetDWork(S, 1))[0];

    /* Update for UnitDelay: '<S10>/UD' */
    ((real_T *)ssGetDWork(S, 2))[0] = ((BlockIO_printer_supervisor01 *)
      ssGetLocalBlockIO(S))->TSamp;
  }

  /* End of Update for SubSystem: '<S1>/trialTime' */
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = ssGetSFunction(S, 0);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/Dctintegrator2' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 1);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 2);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/Dctleadlag4' (dleadlag) */
  {
    SimStruct *rts = ssGetSFunction(S, 3);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/Dct2lowpass5' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 4);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 5);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/Dct2lowpass3' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 6);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S3>/Reset Encoder' (ec_EboxResetEnc) */
  {
    SimStruct *rts = ssGetSFunction(S, 7);
    sfcnTerminate(rts);
  }

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  /* child S-function code */
  if (_ssGetSFunctions(S) ) {
    /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 0);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 1);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 2);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    /* Level2 S-Function Block: '<S6>/Dctintegrator2' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 1);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S6>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S6>/Dctleadlag4' (dleadlag) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S6>/Dct2lowpass5' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S9>/Dct2lowpass3' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S3>/Reset Encoder' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    rt_FREE(ssGetSFunction(S, 0))
      rt_FREE(_ssGetSFunctions(S));
  }

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "printer_supervisor01_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 2);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 4))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.00048828125);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* outport number: 1 */
  if (!ssSetOutputPortVectorDimension(S, 1, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 1, SS_BOOLEAN);
  }

  ssSetOutputPortSampleTime(S, 1, 0.00048828125);
  ssSetOutputPortOffsetTime(S, 1, 0.0);
  ssSetOutputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);

  /* outport number: 2 */
  if (!ssSetOutputPortVectorDimension(S, 2, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 2, SS_BOOLEAN);
  }

  ssSetOutputPortSampleTime(S, 2, 0.00048828125);
  ssSetOutputPortOffsetTime(S, 2, 0.0);
  ssSetOutputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);

  /* outport number: 3 */
  if (!ssSetOutputPortVectorDimension(S, 3, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 3, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 3, 0.00048828125);
  ssSetOutputPortOffsetTime(S, 3, 0.0);
  ssSetOutputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 1))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.00048828125);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 19)) {
    return;
  }

  /* '<S3>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 1);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* '<S7>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 1);
  ssSetDWorkUsedAsDState(S, 1, 1);

  /* '<S10>/UD': DSTATE */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 1);
  ssSetDWorkUsedAsDState(S, 2, 1);

  /* '<S7>/Limit Speed': PrevY */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 1);

  /* '<S7>/Limit Acceleration': PrevY */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 1);

  /* '<S6>/Dctintegrator2': RWORK */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 2);

  /* '<S6>/Dctintegrator3': RWORK */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 2);

  /* '<S6>/Dctleadlag4': RWORK */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 2);

  /* '<S6>/Dct2lowpass5': RWORK */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 4);

  /* '<S9>/Dctpd2': RWORK */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 2);

  /* '<S9>/Dct2lowpass3': RWORK */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 4);

  /* '<S11>/Output': DSTATE */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 1);
  ssSetDWorkDataType(S, 11, SS_UINT32);
  ssSetDWorkUsedAsDState(S, 11, 1);

  /* '<S3>/Supervisor': DWORK4 */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);
  ssSetDWorkDataType(S, 12, SS_UINT32);

  /* '<S3>/Supervisor': DWORK5 */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);
  ssSetDWorkDataType(S, 13, SS_UINT32);

  /* '<S3>/Supervisor': DWORK6 */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 1);
  ssSetDWorkDataType(S, 14, SS_UINT32);

  /* '<S3>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);
  ssSetDWorkDataType(S, 15, SS_UINT16);

  /* '<S3>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 16, "DWORK16");
  ssSetDWorkWidth(S, 16, 1);
  ssSetDWorkDataType(S, 16, SS_UINT8);

  /* '<S3>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 1);
  ssSetDWorkDataType(S, 17, SS_UINT8);

  /* '<S1>/trialTime': MODE */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 1);
  ssSetDWorkDataType(S, 18, SS_BOOLEAN);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, false);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.0);
  ssSetSampleTime(S, 1, 0.00048828125);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
  ssSetOffsetTime(S, 1, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               printer_supervisor01_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
