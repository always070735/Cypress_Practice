/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 5.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v5.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2017), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (25u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4E000019u)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (26u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4400001Au)

#define CapSense_SNS_STATUS3_VALUE                          (CapSense_dsRam.snsStatus[3u])
#define CapSense_SNS_STATUS3_OFFSET                         (27u)
#define CapSense_SNS_STATUS3_SIZE                           (1u)
#define CapSense_SNS_STATUS3_PARAM_ID                       (0x4200001Bu)

#define CapSense_SNS_STATUS4_VALUE                          (CapSense_dsRam.snsStatus[4u])
#define CapSense_SNS_STATUS4_OFFSET                         (28u)
#define CapSense_SNS_STATUS4_SIZE                           (1u)
#define CapSense_SNS_STATUS4_PARAM_ID                       (0x4900001Cu)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (30u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xAB80001Eu)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (32u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x63800020u)

#define CapSense_LEFT_RESOLUTION_VALUE                      (CapSense_dsRam.wdgtList.left.resolution)
#define CapSense_LEFT_RESOLUTION_OFFSET                     (34u)
#define CapSense_LEFT_RESOLUTION_SIZE                       (2u)
#define CapSense_LEFT_RESOLUTION_PARAM_ID                   (0x8C800022u)

#define CapSense_LEFT_FINGER_TH_VALUE                       (CapSense_dsRam.wdgtList.left.fingerTh)
#define CapSense_LEFT_FINGER_TH_OFFSET                      (36u)
#define CapSense_LEFT_FINGER_TH_SIZE                        (2u)
#define CapSense_LEFT_FINGER_TH_PARAM_ID                    (0x81800024u)

#define CapSense_LEFT_NOISE_TH_VALUE                        (CapSense_dsRam.wdgtList.left.noiseTh)
#define CapSense_LEFT_NOISE_TH_OFFSET                       (38u)
#define CapSense_LEFT_NOISE_TH_SIZE                         (1u)
#define CapSense_LEFT_NOISE_TH_PARAM_ID                     (0x45800026u)

#define CapSense_LEFT_NNOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.left.nNoiseTh)
#define CapSense_LEFT_NNOISE_TH_OFFSET                      (39u)
#define CapSense_LEFT_NNOISE_TH_SIZE                        (1u)
#define CapSense_LEFT_NNOISE_TH_PARAM_ID                    (0x43800027u)

#define CapSense_LEFT_HYSTERESIS_VALUE                      (CapSense_dsRam.wdgtList.left.hysteresis)
#define CapSense_LEFT_HYSTERESIS_OFFSET                     (40u)
#define CapSense_LEFT_HYSTERESIS_SIZE                       (1u)
#define CapSense_LEFT_HYSTERESIS_PARAM_ID                   (0x4A800028u)

#define CapSense_LEFT_ON_DEBOUNCE_VALUE                     (CapSense_dsRam.wdgtList.left.onDebounce)
#define CapSense_LEFT_ON_DEBOUNCE_OFFSET                    (41u)
#define CapSense_LEFT_ON_DEBOUNCE_SIZE                      (1u)
#define CapSense_LEFT_ON_DEBOUNCE_PARAM_ID                  (0x4C800029u)

#define CapSense_LEFT_LOW_BSLN_RST_VALUE                    (CapSense_dsRam.wdgtList.left.lowBslnRst)
#define CapSense_LEFT_LOW_BSLN_RST_OFFSET                   (42u)
#define CapSense_LEFT_LOW_BSLN_RST_SIZE                     (1u)
#define CapSense_LEFT_LOW_BSLN_RST_PARAM_ID                 (0x4680002Au)

#define CapSense_LEFT_IDAC_MOD0_VALUE                       (CapSense_dsRam.wdgtList.left.idacMod[0u])
#define CapSense_LEFT_IDAC_MOD0_OFFSET                      (43u)
#define CapSense_LEFT_IDAC_MOD0_SIZE                        (1u)
#define CapSense_LEFT_IDAC_MOD0_PARAM_ID                    (0x4D00002Bu)

#define CapSense_LEFT_SNS_CLK_VALUE                         (CapSense_dsRam.wdgtList.left.snsClk)
#define CapSense_LEFT_SNS_CLK_OFFSET                        (44u)
#define CapSense_LEFT_SNS_CLK_SIZE                          (2u)
#define CapSense_LEFT_SNS_CLK_PARAM_ID                      (0x8380002Cu)

#define CapSense_LEFT_SNS_CLK_SOURCE_VALUE                  (CapSense_dsRam.wdgtList.left.snsClkSource)
#define CapSense_LEFT_SNS_CLK_SOURCE_OFFSET                 (46u)
#define CapSense_LEFT_SNS_CLK_SOURCE_SIZE                   (1u)
#define CapSense_LEFT_SNS_CLK_SOURCE_PARAM_ID               (0x4780002Eu)

#define CapSense_LEFT_FINGER_CAP_VALUE                      (CapSense_dsRam.wdgtList.left.fingerCap)
#define CapSense_LEFT_FINGER_CAP_OFFSET                     (48u)
#define CapSense_LEFT_FINGER_CAP_SIZE                       (2u)
#define CapSense_LEFT_FINGER_CAP_PARAM_ID                   (0xA3000030u)

#define CapSense_LEFT_SIGPFC_VALUE                          (CapSense_dsRam.wdgtList.left.sigPFC)
#define CapSense_LEFT_SIGPFC_OFFSET                         (50u)
#define CapSense_LEFT_SIGPFC_SIZE                           (2u)
#define CapSense_LEFT_SIGPFC_PARAM_ID                       (0xAF000032u)

#define CapSense_RIGHT_RESOLUTION_VALUE                     (CapSense_dsRam.wdgtList.right.resolution)
#define CapSense_RIGHT_RESOLUTION_OFFSET                    (52u)
#define CapSense_RIGHT_RESOLUTION_SIZE                      (2u)
#define CapSense_RIGHT_RESOLUTION_PARAM_ID                  (0x87810034u)

#define CapSense_RIGHT_FINGER_TH_VALUE                      (CapSense_dsRam.wdgtList.right.fingerTh)
#define CapSense_RIGHT_FINGER_TH_OFFSET                     (54u)
#define CapSense_RIGHT_FINGER_TH_SIZE                       (2u)
#define CapSense_RIGHT_FINGER_TH_PARAM_ID                   (0x8B810036u)

#define CapSense_RIGHT_NOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.right.noiseTh)
#define CapSense_RIGHT_NOISE_TH_OFFSET                      (56u)
#define CapSense_RIGHT_NOISE_TH_SIZE                        (1u)
#define CapSense_RIGHT_NOISE_TH_PARAM_ID                    (0x4C810038u)

#define CapSense_RIGHT_NNOISE_TH_VALUE                      (CapSense_dsRam.wdgtList.right.nNoiseTh)
#define CapSense_RIGHT_NNOISE_TH_OFFSET                     (57u)
#define CapSense_RIGHT_NNOISE_TH_SIZE                       (1u)
#define CapSense_RIGHT_NNOISE_TH_PARAM_ID                   (0x4A810039u)

#define CapSense_RIGHT_HYSTERESIS_VALUE                     (CapSense_dsRam.wdgtList.right.hysteresis)
#define CapSense_RIGHT_HYSTERESIS_OFFSET                    (58u)
#define CapSense_RIGHT_HYSTERESIS_SIZE                      (1u)
#define CapSense_RIGHT_HYSTERESIS_PARAM_ID                  (0x4081003Au)

#define CapSense_RIGHT_ON_DEBOUNCE_VALUE                    (CapSense_dsRam.wdgtList.right.onDebounce)
#define CapSense_RIGHT_ON_DEBOUNCE_OFFSET                   (59u)
#define CapSense_RIGHT_ON_DEBOUNCE_SIZE                     (1u)
#define CapSense_RIGHT_ON_DEBOUNCE_PARAM_ID                 (0x4681003Bu)

#define CapSense_RIGHT_LOW_BSLN_RST_VALUE                   (CapSense_dsRam.wdgtList.right.lowBslnRst)
#define CapSense_RIGHT_LOW_BSLN_RST_OFFSET                  (60u)
#define CapSense_RIGHT_LOW_BSLN_RST_SIZE                    (1u)
#define CapSense_RIGHT_LOW_BSLN_RST_PARAM_ID                (0x4D81003Cu)

#define CapSense_RIGHT_IDAC_MOD0_VALUE                      (CapSense_dsRam.wdgtList.right.idacMod[0u])
#define CapSense_RIGHT_IDAC_MOD0_OFFSET                     (61u)
#define CapSense_RIGHT_IDAC_MOD0_SIZE                       (1u)
#define CapSense_RIGHT_IDAC_MOD0_PARAM_ID                   (0x4601003Du)

#define CapSense_RIGHT_SNS_CLK_VALUE                        (CapSense_dsRam.wdgtList.right.snsClk)
#define CapSense_RIGHT_SNS_CLK_OFFSET                       (62u)
#define CapSense_RIGHT_SNS_CLK_SIZE                         (2u)
#define CapSense_RIGHT_SNS_CLK_PARAM_ID                     (0x8981003Eu)

#define CapSense_RIGHT_SNS_CLK_SOURCE_VALUE                 (CapSense_dsRam.wdgtList.right.snsClkSource)
#define CapSense_RIGHT_SNS_CLK_SOURCE_OFFSET                (64u)
#define CapSense_RIGHT_SNS_CLK_SOURCE_SIZE                  (1u)
#define CapSense_RIGHT_SNS_CLK_SOURCE_PARAM_ID              (0x4C810040u)

#define CapSense_RIGHT_FINGER_CAP_VALUE                     (CapSense_dsRam.wdgtList.right.fingerCap)
#define CapSense_RIGHT_FINGER_CAP_OFFSET                    (66u)
#define CapSense_RIGHT_FINGER_CAP_SIZE                      (2u)
#define CapSense_RIGHT_FINGER_CAP_PARAM_ID                  (0xAE010042u)

#define CapSense_RIGHT_SIGPFC_VALUE                         (CapSense_dsRam.wdgtList.right.sigPFC)
#define CapSense_RIGHT_SIGPFC_OFFSET                        (68u)
#define CapSense_RIGHT_SIGPFC_SIZE                          (2u)
#define CapSense_RIGHT_SIGPFC_PARAM_ID                      (0xA3010044u)

#define CapSense_UP_RESOLUTION_VALUE                        (CapSense_dsRam.wdgtList.up.resolution)
#define CapSense_UP_RESOLUTION_OFFSET                       (70u)
#define CapSense_UP_RESOLUTION_SIZE                         (2u)
#define CapSense_UP_RESOLUTION_PARAM_ID                     (0x8C820046u)

#define CapSense_UP_FINGER_TH_VALUE                         (CapSense_dsRam.wdgtList.up.fingerTh)
#define CapSense_UP_FINGER_TH_OFFSET                        (72u)
#define CapSense_UP_FINGER_TH_SIZE                          (2u)
#define CapSense_UP_FINGER_TH_PARAM_ID                      (0x83820048u)

#define CapSense_UP_NOISE_TH_VALUE                          (CapSense_dsRam.wdgtList.up.noiseTh)
#define CapSense_UP_NOISE_TH_OFFSET                         (74u)
#define CapSense_UP_NOISE_TH_SIZE                           (1u)
#define CapSense_UP_NOISE_TH_PARAM_ID                       (0x4782004Au)

#define CapSense_UP_NNOISE_TH_VALUE                         (CapSense_dsRam.wdgtList.up.nNoiseTh)
#define CapSense_UP_NNOISE_TH_OFFSET                        (75u)
#define CapSense_UP_NNOISE_TH_SIZE                          (1u)
#define CapSense_UP_NNOISE_TH_PARAM_ID                      (0x4182004Bu)

#define CapSense_UP_HYSTERESIS_VALUE                        (CapSense_dsRam.wdgtList.up.hysteresis)
#define CapSense_UP_HYSTERESIS_OFFSET                       (76u)
#define CapSense_UP_HYSTERESIS_SIZE                         (1u)
#define CapSense_UP_HYSTERESIS_PARAM_ID                     (0x4A82004Cu)

#define CapSense_UP_ON_DEBOUNCE_VALUE                       (CapSense_dsRam.wdgtList.up.onDebounce)
#define CapSense_UP_ON_DEBOUNCE_OFFSET                      (77u)
#define CapSense_UP_ON_DEBOUNCE_SIZE                        (1u)
#define CapSense_UP_ON_DEBOUNCE_PARAM_ID                    (0x4C82004Du)

#define CapSense_UP_LOW_BSLN_RST_VALUE                      (CapSense_dsRam.wdgtList.up.lowBslnRst)
#define CapSense_UP_LOW_BSLN_RST_OFFSET                     (78u)
#define CapSense_UP_LOW_BSLN_RST_SIZE                       (1u)
#define CapSense_UP_LOW_BSLN_RST_PARAM_ID                   (0x4682004Eu)

#define CapSense_UP_IDAC_MOD0_VALUE                         (CapSense_dsRam.wdgtList.up.idacMod[0u])
#define CapSense_UP_IDAC_MOD0_OFFSET                        (79u)
#define CapSense_UP_IDAC_MOD0_SIZE                          (1u)
#define CapSense_UP_IDAC_MOD0_PARAM_ID                      (0x4D02004Fu)

#define CapSense_UP_SNS_CLK_VALUE                           (CapSense_dsRam.wdgtList.up.snsClk)
#define CapSense_UP_SNS_CLK_OFFSET                          (80u)
#define CapSense_UP_SNS_CLK_SIZE                            (2u)
#define CapSense_UP_SNS_CLK_PARAM_ID                        (0x84820050u)

#define CapSense_UP_SNS_CLK_SOURCE_VALUE                    (CapSense_dsRam.wdgtList.up.snsClkSource)
#define CapSense_UP_SNS_CLK_SOURCE_OFFSET                   (82u)
#define CapSense_UP_SNS_CLK_SOURCE_SIZE                     (1u)
#define CapSense_UP_SNS_CLK_SOURCE_PARAM_ID                 (0x40820052u)

#define CapSense_UP_FINGER_CAP_VALUE                        (CapSense_dsRam.wdgtList.up.fingerCap)
#define CapSense_UP_FINGER_CAP_OFFSET                       (84u)
#define CapSense_UP_FINGER_CAP_SIZE                         (2u)
#define CapSense_UP_FINGER_CAP_PARAM_ID                     (0xA3020054u)

#define CapSense_UP_SIGPFC_VALUE                            (CapSense_dsRam.wdgtList.up.sigPFC)
#define CapSense_UP_SIGPFC_OFFSET                           (86u)
#define CapSense_UP_SIGPFC_SIZE                             (2u)
#define CapSense_UP_SIGPFC_PARAM_ID                         (0xAF020056u)

#define CapSense_DOWN_RESOLUTION_VALUE                      (CapSense_dsRam.wdgtList.down.resolution)
#define CapSense_DOWN_RESOLUTION_OFFSET                     (88u)
#define CapSense_DOWN_RESOLUTION_SIZE                       (2u)
#define CapSense_DOWN_RESOLUTION_PARAM_ID                   (0x85830058u)

#define CapSense_DOWN_FINGER_TH_VALUE                       (CapSense_dsRam.wdgtList.down.fingerTh)
#define CapSense_DOWN_FINGER_TH_OFFSET                      (90u)
#define CapSense_DOWN_FINGER_TH_SIZE                        (2u)
#define CapSense_DOWN_FINGER_TH_PARAM_ID                    (0x8983005Au)

#define CapSense_DOWN_NOISE_TH_VALUE                        (CapSense_dsRam.wdgtList.down.noiseTh)
#define CapSense_DOWN_NOISE_TH_OFFSET                       (92u)
#define CapSense_DOWN_NOISE_TH_SIZE                         (1u)
#define CapSense_DOWN_NOISE_TH_PARAM_ID                     (0x4C83005Cu)

#define CapSense_DOWN_NNOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.down.nNoiseTh)
#define CapSense_DOWN_NNOISE_TH_OFFSET                      (93u)
#define CapSense_DOWN_NNOISE_TH_SIZE                        (1u)
#define CapSense_DOWN_NNOISE_TH_PARAM_ID                    (0x4A83005Du)

#define CapSense_DOWN_HYSTERESIS_VALUE                      (CapSense_dsRam.wdgtList.down.hysteresis)
#define CapSense_DOWN_HYSTERESIS_OFFSET                     (94u)
#define CapSense_DOWN_HYSTERESIS_SIZE                       (1u)
#define CapSense_DOWN_HYSTERESIS_PARAM_ID                   (0x4083005Eu)

#define CapSense_DOWN_ON_DEBOUNCE_VALUE                     (CapSense_dsRam.wdgtList.down.onDebounce)
#define CapSense_DOWN_ON_DEBOUNCE_OFFSET                    (95u)
#define CapSense_DOWN_ON_DEBOUNCE_SIZE                      (1u)
#define CapSense_DOWN_ON_DEBOUNCE_PARAM_ID                  (0x4683005Fu)

#define CapSense_DOWN_LOW_BSLN_RST_VALUE                    (CapSense_dsRam.wdgtList.down.lowBslnRst)
#define CapSense_DOWN_LOW_BSLN_RST_OFFSET                   (96u)
#define CapSense_DOWN_LOW_BSLN_RST_SIZE                     (1u)
#define CapSense_DOWN_LOW_BSLN_RST_PARAM_ID                 (0x40830060u)

#define CapSense_DOWN_IDAC_MOD0_VALUE                       (CapSense_dsRam.wdgtList.down.idacMod[0u])
#define CapSense_DOWN_IDAC_MOD0_OFFSET                      (97u)
#define CapSense_DOWN_IDAC_MOD0_SIZE                        (1u)
#define CapSense_DOWN_IDAC_MOD0_PARAM_ID                    (0x4B030061u)

#define CapSense_DOWN_SNS_CLK_VALUE                         (CapSense_dsRam.wdgtList.down.snsClk)
#define CapSense_DOWN_SNS_CLK_OFFSET                        (98u)
#define CapSense_DOWN_SNS_CLK_SIZE                          (2u)
#define CapSense_DOWN_SNS_CLK_PARAM_ID                      (0x84830062u)

#define CapSense_DOWN_SNS_CLK_SOURCE_VALUE                  (CapSense_dsRam.wdgtList.down.snsClkSource)
#define CapSense_DOWN_SNS_CLK_SOURCE_OFFSET                 (100u)
#define CapSense_DOWN_SNS_CLK_SOURCE_SIZE                   (1u)
#define CapSense_DOWN_SNS_CLK_SOURCE_PARAM_ID               (0x41830064u)

#define CapSense_DOWN_FINGER_CAP_VALUE                      (CapSense_dsRam.wdgtList.down.fingerCap)
#define CapSense_DOWN_FINGER_CAP_OFFSET                     (102u)
#define CapSense_DOWN_FINGER_CAP_SIZE                       (2u)
#define CapSense_DOWN_FINGER_CAP_PARAM_ID                   (0xA3030066u)

#define CapSense_DOWN_SIGPFC_VALUE                          (CapSense_dsRam.wdgtList.down.sigPFC)
#define CapSense_DOWN_SIGPFC_OFFSET                         (104u)
#define CapSense_DOWN_SIGPFC_SIZE                           (2u)
#define CapSense_DOWN_SIGPFC_PARAM_ID                       (0xAC030068u)

#define CapSense_CENTER_RESOLUTION_VALUE                    (CapSense_dsRam.wdgtList.center.resolution)
#define CapSense_CENTER_RESOLUTION_OFFSET                   (106u)
#define CapSense_CENTER_RESOLUTION_SIZE                     (2u)
#define CapSense_CENTER_RESOLUTION_PARAM_ID                 (0x8F84006Au)

#define CapSense_CENTER_FINGER_TH_VALUE                     (CapSense_dsRam.wdgtList.center.fingerTh)
#define CapSense_CENTER_FINGER_TH_OFFSET                    (108u)
#define CapSense_CENTER_FINGER_TH_SIZE                      (2u)
#define CapSense_CENTER_FINGER_TH_PARAM_ID                  (0x8284006Cu)

#define CapSense_CENTER_NOISE_TH_VALUE                      (CapSense_dsRam.wdgtList.center.noiseTh)
#define CapSense_CENTER_NOISE_TH_OFFSET                     (110u)
#define CapSense_CENTER_NOISE_TH_SIZE                       (1u)
#define CapSense_CENTER_NOISE_TH_PARAM_ID                   (0x4684006Eu)

#define CapSense_CENTER_NNOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.center.nNoiseTh)
#define CapSense_CENTER_NNOISE_TH_OFFSET                    (111u)
#define CapSense_CENTER_NNOISE_TH_SIZE                      (1u)
#define CapSense_CENTER_NNOISE_TH_PARAM_ID                  (0x4084006Fu)

#define CapSense_CENTER_HYSTERESIS_VALUE                    (CapSense_dsRam.wdgtList.center.hysteresis)
#define CapSense_CENTER_HYSTERESIS_OFFSET                   (112u)
#define CapSense_CENTER_HYSTERESIS_SIZE                     (1u)
#define CapSense_CENTER_HYSTERESIS_PARAM_ID                 (0x4C840070u)

#define CapSense_CENTER_ON_DEBOUNCE_VALUE                   (CapSense_dsRam.wdgtList.center.onDebounce)
#define CapSense_CENTER_ON_DEBOUNCE_OFFSET                  (113u)
#define CapSense_CENTER_ON_DEBOUNCE_SIZE                    (1u)
#define CapSense_CENTER_ON_DEBOUNCE_PARAM_ID                (0x4A840071u)

#define CapSense_CENTER_LOW_BSLN_RST_VALUE                  (CapSense_dsRam.wdgtList.center.lowBslnRst)
#define CapSense_CENTER_LOW_BSLN_RST_OFFSET                 (114u)
#define CapSense_CENTER_LOW_BSLN_RST_SIZE                   (1u)
#define CapSense_CENTER_LOW_BSLN_RST_PARAM_ID               (0x40840072u)

#define CapSense_CENTER_IDAC_MOD0_VALUE                     (CapSense_dsRam.wdgtList.center.idacMod[0u])
#define CapSense_CENTER_IDAC_MOD0_OFFSET                    (115u)
#define CapSense_CENTER_IDAC_MOD0_SIZE                      (1u)
#define CapSense_CENTER_IDAC_MOD0_PARAM_ID                  (0x4B040073u)

#define CapSense_CENTER_SNS_CLK_VALUE                       (CapSense_dsRam.wdgtList.center.snsClk)
#define CapSense_CENTER_SNS_CLK_OFFSET                      (116u)
#define CapSense_CENTER_SNS_CLK_SIZE                        (2u)
#define CapSense_CENTER_SNS_CLK_PARAM_ID                    (0x85840074u)

#define CapSense_CENTER_SNS_CLK_SOURCE_VALUE                (CapSense_dsRam.wdgtList.center.snsClkSource)
#define CapSense_CENTER_SNS_CLK_SOURCE_OFFSET               (118u)
#define CapSense_CENTER_SNS_CLK_SOURCE_SIZE                 (1u)
#define CapSense_CENTER_SNS_CLK_SOURCE_PARAM_ID             (0x41840076u)

#define CapSense_CENTER_FINGER_CAP_VALUE                    (CapSense_dsRam.wdgtList.center.fingerCap)
#define CapSense_CENTER_FINGER_CAP_OFFSET                   (120u)
#define CapSense_CENTER_FINGER_CAP_SIZE                     (2u)
#define CapSense_CENTER_FINGER_CAP_PARAM_ID                 (0xA0040078u)

#define CapSense_CENTER_SIGPFC_VALUE                        (CapSense_dsRam.wdgtList.center.sigPFC)
#define CapSense_CENTER_SIGPFC_OFFSET                       (122u)
#define CapSense_CENTER_SIGPFC_SIZE                         (2u)
#define CapSense_CENTER_SIGPFC_PARAM_ID                     (0xAC04007Au)

#define CapSense_LEFT_SNS0_RAW0_VALUE                       (CapSense_dsRam.snsList.left[0u].raw[0u])
#define CapSense_LEFT_SNS0_RAW0_OFFSET                      (124u)
#define CapSense_LEFT_SNS0_RAW0_SIZE                        (2u)
#define CapSense_LEFT_SNS0_RAW0_PARAM_ID                    (0x8600007Cu)

#define CapSense_LEFT_SNS0_BSLN0_VALUE                      (CapSense_dsRam.snsList.left[0u].bsln[0u])
#define CapSense_LEFT_SNS0_BSLN0_OFFSET                     (126u)
#define CapSense_LEFT_SNS0_BSLN0_SIZE                       (2u)
#define CapSense_LEFT_SNS0_BSLN0_PARAM_ID                   (0x8A00007Eu)

#define CapSense_LEFT_SNS0_BSLN_EXT0_VALUE                  (CapSense_dsRam.snsList.left[0u].bslnExt[0u])
#define CapSense_LEFT_SNS0_BSLN_EXT0_OFFSET                 (128u)
#define CapSense_LEFT_SNS0_BSLN_EXT0_SIZE                   (1u)
#define CapSense_LEFT_SNS0_BSLN_EXT0_PARAM_ID               (0x4C000080u)

#define CapSense_LEFT_SNS0_DIFF_VALUE                       (CapSense_dsRam.snsList.left[0u].diff)
#define CapSense_LEFT_SNS0_DIFF_OFFSET                      (130u)
#define CapSense_LEFT_SNS0_DIFF_SIZE                        (2u)
#define CapSense_LEFT_SNS0_DIFF_PARAM_ID                    (0x88000082u)

#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_VALUE          (CapSense_dsRam.snsList.left[0u].negBslnRstCnt[0u])
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_OFFSET         (132u)
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_SIZE           (1u)
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID       (0x4D000084u)

#define CapSense_LEFT_SNS0_IDAC_COMP0_VALUE                 (CapSense_dsRam.snsList.left[0u].idacComp[0u])
#define CapSense_LEFT_SNS0_IDAC_COMP0_OFFSET                (133u)
#define CapSense_LEFT_SNS0_IDAC_COMP0_SIZE                  (1u)
#define CapSense_LEFT_SNS0_IDAC_COMP0_PARAM_ID              (0x4B000085u)

#define CapSense_RIGHT_SNS0_RAW0_VALUE                      (CapSense_dsRam.snsList.right[0u].raw[0u])
#define CapSense_RIGHT_SNS0_RAW0_OFFSET                     (134u)
#define CapSense_RIGHT_SNS0_RAW0_SIZE                       (2u)
#define CapSense_RIGHT_SNS0_RAW0_PARAM_ID                   (0x89000086u)

#define CapSense_RIGHT_SNS0_BSLN0_VALUE                     (CapSense_dsRam.snsList.right[0u].bsln[0u])
#define CapSense_RIGHT_SNS0_BSLN0_OFFSET                    (136u)
#define CapSense_RIGHT_SNS0_BSLN0_SIZE                      (2u)
#define CapSense_RIGHT_SNS0_BSLN0_PARAM_ID                  (0x86000088u)

#define CapSense_RIGHT_SNS0_BSLN_EXT0_VALUE                 (CapSense_dsRam.snsList.right[0u].bslnExt[0u])
#define CapSense_RIGHT_SNS0_BSLN_EXT0_OFFSET                (138u)
#define CapSense_RIGHT_SNS0_BSLN_EXT0_SIZE                  (1u)
#define CapSense_RIGHT_SNS0_BSLN_EXT0_PARAM_ID              (0x4200008Au)

#define CapSense_RIGHT_SNS0_DIFF_VALUE                      (CapSense_dsRam.snsList.right[0u].diff)
#define CapSense_RIGHT_SNS0_DIFF_OFFSET                     (140u)
#define CapSense_RIGHT_SNS0_DIFF_SIZE                       (2u)
#define CapSense_RIGHT_SNS0_DIFF_PARAM_ID                   (0x8700008Cu)

#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_VALUE         (CapSense_dsRam.snsList.right[0u].negBslnRstCnt[0u])
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_OFFSET        (142u)
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID      (0x4300008Eu)

#define CapSense_RIGHT_SNS0_IDAC_COMP0_VALUE                (CapSense_dsRam.snsList.right[0u].idacComp[0u])
#define CapSense_RIGHT_SNS0_IDAC_COMP0_OFFSET               (143u)
#define CapSense_RIGHT_SNS0_IDAC_COMP0_SIZE                 (1u)
#define CapSense_RIGHT_SNS0_IDAC_COMP0_PARAM_ID             (0x4500008Fu)

#define CapSense_UP_SNS0_RAW0_VALUE                         (CapSense_dsRam.snsList.up[0u].raw[0u])
#define CapSense_UP_SNS0_RAW0_OFFSET                        (144u)
#define CapSense_UP_SNS0_RAW0_SIZE                          (2u)
#define CapSense_UP_SNS0_RAW0_PARAM_ID                      (0x81000090u)

#define CapSense_UP_SNS0_BSLN0_VALUE                        (CapSense_dsRam.snsList.up[0u].bsln[0u])
#define CapSense_UP_SNS0_BSLN0_OFFSET                       (146u)
#define CapSense_UP_SNS0_BSLN0_SIZE                         (2u)
#define CapSense_UP_SNS0_BSLN0_PARAM_ID                     (0x8D000092u)

#define CapSense_UP_SNS0_BSLN_EXT0_VALUE                    (CapSense_dsRam.snsList.up[0u].bslnExt[0u])
#define CapSense_UP_SNS0_BSLN_EXT0_OFFSET                   (148u)
#define CapSense_UP_SNS0_BSLN_EXT0_SIZE                     (1u)
#define CapSense_UP_SNS0_BSLN_EXT0_PARAM_ID                 (0x48000094u)

#define CapSense_UP_SNS0_DIFF_VALUE                         (CapSense_dsRam.snsList.up[0u].diff)
#define CapSense_UP_SNS0_DIFF_OFFSET                        (150u)
#define CapSense_UP_SNS0_DIFF_SIZE                          (2u)
#define CapSense_UP_SNS0_DIFF_PARAM_ID                      (0x8C000096u)

#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_VALUE            (CapSense_dsRam.snsList.up[0u].negBslnRstCnt[0u])
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_OFFSET           (152u)
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_SIZE             (1u)
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID         (0x4B000098u)

#define CapSense_UP_SNS0_IDAC_COMP0_VALUE                   (CapSense_dsRam.snsList.up[0u].idacComp[0u])
#define CapSense_UP_SNS0_IDAC_COMP0_OFFSET                  (153u)
#define CapSense_UP_SNS0_IDAC_COMP0_SIZE                    (1u)
#define CapSense_UP_SNS0_IDAC_COMP0_PARAM_ID                (0x4D000099u)

#define CapSense_DOWN_SNS0_RAW0_VALUE                       (CapSense_dsRam.snsList.down[0u].raw[0u])
#define CapSense_DOWN_SNS0_RAW0_OFFSET                      (154u)
#define CapSense_DOWN_SNS0_RAW0_SIZE                        (2u)
#define CapSense_DOWN_SNS0_RAW0_PARAM_ID                    (0x8F00009Au)

#define CapSense_DOWN_SNS0_BSLN0_VALUE                      (CapSense_dsRam.snsList.down[0u].bsln[0u])
#define CapSense_DOWN_SNS0_BSLN0_OFFSET                     (156u)
#define CapSense_DOWN_SNS0_BSLN0_SIZE                       (2u)
#define CapSense_DOWN_SNS0_BSLN0_PARAM_ID                   (0x8200009Cu)

#define CapSense_DOWN_SNS0_BSLN_EXT0_VALUE                  (CapSense_dsRam.snsList.down[0u].bslnExt[0u])
#define CapSense_DOWN_SNS0_BSLN_EXT0_OFFSET                 (158u)
#define CapSense_DOWN_SNS0_BSLN_EXT0_SIZE                   (1u)
#define CapSense_DOWN_SNS0_BSLN_EXT0_PARAM_ID               (0x4600009Eu)

#define CapSense_DOWN_SNS0_DIFF_VALUE                       (CapSense_dsRam.snsList.down[0u].diff)
#define CapSense_DOWN_SNS0_DIFF_OFFSET                      (160u)
#define CapSense_DOWN_SNS0_DIFF_SIZE                        (2u)
#define CapSense_DOWN_SNS0_DIFF_PARAM_ID                    (0x8E0000A0u)

#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_VALUE          (CapSense_dsRam.snsList.down[0u].negBslnRstCnt[0u])
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_OFFSET         (162u)
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_SIZE           (1u)
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID       (0x4A0000A2u)

#define CapSense_DOWN_SNS0_IDAC_COMP0_VALUE                 (CapSense_dsRam.snsList.down[0u].idacComp[0u])
#define CapSense_DOWN_SNS0_IDAC_COMP0_OFFSET                (163u)
#define CapSense_DOWN_SNS0_IDAC_COMP0_SIZE                  (1u)
#define CapSense_DOWN_SNS0_IDAC_COMP0_PARAM_ID              (0x4C0000A3u)

#define CapSense_CENTER_SNS0_RAW0_VALUE                     (CapSense_dsRam.snsList.center[0u].raw[0u])
#define CapSense_CENTER_SNS0_RAW0_OFFSET                    (164u)
#define CapSense_CENTER_SNS0_RAW0_SIZE                      (2u)
#define CapSense_CENTER_SNS0_RAW0_PARAM_ID                  (0x8F0000A4u)

#define CapSense_CENTER_SNS0_BSLN0_VALUE                    (CapSense_dsRam.snsList.center[0u].bsln[0u])
#define CapSense_CENTER_SNS0_BSLN0_OFFSET                   (166u)
#define CapSense_CENTER_SNS0_BSLN0_SIZE                     (2u)
#define CapSense_CENTER_SNS0_BSLN0_PARAM_ID                 (0x830000A6u)

#define CapSense_CENTER_SNS0_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.center[0u].bslnExt[0u])
#define CapSense_CENTER_SNS0_BSLN_EXT0_OFFSET               (168u)
#define CapSense_CENTER_SNS0_BSLN_EXT0_SIZE                 (1u)
#define CapSense_CENTER_SNS0_BSLN_EXT0_PARAM_ID             (0x440000A8u)

#define CapSense_CENTER_SNS0_DIFF_VALUE                     (CapSense_dsRam.snsList.center[0u].diff)
#define CapSense_CENTER_SNS0_DIFF_OFFSET                    (170u)
#define CapSense_CENTER_SNS0_DIFF_SIZE                      (2u)
#define CapSense_CENTER_SNS0_DIFF_PARAM_ID                  (0x800000AAu)

#define CapSense_CENTER_SNS0_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.center[0u].negBslnRstCnt[0u])
#define CapSense_CENTER_SNS0_NEG_BSLN_RST_CNT0_OFFSET       (172u)
#define CapSense_CENTER_SNS0_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_CENTER_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID     (0x450000ACu)

#define CapSense_CENTER_SNS0_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.center[0u].idacComp[0u])
#define CapSense_CENTER_SNS0_IDAC_COMP0_OFFSET              (173u)
#define CapSense_CENTER_SNS0_IDAC_COMP0_SIZE                (1u)
#define CapSense_CENTER_SNS0_IDAC_COMP0_PARAM_ID            (0x430000ADu)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (174u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x620000AEu)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (175u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x640000AFu)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (176u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8B0000B0u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (178u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x870000B2u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_LEFT_PTR2SNS_FLASH_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_LEFT_PTR2SNS_FLASH_OFFSET                  (0u)
#define CapSense_LEFT_PTR2SNS_FLASH_SIZE                    (4u)
#define CapSense_LEFT_PTR2SNS_FLASH_PARAM_ID                (0xD1000000u)

#define CapSense_LEFT_PTR2WD_RAM_VALUE                      (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_LEFT_PTR2WD_RAM_OFFSET                     (4u)
#define CapSense_LEFT_PTR2WD_RAM_SIZE                       (4u)
#define CapSense_LEFT_PTR2WD_RAM_PARAM_ID                   (0xD0000004u)

#define CapSense_LEFT_PTR2SNS_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_LEFT_PTR2SNS_RAM_OFFSET                    (8u)
#define CapSense_LEFT_PTR2SNS_RAM_SIZE                      (4u)
#define CapSense_LEFT_PTR2SNS_RAM_PARAM_ID                  (0xD3000008u)

#define CapSense_LEFT_PTR2FLTR_HISTORY_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_LEFT_PTR2FLTR_HISTORY_OFFSET               (12u)
#define CapSense_LEFT_PTR2FLTR_HISTORY_SIZE                 (4u)
#define CapSense_LEFT_PTR2FLTR_HISTORY_PARAM_ID             (0xD200000Cu)

#define CapSense_LEFT_PTR2DEBOUNCE_VALUE                    (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_LEFT_PTR2DEBOUNCE_OFFSET                   (16u)
#define CapSense_LEFT_PTR2DEBOUNCE_SIZE                     (4u)
#define CapSense_LEFT_PTR2DEBOUNCE_PARAM_ID                 (0xD4000010u)

#define CapSense_LEFT_STATIC_CONFIG_VALUE                   (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_LEFT_STATIC_CONFIG_OFFSET                  (20u)
#define CapSense_LEFT_STATIC_CONFIG_SIZE                    (4u)
#define CapSense_LEFT_STATIC_CONFIG_PARAM_ID                (0xD5000014u)

#define CapSense_LEFT_TOTAL_NUM_SNS_VALUE                   (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_LEFT_TOTAL_NUM_SNS_OFFSET                  (24u)
#define CapSense_LEFT_TOTAL_NUM_SNS_SIZE                    (2u)
#define CapSense_LEFT_TOTAL_NUM_SNS_PARAM_ID                (0x99000018u)

#define CapSense_LEFT_TYPE_VALUE                            (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_LEFT_TYPE_OFFSET                           (26u)
#define CapSense_LEFT_TYPE_SIZE                             (1u)
#define CapSense_LEFT_TYPE_PARAM_ID                         (0x5D00001Au)

#define CapSense_LEFT_NUM_COLS_VALUE                        (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_LEFT_NUM_COLS_OFFSET                       (27u)
#define CapSense_LEFT_NUM_COLS_SIZE                         (1u)
#define CapSense_LEFT_NUM_COLS_PARAM_ID                     (0x5B00001Bu)

#define CapSense_LEFT_PTR2NOISE_ENVLP_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_LEFT_PTR2NOISE_ENVLP_OFFSET                (28u)
#define CapSense_LEFT_PTR2NOISE_ENVLP_SIZE                  (4u)
#define CapSense_LEFT_PTR2NOISE_ENVLP_PARAM_ID              (0xD700001Cu)

#define CapSense_RIGHT_PTR2SNS_FLASH_VALUE                  (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_RIGHT_PTR2SNS_FLASH_OFFSET                 (32u)
#define CapSense_RIGHT_PTR2SNS_FLASH_SIZE                   (4u)
#define CapSense_RIGHT_PTR2SNS_FLASH_PARAM_ID               (0xD8010020u)

#define CapSense_RIGHT_PTR2WD_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_RIGHT_PTR2WD_RAM_OFFSET                    (36u)
#define CapSense_RIGHT_PTR2WD_RAM_SIZE                      (4u)
#define CapSense_RIGHT_PTR2WD_RAM_PARAM_ID                  (0xD9010024u)

#define CapSense_RIGHT_PTR2SNS_RAM_VALUE                    (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_RIGHT_PTR2SNS_RAM_OFFSET                   (40u)
#define CapSense_RIGHT_PTR2SNS_RAM_SIZE                     (4u)
#define CapSense_RIGHT_PTR2SNS_RAM_PARAM_ID                 (0xDA010028u)

#define CapSense_RIGHT_PTR2FLTR_HISTORY_VALUE               (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_OFFSET              (44u)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_SIZE                (4u)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_PARAM_ID            (0xDB01002Cu)

#define CapSense_RIGHT_PTR2DEBOUNCE_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_RIGHT_PTR2DEBOUNCE_OFFSET                  (48u)
#define CapSense_RIGHT_PTR2DEBOUNCE_SIZE                    (4u)
#define CapSense_RIGHT_PTR2DEBOUNCE_PARAM_ID                (0xDD010030u)

#define CapSense_RIGHT_STATIC_CONFIG_VALUE                  (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_RIGHT_STATIC_CONFIG_OFFSET                 (52u)
#define CapSense_RIGHT_STATIC_CONFIG_SIZE                   (4u)
#define CapSense_RIGHT_STATIC_CONFIG_PARAM_ID               (0xDC010034u)

#define CapSense_RIGHT_TOTAL_NUM_SNS_VALUE                  (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_RIGHT_TOTAL_NUM_SNS_OFFSET                 (56u)
#define CapSense_RIGHT_TOTAL_NUM_SNS_SIZE                   (2u)
#define CapSense_RIGHT_TOTAL_NUM_SNS_PARAM_ID               (0x90010038u)

#define CapSense_RIGHT_TYPE_VALUE                           (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_RIGHT_TYPE_OFFSET                          (58u)
#define CapSense_RIGHT_TYPE_SIZE                            (1u)
#define CapSense_RIGHT_TYPE_PARAM_ID                        (0x5401003Au)

#define CapSense_RIGHT_NUM_COLS_VALUE                       (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_RIGHT_NUM_COLS_OFFSET                      (59u)
#define CapSense_RIGHT_NUM_COLS_SIZE                        (1u)
#define CapSense_RIGHT_NUM_COLS_PARAM_ID                    (0x5201003Bu)

#define CapSense_RIGHT_PTR2NOISE_ENVLP_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_RIGHT_PTR2NOISE_ENVLP_OFFSET               (60u)
#define CapSense_RIGHT_PTR2NOISE_ENVLP_SIZE                 (4u)
#define CapSense_RIGHT_PTR2NOISE_ENVLP_PARAM_ID             (0xDE01003Cu)

#define CapSense_UP_PTR2SNS_FLASH_VALUE                     (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_UP_PTR2SNS_FLASH_OFFSET                    (64u)
#define CapSense_UP_PTR2SNS_FLASH_SIZE                      (4u)
#define CapSense_UP_PTR2SNS_FLASH_PARAM_ID                  (0xDA020040u)

#define CapSense_UP_PTR2WD_RAM_VALUE                        (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_UP_PTR2WD_RAM_OFFSET                       (68u)
#define CapSense_UP_PTR2WD_RAM_SIZE                         (4u)
#define CapSense_UP_PTR2WD_RAM_PARAM_ID                     (0xDB020044u)

#define CapSense_UP_PTR2SNS_RAM_VALUE                       (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_UP_PTR2SNS_RAM_OFFSET                      (72u)
#define CapSense_UP_PTR2SNS_RAM_SIZE                        (4u)
#define CapSense_UP_PTR2SNS_RAM_PARAM_ID                    (0xD8020048u)

#define CapSense_UP_PTR2FLTR_HISTORY_VALUE                  (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_UP_PTR2FLTR_HISTORY_OFFSET                 (76u)
#define CapSense_UP_PTR2FLTR_HISTORY_SIZE                   (4u)
#define CapSense_UP_PTR2FLTR_HISTORY_PARAM_ID               (0xD902004Cu)

#define CapSense_UP_PTR2DEBOUNCE_VALUE                      (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_UP_PTR2DEBOUNCE_OFFSET                     (80u)
#define CapSense_UP_PTR2DEBOUNCE_SIZE                       (4u)
#define CapSense_UP_PTR2DEBOUNCE_PARAM_ID                   (0xDF020050u)

#define CapSense_UP_STATIC_CONFIG_VALUE                     (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_UP_STATIC_CONFIG_OFFSET                    (84u)
#define CapSense_UP_STATIC_CONFIG_SIZE                      (4u)
#define CapSense_UP_STATIC_CONFIG_PARAM_ID                  (0xDE020054u)

#define CapSense_UP_TOTAL_NUM_SNS_VALUE                     (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_UP_TOTAL_NUM_SNS_OFFSET                    (88u)
#define CapSense_UP_TOTAL_NUM_SNS_SIZE                      (2u)
#define CapSense_UP_TOTAL_NUM_SNS_PARAM_ID                  (0x92020058u)

#define CapSense_UP_TYPE_VALUE                              (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_UP_TYPE_OFFSET                             (90u)
#define CapSense_UP_TYPE_SIZE                               (1u)
#define CapSense_UP_TYPE_PARAM_ID                           (0x5602005Au)

#define CapSense_UP_NUM_COLS_VALUE                          (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_UP_NUM_COLS_OFFSET                         (91u)
#define CapSense_UP_NUM_COLS_SIZE                           (1u)
#define CapSense_UP_NUM_COLS_PARAM_ID                       (0x5002005Bu)

#define CapSense_UP_PTR2NOISE_ENVLP_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_UP_PTR2NOISE_ENVLP_OFFSET                  (92u)
#define CapSense_UP_PTR2NOISE_ENVLP_SIZE                    (4u)
#define CapSense_UP_PTR2NOISE_ENVLP_PARAM_ID                (0xDC02005Cu)

#define CapSense_DOWN_PTR2SNS_FLASH_VALUE                   (CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_DOWN_PTR2SNS_FLASH_OFFSET                  (96u)
#define CapSense_DOWN_PTR2SNS_FLASH_SIZE                    (4u)
#define CapSense_DOWN_PTR2SNS_FLASH_PARAM_ID                (0xD3030060u)

#define CapSense_DOWN_PTR2WD_RAM_VALUE                      (CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_DOWN_PTR2WD_RAM_OFFSET                     (100u)
#define CapSense_DOWN_PTR2WD_RAM_SIZE                       (4u)
#define CapSense_DOWN_PTR2WD_RAM_PARAM_ID                   (0xD2030064u)

#define CapSense_DOWN_PTR2SNS_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_DOWN_PTR2SNS_RAM_OFFSET                    (104u)
#define CapSense_DOWN_PTR2SNS_RAM_SIZE                      (4u)
#define CapSense_DOWN_PTR2SNS_RAM_PARAM_ID                  (0xD1030068u)

#define CapSense_DOWN_PTR2FLTR_HISTORY_VALUE                (CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_DOWN_PTR2FLTR_HISTORY_OFFSET               (108u)
#define CapSense_DOWN_PTR2FLTR_HISTORY_SIZE                 (4u)
#define CapSense_DOWN_PTR2FLTR_HISTORY_PARAM_ID             (0xD003006Cu)

#define CapSense_DOWN_PTR2DEBOUNCE_VALUE                    (CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_DOWN_PTR2DEBOUNCE_OFFSET                   (112u)
#define CapSense_DOWN_PTR2DEBOUNCE_SIZE                     (4u)
#define CapSense_DOWN_PTR2DEBOUNCE_PARAM_ID                 (0xD6030070u)

#define CapSense_DOWN_STATIC_CONFIG_VALUE                   (CapSense_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_DOWN_STATIC_CONFIG_OFFSET                  (116u)
#define CapSense_DOWN_STATIC_CONFIG_SIZE                    (4u)
#define CapSense_DOWN_STATIC_CONFIG_PARAM_ID                (0xD7030074u)

#define CapSense_DOWN_TOTAL_NUM_SNS_VALUE                   (CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_DOWN_TOTAL_NUM_SNS_OFFSET                  (120u)
#define CapSense_DOWN_TOTAL_NUM_SNS_SIZE                    (2u)
#define CapSense_DOWN_TOTAL_NUM_SNS_PARAM_ID                (0x9B030078u)

#define CapSense_DOWN_TYPE_VALUE                            (CapSense_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_DOWN_TYPE_OFFSET                           (122u)
#define CapSense_DOWN_TYPE_SIZE                             (1u)
#define CapSense_DOWN_TYPE_PARAM_ID                         (0x5F03007Au)

#define CapSense_DOWN_NUM_COLS_VALUE                        (CapSense_dsFlash.wdgtArray[3].numCols)
#define CapSense_DOWN_NUM_COLS_OFFSET                       (123u)
#define CapSense_DOWN_NUM_COLS_SIZE                         (1u)
#define CapSense_DOWN_NUM_COLS_PARAM_ID                     (0x5903007Bu)

#define CapSense_DOWN_PTR2NOISE_ENVLP_VALUE                 (CapSense_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_DOWN_PTR2NOISE_ENVLP_OFFSET                (124u)
#define CapSense_DOWN_PTR2NOISE_ENVLP_SIZE                  (4u)
#define CapSense_DOWN_PTR2NOISE_ENVLP_PARAM_ID              (0xD503007Cu)

#define CapSense_CENTER_PTR2SNS_FLASH_VALUE                 (CapSense_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_CENTER_PTR2SNS_FLASH_OFFSET                (128u)
#define CapSense_CENTER_PTR2SNS_FLASH_SIZE                  (4u)
#define CapSense_CENTER_PTR2SNS_FLASH_PARAM_ID              (0xDE040080u)

#define CapSense_CENTER_PTR2WD_RAM_VALUE                    (CapSense_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_CENTER_PTR2WD_RAM_OFFSET                   (132u)
#define CapSense_CENTER_PTR2WD_RAM_SIZE                     (4u)
#define CapSense_CENTER_PTR2WD_RAM_PARAM_ID                 (0xDF040084u)

#define CapSense_CENTER_PTR2SNS_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_CENTER_PTR2SNS_RAM_OFFSET                  (136u)
#define CapSense_CENTER_PTR2SNS_RAM_SIZE                    (4u)
#define CapSense_CENTER_PTR2SNS_RAM_PARAM_ID                (0xDC040088u)

#define CapSense_CENTER_PTR2FLTR_HISTORY_VALUE              (CapSense_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_CENTER_PTR2FLTR_HISTORY_OFFSET             (140u)
#define CapSense_CENTER_PTR2FLTR_HISTORY_SIZE               (4u)
#define CapSense_CENTER_PTR2FLTR_HISTORY_PARAM_ID           (0xDD04008Cu)

#define CapSense_CENTER_PTR2DEBOUNCE_VALUE                  (CapSense_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_CENTER_PTR2DEBOUNCE_OFFSET                 (144u)
#define CapSense_CENTER_PTR2DEBOUNCE_SIZE                   (4u)
#define CapSense_CENTER_PTR2DEBOUNCE_PARAM_ID               (0xDB040090u)

#define CapSense_CENTER_STATIC_CONFIG_VALUE                 (CapSense_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_CENTER_STATIC_CONFIG_OFFSET                (148u)
#define CapSense_CENTER_STATIC_CONFIG_SIZE                  (4u)
#define CapSense_CENTER_STATIC_CONFIG_PARAM_ID              (0xDA040094u)

#define CapSense_CENTER_TOTAL_NUM_SNS_VALUE                 (CapSense_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_CENTER_TOTAL_NUM_SNS_OFFSET                (152u)
#define CapSense_CENTER_TOTAL_NUM_SNS_SIZE                  (2u)
#define CapSense_CENTER_TOTAL_NUM_SNS_PARAM_ID              (0x96040098u)

#define CapSense_CENTER_TYPE_VALUE                          (CapSense_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_CENTER_TYPE_OFFSET                         (154u)
#define CapSense_CENTER_TYPE_SIZE                           (1u)
#define CapSense_CENTER_TYPE_PARAM_ID                       (0x5204009Au)

#define CapSense_CENTER_NUM_COLS_VALUE                      (CapSense_dsFlash.wdgtArray[4].numCols)
#define CapSense_CENTER_NUM_COLS_OFFSET                     (155u)
#define CapSense_CENTER_NUM_COLS_SIZE                       (1u)
#define CapSense_CENTER_NUM_COLS_PARAM_ID                   (0x5404009Bu)

#define CapSense_CENTER_PTR2NOISE_ENVLP_VALUE               (CapSense_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_CENTER_PTR2NOISE_ENVLP_OFFSET              (156u)
#define CapSense_CENTER_PTR2NOISE_ENVLP_SIZE                (4u)
#define CapSense_CENTER_PTR2NOISE_ENVLP_PARAM_ID            (0xD804009Cu)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
