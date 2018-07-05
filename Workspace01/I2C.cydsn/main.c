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


//Master
#define I2C_SLAVE_ADDR 0x08
#define i2c_M_buffersize 0x10
uint8 I2C_M_buffer[i2c_M_buffersize];
uint8 I2C_M_buffer2[i2c_M_buffersize];

//Slave
#define BUFFER_SIZE   0x10
/* The I2C Slave read and write buffers */
uint8 i2cReadBuffer [BUFFER_SIZE];
uint8 i2cWriteBuffer[BUFFER_SIZE];

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    //UART
    UART_Start();
    printf("Example I2C \r\n");
    
    //Master
    I2C_Master_Start();
    
    
    //Slave
    I2C_Slave_I2CSlaveInitReadBuf (i2cReadBuffer,  BUFFER_SIZE);
    I2C_Slave_I2CSlaveInitWriteBuf(i2cWriteBuffer, BUFFER_SIZE);
    I2C_Slave_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(uint8 i=0;i<BUFFER_SIZE;i++)
    {
        i2cReadBuffer[i]=i;
    }
    
    
    for(;;)
    {
        //Master
        CyDelay(1000);
//        I2C_M_buffer[3]=0x5a;
//        
//        
//        //Write
//            /* Start I2C write and check status*/
//        I2C_Master_I2CMasterWriteBuf(I2C_SLAVE_ADDR,I2C_M_buffer, i2c_M_buffersize,I2C_Master_I2C_MODE_COMPLETE_XFER);
//
//        /*If I2C write started without errors, 
//        / wait until I2C Master completes write transfer 
//        */
//        while (0u == (I2C_Master_I2CMasterStatus() & I2C_Master_I2C_MSTAT_WR_CMPLT))
//        {
//            /* Wait */
//        }
//        
//        
//        //Read
//       I2C_Master_I2CMasterReadBuf(I2C_SLAVE_ADDR,I2C_M_buffer2, i2c_M_buffersize,I2C_Master_I2C_MODE_COMPLETE_XFER);
//    
//        /* If I2C read started without errors, 
//        / wait until master complete read transfer */
//        while (0u == (I2C_Master_I2CMasterStatus() & I2C_Master_I2C_MSTAT_RD_CMPLT))
//        {
//            /* Wait */
//        }
//        for(uint8 i=0;i<i2c_M_buffersize;i++)
//        {
//            printf("%d",I2C_M_buffer2[i]);
//        }
//        printf("\r\n");
//        
        
        
        
        
        
        
        //Slave
        /* Write complete: parse the command packet */
        if (0u != (I2C_Slave_I2CSlaveStatus() & I2C_Slave_I2C_SSTAT_WR_CMPLT))
        {  
            if(i2cWriteBuffer[3]==0x5A)
            {
                i2cWriteBuffer[3]=0;
                LED_Write(!LED_Read());
                printf("aaa");
            }
            /* Clear the slave write buffer and status */
            I2C_Slave_I2CSlaveClearWriteBuf();
            (void) I2C_Slave_I2CSlaveClearWriteStatus();

        }
        
        /* Read complete: expose buffer to master */
        if (0u != (I2C_Slave_I2CSlaveStatus() & I2C_Slave_I2C_SSTAT_RD_CMPLT))
        {
            /* Clear the slave read buffer and status */
            I2C_Slave_I2CSlaveClearReadBuf();
            (void) I2C_Slave_I2CSlaveClearReadStatus();
        }
        
    }
}

/* [] END OF FILE */
