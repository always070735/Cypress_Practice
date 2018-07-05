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

//UART
#include <stdio.h>
int _write(int file,char *ptr,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        UART_PutChar(*ptr++);
    }
    return(len);
}
asm(".global _printf_float");

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_Start();
    CapSense_ScanAllWidgets();
        
    UART_Start();
    
    /* Start EZI2C block */
    EZI2C_Start();
    
    /* Set up communication data buffer to CapSense data structure to be exposed to 
    I2C master at primary slave address request. */
    EZI2C_EzI2CSetBuffer1(sizeof(CapSense_dsRam), sizeof(CapSense_dsRam), 
                         (uint8 *)&CapSense_dsRam);
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Do this only when a scan is done */
        if(CapSense_NOT_BUSY == CapSense_IsBusy())
        {
              /* Process all widgets */
              CapSense_ProcessAllWidgets();
              /* Include Tuner */ 
              CapSense_RunTuner(); 
              /* Scan result verification */
              if (CapSense_IsAnyWidgetActive())
              {
                if(CapSense_IsWidgetActive(CapSense_LEFT_WDGT_ID))
                {
                    printf("Left is touch!\r\n");
                }
              }
              /* Start next scan */
              CapSense_ScanAllWidgets();
        }
    }
}

/* [] END OF FILE */
