/*
 * printer_supervisor01_mid.h
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
 *
 * SOURCES: printer_supervisor01_sf.c
 */

#include "simstruc.h"
#include "printer_supervisor01_sf.h"
#if defined(MATLAB_MEX_FILE) || defined(RT_MALLOC)

static int_T RegNumInputPorts(SimStruct *S, int_T nInputPorts)
{
  _ssSetNumInputPorts(S,nInputPorts);
  return TRUE;
}

static int_T RegNumOutputPorts(SimStruct *S, int_T nOutputPorts)
{
  _ssSetNumOutputPorts(S,nOutputPorts);
  return TRUE;
}

static int_T FcnSetErrorStatus(const SimStruct *S, DTypeId arg2)
{
  static char msg[256];
  if (strlen(ssGetModelName(S)) < 128) {
    sprintf(msg,
            "S-function %s does not have a tlc file. It cannot use macros that access regDataType field in simstruct.",
            ssGetModelName(S));
  } else {
    sprintf(msg,
            "A S-function does not have a tlc file. It cannot use macros that access regDataType field in simstruct.");
  }

  ssSetErrorStatus(S, msg);
  return 0;
}

#endif

/* Instance data for model: printer_supervisor01 */
void *printer_supervisor01_malloc(SimStruct *rts)
{
  /* Local SimStruct for the generated S-Function */
  LocalS *lS = (LocalS *) malloc(sizeof(LocalS));
  rt_VALIDATE_MEMORY(rts,lS);
  (void) memset((char *) lS, 0,
                sizeof(LocalS));
  ssSetUserData(rts, lS);

  /* block I/O */
  {
    void *b = malloc(sizeof(BlockIO_printer_supervisor01));
    rt_VALIDATE_MEMORY(rts,b);
    ssSetLocalBlockIO(rts, b);
    (void) memset(b, 0,
                  sizeof(BlockIO_printer_supervisor01));
  }

  /* model parameters */
  ssSetLocalDefaultParam(rts, (real_T *) &printer_supervisor01_DefaultParameters);

  /* model checksums */
  ssSetChecksumVal(rts, 0, 1371173687U);
  ssSetChecksumVal(rts, 1, 588258355U);
  ssSetChecksumVal(rts, 2, 477773540U);
  ssSetChecksumVal(rts, 3, 2506603355U);

  {
    /* child S-Function registration */
    ssSetNumSFunctions(rts, 8);

    /* register each child */
    {
      SimStruct *childSFunctions;
      SimStruct **childSFunctionPtrs;
      childSFunctions = (SimStruct *) malloc(8 * sizeof(SimStruct));
      rt_VALIDATE_MEMORY(rts,childSFunctions);
      (void) memset((void *)childSFunctions, 0,
                    8*sizeof(SimStruct));
      childSFunctionPtrs = (SimStruct **) malloc(8 * sizeof(SimStruct *));
      rt_VALIDATE_MEMORY(rts,childSFunctionPtrs);
      _ssSetSFunctions(rts, childSFunctionPtrs);

      {
        int_T i;
        for (i = 0; i < 8; i++) {
          _ssSetSFunction(rts, i, &childSFunctions[i]);
        }
      }

      /* Level2 S-Function Block: printer_supervisor01/<S5>/ec_Ebox (ec_Ebox) */
      {
        SimStruct *childS = ssGetSFunction(rts, 0);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(3, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 3);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Saturation;
            sfcnUPtrs[1] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Constant;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 2);
          }

          /* port 1 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Constant;
            sfcnUPtrs[1] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Constant;
            _ssSetInputPortSignalPtrs(childS, 1, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 1, 1);
            ssSetInputPortWidth(childS, 1, 2);
          }

          /* port 2 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(8 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[1] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[2] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[3] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[4] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[5] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[6] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            sfcnUPtrs[7] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->homeControllerEnabled;
            _ssSetInputPortSignalPtrs(childS, 2, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 2, 1);
            ssSetInputPortWidth(childS, 2, 8);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(3, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 3);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 2);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->ec_Ebox_o1));
          }

          /* port 1 */
          {
            _ssSetOutputPortNumDimensions(childS, 1, 1);
            ssSetOutputPortWidth(childS, 1, 2);
            _ssSetOutputPortSignal(childS, 1, ((real_T *)
              ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->ec_Ebox_o2));
          }

          /* port 2 */
          {
            _ssSetOutputPortNumDimensions(childS, 2, 1);
            ssSetOutputPortWidth(childS, 2, 8);
            _ssSetOutputPortSignal(childS, 2, ((real_T *)
              ((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->ec_Ebox_o3));
          }
        }

        /* path info */
        _ssSetModelName(childS, "ec_Ebox");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/E//BOX I-O/E-box/ec_Ebox");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &((Parameters_printer_supervisor01 *)
                                ssGetLocalDefaultParam(rts))->ec_Ebox_P1;
            for (i=0;i< 1 * 1;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->ec_Ebox_P1_Size);

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_Ebox");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        ec_Ebox(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 0;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetInputPortConnected(childS, 1, 1);
        _ssSetInputPortConnected(childS, 2, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 1, 1);
        _ssSetOutputPortConnected(childS, 2, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);
        _ssSetOutputPortBeingMerged(childS, 1, 0);
        _ssSetOutputPortBeingMerged(childS, 2, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
        _ssSetInputPortBufferDstPort(childS, 1, -1);
        _ssSetInputPortBufferDstPort(childS, 2, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S6>/Dctintegrator2 (dweakint) */
      {
        SimStruct *childS = ssGetSFunction(rts, 1);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Gain1;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->Dctintegrator2));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dweakint");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/Homing controller/Dctintegrator2");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,2,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dctintegrator2_P1;
            for (i=0;i< 1 * 2;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dctintegrator2_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 5))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 5))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dweakint");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dweakint(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S6>/Dctintegrator3 (dweakint) */
      {
        SimStruct *childS = ssGetSFunction(rts, 2);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Dctintegrator2;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->Dctintegrator3));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dweakint");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/Homing controller/Dctintegrator3");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,2,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dctintegrator3_P1;
            for (i=0;i< 1 * 2;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dctintegrator3_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 6))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 6))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dweakint");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dweakint(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S6>/Dctleadlag4 (dleadlag) */
      {
        SimStruct *childS = ssGetSFunction(rts, 3);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Dctintegrator3;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->Dctleadlag4));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dleadlag");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/Homing controller/Dctleadlag4");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dctleadlag4_P1;
            for (i=0;i< 1 * 3;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dctleadlag4_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 7))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 7))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dleadlag");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dleadlag(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S6>/Dct2lowpass5 (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 4);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Dctleadlag4;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->Dct2lowpass5));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/Homing controller/Dct2lowpass5");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dct2lowpass5_P1;
            for (i=0;i< 1 * 3;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dct2lowpass5_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 8))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 8))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dlowpass2(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S9>/Dctpd2 (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 5);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Gain1_b;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))->Dctpd2));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/airbagController/Dctpd2");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dctpd2_P1;
            for (i=0;i< 1 * 3;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dctpd2_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 9))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 9))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dpd(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S9>/Dct2lowpass3 (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 6);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->Dctpd2;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          rt_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *)
              &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
              ->Dct2lowpass3));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/airbagController/Dct2lowpass3");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) ((Parameters_printer_supervisor01 *)
                               ssGetLocalDefaultParam(rts))->Dct2lowpass3_P1;
            for (i=0;i< 1 * 3;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->Dct2lowpass3_P1_Size);

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 10))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          rt_VALIDATE_MEMORY(rts,dWorkRecord);
          rt_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 10))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        dlowpass2(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.00048828125);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 1;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: printer_supervisor01/<S3>/Reset Encoder (ec_EboxResetEnc) */
      {
        SimStruct *childS = ssGetSFunction(rts, 7);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        rt_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        rt_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          rt_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          rt_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          rt_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          rt_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          rt_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            rt_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
              ssGetLocalBlockIO(rts))->resetEnc;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* path info */
        _ssSetModelName(childS, "ec_EboxResetEnc");
        _ssSetPath(childS,
                   "printer_supervisor01/Printer/Supervisory Controller/Reset Encoder");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          rt_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &((Parameters_printer_supervisor01 *)
                                ssGetLocalDefaultParam(rts))->ResetEncoder_P1;
            for (i=0;i< 1 * 1;i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          _ssSetSFcnParam(childS, 0, (mxArray*)((Parameters_printer_supervisor01
            *) ssGetLocalDefaultParam(rts))->ResetEncoder_P1_Size);

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_EboxResetEnc");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        ec_EboxResetEnc(childS);
        sfcnInitializeSizes(childS);

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = 0;

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }
    }
  }

  return (NULL);
}
