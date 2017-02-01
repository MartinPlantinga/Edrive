/* 
 *  Example configuration file for EL5002 module by setting COE parameters
 *  for details on configuration see BECKHOFF EL500x.chm
 *
 *  Chapter Commissioning, EL5002, Object description and parameters
 *
 *  M.J.C. Ronde, 2012/04/24
 *  S.R. Bogeman
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include </usr/src/soem/ethercattype.h>
#include </usr/src/soem/ethercatbase.h>
#include </usr/src/soem/ethercatmain.h>
#include "../../Libs/soem/ethercatcoe.h"
#include </usr/src/soem/ethercatconfig.h>
#include "../../Libs/ec/ec.h"


/* link_id and chan_id start at 0 */
#define SLAVENUMBER 3

int main(void)
{
        int iret,os;
        uint8 data=0,baudrate = 4,frametype=2;
        
        if ( (iret=ec_start("eth0"))!=EC_SUCCESS ) {
                printf("foutje %d.\n", iret);
                return -1;
        }
        
        os = sizeof(uint16);      
        
        /* Read SSI-baudrate*/
        ec_SDOread(3,0x8000,0x09,FALSE,&os,&data,EC_TIMEOUTRXM);
        
        printf("%d bytes read\n",os);
        printf("SSI-baudrate=%d\n",(int) data);
     	      
        ec_SDOwrite(SLAVENUMBER,0x8000,0x09,FALSE,os,&baudrate,EC_TIMEOUTRXM);
                      
        ec_SDOread(3,0x8000,0x09,FALSE,&os,&data,EC_TIMEOUTRXM);
        
        printf("%d bytes read\n",os);
        printf("SSI-baudrate=%d\n",(int) data);
        
        /* Read SSI-frametype */
        ec_SDOread(3,0x8000,0x0F,FALSE,&os,&data,EC_TIMEOUTRXM);
        
        printf("%d bytes read\n",os);
        printf("SSI-frametype=%d\n",(int) data);
     	      
        ec_SDOwrite(SLAVENUMBER,0x8000,0x0F,FALSE,os,&frametype,EC_TIMEOUTRXM);
                      
        ec_SDOread(3,0x8000,0x0F,FALSE,&os,&data,EC_TIMEOUTRXM);
        
        printf("%d bytes read\n",os);
        printf("SSI-frametype=%d\n",(int) data);
        

        ec_stop();

        return 0;
}

