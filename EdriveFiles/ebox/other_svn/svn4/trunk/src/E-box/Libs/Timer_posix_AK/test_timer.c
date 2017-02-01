#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "timer.h"

#define FREQ	25000
#define NSAMP	( (int) (FREQ*20+1) )
static FILE* fp;
static double tim[NSAMP];

int the_apc(int icnt,int imissed)
{      
	if (icnt<NSAMP) {
	    tim[icnt]=rtc_get_time();
		return 0;
	} else {
		return 1;
	}
}





int main(void)
{
	int i;

    fp=fopen("ttt","w");
    
	printf("NSAMP = %d\n\r",NSAMP);
  	
  	printf("test_timer - this test should take exactly %f minutes\n\r",((double) NSAMP-1)/(((double) FREQ)*60));
	rtc_timer(FREQ, the_apc, 1);

	printf("timer finished.\n\r");

    for (i=0;i<NSAMP;i++) {
		fprintf(fp,"%f\n",tim[i]);
    }
    
    fclose(fp);
	
	return 0;
}
