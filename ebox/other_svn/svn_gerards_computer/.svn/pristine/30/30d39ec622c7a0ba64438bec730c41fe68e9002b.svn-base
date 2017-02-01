/* 	
 *  (c)  2013, Michael Ronde, Eindhoven University of Technology
 *       adapted from ec_Ebox.c
 *     
 *      Outputs: y1[0] - y1[1]  =   encoder channels 0,1    
 * 
 *      Parameter: link id
*/

#define S_FUNCTION_NAME ec_EL5152_enc
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         0
#define NOUTPUTS        1
#define NENC            2
#define NPARAMS         1

#define LINK_ID         ssGetSFcnParam(S,0)

#include <math.h>

/*====================*
 * S-function methods *
 *====================*/

static void mdlInitializeSizes(SimStruct *S)
{
	ssSetNumSFcnParams(S,NPARAMS);  /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        return; /* Parameter mismatch will be reported by Simulink */
    }

	ssSetNumContStates(S,NSTATES);
	ssSetNumDiscStates(S,0);

	if (!ssSetNumInputPorts(S,NINPUTS)) return;
	/*ssSetInputPortDirectFeedThrough(S,0,0);*/

	if (!ssSetNumOutputPorts(S,NOUTPUTS)) return;
	ssSetOutputPortWidth(S,0,NENC);
    
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
        real_T *yenc    =   ssGetOutputPortRealSignal(S,0);
               
#ifndef MATLAB_MEX_FILE
        int_T ichan, ilink, iret;

        ilink=(int_T) (*(mxGetPr(LINK_ID)));

        /* OUTPUTS */
        for (ichan=0; ichan<NENC; ichan++) {
            /* read encoder channels */
            ec_EL5152_enc_read_chan(&yenc[ichan], ichan, ilink);
        }        
#endif
}



static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
#endif
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
