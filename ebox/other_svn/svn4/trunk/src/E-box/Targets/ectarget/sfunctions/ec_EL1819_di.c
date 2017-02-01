/*
        ec_EL1819_di

        (c) Rene' van de Molengraft, 2007
        (c) Arthur Ketels , 2013

        Outputs: y[0] - y[15]  = di channels 0 - 15

        Parameter: link id
*/

#define S_FUNCTION_NAME ec_EL1819_di
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         0
#define NOUTPUTS        16
#define NPARAMS         1

#define LINK_ID         ssGetSFcnParam(S,0)

#include <math.h>

/*====================*
 * S-function methods *
 *====================*/

static void mdlInitializeSizes(SimStruct *S)
{
	ssSetNumSFcnParams(S,NPARAMS);

	ssSetNumContStates(S,NSTATES);
	ssSetNumDiscStates(S,0);

	if (!ssSetNumInputPorts(S,0)) return;
/*	ssSetInputPortWidth(S,0,NINPUTS);
	ssSetInputPortDirectFeedThrough(S,0,0); */

	if (!ssSetNumOutputPorts(S,1)) return;
	ssSetOutputPortWidth(S,0,NOUTPUTS);

	ssSetNumSampleTimes(S,1);
	ssSetNumRWork(S,0);
	ssSetNumIWork(S,0);
	ssSetNumPWork(S,0);
	ssSetNumModes(S,0);
	ssSetNumNonsampledZCs(S,0);
}





static void mdlInitializeSampleTimes(SimStruct *S)
{
	ssSetSampleTime(S,0,CONTINUOUS_SAMPLE_TIME);
	ssSetOffsetTime(S,0,0.0);
}





static void mdlOutputs(SimStruct *S, int_T tid)
{
        real_T *y=ssGetOutputPortRealSignal(S,0);

#ifndef MATLAB_MEX_FILE
        int_T ichan, ilink;

        ilink=(int_T) (*(mxGetPr(LINK_ID)));

/*      read di channels */
	for (ichan=0; ichan<NOUTPUTS; ichan++) {
    	    ec_EL1819_di_read_chan(&y[ichan], ichan, ilink);
	}
#endif
}





static void mdlTerminate(SimStruct *S)
{
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
