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

#define LED_OFF  1
#define LED_ON   0

CY_ISR_PROTO(ISR_Function);

uint8 ISR_Flag =0;
uint16 compare_value;
uint8 Up =1;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    Timer_1_Start();
    Timer1_ISR_StartEx(ISR_Function);
    PWM_1_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if(ISR_Flag==1){
            ISR_Flag=0;

            PWM_1_WriteCompare(compare_value);
            
            if(Up==1)
            {
                compare_value+=10;
                if(compare_value==1000)
                    Up=0;
            }else{
                compare_value-=10;
                if(compare_value==0)
                    Up=1;
            }
            
          
            
            //LED_B_Write(~LED_B_Read());
        }        
    }
}

CY_ISR(ISR_Function)
{
    ISR_Flag=1;
    Timer_1_ClearInterrupt(Timer_1_INTR_MASK_TC);
}

/* [] END OF FILE */
