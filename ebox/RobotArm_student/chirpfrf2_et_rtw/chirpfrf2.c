/*
 * chirpfrf2.c
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
#include "chirpfrf2_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf
#endif

#include "Robot_sf.h"

const real_T chirpfrf2_RGND = 0.0;     /* real_T ground */

/* Block signals (auto storage) */
BlockIO_chirpfrf2 chirpfrf2_B;

/* Block states (auto storage) */
D_Work_chirpfrf2 chirpfrf2_DWork;

/* Real-time model */
RT_MODEL_chirpfrf2 chirpfrf2_M_;
RT_MODEL_chirpfrf2 *const chirpfrf2_M = &chirpfrf2_M_;

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
void chirpfrf2_output(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_TmpSignalConversionAtToFile[3];
  real_T rtb_Gain1;

  /* Reset subsysRan breadcrumbs */
  srClearBC(chirpfrf2_DWork.Controller_SubsysRanBC);

  /* UnitDelay: '<Root>/Unit Delay1' */
  /* RTWBLOCK_START_COMMENT */
  chirpfrf2_B.UnitDelay1[0] = chirpfrf2_DWork.UnitDelay1_DSTATE[0];
  chirpfrf2_B.UnitDelay1[1] = chirpfrf2_DWork.UnitDelay1_DSTATE[1];
  chirpfrf2_B.UnitDelay1[2] = chirpfrf2_DWork.UnitDelay1_DSTATE[2];

  /* UnitDelay: '<Root>/Unit Delay' */
  chirpfrf2_B.UnitDelay = chirpfrf2_DWork.UnitDelay_DSTATE;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (chirpfrf2_B.RobotArm_sfcn_o1 > 0.0) {
    if (!chirpfrf2_DWork.Controller_MODE) {
      chirpfrf2_DWork.Controller_MODE = TRUE;
    }
  } else {
    if (chirpfrf2_DWork.Controller_MODE) {
      chirpfrf2_DWork.Controller_MODE = FALSE;
    }
  }

  if (chirpfrf2_DWork.Controller_MODE) {
    /* DSP System Toolbox Chirp (sdspchirp) - '<S1>/Chirp' */
    /* Unidirectional Logarithmic  */
    {
      real_T *y = &rtb_Gain1;
      real_T instantPhase = 0.0;
      instantPhase = (chirpfrf2_DWork.Chirp_SWEEP_DIRECTION == 0) ?
        chirpfrf2_DWork.Chirp_BETA*chirpfrf2_P.Chirp_INITIAL_FREQ*(pow
        (chirpfrf2_DWork.Chirp_MIN_FREQ,chirpfrf2_DWork.Chirp_CURRENT_STEP /
         chirpfrf2_P.Chirp_TIME_TARGET) - 1.0) :
        chirpfrf2_DWork.Chirp_PERIOD_THETA - chirpfrf2_DWork.Chirp_BETA*
        chirpfrf2_P.Chirp_INITIAL_FREQ*(pow(chirpfrf2_DWork.Chirp_MIN_FREQ,
        (chirpfrf2_P.Chirp_PERIOD_SWEEP-chirpfrf2_DWork.Chirp_CURRENT_STEP) /
        chirpfrf2_P.Chirp_TIME_TARGET) - 1.0);
      instantPhase -= (int_T)instantPhase;
      *y = cos(DSP_TWO_PI * (instantPhase + chirpfrf2_DWork.Chirp_ACC_PHASE) +
               chirpfrf2_P.Chirp_PHASE);
      chirpfrf2_DWork.Chirp_CURRENT_STEP += 0.000244140625;/* Go to next time step */
      if (chirpfrf2_DWork.Chirp_CURRENT_STEP > (chirpfrf2_P.Chirp_PERIOD_SWEEP +
           DBL_EPSILON)) {
        chirpfrf2_DWork.Chirp_CURRENT_STEP = chirpfrf2_DWork.Chirp_CURRENT_STEP
          - chirpfrf2_P.Chirp_PERIOD_SWEEP;
        chirpfrf2_DWork.Chirp_ACC_PHASE += instantPhase;
        while (chirpfrf2_DWork.Chirp_ACC_PHASE > 1.0) {
          chirpfrf2_DWork.Chirp_ACC_PHASE -= 1.0;
        }
      }
    }

    /* Gain: '<S1>/Gain1' */
    rtb_Gain1 *= chirpfrf2_P.Gain1_Gain;

    /* Sum: '<S1>/Sum2' incorporates:
     *  Constant: '<S1>/Reference R'
     */
    chirpfrf2_B.Sum2 = chirpfrf2_P.ReferenceR_Value -
      chirpfrf2_B.RobotArm_sfcn_o2[0];

    /* Sum: '<S1>/Sum4' incorporates:
     *  Gain: '<S1>/Gain'
     *  Signum: '<S1>/Sign'
     */
    chirpfrf2_B.Sum4 = (rtb_Gain1 < 0.0 ? -1.0 : rtb_Gain1 > 0.0 ? 1.0 :
                        rtb_Gain1 == 0.0 ? 0.0 : rtb_Gain1) *
      chirpfrf2_P.Gain_Gain + rtb_Gain1;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Gain: '<S3>/Gain'
     */
    chirpfrf2_B.Sum6 = chirpfrf2_P.Gain_Gain_g * chirpfrf2_B.Sum2 +
      chirpfrf2_B.Sum4;

    /* SignalConversion: '<S1>/TmpSignal ConversionAtTo File1Inport1' */
    rtb_TmpSignalConversionAtToFile[0] = rtb_Gain1;
    rtb_TmpSignalConversionAtToFile[1] = chirpfrf2_B.Sum2;
    rtb_TmpSignalConversionAtToFile[2] = chirpfrf2_B.Sum6;

    /* ToFile: '<S1>/To File1' */
    if (!(++chirpfrf2_DWork.ToFile1_IWORK.Decimation % 1) &&
        (chirpfrf2_DWork.ToFile1_IWORK.Count*4)+1 < 100000000 ) {
      FILE *fp = (FILE *) chirpfrf2_DWork.ToFile1_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[4];
        chirpfrf2_DWork.ToFile1_IWORK.Decimation = 0;
        u[0] = chirpfrf2_M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        if (fwrite(u, sizeof(real_T), 4, fp) != 4) {
          rtmSetErrorStatus(chirpfrf2_M, "Error writing to MAT-file chirp19.mat");
          return;
        }

        if (((++chirpfrf2_DWork.ToFile1_IWORK.Count)*4)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file chirp19.mat.\n");
        }
      }
    }

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedforward X'
     *  Constant: '<S1>/Reference X'
     *  Gain: '<S4>/Gain'
     *  Sum: '<S1>/Sum1'
     */
    chirpfrf2_B.Sum5 = (chirpfrf2_P.ReferenceX_Value -
                        chirpfrf2_B.RobotArm_sfcn_o2[1]) *
      chirpfrf2_P.Gain_Gain_n + chirpfrf2_P.FeedforwardX_Value;

    /* Sum: '<S1>/Sum7' incorporates:
     *  Constant: '<S1>/Feedforward Z'
     *  Constant: '<S1>/Reference Z'
     *  Gain: '<S5>/Gain'
     *  Sum: '<S1>/Sum3'
     */
    chirpfrf2_B.Sum7 = (chirpfrf2_P.ReferenceZ_Value -
                        chirpfrf2_B.RobotArm_sfcn_o2[2]) *
      chirpfrf2_P.Gain_Gain_nk + chirpfrf2_P.FeedforwardZ_Value;

    /* Constant: '<S1>/Reference Solenoid' */
    chirpfrf2_B.ReferenceSolenoid = chirpfrf2_P.ReferenceSolenoid_Value;

    /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
    {
      SimStruct *rts = chirpfrf2_M->childSfunctions[0];
      sfcnOutputs(rts, 0);
    }

    srUpdateBC(chirpfrf2_DWork.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void chirpfrf2_update(int_T tid)
{
  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  chirpfrf2_DWork.UnitDelay1_DSTATE[0] = chirpfrf2_B.Sum6;
  chirpfrf2_DWork.UnitDelay1_DSTATE[1] = chirpfrf2_B.Sum5;
  chirpfrf2_DWork.UnitDelay1_DSTATE[2] = chirpfrf2_B.Sum7;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  chirpfrf2_DWork.UnitDelay_DSTATE = chirpfrf2_B.ReferenceSolenoid;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++chirpfrf2_M->Timing.clockTick0)) {
    ++chirpfrf2_M->Timing.clockTickH0;
  }

  chirpfrf2_M->Timing.t[0] = chirpfrf2_M->Timing.clockTick0 *
    chirpfrf2_M->Timing.stepSize0 + chirpfrf2_M->Timing.clockTickH0 *
    chirpfrf2_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++chirpfrf2_M->Timing.clockTick1)) {
      ++chirpfrf2_M->Timing.clockTickH1;
    }

    chirpfrf2_M->Timing.t[1] = chirpfrf2_M->Timing.clockTick1 *
      chirpfrf2_M->Timing.stepSize1 + chirpfrf2_M->Timing.clockTickH1 *
      chirpfrf2_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void chirpfrf2_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)chirpfrf2_M, 0,
                sizeof(RT_MODEL_chirpfrf2));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&chirpfrf2_M->solverInfo,
                          &chirpfrf2_M->Timing.simTimeStep);
    rtsiSetTPtr(&chirpfrf2_M->solverInfo, &rtmGetTPtr(chirpfrf2_M));
    rtsiSetStepSizePtr(&chirpfrf2_M->solverInfo, &chirpfrf2_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&chirpfrf2_M->solverInfo, (&rtmGetErrorStatus
      (chirpfrf2_M)));
    rtsiSetRTModelPtr(&chirpfrf2_M->solverInfo, chirpfrf2_M);
  }

  rtsiSetSimTimeStep(&chirpfrf2_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&chirpfrf2_M->solverInfo,"FixedStepDiscrete");
  chirpfrf2_M->solverInfoPtr = (&chirpfrf2_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = chirpfrf2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    chirpfrf2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    chirpfrf2_M->Timing.sampleTimes = (&chirpfrf2_M->Timing.sampleTimesArray[0]);
    chirpfrf2_M->Timing.offsetTimes = (&chirpfrf2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    chirpfrf2_M->Timing.sampleTimes[0] = (0.0);
    chirpfrf2_M->Timing.sampleTimes[1] = (0.000244140625);

    /* task offsets */
    chirpfrf2_M->Timing.offsetTimes[0] = (0.0);
    chirpfrf2_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(chirpfrf2_M, &chirpfrf2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = chirpfrf2_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    chirpfrf2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(chirpfrf2_M, 100.0);
  chirpfrf2_M->Timing.stepSize0 = 0.000244140625;
  chirpfrf2_M->Timing.stepSize1 = 0.000244140625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    chirpfrf2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(chirpfrf2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(chirpfrf2_M->rtwLogInfo, (NULL));
    rtliSetLogT(chirpfrf2_M->rtwLogInfo, "tout");
    rtliSetLogX(chirpfrf2_M->rtwLogInfo, "");
    rtliSetLogXFinal(chirpfrf2_M->rtwLogInfo, "");
    rtliSetSigLog(chirpfrf2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(chirpfrf2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(chirpfrf2_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(chirpfrf2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(chirpfrf2_M->rtwLogInfo, 5);
    rtliSetLogY(chirpfrf2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(chirpfrf2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(chirpfrf2_M->rtwLogInfo, (NULL));
  }

  /* external mode info */
  chirpfrf2_M->Sizes.checksums[0] = (1016298548U);
  chirpfrf2_M->Sizes.checksums[1] = (1138613578U);
  chirpfrf2_M->Sizes.checksums[2] = (1705644819U);
  chirpfrf2_M->Sizes.checksums[3] = (3506329570U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    chirpfrf2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&chirpfrf2_DWork.Controller_SubsysRanBC;
    rteiSetModelMappingInfoPtr(chirpfrf2_M->extModeInfo,
      &chirpfrf2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(chirpfrf2_M->extModeInfo, chirpfrf2_M->Sizes.checksums);
    rteiSetTPtr(chirpfrf2_M->extModeInfo, rtmGetTPtr(chirpfrf2_M));
  }

  chirpfrf2_M->solverInfoPtr = (&chirpfrf2_M->solverInfo);
  chirpfrf2_M->Timing.stepSize = (0.000244140625);
  rtsiSetFixedStepSize(&chirpfrf2_M->solverInfo, 0.000244140625);
  rtsiSetSolverMode(&chirpfrf2_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  chirpfrf2_M->ModelData.blockIO = ((void *) &chirpfrf2_B);
  (void) memset(((void *) &chirpfrf2_B), 0,
                sizeof(BlockIO_chirpfrf2));

  {
    chirpfrf2_B.UnitDelay1[0] = 0.0;
    chirpfrf2_B.UnitDelay1[1] = 0.0;
    chirpfrf2_B.UnitDelay1[2] = 0.0;
    chirpfrf2_B.UnitDelay = 0.0;
    chirpfrf2_B.RobotArm_sfcn_o1 = 0.0;
    chirpfrf2_B.RobotArm_sfcn_o2[0] = 0.0;
    chirpfrf2_B.RobotArm_sfcn_o2[1] = 0.0;
    chirpfrf2_B.RobotArm_sfcn_o2[2] = 0.0;
    chirpfrf2_B.RobotArm_sfcn_o4 = 0.0;
    chirpfrf2_B.Sum2 = 0.0;
    chirpfrf2_B.Sum4 = 0.0;
    chirpfrf2_B.Sum6 = 0.0;
    chirpfrf2_B.Sum5 = 0.0;
    chirpfrf2_B.Sum7 = 0.0;
    chirpfrf2_B.ReferenceSolenoid = 0.0;
    chirpfrf2_B.SFunction[0] = 0.0;
    chirpfrf2_B.SFunction[1] = 0.0;
    chirpfrf2_B.SFunction[2] = 0.0;
    chirpfrf2_B.SFunction[3] = 0.0;
  }

  /* parameters */
  chirpfrf2_M->ModelData.defaultParam = ((real_T *)&chirpfrf2_P);

  /* states (dwork) */
  chirpfrf2_M->Work.dwork = ((void *) &chirpfrf2_DWork);
  (void) memset((void *)&chirpfrf2_DWork, 0,
                sizeof(D_Work_chirpfrf2));
  chirpfrf2_DWork.UnitDelay1_DSTATE[0] = 0.0;
  chirpfrf2_DWork.UnitDelay1_DSTATE[1] = 0.0;
  chirpfrf2_DWork.UnitDelay1_DSTATE[2] = 0.0;
  chirpfrf2_DWork.UnitDelay_DSTATE = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK0 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK1 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK2 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK3 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK4 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK5 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK6 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK7 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK8 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK9 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK10 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK11 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK12 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK13 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK14 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK15 = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK16[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK16[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK17[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK17[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK18[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK18[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK18[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK18[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK19[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK19[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK19[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK19[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK20[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK20[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK21[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK21[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK21[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK21[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK22[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK22[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK22[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK22[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK23[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK23[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK24[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK24[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK25[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK25[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK25[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK25[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK26[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK26[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK26[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK26[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK27[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK27[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK28[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK28[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK28[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK28[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK29[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK29[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK29[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK29[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK30[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK30[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK31[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK31[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK32[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK32[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK32[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK32[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK33[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK33[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK33[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK33[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK34[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK34[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK35[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK35[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK35[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK35[3] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK36[0] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK36[1] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK36[2] = 0.0;
  chirpfrf2_DWork.RobotArm_sfcn_DWORK36[3] = 0.0;
  chirpfrf2_DWork.Chirp_CURRENT_STEP = 0.0;
  chirpfrf2_DWork.Chirp_ACC_PHASE = 0.0;
  chirpfrf2_DWork.Chirp_BETA = 0.0;
  chirpfrf2_DWork.Chirp_MIN_FREQ = 0.0;
  chirpfrf2_DWork.Chirp_PERIOD_THETA = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    chirpfrf2_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    RTWSfcnInfo *sfcnInfo = &chirpfrf2_M->NonInlinedSFcns.sfcnInfo;
    chirpfrf2_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(chirpfrf2_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &chirpfrf2_M->Sizes.numSampTimes);
    chirpfrf2_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(chirpfrf2_M)[0]);
    chirpfrf2_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(chirpfrf2_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,chirpfrf2_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(chirpfrf2_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(chirpfrf2_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(chirpfrf2_M));
    rtssSetStepSizePtr(sfcnInfo, &chirpfrf2_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(chirpfrf2_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &chirpfrf2_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &chirpfrf2_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &chirpfrf2_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &chirpfrf2_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &chirpfrf2_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &chirpfrf2_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &chirpfrf2_M->solverInfoPtr);
  }

  chirpfrf2_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&chirpfrf2_M->NonInlinedSFcns.childSFunctions[0], 0,
                  2*sizeof(SimStruct));
    chirpfrf2_M->childSfunctions =
      (&chirpfrf2_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    chirpfrf2_M->childSfunctions[0] =
      (&chirpfrf2_M->NonInlinedSFcns.childSFunctions[0]);
    chirpfrf2_M->childSfunctions[1] =
      (&chirpfrf2_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: chirpfrf2/<S6>/S-Function (sf_rt_scope) */
    {
      SimStruct *rts = chirpfrf2_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = chirpfrf2_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = chirpfrf2_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = chirpfrf2_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &chirpfrf2_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, chirpfrf2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &chirpfrf2_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &chirpfrf2_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &chirpfrf2_M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &chirpfrf2_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &chirpfrf2_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[1] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[2] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[3] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[4] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[5] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[6] = (real_T*)&chirpfrf2_RGND;
          sfcnUPtrs[7] = (real_T*)&chirpfrf2_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &chirpfrf2_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((real_T *) chirpfrf2_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "chirpfrf2/Controller/RTScope/S-Function");
      ssSetRTModel(rts,chirpfrf2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &chirpfrf2_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)chirpfrf2_P.SFunction_P1_Size);
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

    /* RTW Generated Level2 S-Function Block: chirpfrf2/<S2>/Robot Arm_sfcn (Robot_sf) */
    {
      SimStruct *rts = chirpfrf2_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = chirpfrf2_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = chirpfrf2_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = chirpfrf2_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*2);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*2);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &chirpfrf2_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, chirpfrf2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &chirpfrf2_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &chirpfrf2_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &chirpfrf2_M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &chirpfrf2_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &chirpfrf2_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = chirpfrf2_B.UnitDelay1;
          sfcnUPtrs[1] = &chirpfrf2_B.UnitDelay1[1];
          sfcnUPtrs[2] = &chirpfrf2_B.UnitDelay1[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &chirpfrf2_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &chirpfrf2_B.UnitDelay;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &chirpfrf2_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 4);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &chirpfrf2_B.RobotArm_sfcn_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 3);
          ssSetOutputPortSignal(rts, 1, ((real_T *) chirpfrf2_B.RobotArm_sfcn_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 3);
          ssSetOutputPortSignal(rts, 2, ((boolean_T *)
            chirpfrf2_B.RobotArm_sfcn_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &chirpfrf2_B.RobotArm_sfcn_o4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Robot Arm_sfcn");
      ssSetPath(rts, "chirpfrf2/Robot Arm/Robot Arm_sfcn");
      ssSetRTModel(rts,chirpfrf2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &chirpfrf2_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &chirpfrf2_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 56);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &chirpfrf2_DWork.RobotArm_sfcn_DWORK0);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &chirpfrf2_DWork.RobotArm_sfcn_DWORK1);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &chirpfrf2_DWork.RobotArm_sfcn_DWORK2);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 1);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &chirpfrf2_DWork.RobotArm_sfcn_DWORK3);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 1);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &chirpfrf2_DWork.RobotArm_sfcn_DWORK4);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 1);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &chirpfrf2_DWork.RobotArm_sfcn_DWORK5);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 1);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &chirpfrf2_DWork.RobotArm_sfcn_DWORK6);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWorkUsedAsDState(rts, 7, 1);
        ssSetDWork(rts, 7, &chirpfrf2_DWork.RobotArm_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWorkUsedAsDState(rts, 8, 1);
        ssSetDWork(rts, 8, &chirpfrf2_DWork.RobotArm_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWorkUsedAsDState(rts, 9, 1);
        ssSetDWork(rts, 9, &chirpfrf2_DWork.RobotArm_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &chirpfrf2_DWork.RobotArm_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &chirpfrf2_DWork.RobotArm_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &chirpfrf2_DWork.RobotArm_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &chirpfrf2_DWork.RobotArm_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &chirpfrf2_DWork.RobotArm_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &chirpfrf2_DWork.RobotArm_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 2);
        ssSetDWorkDataType(rts, 16,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &chirpfrf2_DWork.RobotArm_sfcn_DWORK16[0]);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 2);
        ssSetDWorkDataType(rts, 17,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &chirpfrf2_DWork.RobotArm_sfcn_DWORK17[0]);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 4);
        ssSetDWorkDataType(rts, 18,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &chirpfrf2_DWork.RobotArm_sfcn_DWORK18[0]);

        /* DWORK19 */
        ssSetDWorkWidth(rts, 19, 4);
        ssSetDWorkDataType(rts, 19,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 19, 0);
        ssSetDWork(rts, 19, &chirpfrf2_DWork.RobotArm_sfcn_DWORK19[0]);

        /* DWORK20 */
        ssSetDWorkWidth(rts, 20, 2);
        ssSetDWorkDataType(rts, 20,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 20, 0);
        ssSetDWork(rts, 20, &chirpfrf2_DWork.RobotArm_sfcn_DWORK20[0]);

        /* DWORK21 */
        ssSetDWorkWidth(rts, 21, 4);
        ssSetDWorkDataType(rts, 21,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 21, 0);
        ssSetDWork(rts, 21, &chirpfrf2_DWork.RobotArm_sfcn_DWORK21[0]);

        /* DWORK22 */
        ssSetDWorkWidth(rts, 22, 4);
        ssSetDWorkDataType(rts, 22,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 22, 0);
        ssSetDWork(rts, 22, &chirpfrf2_DWork.RobotArm_sfcn_DWORK22[0]);

        /* DWORK23 */
        ssSetDWorkWidth(rts, 23, 2);
        ssSetDWorkDataType(rts, 23,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 23, 0);
        ssSetDWork(rts, 23, &chirpfrf2_DWork.RobotArm_sfcn_DWORK23[0]);

        /* DWORK24 */
        ssSetDWorkWidth(rts, 24, 2);
        ssSetDWorkDataType(rts, 24,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 24, 0);
        ssSetDWork(rts, 24, &chirpfrf2_DWork.RobotArm_sfcn_DWORK24[0]);

        /* DWORK25 */
        ssSetDWorkWidth(rts, 25, 4);
        ssSetDWorkDataType(rts, 25,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 25, 0);
        ssSetDWork(rts, 25, &chirpfrf2_DWork.RobotArm_sfcn_DWORK25[0]);

        /* DWORK26 */
        ssSetDWorkWidth(rts, 26, 4);
        ssSetDWorkDataType(rts, 26,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 26, 0);
        ssSetDWork(rts, 26, &chirpfrf2_DWork.RobotArm_sfcn_DWORK26[0]);

        /* DWORK27 */
        ssSetDWorkWidth(rts, 27, 2);
        ssSetDWorkDataType(rts, 27,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 27, 0);
        ssSetDWork(rts, 27, &chirpfrf2_DWork.RobotArm_sfcn_DWORK27[0]);

        /* DWORK28 */
        ssSetDWorkWidth(rts, 28, 4);
        ssSetDWorkDataType(rts, 28,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 28, 0);
        ssSetDWork(rts, 28, &chirpfrf2_DWork.RobotArm_sfcn_DWORK28[0]);

        /* DWORK29 */
        ssSetDWorkWidth(rts, 29, 4);
        ssSetDWorkDataType(rts, 29,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 29, 0);
        ssSetDWork(rts, 29, &chirpfrf2_DWork.RobotArm_sfcn_DWORK29[0]);

        /* DWORK30 */
        ssSetDWorkWidth(rts, 30, 2);
        ssSetDWorkDataType(rts, 30,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 30, 0);
        ssSetDWork(rts, 30, &chirpfrf2_DWork.RobotArm_sfcn_DWORK30[0]);

        /* DWORK31 */
        ssSetDWorkWidth(rts, 31, 2);
        ssSetDWorkDataType(rts, 31,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 31, 0);
        ssSetDWork(rts, 31, &chirpfrf2_DWork.RobotArm_sfcn_DWORK31[0]);

        /* DWORK32 */
        ssSetDWorkWidth(rts, 32, 4);
        ssSetDWorkDataType(rts, 32,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 32, 0);
        ssSetDWork(rts, 32, &chirpfrf2_DWork.RobotArm_sfcn_DWORK32[0]);

        /* DWORK33 */
        ssSetDWorkWidth(rts, 33, 4);
        ssSetDWorkDataType(rts, 33,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 33, 0);
        ssSetDWork(rts, 33, &chirpfrf2_DWork.RobotArm_sfcn_DWORK33[0]);

        /* DWORK34 */
        ssSetDWorkWidth(rts, 34, 2);
        ssSetDWorkDataType(rts, 34,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 34, 0);
        ssSetDWork(rts, 34, &chirpfrf2_DWork.RobotArm_sfcn_DWORK34[0]);

        /* DWORK35 */
        ssSetDWorkWidth(rts, 35, 4);
        ssSetDWorkDataType(rts, 35,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 35, 0);
        ssSetDWork(rts, 35, &chirpfrf2_DWork.RobotArm_sfcn_DWORK35[0]);

        /* DWORK36 */
        ssSetDWorkWidth(rts, 36, 4);
        ssSetDWorkDataType(rts, 36,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 36, 0);
        ssSetDWork(rts, 36, &chirpfrf2_DWork.RobotArm_sfcn_DWORK36[0]);

        /* DWORK37 */
        ssSetDWorkWidth(rts, 37, 1);
        ssSetDWorkDataType(rts, 37,SS_INT32);
        ssSetDWorkComplexSignal(rts, 37, 0);
        ssSetDWork(rts, 37, &chirpfrf2_DWork.RobotArm_sfcn_DWORK37);

        /* DWORK38 */
        ssSetDWorkWidth(rts, 38, 1);
        ssSetDWorkDataType(rts, 38,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 38, 0);
        ssSetDWork(rts, 38, &chirpfrf2_DWork.RobotArm_sfcn_DWORK38);

        /* DWORK39 */
        ssSetDWorkWidth(rts, 39, 1);
        ssSetDWorkDataType(rts, 39,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 39, 0);
        ssSetDWork(rts, 39, &chirpfrf2_DWork.RobotArm_sfcn_DWORK39);

        /* DWORK40 */
        ssSetDWorkWidth(rts, 40, 1);
        ssSetDWorkDataType(rts, 40,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 40, 0);
        ssSetDWork(rts, 40, &chirpfrf2_DWork.RobotArm_sfcn_DWORK40);

        /* DWORK41 */
        ssSetDWorkWidth(rts, 41, 1);
        ssSetDWorkDataType(rts, 41,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 41, 0);
        ssSetDWork(rts, 41, &chirpfrf2_DWork.RobotArm_sfcn_DWORK41);

        /* DWORK42 */
        ssSetDWorkWidth(rts, 42, 1);
        ssSetDWorkDataType(rts, 42,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 42, 0);
        ssSetDWork(rts, 42, &chirpfrf2_DWork.RobotArm_sfcn_DWORK42);

        /* DWORK43 */
        ssSetDWorkWidth(rts, 43, 1);
        ssSetDWorkDataType(rts, 43,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 43, 0);
        ssSetDWork(rts, 43, &chirpfrf2_DWork.RobotArm_sfcn_DWORK43);

        /* DWORK44 */
        ssSetDWorkWidth(rts, 44, 1);
        ssSetDWorkDataType(rts, 44,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 44, 0);
        ssSetDWork(rts, 44, &chirpfrf2_DWork.RobotArm_sfcn_DWORK44);

        /* DWORK45 */
        ssSetDWorkWidth(rts, 45, 1);
        ssSetDWorkDataType(rts, 45,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 45, 0);
        ssSetDWork(rts, 45, &chirpfrf2_DWork.RobotArm_sfcn_DWORK45);

        /* DWORK46 */
        ssSetDWorkWidth(rts, 46, 1);
        ssSetDWorkDataType(rts, 46,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 46, 0);
        ssSetDWork(rts, 46, &chirpfrf2_DWork.RobotArm_sfcn_DWORK46);

        /* DWORK47 */
        ssSetDWorkWidth(rts, 47, 1);
        ssSetDWorkDataType(rts, 47,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 47, 0);
        ssSetDWork(rts, 47, &chirpfrf2_DWork.RobotArm_sfcn_DWORK47);

        /* DWORK48 */
        ssSetDWorkWidth(rts, 48, 1);
        ssSetDWorkDataType(rts, 48,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 48, 0);
        ssSetDWork(rts, 48, &chirpfrf2_DWork.RobotArm_sfcn_DWORK48);

        /* DWORK49 */
        ssSetDWorkWidth(rts, 49, 1);
        ssSetDWorkDataType(rts, 49,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 49, 0);
        ssSetDWork(rts, 49, &chirpfrf2_DWork.RobotArm_sfcn_DWORK49);

        /* DWORK50 */
        ssSetDWorkWidth(rts, 50, 1);
        ssSetDWorkDataType(rts, 50,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 50, 0);
        ssSetDWork(rts, 50, &chirpfrf2_DWork.RobotArm_sfcn_DWORK50);

        /* DWORK51 */
        ssSetDWorkWidth(rts, 51, 1);
        ssSetDWorkDataType(rts, 51,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 51, 0);
        ssSetDWork(rts, 51, &chirpfrf2_DWork.RobotArm_sfcn_DWORK51);

        /* DWORK52 */
        ssSetDWorkWidth(rts, 52, 1);
        ssSetDWorkDataType(rts, 52,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 52, 0);
        ssSetDWork(rts, 52, &chirpfrf2_DWork.RobotArm_sfcn_DWORK52);

        /* DWORK53 */
        ssSetDWorkWidth(rts, 53, 1);
        ssSetDWorkDataType(rts, 53,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 53, 0);
        ssSetDWork(rts, 53, &chirpfrf2_DWork.RobotArm_sfcn_DWORK53);

        /* DWORK54 */
        ssSetDWorkWidth(rts, 54, 1);
        ssSetDWorkDataType(rts, 54,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 54, 0);
        ssSetDWork(rts, 54, &chirpfrf2_DWork.RobotArm_sfcn_DWORK54);

        /* DWORK55 */
        ssSetDWorkWidth(rts, 55, 1);
        ssSetDWorkDataType(rts, 55,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 55, 0);
        ssSetDWork(rts, 55, &chirpfrf2_DWork.RobotArm_sfcn_DWORK55);
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
void chirpfrf2_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */

  /* Terminate for ToFile: '<S1>/To File1' */
  {
    FILE *fp = (FILE *) chirpfrf2_DWork.ToFile1_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "chirp19.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(chirpfrf2_M, "Error closing MAT-file chirp19.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(chirpfrf2_M, "Error reopening MAT-file chirp19.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 4, chirpfrf2_DWork.ToFile1_IWORK.Count,
           "signals")) {
        rtmSetErrorStatus(chirpfrf2_M,
                          "Error writing header for signals to MAT-file chirp19.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(chirpfrf2_M, "Error closing MAT-file chirp19.mat");
        return;
      }

      chirpfrf2_DWork.ToFile1_PWORK.FilePtr = (NULL);
    }
  }

  /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  chirpfrf2_output(tid);
}

void MdlUpdate(int_T tid)
{
  chirpfrf2_update(tid);
}

void MdlInitializeSizes(void)
{
  chirpfrf2_M->Sizes.numContStates = (0);/* Number of continuous states */
  chirpfrf2_M->Sizes.numY = (0);       /* Number of model outputs */
  chirpfrf2_M->Sizes.numU = (0);       /* Number of model inputs */
  chirpfrf2_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  chirpfrf2_M->Sizes.numSampTimes = (2);/* Number of sample times */
  chirpfrf2_M->Sizes.numBlocks = (30); /* Number of blocks */
  chirpfrf2_M->Sizes.numBlockIO = (13);/* Number of block outputs */
  chirpfrf2_M->Sizes.numBlockPrms = (22);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  chirpfrf2_DWork.UnitDelay1_DSTATE[0] = chirpfrf2_P.UnitDelay1_X0;
  chirpfrf2_DWork.UnitDelay1_DSTATE[1] = chirpfrf2_P.UnitDelay1_X0;
  chirpfrf2_DWork.UnitDelay1_DSTATE[2] = chirpfrf2_P.UnitDelay1_X0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  chirpfrf2_DWork.UnitDelay_DSTATE = chirpfrf2_P.UnitDelay_X0;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

void MdlStart(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  /* Start for ToFile: '<S1>/To File1' */
  {
    char fileName[509] = "chirp19.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(chirpfrf2_M, "Error creating .mat file chirp19.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,4,0,"signals")) {
      rtmSetErrorStatus(chirpfrf2_M,
                        "Error writing mat file header to file chirp19.mat");
      return;
    }

    chirpfrf2_DWork.ToFile1_IWORK.Count = 0;
    chirpfrf2_DWork.ToFile1_IWORK.Decimation = -1;
    chirpfrf2_DWork.ToFile1_PWORK.FilePtr = fp;
  }

  /* DSP System Toolbox Chirp (sdspchirp) - '<S1>/Chirp' */
  /* Unidirectional Logarithmic  */
  if ((chirpfrf2_P.Chirp_FREQ_TARGET > chirpfrf2_P.Chirp_INITIAL_FREQ) &&
      (chirpfrf2_P.Chirp_INITIAL_FREQ > 0.0) ) {
    chirpfrf2_DWork.Chirp_MIN_FREQ = chirpfrf2_P.Chirp_FREQ_TARGET /
      chirpfrf2_P.Chirp_INITIAL_FREQ;
    chirpfrf2_DWork.Chirp_BETA = chirpfrf2_P.Chirp_TIME_TARGET / log
      (chirpfrf2_DWork.Chirp_MIN_FREQ);
  }

  chirpfrf2_DWork.Chirp_PERIOD_THETA = chirpfrf2_DWork.Chirp_BETA *
    chirpfrf2_P.Chirp_INITIAL_FREQ * (pow(chirpfrf2_DWork.Chirp_MIN_FREQ ,
    chirpfrf2_P.Chirp_PERIOD_SWEEP / chirpfrf2_P.Chirp_TIME_TARGET) - 1.0);
  chirpfrf2_DWork.Chirp_SWEEP_DIRECTION = (chirpfrf2_P.Chirp_FREQ_TARGET >
    chirpfrf2_P.Chirp_INITIAL_FREQ) ? 0 : 1;
  chirpfrf2_DWork.Chirp_ACC_PHASE = 0.0;
  chirpfrf2_DWork.Chirp_CURRENT_STEP = 0.0;

  /* VirtualOutportStart for Outport: '<S1>/Solenoid' */
  chirpfrf2_B.ReferenceSolenoid = chirpfrf2_P.Solenoid_Y0;

  /* End of Start for SubSystem: '<Root>/Controller' */
  MdlInitialize();

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = chirpfrf2_M->childSfunctions[1];
    sfcnRTWGeneratedEnable(rts);
  }
}

void MdlTerminate(void)
{
  chirpfrf2_terminate();
}

RT_MODEL_chirpfrf2 *chirpfrf2(void)
{
  chirpfrf2_initialize(1);
  return chirpfrf2_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
