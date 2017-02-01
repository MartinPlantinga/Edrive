/*
 * testcompz.c
 *
 * Code generation for model "testcompz.mdl".
 *
 * Model version              : 1.916
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Dec 19 13:37:57 2015
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "testcompz.h"
#include "testcompz_private.h"
#include "testcompz_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf
#endif

#include "Robot_sf.h"

const real_T testcompz_RGND = 0.0;     /* real_T ground */

/* Block signals (auto storage) */
BlockIO_testcompz testcompz_B;

/* Block states (auto storage) */
D_Work_testcompz testcompz_DWork;

/* Real-time model */
RT_MODEL_testcompz testcompz_M_;
RT_MODEL_testcompz *const testcompz_M = &testcompz_M_;

/*
 * Writes out MAT-file header.  Returns success or failure.
 * Returns:
 *      0 - success
 *      1 - failure
 */
int_T rt_WriteMat4FileHeader(FILE *fp, int32_T m, int32_T n, const char *name)
{
  typedef enum { ELITTLE_ENDIAN, EBIG_ENDIAN } ByteOrder;

  int16_T one = 1;
  ByteOrder byteOrder = (*((int8_T *)&one)==1) ? ELITTLE_ENDIAN : EBIG_ENDIAN;
  int32_T type = (byteOrder == ELITTLE_ENDIAN) ? 0: 1000;
  int32_T imagf = 0;
  int32_T name_len = strlen(name) + 1;
  if ((fwrite(&type, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&m, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&n, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&imagf, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&name_len, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(name, sizeof(char), name_len, fp) == 0)) {
    return(1);
  } else {
    return(0);
  }
}                                      /* end rt_WriteMat4FileHeader */

/* Model output function */
void testcompz_output(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_TmpSignalConversionAtToFile[3];
  real_T rtb_Switch;
  real_T rtb_Gain;
  real_T rtb_Gain_d;

  /* Reset subsysRan breadcrumbs */
  srClearBC(testcompz_DWork.Controller_SubsysRanBC);

  /* UnitDelay: '<Root>/Unit Delay1' */
  /* RTWBLOCK_START_COMMENT */
  testcompz_B.UnitDelay1[0] = testcompz_DWork.UnitDelay1_DSTATE[0];
  testcompz_B.UnitDelay1[1] = testcompz_DWork.UnitDelay1_DSTATE[1];
  testcompz_B.UnitDelay1[2] = testcompz_DWork.UnitDelay1_DSTATE[2];

  /* UnitDelay: '<Root>/Unit Delay' */
  testcompz_B.UnitDelay = testcompz_DWork.UnitDelay_DSTATE;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (testcompz_B.RobotArm_sfcn_o1 > 0.0) {
    if (!testcompz_DWork.Controller_MODE) {
      testcompz_DWork.Controller_MODE = TRUE;
    }
  } else {
    if (testcompz_DWork.Controller_MODE) {
      testcompz_DWork.Controller_MODE = FALSE;
    }
  }

  if (testcompz_DWork.Controller_MODE) {
    /* Sin: '<S1>/Sine Wave' */
    testcompz_B.SineWave = sin(testcompz_P.SineWave_Freq * testcompz_M->
      Timing.t[0] + testcompz_P.SineWave_Phase) * testcompz_P.SineWave_Amp +
      testcompz_P.SineWave_Bias;

    /* Sum: '<S1>/Sum3' */
    testcompz_B.Sum3 = testcompz_B.SineWave - testcompz_B.RobotArm_sfcn_o2[2];

    /* SignalConversion: '<S1>/TmpSignal ConversionAtTo File1Inport1' */
    rtb_TmpSignalConversionAtToFile[0] = testcompz_B.SineWave;
    rtb_TmpSignalConversionAtToFile[1] = testcompz_B.RobotArm_sfcn_o2[2];
    rtb_TmpSignalConversionAtToFile[2] = testcompz_B.Sum3;

    /* ToFile: '<S1>/To File1' */
    if (!(++testcompz_DWork.ToFile1_IWORK.Decimation % 1) &&
        (testcompz_DWork.ToFile1_IWORK.Count*4)+1 < 100000000 ) {
      FILE *fp = (FILE *) testcompz_DWork.ToFile1_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[4];
        testcompz_DWork.ToFile1_IWORK.Decimation = 0;
        u[0] = testcompz_M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        if (fwrite(u, sizeof(real_T), 4, fp) != 4) {
          rtmSetErrorStatus(testcompz_M,
                            "Error writing to MAT-file friccomp3.mat");
          return;
        }

        if (((++testcompz_DWork.ToFile1_IWORK.Count)*4)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file friccomp3.mat.\n");
        }
      }
    }

    /* Gain: '<S3>/Gain' incorporates:
     *  Constant: '<S1>/Reference R'
     *  Sum: '<S1>/Sum2'
     */
    rtb_Gain = (testcompz_P.ReferenceR_Value - testcompz_B.RobotArm_sfcn_o2[0]) *
      testcompz_P.Gain_Gain;

    /* Gain: '<S4>/Gain' incorporates:
     *  Constant: '<S1>/Reference X'
     *  Sum: '<S1>/Sum1'
     */
    rtb_Gain_d = (testcompz_P.ReferenceX_Value - testcompz_B.RobotArm_sfcn_o2[1])
      * testcompz_P.Gain_Gain_o;

    /* Level2 S-Function Block: '<S5>/Dctpd' (dpd) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S5>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Derivative: '<S1>/Derivative' */
    {
      real_T t = testcompz_M->Timing.t[0];
      real_T timeStampA = testcompz_DWork.Derivative_RWORK.TimeStampA;
      real_T timeStampB = testcompz_DWork.Derivative_RWORK.TimeStampB;
      real_T *lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeA;
      if (timeStampA >= t && timeStampB >= t) {
        rtb_Switch = 0.0;
      } else {
        real_T deltaT;
        real_T lastTime = timeStampA;
        if (timeStampA < timeStampB) {
          if (timeStampB < t) {
            lastTime = timeStampB;
            lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeB;
          }
        } else if (timeStampA >= t) {
          lastTime = timeStampB;
          lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeB;
        }

        deltaT = t - lastTime;
        rtb_Switch = (testcompz_B.SineWave - *lastU++) / deltaT;
      }
    }

    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<S1>/Feedforward R'
     */
    testcompz_B.Sum4 = testcompz_P.FeedforwardR_Value + rtb_Gain;

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedforward X'
     */
    testcompz_B.Sum5 = testcompz_P.FeedforwardX_Value + rtb_Gain_d;

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/friction left'
     *  Constant: '<S1>/friction right'
     *  Signum: '<S1>/Sign'
     */
    if ((rtb_Switch < 0.0 ? -1.0 : rtb_Switch > 0.0 ? 1.0 : rtb_Switch == 0.0 ?
         0.0 : rtb_Switch) >= testcompz_P.Switch_Threshold) {
      rtb_Switch = testcompz_P.frictionleft_Value;
    } else {
      rtb_Switch = testcompz_P.frictionright_Value;
    }

    /* End of Switch: '<S1>/Switch' */

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S1>/Gravity comp'
     */
    testcompz_B.Sum6 = (testcompz_B.Dct2lowpass + rtb_Switch) +
      testcompz_P.Gravitycomp_Value;

    /* Constant: '<S1>/Reference Solenoid' */
    testcompz_B.ReferenceSolenoid = testcompz_P.ReferenceSolenoid_Value;

    /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[2];
      sfcnOutputs(rts, 0);
    }

    srUpdateBC(testcompz_DWork.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void testcompz_update(int_T tid)
{
  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  testcompz_DWork.UnitDelay1_DSTATE[0] = testcompz_B.Sum4;
  testcompz_DWork.UnitDelay1_DSTATE[1] = testcompz_B.Sum5;
  testcompz_DWork.UnitDelay1_DSTATE[2] = testcompz_B.Sum6;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  testcompz_DWork.UnitDelay_DSTATE = testcompz_B.ReferenceSolenoid;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  Update for EnablePort: '<S1>/Enable'
   */
  if (testcompz_DWork.Controller_MODE) {
    /* Update for Derivative: '<S1>/Derivative' */
    {
      real_T timeStampA = testcompz_DWork.Derivative_RWORK.TimeStampA;
      real_T timeStampB = testcompz_DWork.Derivative_RWORK.TimeStampB;
      real_T* lastTime = &testcompz_DWork.Derivative_RWORK.TimeStampA;
      real_T* lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeA;
      if (timeStampA != rtInf) {
        if (timeStampB == rtInf) {
          lastTime = &testcompz_DWork.Derivative_RWORK.TimeStampB;
          lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeB;
        } else if (timeStampA >= timeStampB) {
          lastTime = &testcompz_DWork.Derivative_RWORK.TimeStampB;
          lastU = &testcompz_DWork.Derivative_RWORK.LastUAtTimeB;
        }
      }

      *lastTime = testcompz_M->Timing.t[0];
      *lastU++ = testcompz_B.SineWave;
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
  if (!(++testcompz_M->Timing.clockTick0)) {
    ++testcompz_M->Timing.clockTickH0;
  }

  testcompz_M->Timing.t[0] = testcompz_M->Timing.clockTick0 *
    testcompz_M->Timing.stepSize0 + testcompz_M->Timing.clockTickH0 *
    testcompz_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++testcompz_M->Timing.clockTick1)) {
      ++testcompz_M->Timing.clockTickH1;
    }

    testcompz_M->Timing.t[1] = testcompz_M->Timing.clockTick1 *
      testcompz_M->Timing.stepSize1 + testcompz_M->Timing.clockTickH1 *
      testcompz_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void testcompz_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)testcompz_M, 0,
                sizeof(RT_MODEL_testcompz));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&testcompz_M->solverInfo,
                          &testcompz_M->Timing.simTimeStep);
    rtsiSetTPtr(&testcompz_M->solverInfo, &rtmGetTPtr(testcompz_M));
    rtsiSetStepSizePtr(&testcompz_M->solverInfo, &testcompz_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&testcompz_M->solverInfo, (&rtmGetErrorStatus
      (testcompz_M)));
    rtsiSetRTModelPtr(&testcompz_M->solverInfo, testcompz_M);
  }

  rtsiSetSimTimeStep(&testcompz_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&testcompz_M->solverInfo,"FixedStepDiscrete");
  testcompz_M->solverInfoPtr = (&testcompz_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = testcompz_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    testcompz_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    testcompz_M->Timing.sampleTimes = (&testcompz_M->Timing.sampleTimesArray[0]);
    testcompz_M->Timing.offsetTimes = (&testcompz_M->Timing.offsetTimesArray[0]);

    /* task periods */
    testcompz_M->Timing.sampleTimes[0] = (0.0);
    testcompz_M->Timing.sampleTimes[1] = (0.000244140625);

    /* task offsets */
    testcompz_M->Timing.offsetTimes[0] = (0.0);
    testcompz_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(testcompz_M, &testcompz_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = testcompz_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    testcompz_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(testcompz_M, 100.0);
  testcompz_M->Timing.stepSize0 = 0.000244140625;
  testcompz_M->Timing.stepSize1 = 0.000244140625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    testcompz_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(testcompz_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(testcompz_M->rtwLogInfo, (NULL));
    rtliSetLogT(testcompz_M->rtwLogInfo, "tout");
    rtliSetLogX(testcompz_M->rtwLogInfo, "");
    rtliSetLogXFinal(testcompz_M->rtwLogInfo, "");
    rtliSetSigLog(testcompz_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(testcompz_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(testcompz_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(testcompz_M->rtwLogInfo, 0);
    rtliSetLogDecimation(testcompz_M->rtwLogInfo, 1);
    rtliSetLogY(testcompz_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(testcompz_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(testcompz_M->rtwLogInfo, (NULL));
  }

  /* external mode info */
  testcompz_M->Sizes.checksums[0] = (953550385U);
  testcompz_M->Sizes.checksums[1] = (3388217574U);
  testcompz_M->Sizes.checksums[2] = (159927853U);
  testcompz_M->Sizes.checksums[3] = (1272090489U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    testcompz_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&testcompz_DWork.Controller_SubsysRanBC;
    rteiSetModelMappingInfoPtr(testcompz_M->extModeInfo,
      &testcompz_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(testcompz_M->extModeInfo, testcompz_M->Sizes.checksums);
    rteiSetTPtr(testcompz_M->extModeInfo, rtmGetTPtr(testcompz_M));
  }

  testcompz_M->solverInfoPtr = (&testcompz_M->solverInfo);
  testcompz_M->Timing.stepSize = (0.000244140625);
  rtsiSetFixedStepSize(&testcompz_M->solverInfo, 0.000244140625);
  rtsiSetSolverMode(&testcompz_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  testcompz_M->ModelData.blockIO = ((void *) &testcompz_B);
  (void) memset(((void *) &testcompz_B), 0,
                sizeof(BlockIO_testcompz));

  {
    testcompz_B.UnitDelay1[0] = 0.0;
    testcompz_B.UnitDelay1[1] = 0.0;
    testcompz_B.UnitDelay1[2] = 0.0;
    testcompz_B.UnitDelay = 0.0;
    testcompz_B.RobotArm_sfcn_o1 = 0.0;
    testcompz_B.RobotArm_sfcn_o2[0] = 0.0;
    testcompz_B.RobotArm_sfcn_o2[1] = 0.0;
    testcompz_B.RobotArm_sfcn_o2[2] = 0.0;
    testcompz_B.RobotArm_sfcn_o4 = 0.0;
    testcompz_B.SineWave = 0.0;
    testcompz_B.Sum3 = 0.0;
    testcompz_B.Dctpd = 0.0;
    testcompz_B.Dct2lowpass = 0.0;
    testcompz_B.Sum4 = 0.0;
    testcompz_B.Sum5 = 0.0;
    testcompz_B.Sum6 = 0.0;
    testcompz_B.ReferenceSolenoid = 0.0;
    testcompz_B.SFunction[0] = 0.0;
    testcompz_B.SFunction[1] = 0.0;
    testcompz_B.SFunction[2] = 0.0;
    testcompz_B.SFunction[3] = 0.0;
  }

  /* parameters */
  testcompz_M->ModelData.defaultParam = ((real_T *)&testcompz_P);

  /* states (dwork) */
  testcompz_M->Work.dwork = ((void *) &testcompz_DWork);
  (void) memset((void *)&testcompz_DWork, 0,
                sizeof(D_Work_testcompz));
  testcompz_DWork.UnitDelay1_DSTATE[0] = 0.0;
  testcompz_DWork.UnitDelay1_DSTATE[1] = 0.0;
  testcompz_DWork.UnitDelay1_DSTATE[2] = 0.0;
  testcompz_DWork.UnitDelay_DSTATE = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK0 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK1 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK2 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK3 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK4 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK5 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK6 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK7 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK8 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK9 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK10 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK11 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK12 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK13 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK14 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK15 = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK16[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK16[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK17[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK17[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK18[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK18[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK18[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK18[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK19[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK19[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK19[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK19[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK20[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK20[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK21[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK21[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK21[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK21[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK22[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK22[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK22[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK22[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK23[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK23[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK24[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK24[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK25[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK25[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK25[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK25[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK26[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK26[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK26[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK26[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK27[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK27[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK28[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK28[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK28[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK28[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK29[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK29[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK29[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK29[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK30[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK30[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK31[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK31[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK32[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK32[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK32[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK32[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK33[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK33[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK33[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK33[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK34[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK34[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK35[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK35[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK35[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK35[3] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK36[0] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK36[1] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK36[2] = 0.0;
  testcompz_DWork.RobotArm_sfcn_DWORK36[3] = 0.0;
  testcompz_DWork.Dctpd_RWORK[0] = 0.0;
  testcompz_DWork.Dctpd_RWORK[1] = 0.0;
  testcompz_DWork.Dct2lowpass_RWORK[0] = 0.0;
  testcompz_DWork.Dct2lowpass_RWORK[1] = 0.0;
  testcompz_DWork.Dct2lowpass_RWORK[2] = 0.0;
  testcompz_DWork.Dct2lowpass_RWORK[3] = 0.0;
  testcompz_DWork.Derivative_RWORK.TimeStampA = 0.0;
  testcompz_DWork.Derivative_RWORK.LastUAtTimeA = 0.0;
  testcompz_DWork.Derivative_RWORK.TimeStampB = 0.0;
  testcompz_DWork.Derivative_RWORK.LastUAtTimeB = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    testcompz_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    RTWSfcnInfo *sfcnInfo = &testcompz_M->NonInlinedSFcns.sfcnInfo;
    testcompz_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(testcompz_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &testcompz_M->Sizes.numSampTimes);
    testcompz_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(testcompz_M)[0]);
    testcompz_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(testcompz_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,testcompz_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(testcompz_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(testcompz_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(testcompz_M));
    rtssSetStepSizePtr(sfcnInfo, &testcompz_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(testcompz_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &testcompz_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &testcompz_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &testcompz_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &testcompz_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &testcompz_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &testcompz_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &testcompz_M->solverInfoPtr);
  }

  testcompz_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)&testcompz_M->NonInlinedSFcns.childSFunctions[0], 0,
                  4*sizeof(SimStruct));
    testcompz_M->childSfunctions =
      (&testcompz_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    testcompz_M->childSfunctions[0] =
      (&testcompz_M->NonInlinedSFcns.childSFunctions[0]);
    testcompz_M->childSfunctions[1] =
      (&testcompz_M->NonInlinedSFcns.childSFunctions[1]);
    testcompz_M->childSfunctions[2] =
      (&testcompz_M->NonInlinedSFcns.childSFunctions[2]);
    testcompz_M->childSfunctions[3] =
      (&testcompz_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: testcompz/<S5>/Dctpd (dpd) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = testcompz_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = testcompz_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = testcompz_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &testcompz_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, testcompz_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &testcompz_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &testcompz_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &testcompz_M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &testcompz_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &testcompz_B.Sum3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &testcompz_B.Dctpd));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts, "testcompz/Controller/Controller Z/Dctpd");
      ssSetRTModel(rts,testcompz_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &testcompz_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)testcompz_P.Dctpd_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)testcompz_P.Dctpd_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)testcompz_P.Dctpd_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &testcompz_DWork.Dctpd_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &testcompz_DWork.Dctpd_RWORK[0]);
      }

      /* registration */
      dpd(rts);
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

    /* Level2 S-Function Block: testcompz/<S5>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = testcompz_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = testcompz_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = testcompz_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &testcompz_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, testcompz_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &testcompz_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &testcompz_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &testcompz_M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &testcompz_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &testcompz_B.Dctpd;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &testcompz_B.Dct2lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts, "testcompz/Controller/Controller Z/Dct2lowpass");
      ssSetRTModel(rts,testcompz_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &testcompz_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)testcompz_P.Dct2lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)testcompz_P.Dct2lowpass_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)testcompz_P.Dct2lowpass_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &testcompz_DWork.Dct2lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &testcompz_DWork.Dct2lowpass_RWORK[0]);
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

    /* Level2 S-Function Block: testcompz/<S6>/S-Function (sf_rt_scope) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = testcompz_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = testcompz_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = testcompz_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &testcompz_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, testcompz_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &testcompz_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &testcompz_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &testcompz_M->NonInlinedSFcns.statesInfo2[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &testcompz_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[1] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[2] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[3] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[4] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[5] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[6] = (real_T*)&testcompz_RGND;
          sfcnUPtrs[7] = (real_T*)&testcompz_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((real_T *) testcompz_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "testcompz/Controller/RTScope/S-Function");
      ssSetRTModel(rts,testcompz_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &testcompz_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)testcompz_P.SFunction_P1_Size);
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

    /* RTW Generated Level2 S-Function Block: testcompz/<S2>/Robot Arm_sfcn (Robot_sf) */
    {
      SimStruct *rts = testcompz_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = testcompz_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = testcompz_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = testcompz_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*2);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*2);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &testcompz_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, testcompz_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &testcompz_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &testcompz_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &testcompz_M->NonInlinedSFcns.statesInfo2[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &testcompz_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = testcompz_B.UnitDelay1;
          sfcnUPtrs[1] = &testcompz_B.UnitDelay1[1];
          sfcnUPtrs[2] = &testcompz_B.UnitDelay1[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &testcompz_M->NonInlinedSFcns.Sfcn3.UPtrs1;
          sfcnUPtrs[0] = &testcompz_B.UnitDelay;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &testcompz_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 4);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &testcompz_B.RobotArm_sfcn_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 3);
          ssSetOutputPortSignal(rts, 1, ((real_T *) testcompz_B.RobotArm_sfcn_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 3);
          ssSetOutputPortSignal(rts, 2, ((boolean_T *)
            testcompz_B.RobotArm_sfcn_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &testcompz_B.RobotArm_sfcn_o4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Robot Arm_sfcn");
      ssSetPath(rts, "testcompz/Robot Arm/Robot Arm_sfcn");
      ssSetRTModel(rts,testcompz_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &testcompz_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 56);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &testcompz_DWork.RobotArm_sfcn_DWORK0);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &testcompz_DWork.RobotArm_sfcn_DWORK1);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &testcompz_DWork.RobotArm_sfcn_DWORK2);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 1);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &testcompz_DWork.RobotArm_sfcn_DWORK3);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 1);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &testcompz_DWork.RobotArm_sfcn_DWORK4);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 1);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &testcompz_DWork.RobotArm_sfcn_DWORK5);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 1);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &testcompz_DWork.RobotArm_sfcn_DWORK6);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWorkUsedAsDState(rts, 7, 1);
        ssSetDWork(rts, 7, &testcompz_DWork.RobotArm_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWorkUsedAsDState(rts, 8, 1);
        ssSetDWork(rts, 8, &testcompz_DWork.RobotArm_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWorkUsedAsDState(rts, 9, 1);
        ssSetDWork(rts, 9, &testcompz_DWork.RobotArm_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &testcompz_DWork.RobotArm_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &testcompz_DWork.RobotArm_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &testcompz_DWork.RobotArm_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &testcompz_DWork.RobotArm_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &testcompz_DWork.RobotArm_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &testcompz_DWork.RobotArm_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 2);
        ssSetDWorkDataType(rts, 16,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &testcompz_DWork.RobotArm_sfcn_DWORK16[0]);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 2);
        ssSetDWorkDataType(rts, 17,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &testcompz_DWork.RobotArm_sfcn_DWORK17[0]);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 4);
        ssSetDWorkDataType(rts, 18,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &testcompz_DWork.RobotArm_sfcn_DWORK18[0]);

        /* DWORK19 */
        ssSetDWorkWidth(rts, 19, 4);
        ssSetDWorkDataType(rts, 19,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 19, 0);
        ssSetDWork(rts, 19, &testcompz_DWork.RobotArm_sfcn_DWORK19[0]);

        /* DWORK20 */
        ssSetDWorkWidth(rts, 20, 2);
        ssSetDWorkDataType(rts, 20,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 20, 0);
        ssSetDWork(rts, 20, &testcompz_DWork.RobotArm_sfcn_DWORK20[0]);

        /* DWORK21 */
        ssSetDWorkWidth(rts, 21, 4);
        ssSetDWorkDataType(rts, 21,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 21, 0);
        ssSetDWork(rts, 21, &testcompz_DWork.RobotArm_sfcn_DWORK21[0]);

        /* DWORK22 */
        ssSetDWorkWidth(rts, 22, 4);
        ssSetDWorkDataType(rts, 22,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 22, 0);
        ssSetDWork(rts, 22, &testcompz_DWork.RobotArm_sfcn_DWORK22[0]);

        /* DWORK23 */
        ssSetDWorkWidth(rts, 23, 2);
        ssSetDWorkDataType(rts, 23,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 23, 0);
        ssSetDWork(rts, 23, &testcompz_DWork.RobotArm_sfcn_DWORK23[0]);

        /* DWORK24 */
        ssSetDWorkWidth(rts, 24, 2);
        ssSetDWorkDataType(rts, 24,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 24, 0);
        ssSetDWork(rts, 24, &testcompz_DWork.RobotArm_sfcn_DWORK24[0]);

        /* DWORK25 */
        ssSetDWorkWidth(rts, 25, 4);
        ssSetDWorkDataType(rts, 25,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 25, 0);
        ssSetDWork(rts, 25, &testcompz_DWork.RobotArm_sfcn_DWORK25[0]);

        /* DWORK26 */
        ssSetDWorkWidth(rts, 26, 4);
        ssSetDWorkDataType(rts, 26,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 26, 0);
        ssSetDWork(rts, 26, &testcompz_DWork.RobotArm_sfcn_DWORK26[0]);

        /* DWORK27 */
        ssSetDWorkWidth(rts, 27, 2);
        ssSetDWorkDataType(rts, 27,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 27, 0);
        ssSetDWork(rts, 27, &testcompz_DWork.RobotArm_sfcn_DWORK27[0]);

        /* DWORK28 */
        ssSetDWorkWidth(rts, 28, 4);
        ssSetDWorkDataType(rts, 28,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 28, 0);
        ssSetDWork(rts, 28, &testcompz_DWork.RobotArm_sfcn_DWORK28[0]);

        /* DWORK29 */
        ssSetDWorkWidth(rts, 29, 4);
        ssSetDWorkDataType(rts, 29,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 29, 0);
        ssSetDWork(rts, 29, &testcompz_DWork.RobotArm_sfcn_DWORK29[0]);

        /* DWORK30 */
        ssSetDWorkWidth(rts, 30, 2);
        ssSetDWorkDataType(rts, 30,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 30, 0);
        ssSetDWork(rts, 30, &testcompz_DWork.RobotArm_sfcn_DWORK30[0]);

        /* DWORK31 */
        ssSetDWorkWidth(rts, 31, 2);
        ssSetDWorkDataType(rts, 31,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 31, 0);
        ssSetDWork(rts, 31, &testcompz_DWork.RobotArm_sfcn_DWORK31[0]);

        /* DWORK32 */
        ssSetDWorkWidth(rts, 32, 4);
        ssSetDWorkDataType(rts, 32,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 32, 0);
        ssSetDWork(rts, 32, &testcompz_DWork.RobotArm_sfcn_DWORK32[0]);

        /* DWORK33 */
        ssSetDWorkWidth(rts, 33, 4);
        ssSetDWorkDataType(rts, 33,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 33, 0);
        ssSetDWork(rts, 33, &testcompz_DWork.RobotArm_sfcn_DWORK33[0]);

        /* DWORK34 */
        ssSetDWorkWidth(rts, 34, 2);
        ssSetDWorkDataType(rts, 34,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 34, 0);
        ssSetDWork(rts, 34, &testcompz_DWork.RobotArm_sfcn_DWORK34[0]);

        /* DWORK35 */
        ssSetDWorkWidth(rts, 35, 4);
        ssSetDWorkDataType(rts, 35,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 35, 0);
        ssSetDWork(rts, 35, &testcompz_DWork.RobotArm_sfcn_DWORK35[0]);

        /* DWORK36 */
        ssSetDWorkWidth(rts, 36, 4);
        ssSetDWorkDataType(rts, 36,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 36, 0);
        ssSetDWork(rts, 36, &testcompz_DWork.RobotArm_sfcn_DWORK36[0]);

        /* DWORK37 */
        ssSetDWorkWidth(rts, 37, 1);
        ssSetDWorkDataType(rts, 37,SS_INT32);
        ssSetDWorkComplexSignal(rts, 37, 0);
        ssSetDWork(rts, 37, &testcompz_DWork.RobotArm_sfcn_DWORK37);

        /* DWORK38 */
        ssSetDWorkWidth(rts, 38, 1);
        ssSetDWorkDataType(rts, 38,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 38, 0);
        ssSetDWork(rts, 38, &testcompz_DWork.RobotArm_sfcn_DWORK38);

        /* DWORK39 */
        ssSetDWorkWidth(rts, 39, 1);
        ssSetDWorkDataType(rts, 39,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 39, 0);
        ssSetDWork(rts, 39, &testcompz_DWork.RobotArm_sfcn_DWORK39);

        /* DWORK40 */
        ssSetDWorkWidth(rts, 40, 1);
        ssSetDWorkDataType(rts, 40,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 40, 0);
        ssSetDWork(rts, 40, &testcompz_DWork.RobotArm_sfcn_DWORK40);

        /* DWORK41 */
        ssSetDWorkWidth(rts, 41, 1);
        ssSetDWorkDataType(rts, 41,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 41, 0);
        ssSetDWork(rts, 41, &testcompz_DWork.RobotArm_sfcn_DWORK41);

        /* DWORK42 */
        ssSetDWorkWidth(rts, 42, 1);
        ssSetDWorkDataType(rts, 42,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 42, 0);
        ssSetDWork(rts, 42, &testcompz_DWork.RobotArm_sfcn_DWORK42);

        /* DWORK43 */
        ssSetDWorkWidth(rts, 43, 1);
        ssSetDWorkDataType(rts, 43,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 43, 0);
        ssSetDWork(rts, 43, &testcompz_DWork.RobotArm_sfcn_DWORK43);

        /* DWORK44 */
        ssSetDWorkWidth(rts, 44, 1);
        ssSetDWorkDataType(rts, 44,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 44, 0);
        ssSetDWork(rts, 44, &testcompz_DWork.RobotArm_sfcn_DWORK44);

        /* DWORK45 */
        ssSetDWorkWidth(rts, 45, 1);
        ssSetDWorkDataType(rts, 45,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 45, 0);
        ssSetDWork(rts, 45, &testcompz_DWork.RobotArm_sfcn_DWORK45);

        /* DWORK46 */
        ssSetDWorkWidth(rts, 46, 1);
        ssSetDWorkDataType(rts, 46,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 46, 0);
        ssSetDWork(rts, 46, &testcompz_DWork.RobotArm_sfcn_DWORK46);

        /* DWORK47 */
        ssSetDWorkWidth(rts, 47, 1);
        ssSetDWorkDataType(rts, 47,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 47, 0);
        ssSetDWork(rts, 47, &testcompz_DWork.RobotArm_sfcn_DWORK47);

        /* DWORK48 */
        ssSetDWorkWidth(rts, 48, 1);
        ssSetDWorkDataType(rts, 48,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 48, 0);
        ssSetDWork(rts, 48, &testcompz_DWork.RobotArm_sfcn_DWORK48);

        /* DWORK49 */
        ssSetDWorkWidth(rts, 49, 1);
        ssSetDWorkDataType(rts, 49,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 49, 0);
        ssSetDWork(rts, 49, &testcompz_DWork.RobotArm_sfcn_DWORK49);

        /* DWORK50 */
        ssSetDWorkWidth(rts, 50, 1);
        ssSetDWorkDataType(rts, 50,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 50, 0);
        ssSetDWork(rts, 50, &testcompz_DWork.RobotArm_sfcn_DWORK50);

        /* DWORK51 */
        ssSetDWorkWidth(rts, 51, 1);
        ssSetDWorkDataType(rts, 51,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 51, 0);
        ssSetDWork(rts, 51, &testcompz_DWork.RobotArm_sfcn_DWORK51);

        /* DWORK52 */
        ssSetDWorkWidth(rts, 52, 1);
        ssSetDWorkDataType(rts, 52,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 52, 0);
        ssSetDWork(rts, 52, &testcompz_DWork.RobotArm_sfcn_DWORK52);

        /* DWORK53 */
        ssSetDWorkWidth(rts, 53, 1);
        ssSetDWorkDataType(rts, 53,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 53, 0);
        ssSetDWork(rts, 53, &testcompz_DWork.RobotArm_sfcn_DWORK53);

        /* DWORK54 */
        ssSetDWorkWidth(rts, 54, 1);
        ssSetDWorkDataType(rts, 54,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 54, 0);
        ssSetDWork(rts, 54, &testcompz_DWork.RobotArm_sfcn_DWORK54);

        /* DWORK55 */
        ssSetDWorkWidth(rts, 55, 1);
        ssSetDWorkDataType(rts, 55,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 55, 0);
        ssSetDWork(rts, 55, &testcompz_DWork.RobotArm_sfcn_DWORK55);
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
void testcompz_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */

  /* Terminate for ToFile: '<S1>/To File1' */
  {
    FILE *fp = (FILE *) testcompz_DWork.ToFile1_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "friccomp3.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(testcompz_M, "Error closing MAT-file friccomp3.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(testcompz_M, "Error reopening MAT-file friccomp3.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 4, testcompz_DWork.ToFile1_IWORK.Count,
           "signals")) {
        rtmSetErrorStatus(testcompz_M,
                          "Error writing header for signals to MAT-file friccomp3.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(testcompz_M, "Error closing MAT-file friccomp3.mat");
        return;
      }

      testcompz_DWork.ToFile1_PWORK.FilePtr = (NULL);
    }
  }

  /* Level2 S-Function Block: '<S5>/Dctpd' (dpd) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  testcompz_output(tid);
}

void MdlUpdate(int_T tid)
{
  testcompz_update(tid);
}

void MdlInitializeSizes(void)
{
  testcompz_M->Sizes.numContStates = (0);/* Number of continuous states */
  testcompz_M->Sizes.numY = (0);       /* Number of model outputs */
  testcompz_M->Sizes.numU = (0);       /* Number of model inputs */
  testcompz_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  testcompz_M->Sizes.numSampTimes = (2);/* Number of sample times */
  testcompz_M->Sizes.numBlocks = (32); /* Number of blocks */
  testcompz_M->Sizes.numBlockIO = (15);/* Number of block outputs */
  testcompz_M->Sizes.numBlockPrms = (39);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  testcompz_DWork.UnitDelay1_DSTATE[0] = testcompz_P.UnitDelay1_X0;
  testcompz_DWork.UnitDelay1_DSTATE[1] = testcompz_P.UnitDelay1_X0;
  testcompz_DWork.UnitDelay1_DSTATE[2] = testcompz_P.UnitDelay1_X0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  testcompz_DWork.UnitDelay_DSTATE = testcompz_P.UnitDelay_X0;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

void MdlStart(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  /* Start for ToFile: '<S1>/To File1' */
  {
    char fileName[509] = "friccomp3.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(testcompz_M, "Error creating .mat file friccomp3.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,4,0,"signals")) {
      rtmSetErrorStatus(testcompz_M,
                        "Error writing mat file header to file friccomp3.mat");
      return;
    }

    testcompz_DWork.ToFile1_IWORK.Count = 0;
    testcompz_DWork.ToFile1_IWORK.Decimation = -1;
    testcompz_DWork.ToFile1_PWORK.FilePtr = fp;
  }

  /* Level2 S-Function Block: '<S5>/Dctpd' (dpd) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Derivative: '<S1>/Derivative' */
  testcompz_DWork.Derivative_RWORK.TimeStampA = rtInf;
  testcompz_DWork.Derivative_RWORK.TimeStampB = rtInf;

  /* VirtualOutportStart for Outport: '<S1>/Solenoid' */
  testcompz_B.ReferenceSolenoid = testcompz_P.Solenoid_Y0;

  /* End of Start for SubSystem: '<Root>/Controller' */
  MdlInitialize();

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = testcompz_M->childSfunctions[3];
    sfcnRTWGeneratedEnable(rts);
  }
}

void MdlTerminate(void)
{
  testcompz_terminate();
}

RT_MODEL_testcompz *testcompz(void)
{
  testcompz_initialize(1);
  return testcompz_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
