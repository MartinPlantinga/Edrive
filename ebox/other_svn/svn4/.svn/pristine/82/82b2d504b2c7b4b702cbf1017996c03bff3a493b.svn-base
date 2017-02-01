/*
 * printer_supervisor01_sid.h
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

/* statically allocated instance data for model: printer_supervisor01 */
{
  extern Parameters_printer_supervisor01 printer_supervisor01_DefaultParameters;

  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static BlockIO_printer_supervisor01 sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(BlockIO_printer_supervisor01));
    }

    /* model parameters */
    ssSetLocalDefaultParam(rts, (real_T *)
      &printer_supervisor01_DefaultParameters);

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
        static SimStruct childSFunctions[8];
        static SimStruct *childSFunctionPtrs[8];
        (void) memset((void *)&childSFunctions[0], 0,
                      sizeof(childSFunctions));
        _ssSetSFunctions(rts, &childSFunctionPtrs[0]);

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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[3];
            _ssSetNumInputPorts(childS, 3);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[2];
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
              static real_T const *sfcnUPtrs[2];
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
              static real_T const *sfcnUPtrs[8];
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

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[3];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->ec_Ebox_P1_Size);

#endif

          }

          /* registration */
          ec_Ebox(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Gain1;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))
                            ->Dctintegrator2_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 5))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 5))[0]);
          }

          /* registration */
          dweakint(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Dctintegrator2;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))
                            ->Dctintegrator3_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 6))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 6))[0]);
          }

          /* registration */
          dweakint(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Dctintegrator3;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->Dctleadlag4_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 7))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 7))[0]);
          }

          /* registration */
          dleadlag(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Dctleadlag4;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->Dct2lowpass5_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 8))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 8))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Gain1_b;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
            ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
            _ssSetNumOutputPorts(childS, 1);

            /* port 0 */
            {
              _ssSetOutputPortNumDimensions(childS, 0, 1);
              ssSetOutputPortWidth(childS, 0, 1);
              _ssSetOutputPortSignal(childS, 0, ((real_T *)
                &((BlockIO_printer_supervisor01 *) ssGetLocalBlockIO(rts))
                ->Dctpd2));
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->Dctpd2_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 9))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 9))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->Dctpd2;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->Dct2lowpass3_P1_Size);

#endif

          }

          /* work vectors */
          _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 10))[0]);

          {
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 10))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            ssSetStatesInfo2(childS, &statesInfo2);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((BlockIO_printer_supervisor01 *)
                ssGetLocalBlockIO(rts))->resetEnc;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

            _ssSetSFcnParam(childS, 0, (mxArray*)
                            ((Parameters_printer_supervisor01 *)
                             ssGetLocalDefaultParam(rts))->ResetEncoder_P1_Size);

#endif

          }

          /* registration */
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
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
  }
}
