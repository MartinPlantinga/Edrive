/*
 * calibratie.c
 *
 * Code generation for model "calibratie.mdl".
 *
 * Model version              : 1.948
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Apr  4 15:30:39 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "calibratie.h"
#include "calibratie_private.h"
#include "calibratie_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf
#endif

#include "Robot_sf.h"

const real_T calibratie_RGND = 0.0;    /* real_T ground */

/* Block signals (auto storage) */
BlockIO_calibratie calibratie_B;

/* Block states (auto storage) */
D_Work_calibratie calibratie_DWork;

/* Real-time model */
RT_MODEL_calibratie calibratie_M_;
RT_MODEL_calibratie *const calibratie_M = &calibratie_M_;

/* Model output function */
void calibratie_output(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_Switch1;
  real_T rtb_Gain;
  real_T rtb_Gain_n;
  real_T rtb_Sum;

  /* Reset subsysRan breadcrumbs */
  srClearBC(calibratie_DWork.Controller_SubsysRanBC);

  /* UnitDelay: '<Root>/Unit Delay1' */
  /* RTWBLOCK_START_COMMENT */
  calibratie_B.UnitDelay1[0] = calibratie_DWork.UnitDelay1_DSTATE[0];
  calibratie_B.UnitDelay1[1] = calibratie_DWork.UnitDelay1_DSTATE[1];
  calibratie_B.UnitDelay1[2] = calibratie_DWork.UnitDelay1_DSTATE[2];

  /* UnitDelay: '<Root>/Unit Delay' */
  calibratie_B.UnitDelay = calibratie_DWork.UnitDelay_DSTATE;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnOutputs(rts, 0);
  }

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (calibratie_B.RobotArm_sfcn_o1 > 0.0) {
    if (!calibratie_DWork.Controller_MODE) {
      calibratie_DWork.Controller_MODE = TRUE;
    }
  } else {
    if (calibratie_DWork.Controller_MODE) {
      calibratie_DWork.Controller_MODE = FALSE;
    }
  }

  if (calibratie_DWork.Controller_MODE) {
    /* Gain: '<S3>/GainR' incorporates:
     *  Constant: '<S1>/Constant'
     *  Sum: '<S1>/Sum2'
     */
    calibratie_B.GainR = (calibratie_P.Constant_Value -
                          calibratie_B.RobotArm_sfcn_o2[0]) *
      calibratie_P.GainR_Gain;

    /* Level2 S-Function Block: '<S3>/DctintegratorR' (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S3>/DctleadlagR' (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S3>/Dct2lowpassR' (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S4>/GainR' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Sum: '<S1>/Sum1'
     */
    calibratie_B.GainR_o = (calibratie_P.Constant1_Value -
      calibratie_B.RobotArm_sfcn_o2[1]) * calibratie_P.GainR_Gain_m;

    /* Level2 S-Function Block: '<S4>/DctintegratorR' (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[3];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S4>/DctleadlagR' (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[4];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S4>/Dct2lowpassR' (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[5];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S5>/GainR' incorporates:
     *  Constant: '<S1>/Constant2'
     *  Sum: '<S1>/Sum3'
     */
    calibratie_B.GainR_p = (calibratie_P.Constant2_Value -
      calibratie_B.RobotArm_sfcn_o2[2]) * calibratie_P.GainR_Gain_j;

    /* Level2 S-Function Block: '<S5>/DctintegratorR' (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[6];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S5>/DctleadlagR' (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[7];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S5>/Dct2lowpassR' (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[8];
      sfcnOutputs(rts, 1);
    }

    /* Derivative: '<S6>/Speed' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Speed_RWORK.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK.TimeStampB;
      real_T *lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        calibratie_B.Speed = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        calibratie_B.Speed = (0.0 - *lastU++) / deltaT;
      }
    }

    /* Derivative: '<S6>/Acceleration' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK.TimeStampB;
      real_T *lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        rtb_Switch1 = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        rtb_Switch1 = (calibratie_B.Speed - *lastU++) / deltaT;
      }
    }

    /* Gain: '<S6>/Gain' */
    rtb_Gain = calibratie_P.Gain_Gain * rtb_Switch1;

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/speed0'
     */
    if (calibratie_B.Speed != 0.0) {
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/fc neg'
       *  Constant: '<S6>/fc pos'
       */
      if (calibratie_B.Speed > calibratie_P.Switch_Threshold) {
        rtb_Switch1 = calibratie_P.fcpos_Value;
      } else {
        rtb_Switch1 = calibratie_P.fcneg_Value;
      }

      /* End of Switch: '<S6>/Switch' */
    } else {
      rtb_Switch1 = calibratie_P.speed0_Value;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Sum: '<S6>/Sum' incorporates:
     *  Gain: '<S6>/Gain1'
     */
    rtb_Sum = (rtb_Gain + rtb_Switch1) + calibratie_P.Gain1_Gain *
      calibratie_B.Speed;

    /* Derivative: '<S7>/Speed' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Speed_RWORK_o.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK_o.TimeStampB;
      real_T *lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        calibratie_B.Speed_e = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        calibratie_B.Speed_e = (0.0 - *lastU++) / deltaT;
      }
    }

    /* Derivative: '<S7>/Acceleration' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK_h.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK_h.TimeStampB;
      real_T *lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        rtb_Switch1 = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        rtb_Switch1 = (calibratie_B.Speed_e - *lastU++) / deltaT;
      }
    }

    /* Gain: '<S7>/Gain' */
    rtb_Gain = calibratie_P.Gain_Gain_l * rtb_Switch1;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/speed0'
     */
    if (calibratie_B.Speed_e != 0.0) {
      /* Switch: '<S7>/Switch' incorporates:
       *  Constant: '<S7>/fc neg'
       *  Constant: '<S7>/fc pos'
       */
      if (calibratie_B.Speed_e > calibratie_P.Switch_Threshold_b) {
        rtb_Switch1 = calibratie_P.fcpos_Value_k;
      } else {
        rtb_Switch1 = calibratie_P.fcneg_Value_e;
      }

      /* End of Switch: '<S7>/Switch' */
    } else {
      rtb_Switch1 = calibratie_P.speed0_Value_b;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Sum: '<S7>/Sum' incorporates:
     *  Gain: '<S7>/Gain1'
     */
    rtb_Gain = (rtb_Gain + rtb_Switch1) + calibratie_P.Gain1_Gain_l *
      calibratie_B.Speed_e;

    /* Derivative: '<S8>/Speed' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Speed_RWORK_a.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK_a.TimeStampB;
      real_T *lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        calibratie_B.Speed_a = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        calibratie_B.Speed_a = (0.0 - *lastU++) / deltaT;
      }
    }

    /* Derivative: '<S8>/Acceleration' */
    {
      real_T t = calibratie_M->Timing.t[0];
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK_a.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK_a.TimeStampB;
      real_T *lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        rtb_Switch1 = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        rtb_Switch1 = (calibratie_B.Speed_a - *lastU++) / deltaT;
      }
    }

    /* Gain: '<S8>/Gain' */
    rtb_Gain_n = calibratie_P.Gain_Gain_j * rtb_Switch1;

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/speed0'
     */
    if (calibratie_B.Speed_a != 0.0) {
      /* Switch: '<S8>/Switch' incorporates:
       *  Constant: '<S8>/fc neg'
       *  Constant: '<S8>/fc pos'
       */
      if (calibratie_B.Speed_a > calibratie_P.Switch_Threshold_f) {
        rtb_Switch1 = calibratie_P.fcpos_Value_e;
      } else {
        rtb_Switch1 = calibratie_P.fcneg_Value_g;
      }

      /* End of Switch: '<S8>/Switch' */
    } else {
      rtb_Switch1 = calibratie_P.speed0_Value_n;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Sum: '<S1>/Sum4' */
    calibratie_B.Sum4 = rtb_Sum + calibratie_B.Dct2lowpassR;

    /* Sum: '<S1>/Sum5' */
    calibratie_B.Sum5 = rtb_Gain + calibratie_B.Dct2lowpassR_g;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S8>/gravitation constant'
     *  Gain: '<S8>/Gain1'
     *  Sum: '<S8>/Sum'
     */
    calibratie_B.Sum6 = (((rtb_Gain_n + rtb_Switch1) + calibratie_P.Gain1_Gain_j
                          * calibratie_B.Speed_a) +
                         calibratie_P.gravitationconstant_Value) +
      calibratie_B.Dct2lowpassR_d;

    /* Constant: '<S1>/Reference Solenoid' */
    calibratie_B.ReferenceSolenoid = calibratie_P.ReferenceSolenoid_Value;

    /* Level2 S-Function Block: '<S9>/S-Function' (sf_rt_scope) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[9];
      sfcnOutputs(rts, 0);
    }

    srUpdateBC(calibratie_DWork.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void calibratie_update(int_T tid)
{
  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  calibratie_DWork.UnitDelay1_DSTATE[0] = calibratie_B.Sum4;
  calibratie_DWork.UnitDelay1_DSTATE[1] = calibratie_B.Sum5;
  calibratie_DWork.UnitDelay1_DSTATE[2] = calibratie_B.Sum6;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  calibratie_DWork.UnitDelay_DSTATE = calibratie_B.ReferenceSolenoid;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  Update for EnablePort: '<S1>/Enable'
   */
  if (calibratie_DWork.Controller_MODE) {
    /* Update for Derivative: '<S6>/Speed' */
    {
      real_T timeStampA = calibratie_DWork.Speed_RWORK.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Speed_RWORK.TimeStampA;
      real_T* lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Speed_RWORK.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Speed_RWORK.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = 0.0;
    }

    /* Update for Derivative: '<S6>/Acceleration' */
    {
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Acceleration_RWORK.TimeStampA;
      real_T* lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Acceleration_RWORK.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Acceleration_RWORK.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = calibratie_B.Speed;
    }

    /* Update for Derivative: '<S7>/Speed' */
    {
      real_T timeStampA = calibratie_DWork.Speed_RWORK_o.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK_o.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Speed_RWORK_o.TimeStampA;
      real_T* lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Speed_RWORK_o.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Speed_RWORK_o.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_o.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = 0.0;
    }

    /* Update for Derivative: '<S7>/Acceleration' */
    {
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK_h.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK_h.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Acceleration_RWORK_h.TimeStampA;
      real_T* lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Acceleration_RWORK_h.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Acceleration_RWORK_h.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = calibratie_B.Speed_e;
    }

    /* Update for Derivative: '<S8>/Speed' */
    {
      real_T timeStampA = calibratie_DWork.Speed_RWORK_a.TimeStampA;
      real_T timeStampB = calibratie_DWork.Speed_RWORK_a.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Speed_RWORK_a.TimeStampA;
      real_T* lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Speed_RWORK_a.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Speed_RWORK_a.TimeStampB;
          lastU = &calibratie_DWork.Speed_RWORK_a.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = 0.0;
    }

    /* Update for Derivative: '<S8>/Acceleration' */
    {
      real_T timeStampA = calibratie_DWork.Acceleration_RWORK_a.TimeStampA;
      real_T timeStampB = calibratie_DWork.Acceleration_RWORK_a.TimeStampB;
      real_T* lastTime = &calibratie_DWork.Acceleration_RWORK_a.TimeStampA;
      real_T* lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &calibratie_DWork.Acceleration_RWORK_a.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &calibratie_DWork.Acceleration_RWORK_a.TimeStampB;
          lastU = &calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeB;
        }
      }

      *lastTime = calibratie_M->Timing.t[0];
      *lastU++ = calibratie_B.Speed_a;
    }
  }

  /* End of Update for SubSystem: '<Root>/Controller' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++calibratie_M->Timing.clockTick0)) {
    ++calibratie_M->Timing.clockTickH0;
  }

  calibratie_M->Timing.t[0] = calibratie_M->Timing.clockTick0 *
    calibratie_M->Timing.stepSize0 + calibratie_M->Timing.clockTickH0 *
    calibratie_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.000244140625s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++calibratie_M->Timing.clockTick1)) {
      ++calibratie_M->Timing.clockTickH1;
    }

    calibratie_M->Timing.t[1] = calibratie_M->Timing.clockTick1 *
      calibratie_M->Timing.stepSize1 + calibratie_M->Timing.clockTickH1 *
      calibratie_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void calibratie_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)calibratie_M, 0,
                sizeof(RT_MODEL_calibratie));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&calibratie_M->solverInfo,
                          &calibratie_M->Timing.simTimeStep);
    rtsiSetTPtr(&calibratie_M->solverInfo, &rtmGetTPtr(calibratie_M));
    rtsiSetStepSizePtr(&calibratie_M->solverInfo,
                       &calibratie_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&calibratie_M->solverInfo, (&rtmGetErrorStatus
      (calibratie_M)));
    rtsiSetRTModelPtr(&calibratie_M->solverInfo, calibratie_M);
  }

  rtsiSetSimTimeStep(&calibratie_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&calibratie_M->solverInfo,"FixedStepDiscrete");
  calibratie_M->solverInfoPtr = (&calibratie_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = calibratie_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    calibratie_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    calibratie_M->Timing.sampleTimes = (&calibratie_M->Timing.sampleTimesArray[0]);
    calibratie_M->Timing.offsetTimes = (&calibratie_M->Timing.offsetTimesArray[0]);

    /* task periods */
    calibratie_M->Timing.sampleTimes[0] = (0.0);
    calibratie_M->Timing.sampleTimes[1] = (0.000244140625);

    /* task offsets */
    calibratie_M->Timing.offsetTimes[0] = (0.0);
    calibratie_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(calibratie_M, &calibratie_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = calibratie_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    calibratie_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(calibratie_M, 500.0);
  calibratie_M->Timing.stepSize0 = 0.000244140625;
  calibratie_M->Timing.stepSize1 = 0.000244140625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    calibratie_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(calibratie_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(calibratie_M->rtwLogInfo, (NULL));
    rtliSetLogT(calibratie_M->rtwLogInfo, "tout");
    rtliSetLogX(calibratie_M->rtwLogInfo, "");
    rtliSetLogXFinal(calibratie_M->rtwLogInfo, "");
    rtliSetSigLog(calibratie_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(calibratie_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(calibratie_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(calibratie_M->rtwLogInfo, 0);
    rtliSetLogDecimation(calibratie_M->rtwLogInfo, 5);
    rtliSetLogY(calibratie_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(calibratie_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(calibratie_M->rtwLogInfo, (NULL));
  }

  /* external mode info */
  calibratie_M->Sizes.checksums[0] = (1055110914U);
  calibratie_M->Sizes.checksums[1] = (3601619212U);
  calibratie_M->Sizes.checksums[2] = (2367844512U);
  calibratie_M->Sizes.checksums[3] = (4238665610U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    calibratie_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&calibratie_DWork.Controller_SubsysRanBC;
    systemRan[2] = (sysRanDType *)&calibratie_DWork.Controller_SubsysRanBC;
    systemRan[3] = (sysRanDType *)&calibratie_DWork.Controller_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&calibratie_DWork.Controller_SubsysRanBC;
    rteiSetModelMappingInfoPtr(calibratie_M->extModeInfo,
      &calibratie_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(calibratie_M->extModeInfo, calibratie_M->Sizes.checksums);
    rteiSetTPtr(calibratie_M->extModeInfo, rtmGetTPtr(calibratie_M));
  }

  calibratie_M->solverInfoPtr = (&calibratie_M->solverInfo);
  calibratie_M->Timing.stepSize = (0.000244140625);
  rtsiSetFixedStepSize(&calibratie_M->solverInfo, 0.000244140625);
  rtsiSetSolverMode(&calibratie_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  calibratie_M->ModelData.blockIO = ((void *) &calibratie_B);
  (void) memset(((void *) &calibratie_B), 0,
                sizeof(BlockIO_calibratie));

  {
    calibratie_B.UnitDelay1[0] = 0.0;
    calibratie_B.UnitDelay1[1] = 0.0;
    calibratie_B.UnitDelay1[2] = 0.0;
    calibratie_B.UnitDelay = 0.0;
    calibratie_B.RobotArm_sfcn_o1 = 0.0;
    calibratie_B.RobotArm_sfcn_o2[0] = 0.0;
    calibratie_B.RobotArm_sfcn_o2[1] = 0.0;
    calibratie_B.RobotArm_sfcn_o2[2] = 0.0;
    calibratie_B.RobotArm_sfcn_o4 = 0.0;
    calibratie_B.GainR = 0.0;
    calibratie_B.DctintegratorR = 0.0;
    calibratie_B.DctleadlagR = 0.0;
    calibratie_B.Dct2lowpassR = 0.0;
    calibratie_B.GainR_o = 0.0;
    calibratie_B.DctintegratorR_b = 0.0;
    calibratie_B.DctleadlagR_k = 0.0;
    calibratie_B.Dct2lowpassR_g = 0.0;
    calibratie_B.GainR_p = 0.0;
    calibratie_B.DctintegratorR_l = 0.0;
    calibratie_B.DctleadlagR_d = 0.0;
    calibratie_B.Dct2lowpassR_d = 0.0;
    calibratie_B.Speed = 0.0;
    calibratie_B.Speed_e = 0.0;
    calibratie_B.Speed_a = 0.0;
    calibratie_B.Sum4 = 0.0;
    calibratie_B.Sum5 = 0.0;
    calibratie_B.Sum6 = 0.0;
    calibratie_B.ReferenceSolenoid = 0.0;
    calibratie_B.SFunction[0] = 0.0;
    calibratie_B.SFunction[1] = 0.0;
    calibratie_B.SFunction[2] = 0.0;
    calibratie_B.SFunction[3] = 0.0;
  }

  /* parameters */
  calibratie_M->ModelData.defaultParam = ((real_T *)&calibratie_P);

  /* states (dwork) */
  calibratie_M->Work.dwork = ((void *) &calibratie_DWork);
  (void) memset((void *)&calibratie_DWork, 0,
                sizeof(D_Work_calibratie));
  calibratie_DWork.UnitDelay1_DSTATE[0] = 0.0;
  calibratie_DWork.UnitDelay1_DSTATE[1] = 0.0;
  calibratie_DWork.UnitDelay1_DSTATE[2] = 0.0;
  calibratie_DWork.UnitDelay_DSTATE = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK0 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK1 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK2 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK3 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK4 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK5 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK6 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK7 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK8 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK9 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK10 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK11 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK12 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK13 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK14 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK15 = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK16[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK16[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK17[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK17[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK18[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK18[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK18[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK18[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK19[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK19[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK19[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK19[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK20[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK20[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK21[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK21[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK21[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK21[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK22[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK22[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK22[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK22[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK23[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK23[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK24[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK24[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK25[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK25[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK25[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK25[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK26[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK26[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK26[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK26[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK27[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK27[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK28[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK28[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK28[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK28[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK29[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK29[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK29[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK29[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK30[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK30[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK31[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK31[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK32[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK32[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK32[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK32[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK33[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK33[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK33[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK33[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK34[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK34[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK35[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK35[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK35[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK35[3] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK36[0] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK36[1] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK36[2] = 0.0;
  calibratie_DWork.RobotArm_sfcn_DWORK36[3] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK[0] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK[1] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK[0] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK[0] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK[2] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK[3] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK_o[0] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK_o[1] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK_k[0] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK_k[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_b[0] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_b[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_b[2] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_b[3] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK_j[0] = 0.0;
  calibratie_DWork.DctintegratorR_RWORK_j[1] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK_kb[0] = 0.0;
  calibratie_DWork.DctleadlagR_RWORK_kb[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_h[0] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_h[1] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_h[2] = 0.0;
  calibratie_DWork.Dct2lowpassR_RWORK_h[3] = 0.0;
  calibratie_DWork.Speed_RWORK.TimeStampA = 0.0;
  calibratie_DWork.Speed_RWORK.LastUAtTimeA = 0.0;
  calibratie_DWork.Speed_RWORK.TimeStampB = 0.0;
  calibratie_DWork.Speed_RWORK.LastUAtTimeB = 0.0;
  calibratie_DWork.Acceleration_RWORK.TimeStampA = 0.0;
  calibratie_DWork.Acceleration_RWORK.LastUAtTimeA = 0.0;
  calibratie_DWork.Acceleration_RWORK.TimeStampB = 0.0;
  calibratie_DWork.Acceleration_RWORK.LastUAtTimeB = 0.0;
  calibratie_DWork.Speed_RWORK_o.TimeStampA = 0.0;
  calibratie_DWork.Speed_RWORK_o.LastUAtTimeA = 0.0;
  calibratie_DWork.Speed_RWORK_o.TimeStampB = 0.0;
  calibratie_DWork.Speed_RWORK_o.LastUAtTimeB = 0.0;
  calibratie_DWork.Acceleration_RWORK_h.TimeStampA = 0.0;
  calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeA = 0.0;
  calibratie_DWork.Acceleration_RWORK_h.TimeStampB = 0.0;
  calibratie_DWork.Acceleration_RWORK_h.LastUAtTimeB = 0.0;
  calibratie_DWork.Speed_RWORK_a.TimeStampA = 0.0;
  calibratie_DWork.Speed_RWORK_a.LastUAtTimeA = 0.0;
  calibratie_DWork.Speed_RWORK_a.TimeStampB = 0.0;
  calibratie_DWork.Speed_RWORK_a.LastUAtTimeB = 0.0;
  calibratie_DWork.Acceleration_RWORK_a.TimeStampA = 0.0;
  calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeA = 0.0;
  calibratie_DWork.Acceleration_RWORK_a.TimeStampB = 0.0;
  calibratie_DWork.Acceleration_RWORK_a.LastUAtTimeB = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    calibratie_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &calibratie_M->NonInlinedSFcns.sfcnInfo;
    calibratie_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(calibratie_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &calibratie_M->Sizes.numSampTimes);
    calibratie_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(calibratie_M)[0]);
    calibratie_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(calibratie_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,calibratie_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(calibratie_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(calibratie_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(calibratie_M));
    rtssSetStepSizePtr(sfcnInfo, &calibratie_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(calibratie_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &calibratie_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &calibratie_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &calibratie_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &calibratie_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &calibratie_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &calibratie_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &calibratie_M->solverInfoPtr);
  }

  calibratie_M->Sizes.numSFcns = (11);

  /* register each child */
  {
    (void) memset((void *)&calibratie_M->NonInlinedSFcns.childSFunctions[0], 0,
                  11*sizeof(SimStruct));
    calibratie_M->childSfunctions =
      (&calibratie_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 11; i++) {
        calibratie_M->childSfunctions[i] =
          (&calibratie_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: calibratie/<S3>/DctintegratorR (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.GainR;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.DctintegratorR));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctintegratorR");
      ssSetPath(rts, "calibratie/Controller/Controller R/DctintegratorR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctintegratorR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctintegratorR_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctintegratorR_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctintegratorR_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S3>/DctleadlagR (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctintegratorR;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.DctleadlagR));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctleadlagR");
      ssSetPath(rts, "calibratie/Controller/Controller R/DctleadlagR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctleadlagR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctleadlagR_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.DctleadlagR_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctleadlagR_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctleadlagR_RWORK[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S3>/Dct2lowpassR (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctleadlagR;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.Dct2lowpassR));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpassR");
      ssSetPath(rts, "calibratie/Controller/Controller R/Dct2lowpassR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.Dct2lowpassR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.Dct2lowpassR_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.Dct2lowpassR_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.Dct2lowpassR_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.Dct2lowpassR_RWORK[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S4>/DctintegratorR (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.GainR_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &calibratie_B.DctintegratorR_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctintegratorR");
      ssSetPath(rts, "calibratie/Controller/Controller X/DctintegratorR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctintegratorR_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctintegratorR_P2_Size_c);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctintegratorR_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctintegratorR_RWORK_o[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S4>/DctleadlagR (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctintegratorR_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.DctleadlagR_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctleadlagR");
      ssSetPath(rts, "calibratie/Controller/Controller X/DctleadlagR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctleadlagR_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctleadlagR_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.DctleadlagR_P3_Size_e);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctleadlagR_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctleadlagR_RWORK_k[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S4>/Dct2lowpassR (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctleadlagR_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.Dct2lowpassR_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpassR");
      ssSetPath(rts, "calibratie/Controller/Controller X/Dct2lowpassR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.Dct2lowpassR_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.Dct2lowpassR_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.Dct2lowpassR_P3_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.Dct2lowpassR_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.Dct2lowpassR_RWORK_b[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S5>/DctintegratorR (dweakint) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.GainR_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &calibratie_B.DctintegratorR_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctintegratorR");
      ssSetPath(rts, "calibratie/Controller/Controller Z/DctintegratorR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctintegratorR_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctintegratorR_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctintegratorR_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctintegratorR_RWORK_j[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S5>/DctleadlagR (dleadlag) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctintegratorR_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.DctleadlagR_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "DctleadlagR");
      ssSetPath(rts, "calibratie/Controller/Controller Z/DctleadlagR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.DctleadlagR_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.DctleadlagR_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.DctleadlagR_P3_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.DctleadlagR_RWORK_kb[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.DctleadlagR_RWORK_kb[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S5>/Dct2lowpassR (dlowpass2) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &calibratie_B.DctleadlagR_d;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &calibratie_B.Dct2lowpassR_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpassR");
      ssSetPath(rts, "calibratie/Controller/Controller Z/Dct2lowpassR");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.Dct2lowpassR_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)calibratie_P.Dct2lowpassR_P2_Size_ij);
        ssSetSFcnParam(rts, 2, (mxArray*)calibratie_P.Dct2lowpassR_P3_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &calibratie_DWork.Dct2lowpassR_RWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &calibratie_DWork.Dct2lowpassR_RWORK_h[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: calibratie/<S9>/S-Function (sf_rt_scope) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[1] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[2] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[3] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[4] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[5] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[6] = (real_T*)&calibratie_RGND;
          sfcnUPtrs[7] = (real_T*)&calibratie_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((real_T *) calibratie_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "calibratie/Controller/RTScope/S-Function");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &calibratie_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)calibratie_P.SFunction_P1_Size);
      }

      /* registration */
      sf_rt_scope(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* RTW Generated Level2 S-Function Block: calibratie/<S2>/Robot Arm_sfcn (Robot_sf) */
    {
      SimStruct *rts = calibratie_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = calibratie_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = calibratie_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = calibratie_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*2);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*2);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &calibratie_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, calibratie_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &calibratie_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &calibratie_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &calibratie_M->NonInlinedSFcns.statesInfo2[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = calibratie_B.UnitDelay1;
          sfcnUPtrs[1] = &calibratie_B.UnitDelay1[1];
          sfcnUPtrs[2] = &calibratie_B.UnitDelay1[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &calibratie_M->NonInlinedSFcns.Sfcn10.UPtrs1;
          sfcnUPtrs[0] = &calibratie_B.UnitDelay;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &calibratie_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 4);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &calibratie_B.RobotArm_sfcn_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 3);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            calibratie_B.RobotArm_sfcn_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 3);
          ssSetOutputPortSignal(rts, 2, ((boolean_T *)
            calibratie_B.RobotArm_sfcn_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &calibratie_B.RobotArm_sfcn_o4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Robot Arm_sfcn");
      ssSetPath(rts, "calibratie/Robot Arm/Robot Arm_sfcn");
      ssSetRTModel(rts,calibratie_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &calibratie_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 56);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &calibratie_DWork.RobotArm_sfcn_DWORK0);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &calibratie_DWork.RobotArm_sfcn_DWORK1);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &calibratie_DWork.RobotArm_sfcn_DWORK2);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 1);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &calibratie_DWork.RobotArm_sfcn_DWORK3);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 1);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &calibratie_DWork.RobotArm_sfcn_DWORK4);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 1);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &calibratie_DWork.RobotArm_sfcn_DWORK5);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 1);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &calibratie_DWork.RobotArm_sfcn_DWORK6);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWorkUsedAsDState(rts, 7, 1);
        ssSetDWork(rts, 7, &calibratie_DWork.RobotArm_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWorkUsedAsDState(rts, 8, 1);
        ssSetDWork(rts, 8, &calibratie_DWork.RobotArm_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWorkUsedAsDState(rts, 9, 1);
        ssSetDWork(rts, 9, &calibratie_DWork.RobotArm_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &calibratie_DWork.RobotArm_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &calibratie_DWork.RobotArm_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &calibratie_DWork.RobotArm_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &calibratie_DWork.RobotArm_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &calibratie_DWork.RobotArm_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &calibratie_DWork.RobotArm_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 2);
        ssSetDWorkDataType(rts, 16,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &calibratie_DWork.RobotArm_sfcn_DWORK16[0]);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 2);
        ssSetDWorkDataType(rts, 17,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &calibratie_DWork.RobotArm_sfcn_DWORK17[0]);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 4);
        ssSetDWorkDataType(rts, 18,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &calibratie_DWork.RobotArm_sfcn_DWORK18[0]);

        /* DWORK19 */
        ssSetDWorkWidth(rts, 19, 4);
        ssSetDWorkDataType(rts, 19,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 19, 0);
        ssSetDWork(rts, 19, &calibratie_DWork.RobotArm_sfcn_DWORK19[0]);

        /* DWORK20 */
        ssSetDWorkWidth(rts, 20, 2);
        ssSetDWorkDataType(rts, 20,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 20, 0);
        ssSetDWork(rts, 20, &calibratie_DWork.RobotArm_sfcn_DWORK20[0]);

        /* DWORK21 */
        ssSetDWorkWidth(rts, 21, 4);
        ssSetDWorkDataType(rts, 21,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 21, 0);
        ssSetDWork(rts, 21, &calibratie_DWork.RobotArm_sfcn_DWORK21[0]);

        /* DWORK22 */
        ssSetDWorkWidth(rts, 22, 4);
        ssSetDWorkDataType(rts, 22,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 22, 0);
        ssSetDWork(rts, 22, &calibratie_DWork.RobotArm_sfcn_DWORK22[0]);

        /* DWORK23 */
        ssSetDWorkWidth(rts, 23, 2);
        ssSetDWorkDataType(rts, 23,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 23, 0);
        ssSetDWork(rts, 23, &calibratie_DWork.RobotArm_sfcn_DWORK23[0]);

        /* DWORK24 */
        ssSetDWorkWidth(rts, 24, 2);
        ssSetDWorkDataType(rts, 24,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 24, 0);
        ssSetDWork(rts, 24, &calibratie_DWork.RobotArm_sfcn_DWORK24[0]);

        /* DWORK25 */
        ssSetDWorkWidth(rts, 25, 4);
        ssSetDWorkDataType(rts, 25,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 25, 0);
        ssSetDWork(rts, 25, &calibratie_DWork.RobotArm_sfcn_DWORK25[0]);

        /* DWORK26 */
        ssSetDWorkWidth(rts, 26, 4);
        ssSetDWorkDataType(rts, 26,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 26, 0);
        ssSetDWork(rts, 26, &calibratie_DWork.RobotArm_sfcn_DWORK26[0]);

        /* DWORK27 */
        ssSetDWorkWidth(rts, 27, 2);
        ssSetDWorkDataType(rts, 27,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 27, 0);
        ssSetDWork(rts, 27, &calibratie_DWork.RobotArm_sfcn_DWORK27[0]);

        /* DWORK28 */
        ssSetDWorkWidth(rts, 28, 4);
        ssSetDWorkDataType(rts, 28,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 28, 0);
        ssSetDWork(rts, 28, &calibratie_DWork.RobotArm_sfcn_DWORK28[0]);

        /* DWORK29 */
        ssSetDWorkWidth(rts, 29, 4);
        ssSetDWorkDataType(rts, 29,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 29, 0);
        ssSetDWork(rts, 29, &calibratie_DWork.RobotArm_sfcn_DWORK29[0]);

        /* DWORK30 */
        ssSetDWorkWidth(rts, 30, 2);
        ssSetDWorkDataType(rts, 30,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 30, 0);
        ssSetDWork(rts, 30, &calibratie_DWork.RobotArm_sfcn_DWORK30[0]);

        /* DWORK31 */
        ssSetDWorkWidth(rts, 31, 2);
        ssSetDWorkDataType(rts, 31,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 31, 0);
        ssSetDWork(rts, 31, &calibratie_DWork.RobotArm_sfcn_DWORK31[0]);

        /* DWORK32 */
        ssSetDWorkWidth(rts, 32, 4);
        ssSetDWorkDataType(rts, 32,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 32, 0);
        ssSetDWork(rts, 32, &calibratie_DWork.RobotArm_sfcn_DWORK32[0]);

        /* DWORK33 */
        ssSetDWorkWidth(rts, 33, 4);
        ssSetDWorkDataType(rts, 33,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 33, 0);
        ssSetDWork(rts, 33, &calibratie_DWork.RobotArm_sfcn_DWORK33[0]);

        /* DWORK34 */
        ssSetDWorkWidth(rts, 34, 2);
        ssSetDWorkDataType(rts, 34,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 34, 0);
        ssSetDWork(rts, 34, &calibratie_DWork.RobotArm_sfcn_DWORK34[0]);

        /* DWORK35 */
        ssSetDWorkWidth(rts, 35, 4);
        ssSetDWorkDataType(rts, 35,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 35, 0);
        ssSetDWork(rts, 35, &calibratie_DWork.RobotArm_sfcn_DWORK35[0]);

        /* DWORK36 */
        ssSetDWorkWidth(rts, 36, 4);
        ssSetDWorkDataType(rts, 36,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 36, 0);
        ssSetDWork(rts, 36, &calibratie_DWork.RobotArm_sfcn_DWORK36[0]);

        /* DWORK37 */
        ssSetDWorkWidth(rts, 37, 1);
        ssSetDWorkDataType(rts, 37,SS_INT32);
        ssSetDWorkComplexSignal(rts, 37, 0);
        ssSetDWork(rts, 37, &calibratie_DWork.RobotArm_sfcn_DWORK37);

        /* DWORK38 */
        ssSetDWorkWidth(rts, 38, 1);
        ssSetDWorkDataType(rts, 38,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 38, 0);
        ssSetDWork(rts, 38, &calibratie_DWork.RobotArm_sfcn_DWORK38);

        /* DWORK39 */
        ssSetDWorkWidth(rts, 39, 1);
        ssSetDWorkDataType(rts, 39,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 39, 0);
        ssSetDWork(rts, 39, &calibratie_DWork.RobotArm_sfcn_DWORK39);

        /* DWORK40 */
        ssSetDWorkWidth(rts, 40, 1);
        ssSetDWorkDataType(rts, 40,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 40, 0);
        ssSetDWork(rts, 40, &calibratie_DWork.RobotArm_sfcn_DWORK40);

        /* DWORK41 */
        ssSetDWorkWidth(rts, 41, 1);
        ssSetDWorkDataType(rts, 41,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 41, 0);
        ssSetDWork(rts, 41, &calibratie_DWork.RobotArm_sfcn_DWORK41);

        /* DWORK42 */
        ssSetDWorkWidth(rts, 42, 1);
        ssSetDWorkDataType(rts, 42,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 42, 0);
        ssSetDWork(rts, 42, &calibratie_DWork.RobotArm_sfcn_DWORK42);

        /* DWORK43 */
        ssSetDWorkWidth(rts, 43, 1);
        ssSetDWorkDataType(rts, 43,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 43, 0);
        ssSetDWork(rts, 43, &calibratie_DWork.RobotArm_sfcn_DWORK43);

        /* DWORK44 */
        ssSetDWorkWidth(rts, 44, 1);
        ssSetDWorkDataType(rts, 44,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 44, 0);
        ssSetDWork(rts, 44, &calibratie_DWork.RobotArm_sfcn_DWORK44);

        /* DWORK45 */
        ssSetDWorkWidth(rts, 45, 1);
        ssSetDWorkDataType(rts, 45,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 45, 0);
        ssSetDWork(rts, 45, &calibratie_DWork.RobotArm_sfcn_DWORK45);

        /* DWORK46 */
        ssSetDWorkWidth(rts, 46, 1);
        ssSetDWorkDataType(rts, 46,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 46, 0);
        ssSetDWork(rts, 46, &calibratie_DWork.RobotArm_sfcn_DWORK46);

        /* DWORK47 */
        ssSetDWorkWidth(rts, 47, 1);
        ssSetDWorkDataType(rts, 47,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 47, 0);
        ssSetDWork(rts, 47, &calibratie_DWork.RobotArm_sfcn_DWORK47);

        /* DWORK48 */
        ssSetDWorkWidth(rts, 48, 1);
        ssSetDWorkDataType(rts, 48,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 48, 0);
        ssSetDWork(rts, 48, &calibratie_DWork.RobotArm_sfcn_DWORK48);

        /* DWORK49 */
        ssSetDWorkWidth(rts, 49, 1);
        ssSetDWorkDataType(rts, 49,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 49, 0);
        ssSetDWork(rts, 49, &calibratie_DWork.RobotArm_sfcn_DWORK49);

        /* DWORK50 */
        ssSetDWorkWidth(rts, 50, 1);
        ssSetDWorkDataType(rts, 50,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 50, 0);
        ssSetDWork(rts, 50, &calibratie_DWork.RobotArm_sfcn_DWORK50);

        /* DWORK51 */
        ssSetDWorkWidth(rts, 51, 1);
        ssSetDWorkDataType(rts, 51,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 51, 0);
        ssSetDWork(rts, 51, &calibratie_DWork.RobotArm_sfcn_DWORK51);

        /* DWORK52 */
        ssSetDWorkWidth(rts, 52, 1);
        ssSetDWorkDataType(rts, 52,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 52, 0);
        ssSetDWork(rts, 52, &calibratie_DWork.RobotArm_sfcn_DWORK52);

        /* DWORK53 */
        ssSetDWorkWidth(rts, 53, 1);
        ssSetDWorkDataType(rts, 53,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 53, 0);
        ssSetDWork(rts, 53, &calibratie_DWork.RobotArm_sfcn_DWORK53);

        /* DWORK54 */
        ssSetDWorkWidth(rts, 54, 1);
        ssSetDWorkDataType(rts, 54,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 54, 0);
        ssSetDWork(rts, 54, &calibratie_DWork.RobotArm_sfcn_DWORK54);

        /* DWORK55 */
        ssSetDWorkWidth(rts, 55, 1);
        ssSetDWorkDataType(rts, 55,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 55, 0);
        ssSetDWork(rts, 55, &calibratie_DWork.RobotArm_sfcn_DWORK55);
      }

      /* registration */
      Robot_sf(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      ssSetSampleTime(rts, 1, 0.000244140625);
      ssSetOffsetTime(rts, 1, 0.0);
      sfcnTsMap[0] = 0;
      sfcnTsMap[1] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);

      /* Instance data for generated S-Function: Robot */
#include "Robot_sfcn_rtw/Robot_sid.h"

    }
  }
}

/* Model terminate function */
void calibratie_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */

  /* Level2 S-Function Block: '<S3>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S3>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S3>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S4>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S4>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S4>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/S-Function' (sf_rt_scope) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  calibratie_output(tid);
}

void MdlUpdate(int_T tid)
{
  calibratie_update(tid);
}

void MdlInitializeSizes(void)
{
  calibratie_M->Sizes.numContStates = (0);/* Number of continuous states */
  calibratie_M->Sizes.numY = (0);      /* Number of model outputs */
  calibratie_M->Sizes.numU = (0);      /* Number of model inputs */
  calibratie_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  calibratie_M->Sizes.numSampTimes = (2);/* Number of sample times */
  calibratie_M->Sizes.numBlocks = (64);/* Number of blocks */
  calibratie_M->Sizes.numBlockIO = (26);/* Number of block outputs */
  calibratie_M->Sizes.numBlockPrms = (104);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  calibratie_DWork.UnitDelay1_DSTATE[0] = calibratie_P.UnitDelay1_X0;
  calibratie_DWork.UnitDelay1_DSTATE[1] = calibratie_P.UnitDelay1_X0;
  calibratie_DWork.UnitDelay1_DSTATE[2] = calibratie_P.UnitDelay1_X0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  calibratie_DWork.UnitDelay_DSTATE = calibratie_P.UnitDelay_X0;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

void MdlStart(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<Root>/Controller' */

  /* Level2 S-Function Block: '<S3>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S3>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S3>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S4>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S4>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S4>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/DctintegratorR' (dweakint) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/DctleadlagR' (dleadlag) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/Dct2lowpassR' (dlowpass2) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Derivative: '<S6>/Speed' */
  calibratie_DWork.Speed_RWORK.TimeStampA = rtInf;
  calibratie_DWork.Speed_RWORK.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S6>/Acceleration' */
  calibratie_DWork.Acceleration_RWORK.TimeStampA = rtInf;
  calibratie_DWork.Acceleration_RWORK.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S7>/Speed' */
  calibratie_DWork.Speed_RWORK_o.TimeStampA = rtInf;
  calibratie_DWork.Speed_RWORK_o.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S7>/Acceleration' */
  calibratie_DWork.Acceleration_RWORK_h.TimeStampA = rtInf;
  calibratie_DWork.Acceleration_RWORK_h.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S8>/Speed' */
  calibratie_DWork.Speed_RWORK_a.TimeStampA = rtInf;
  calibratie_DWork.Speed_RWORK_a.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S8>/Acceleration' */
  calibratie_DWork.Acceleration_RWORK_a.TimeStampA = rtInf;
  calibratie_DWork.Acceleration_RWORK_a.TimeStampB = rtInf;

  /* VirtualOutportStart for Outport: '<S1>/Solenoid' */
  calibratie_B.ReferenceSolenoid = calibratie_P.Solenoid_Y0;

  /* End of Start for SubSystem: '<Root>/Controller' */
  MdlInitialize();

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = calibratie_M->childSfunctions[10];
    sfcnRTWGeneratedEnable(rts);
  }
}

void MdlTerminate(void)
{
  calibratie_terminate();
}

RT_MODEL_calibratie *calibratie(void)
{
  calibratie_initialize(1);
  return calibratie_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
