/*
 * PerformanceXRZ.h
 *
 * Code generation for model "PerformanceXRZ.mdl".
 *
 * Model version              : 1.943
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Mar 21 19:34:07 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_PerformanceXRZ_h_
#define RTW_HEADER_PerformanceXRZ_h_
#ifndef PerformanceXRZ_COMMON_INCLUDES_
# define PerformanceXRZ_COMMON_INCLUDES_
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rt_sfcn_helper.h"
#endif                                 /* PerformanceXRZ_COMMON_INCLUDES_ */

#include "PerformanceXRZ_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define PerformanceXRZ_rtModel         RT_MODEL_PerformanceXRZ

/* Block signals (auto storage) */
typedef struct {
  real_T UnitDelay1[3];                /* '<Root>/Unit Delay1' */
  real_T UnitDelay;                    /* '<Root>/Unit Delay' */
  real_T RobotArm_sfcn_o1;             /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_o2[3];          /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_o4;             /* '<S2>/Robot Arm_sfcn' */
  real_T SFunction[3];                 /* '<S10>/S-Function' */
  real_T GainR;                        /* '<S5>/GainR' */
  real_T DctintegratorR;               /* '<S5>/DctintegratorR' */
  real_T DctleadlagR;                  /* '<S5>/DctleadlagR' */
  real_T Dct2lowpassR;                 /* '<S5>/Dct2lowpassR' */
  real_T GainR_g;                      /* '<S3>/GainR' */
  real_T DctintegratorR_a;             /* '<S3>/DctintegratorR' */
  real_T DctleadlagR_i;                /* '<S3>/DctleadlagR' */
  real_T Dct2lowpassR_p;               /* '<S3>/Dct2lowpassR' */
  real_T GainR_h;                      /* '<S4>/GainR' */
  real_T DctintegratorR_e;             /* '<S4>/DctintegratorR' */
  real_T DctleadlagR_ig;               /* '<S4>/DctleadlagR' */
  real_T Dct2lowpassR_n;               /* '<S4>/Dct2lowpassR' */
  real_T Speed;                        /* '<S6>/Speed' */
  real_T Speed_m;                      /* '<S7>/Speed' */
  real_T Speed_f;                      /* '<S8>/Speed' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T ReferenceSolenoid;            /* '<S1>/Reference Solenoid' */
  real_T SFunction_o[4];               /* '<S9>/S-Function' */
  boolean_T RobotArm_sfcn_o3[3];       /* '<S2>/Robot Arm_sfcn' */
} BlockIO_PerformanceXRZ;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE[3];         /* '<Root>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  real_T RobotArm_sfcn_DWORK0;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK1;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK2;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK3;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK4;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK5;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK6;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK7;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK8;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK9;         /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK10;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK11;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK12;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK13;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK14;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK15;        /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK16[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK17[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK18[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK19[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK20[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK21[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK22[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK23[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK24[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK25[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK26[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK27[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK28[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK29[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK30[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK31[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK32[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK33[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK34[2];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK35[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T RobotArm_sfcn_DWORK36[4];     /* '<S2>/Robot Arm_sfcn' */
  real_T SFunction_RWORK[50];          /* '<S10>/S-Function' */
  real_T DctintegratorR_RWORK[2];      /* '<S5>/DctintegratorR' */
  real_T DctleadlagR_RWORK[2];         /* '<S5>/DctleadlagR' */
  real_T Dct2lowpassR_RWORK[4];        /* '<S5>/Dct2lowpassR' */
  real_T DctintegratorR_RWORK_o[2];    /* '<S3>/DctintegratorR' */
  real_T DctleadlagR_RWORK_m[2];       /* '<S3>/DctleadlagR' */
  real_T Dct2lowpassR_RWORK_h[4];      /* '<S3>/Dct2lowpassR' */
  real_T DctintegratorR_RWORK_i[2];    /* '<S4>/DctintegratorR' */
  real_T DctleadlagR_RWORK_n[2];       /* '<S4>/DctleadlagR' */
  real_T Dct2lowpassR_RWORK_n[4];      /* '<S4>/Dct2lowpassR' */
  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Speed_RWORK;                       /* '<S6>/Speed' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Acceleration_RWORK;                /* '<S6>/Acceleration' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Speed_RWORK_f;                     /* '<S7>/Speed' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Acceleration_RWORK_d;              /* '<S7>/Acceleration' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Speed_RWORK_m;                     /* '<S8>/Speed' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Acceleration_RWORK_j;              /* '<S8>/Acceleration' */

  struct {
    void *FilePtr;
  } ToFile1_PWORK;                     /* '<S1>/To File1' */

  int32_T RobotArm_sfcn_DWORK37;       /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK38;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK39;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK40;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK41;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK42;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK43;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK44;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK45;      /* '<S2>/Robot Arm_sfcn' */
  uint32_T RobotArm_sfcn_DWORK46;      /* '<S2>/Robot Arm_sfcn' */
  struct {
    int_T Count;
    int_T Decimation;
  } ToFile1_IWORK;                     /* '<S1>/To File1' */

  uint16_T RobotArm_sfcn_DWORK47;      /* '<S2>/Robot Arm_sfcn' */
  uint16_T RobotArm_sfcn_DWORK48;      /* '<S2>/Robot Arm_sfcn' */
  uint16_T RobotArm_sfcn_DWORK49;      /* '<S2>/Robot Arm_sfcn' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  uint8_T RobotArm_sfcn_DWORK50;       /* '<S2>/Robot Arm_sfcn' */
  uint8_T RobotArm_sfcn_DWORK51;       /* '<S2>/Robot Arm_sfcn' */
  uint8_T RobotArm_sfcn_DWORK52;       /* '<S2>/Robot Arm_sfcn' */
  uint8_T RobotArm_sfcn_DWORK53;       /* '<S2>/Robot Arm_sfcn' */
  uint8_T RobotArm_sfcn_DWORK54;       /* '<S2>/Robot Arm_sfcn' */
  uint8_T RobotArm_sfcn_DWORK55;       /* '<S2>/Robot Arm_sfcn' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
} D_Work_PerformanceXRZ;

/* Backward compatible GRT Identifiers */
#define rtB                            PerformanceXRZ_B
#define BlockIO                        BlockIO_PerformanceXRZ
#define rtXdot                         PerformanceXRZ_Xdot
#define StateDerivatives               StateDerivatives_PerformanceXRZ
#define tXdis                          PerformanceXRZ_Xdis
#define StateDisabled                  StateDisabled_PerformanceXRZ
#define rtP                            PerformanceXRZ_P
#define Parameters                     Parameters_PerformanceXRZ
#define rtDWork                        PerformanceXRZ_DWork
#define D_Work                         D_Work_PerformanceXRZ

/* Parameters (auto storage) */
struct Parameters_PerformanceXRZ_ {
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  real_T Switch_Threshold_g;           /* Expression: 0
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T Solenoid_Y0;                  /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S10>/S-Function'
                                        */
  real_T SFunction_P1[6];              /* Expression: ref_part
                                        * Referenced by: '<S10>/S-Function'
                                        */
  real_T GainR_Gain;                   /* Expression: 110
                                        * Referenced by: '<S5>/GainR'
                                        */
  real_T DctintegratorR_P1_Size[2];    /* Computed Parameter: DctintegratorR_P1_Size
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */
  real_T DctintegratorR_P1;            /* Expression: f_num
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2_Size[2];    /* Computed Parameter: DctintegratorR_P2_Size
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2;            /* Expression: 0.001
                                        * Referenced by: '<S5>/DctintegratorR'
                                        */
  real_T DctleadlagR_P1_Size[2];       /* Computed Parameter: DctleadlagR_P1_Size
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T DctleadlagR_P1;               /* Expression: f_num
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2_Size[2];       /* Computed Parameter: DctleadlagR_P2_Size
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2;               /* Expression: f_den
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3_Size[2];       /* Computed Parameter: DctleadlagR_P3_Size
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3;               /* Expression: 0.001
                                        * Referenced by: '<S5>/DctleadlagR'
                                        */
  real_T Dct2lowpassR_P1_Size[2];      /* Computed Parameter: Dct2lowpassR_P1_Size
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P1;              /* Expression: f_den
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2_Size[2];      /* Computed Parameter: Dct2lowpassR_P2_Size
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2;              /* Expression: b_den
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3_Size[2];      /* Computed Parameter: Dct2lowpassR_P3_Size
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3;              /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct2lowpassR'
                                        */
  real_T GainR_Gain_f;                 /* Expression: 60
                                        * Referenced by: '<S3>/GainR'
                                        */
  real_T DctintegratorR_P1_Size_a[2];  /* Computed Parameter: DctintegratorR_P1_Size_a
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */
  real_T DctintegratorR_P1_d;          /* Expression: f_num
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2_Size_l[2];  /* Computed Parameter: DctintegratorR_P2_Size_l
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2_b;          /* Expression: 0.001
                                        * Referenced by: '<S3>/DctintegratorR'
                                        */
  real_T DctleadlagR_P1_Size_k[2];     /* Computed Parameter: DctleadlagR_P1_Size_k
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T DctleadlagR_P1_l;             /* Expression: f_num
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2_Size_o[2];     /* Computed Parameter: DctleadlagR_P2_Size_o
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2_k;             /* Expression: f_den
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3_Size_b[2];     /* Computed Parameter: DctleadlagR_P3_Size_b
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3_g;             /* Expression: 0.001
                                        * Referenced by: '<S3>/DctleadlagR'
                                        */
  real_T Dct2lowpassR_P1_Size_p[2];    /* Computed Parameter: Dct2lowpassR_P1_Size_p
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P1_o;            /* Expression: f_den
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2_Size_o[2];    /* Computed Parameter: Dct2lowpassR_P2_Size_o
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2_c;            /* Expression: b_den
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3_Size_o[2];    /* Computed Parameter: Dct2lowpassR_P3_Size_o
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3_e;            /* Expression: 0.001
                                        * Referenced by: '<S3>/Dct2lowpassR'
                                        */
  real_T GainR_Gain_h;                 /* Expression: 50
                                        * Referenced by: '<S4>/GainR'
                                        */
  real_T DctintegratorR_P1_Size_o[2];  /* Computed Parameter: DctintegratorR_P1_Size_o
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */
  real_T DctintegratorR_P1_a;          /* Expression: f_num
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2_Size_d[2];  /* Computed Parameter: DctintegratorR_P2_Size_d
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */
  real_T DctintegratorR_P2_i;          /* Expression: 0.001
                                        * Referenced by: '<S4>/DctintegratorR'
                                        */
  real_T DctleadlagR_P1_Size_kw[2];    /* Computed Parameter: DctleadlagR_P1_Size_kw
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T DctleadlagR_P1_g;             /* Expression: f_num
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2_Size_c[2];     /* Computed Parameter: DctleadlagR_P2_Size_c
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T DctleadlagR_P2_ka;            /* Expression: f_den
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3_Size_f[2];     /* Computed Parameter: DctleadlagR_P3_Size_f
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T DctleadlagR_P3_b;             /* Expression: 0.001
                                        * Referenced by: '<S4>/DctleadlagR'
                                        */
  real_T Dct2lowpassR_P1_Size_o[2];    /* Computed Parameter: Dct2lowpassR_P1_Size_o
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P1_b;            /* Expression: f_den
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2_Size_i[2];    /* Computed Parameter: Dct2lowpassR_P2_Size_i
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P2_j;            /* Expression: b_den
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3_Size_g[2];    /* Computed Parameter: Dct2lowpassR_P3_Size_g
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T Dct2lowpassR_P3_i;            /* Expression: 0.001
                                        * Referenced by: '<S4>/Dct2lowpassR'
                                        */
  real_T ReferenceSolenoid1_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid1'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.003
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T fcpos_Value;                  /* Expression: 0.2
                                        * Referenced by: '<S6>/fc pos'
                                        */
  real_T fcneg_Value;                  /* Expression: -0.17
                                        * Referenced by: '<S6>/fc neg'
                                        */
  real_T speed0_Value;                 /* Expression: 0
                                        * Referenced by: '<S6>/speed0'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 0.0015
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 0.001
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T fcpos_Value_g;                /* Expression: 0.15
                                        * Referenced by: '<S7>/fc pos'
                                        */
  real_T fcneg_Value_k;                /* Expression: -0.3
                                        * Referenced by: '<S7>/fc neg'
                                        */
  real_T speed0_Value_i;               /* Expression: 0
                                        * Referenced by: '<S7>/speed0'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.002
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 0.001
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T fcpos_Value_b;                /* Expression: 0.2
                                        * Referenced by: '<S8>/fc pos'
                                        */
  real_T fcneg_Value_i;                /* Expression: -0.35
                                        * Referenced by: '<S8>/fc neg'
                                        */
  real_T speed0_Value_b;               /* Expression: 0
                                        * Referenced by: '<S8>/speed0'
                                        */
  real_T gravitationconstant_Value;    /* Expression: 0.25
                                        * Referenced by: '<S8>/gravitation constant'
                                        */
  real_T ReferenceSolenoid_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */
  real_T SFunction_P1_Size_g[2];       /* Computed Parameter: SFunction_P1_Size_g
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P1_a;               /* Expression: 4096
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T UnitDelay1_X0;                /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  real_T UnitDelay_X0;                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_PerformanceXRZ {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[12];
    SimStruct *childSFunctionPtrs[12];
    struct _ssBlkInfo2 blkInfo2[12];
    struct _ssSFcnModelMethods2 methods2[12];
    struct _ssSFcnModelMethods3 methods3[12];
    struct _ssStatesInfo2 statesInfo2[12];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[8];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[2];
      time_T sfcnOffset[2];
      int_T sfcnTsMap[2];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[3];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[4];
      struct _ssDWorkRecord dWork[56];
      struct _ssDWorkAuxRecord dWorkAux[56];
    } Sfcn11;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_PerformanceXRZ PerformanceXRZ_P;

/* Block signals (auto storage) */
extern BlockIO_PerformanceXRZ PerformanceXRZ_B;

/* Block states (auto storage) */
extern D_Work_PerformanceXRZ PerformanceXRZ_DWork;

/* External data declarations for dependent source files */
extern const real_T PerformanceXRZ_RGND;/* real_T ground */
extern const real_T PerformanceXRZ_RGND;/* real_T ground */

/* Model entry point functions */
extern void PerformanceXRZ_initialize(boolean_T firstTime);
extern void PerformanceXRZ_output(int_T tid);
extern void PerformanceXRZ_update(int_T tid);
extern void PerformanceXRZ_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_PerformanceXRZ *const PerformanceXRZ_M;

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
 * '<Root>' : 'PerformanceXRZ'
 * '<S1>'   : 'PerformanceXRZ/Controller'
 * '<S2>'   : 'PerformanceXRZ/Robot Arm'
 * '<S3>'   : 'PerformanceXRZ/Controller/Controller R'
 * '<S4>'   : 'PerformanceXRZ/Controller/Controller X'
 * '<S5>'   : 'PerformanceXRZ/Controller/Controller Z'
 * '<S6>'   : 'PerformanceXRZ/Controller/Feedforward R'
 * '<S7>'   : 'PerformanceXRZ/Controller/Feedforward X'
 * '<S8>'   : 'PerformanceXRZ/Controller/Feedforward Z'
 * '<S9>'   : 'PerformanceXRZ/Controller/RTScope'
 * '<S10>'  : 'PerformanceXRZ/Controller/Subsystem'
 * '<S11>'  : 'PerformanceXRZ/Robot Arm/__InputSSForSFun__'
 * '<S12>'  : 'PerformanceXRZ/Robot Arm/__OutputSSForSFun__'
 */
#endif                                 /* RTW_HEADER_PerformanceXRZ_h_ */
