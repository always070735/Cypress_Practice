/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

CY_ISR_PROTO(KEY_ISR_Function);
uint8 flag=0;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    KEY_ISR_StartEx(KEY_ISR_Function);

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if(flag==1)
        {            
            CyDelayUs(10);            
            if(SW2_Read()==1)
            {
                LED_R_Write(~LED_R_Read());
            }
            flag=0;
        }
    }
}

CY_ISR(KEY_ISR_Function)
{
    flag=1;
    SW2_ClearInterrupt();
}

/* [] END OF FILE */
