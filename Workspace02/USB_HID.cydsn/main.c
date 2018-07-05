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

uint8 usb_buffer[8];
8
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Start USBFS operation with 5-V operation. */
    USBFS_Start(0, USBFS_5V_OPERATION);

    /* Wait for device to enumerate */
    while (0u == USBFS_GetConfiguration())
    {
    }

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

void USBFS_EP_0_ISR_EntryCallback()
{
    uint32 tempReg;
    
}

/* [] END OF FILE */
