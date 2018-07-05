/*******************************************************************************
* File Name: Test.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Test_H) /* Pins Test_H */
#define CY_PINS_Test_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Test_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} Test_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Test_Read(void);
void    Test_Write(uint8 value);
uint8   Test_ReadDataReg(void);
#if defined(Test__PC) || (CY_PSOC4_4200L) 
    void    Test_SetDriveMode(uint8 mode);
#endif
void    Test_SetInterruptMode(uint16 position, uint16 mode);
uint8   Test_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Test_Sleep(void); 
void Test_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Test__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Test_DRIVE_MODE_BITS        (3)
    #define Test_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Test_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Test_SetDriveMode() function.
         *  @{
         */
        #define Test_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Test_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Test_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Test_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Test_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Test_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Test_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Test_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Test_MASK               Test__MASK
#define Test_SHIFT              Test__SHIFT
#define Test_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Test_SetInterruptMode() function.
     *  @{
     */
        #define Test_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Test_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Test_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Test_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Test__SIO)
    #define Test_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Test__PC) && (CY_PSOC4_4200L)
    #define Test_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Test_USBIO_DISABLE              ((uint32)(~Test_USBIO_ENABLE))
    #define Test_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Test_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Test_USBIO_ENTER_SLEEP          ((uint32)((1u << Test_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Test_USBIO_SUSPEND_DEL_SHIFT)))
    #define Test_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Test_USBIO_SUSPEND_SHIFT)))
    #define Test_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Test_USBIO_SUSPEND_DEL_SHIFT)))
    #define Test_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Test__PC)
    /* Port Configuration */
    #define Test_PC                 (* (reg32 *) Test__PC)
#endif
/* Pin State */
#define Test_PS                     (* (reg32 *) Test__PS)
/* Data Register */
#define Test_DR                     (* (reg32 *) Test__DR)
/* Input Buffer Disable Override */
#define Test_INP_DIS                (* (reg32 *) Test__PC2)

/* Interrupt configuration Registers */
#define Test_INTCFG                 (* (reg32 *) Test__INTCFG)
#define Test_INTSTAT                (* (reg32 *) Test__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Test_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Test__SIO)
    #define Test_SIO_REG            (* (reg32 *) Test__SIO)
#endif /* (Test__SIO_CFG) */

/* USBIO registers */
#if !defined(Test__PC) && (CY_PSOC4_4200L)
    #define Test_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Test_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Test_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Test_DRIVE_MODE_SHIFT       (0x00u)
#define Test_DRIVE_MODE_MASK        (0x07u << Test_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Test_H */


/* [] END OF FILE */
