/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_rcc.h
  * @author  FMSH Application Team
  * @brief   Head file of RCC FL Module
  * @version  V0.0.2
  * @date     29. February 2026
  *******************************************************************************************************
  * @attention    
  * Copyright 2026 SHANGHAI FUDAN MICROELECTRONICS GROUP CO., LTD.(FUDAN MICRO.)
  *        
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met: 
  *    
  * 1. Redistributions of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  *    
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  *    
  * 3. Neither the name of the copyright holder nor the names of its contributors 
  *    may be used to endorse or promote products derived from this software without
  *    specific prior written permission.
  *    
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS"AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   
  * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
  * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
  * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   
  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    
  *
  *******************************************************************************************************  
  */    


/* Define to prevent recursive inclusion---------------------------------------------------------------*/
#ifndef __FM33L0XXD_FL_RCC_H
#define __FM33L0XXD_FL_RCC_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup RCC_FL_ES_INIT RCC Exported Init structures
  * @{
  */

/**
  * @brief FL RCC Init Sturcture definition
  */

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup RCC_FL_Exported_Constants RCC Exported Constants
  * @{
  */

#define    RCC_FDETIE_HFDET_IE_Pos                               (1U)
#define    RCC_FDETIE_HFDET_IE_Msk                               (0x1U << RCC_FDETIE_HFDET_IE_Pos)
#define    RCC_FDETIE_HFDET_IE                                   RCC_FDETIE_HFDET_IE_Msk

#define    RCC_FDETIE_LFDET_IE_Pos                               (0U)
#define    RCC_FDETIE_LFDET_IE_Msk                               (0x1U << RCC_FDETIE_LFDET_IE_Pos)
#define    RCC_FDETIE_LFDET_IE                                   RCC_FDETIE_LFDET_IE_Msk

#define    RCC_FDETIF_HFDETO_Pos                                 (7U)
#define    RCC_FDETIF_HFDETO_Msk                                 (0x1U << RCC_FDETIF_HFDETO_Pos)
#define    RCC_FDETIF_HFDETO                                     RCC_FDETIF_HFDETO_Msk

#define    RCC_FDETIF_LFDETO_Pos                                 (6U)
#define    RCC_FDETIF_LFDETO_Msk                                 (0x1U << RCC_FDETIF_LFDETO_Pos)
#define    RCC_FDETIF_LFDETO                                     RCC_FDETIF_LFDETO_Msk

#define    RCC_FDETIF_HFDETIF_Pos                                (1U)
#define    RCC_FDETIF_HFDETIF_Msk                                (0x1U << RCC_FDETIF_HFDETIF_Pos)
#define    RCC_FDETIF_HFDETIF                                    RCC_FDETIF_HFDETIF_Msk

#define    RCC_FDETIF_LFDETIF_Pos                                (0U)
#define    RCC_FDETIF_LFDETIF_Msk                                (0x1U << RCC_FDETIF_LFDETIF_Pos)
#define    RCC_FDETIF_LFDETIF                                    RCC_FDETIF_LFDETIF_Msk

#define    RCC_SYSCLKSEL_LPM_RCLP_OFF_Pos                         (31U)
#define    RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk                         (0x1U << RCC_SYSCLKSEL_LPM_RCLP_OFF_Pos)
#define    RCC_SYSCLKSEL_LPM_RCLP_OFF                             RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk

#define    RCC_SYSCLKSEL_WKUPCLK_Pos                              (26U)
#define    RCC_SYSCLKSEL_WKUPCLK_Msk                              (0x1U << RCC_SYSCLKSEL_WKUPCLK_Pos)
#define    RCC_SYSCLKSEL_WKUPCLK                                  RCC_SYSCLKSEL_WKUPCLK_Msk

#define    RCC_SYSCLKSEL_SLP_ENEXTI_Pos                           (25U)
#define    RCC_SYSCLKSEL_SLP_ENEXTI_Msk                           (0x1U << RCC_SYSCLKSEL_SLP_ENEXTI_Pos)
#define    RCC_SYSCLKSEL_SLP_ENEXTI                               RCC_SYSCLKSEL_SLP_ENEXTI_Msk

#define    RCC_SYSCLKSEL_EXTICKSEL_Pos                            (24U)
#define    RCC_SYSCLKSEL_EXTICKSEL_Msk                            (0x1U << RCC_SYSCLKSEL_EXTICKSEL_Pos)
#define    RCC_SYSCLKSEL_EXTICKSEL                                RCC_SYSCLKSEL_EXTICKSEL_Msk

#define    RCC_SYSCLKSEL_APBPRES_Pos                              (16U)
#define    RCC_SYSCLKSEL_APBPRES_Msk                              (0x7U << RCC_SYSCLKSEL_APBPRES_Pos)
#define    RCC_SYSCLKSEL_APBPRES                                  RCC_SYSCLKSEL_APBPRES_Msk

#define    RCC_SYSCLKSEL_AHBPRES_Pos                              (8U)
#define    RCC_SYSCLKSEL_AHBPRES_Msk                              (0x7U << RCC_SYSCLKSEL_AHBPRES_Pos)
#define    RCC_SYSCLKSEL_AHBPRES                                  RCC_SYSCLKSEL_AHBPRES_Msk

#define    RCC_SYSCLKSEL_SYSCLKSEL_Pos                            (0U)
#define    RCC_SYSCLKSEL_SYSCLKSEL_Msk                            (0x7U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)
#define    RCC_SYSCLKSEL_SYSCLKSEL                                RCC_SYSCLKSEL_SYSCLKSEL_Msk

#define    RCC_RCHFCON_FSEL_Pos                                   (16U)
#define    RCC_RCHFCON_FSEL_Msk                                   (0xfU << RCC_RCHFCON_FSEL_Pos)
#define    RCC_RCHFCON_FSEL                                       RCC_RCHFCON_FSEL_Msk

#define    RCC_RCHFCON_EN_Pos                                     (0U)
#define    RCC_RCHFCON_EN_Msk                                     (0x1U << RCC_RCHFCON_EN_Pos)
#define    RCC_RCHFCON_EN                                         RCC_RCHFCON_EN_Msk

#define    RCC_RCLPTRIM_TRIM_Pos                                  (0U)
#define    RCC_RCLPTRIM_TRIM_Msk                                  (0x7fU << RCC_RCLPTRIM_TRIM_Pos)
#define    RCC_RCLPTRIM_TRIM                                      RCC_RCLPTRIM_TRIM_Msk

#define    RCC_PLLCON_EN_Pos                                      (0U)
#define    RCC_PLLCON_EN_Msk                                      (0x1U << RCC_PLLCON_EN_Pos)
#define    RCC_PLLCON_EN                                          RCC_PLLCON_EN_Msk

#define    RCC_PLLCON_PLLINSEL_Pos                                (1U)
#define    RCC_PLLCON_PLLINSEL_Msk                                (0x3U << RCC_PLLCON_PLLINSEL_Pos)
#define    RCC_PLLCON_PLLINSEL                                    RCC_PLLCON_PLLINSEL_Msk

#define    RCC_PLLCON_PLLOSEL_Pos                                 (3U)
#define    RCC_PLLCON_PLLOSEL_Msk                                 (0x1U << RCC_PLLCON_PLLOSEL_Pos)
#define    RCC_PLLCON_PLLOSEL                                     RCC_PLLCON_PLLOSEL_Msk

#define    RCC_PLLCON_LOCKED_Pos                                  (7U)
#define    RCC_PLLCON_LOCKED_Msk                                  (0x1U << RCC_PLLCON_LOCKED_Pos)
#define    RCC_PLLCON_LOCKED                                      RCC_PLLCON_LOCKED_Msk

#define    RCC_PLLCON_DB_Pos                                      (16U)
#define    RCC_PLLCON_DB_Msk                                      (0x3ffU << RCC_PLLCON_DB_Pos)
#define    RCC_PLLCON_DB                                          RCC_PLLCON_DB_Msk

#define    RCC_RCLPCON_EN_Pos                                     (0U)
#define    RCC_RCLPCON_EN_Msk                                     (0x1U << RCC_RCLPCON_EN_Pos)
#define    RCC_RCLPCON_EN                                         RCC_RCLPCON_EN_Msk


#define    RCC_XTLFIPW_IPW_Pos                                    (0U)
#define    RCC_XTLFIPW_IPW_Msk                                    (0x7U << RCC_XTLFIPW_IPW_Pos)
#define    RCC_XTLFIPW_IPW                                        RCC_XTLFIPW_IPW_Msk

#define    RCC_PERCLKCON2_SDADCSEL_Pos                            (16U)
#define    RCC_PERCLKCON2_SDADCSEL_Msk                            (0x7U << RCC_PERCLKCON2_SDADCSEL_Pos)
#define    RCC_PERCLKCON2_SDADCSEL                                RCC_PERCLKCON2_SDADCSEL_Msk

#define    RCC_PERCLKCON5_SARCKE_Pos                              (7U)
#define    RCC_PERCLKCON5_SARCKE_Msk                              (0x1U << RCC_PERCLKCON5_SARCKE_Pos)
#define    RCC_PERCLKCON5_SARCKE                                  RCC_PERCLKCON5_SARCKE_Msk

#define    RCC_PERCLKCON5_SARADCPRSC_Pos                          (2U)
#define    RCC_PERCLKCON5_SARADCPRSC_Msk                          (0x7U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    RCC_PERCLKCON5_SARADCPRSC                              RCC_PERCLKCON5_SARADCPRSC_Msk

#define    RCC_PERCLKCON5_SARADCCKS_Pos                           (0U)
#define    RCC_PERCLKCON5_SARADCCKS_Msk                           (0x3U << RCC_PERCLKCON5_SARADCCKS_Pos)
#define    RCC_PERCLKCON5_SARADCCKS                               RCC_PERCLKCON5_SARADCCKS_Msk

#define    RCC_MPRIL_AHBMCR_Pos                                   (0U)
#define    RCC_MPRIL_AHBMCR_Msk                                   (0x1U << RCC_MPRIL_AHBMCR_Pos)
#define    RCC_MPRIL_AHBMCR                                       RCC_MPRIL_AHBMCR_Msk

#define    RCC_RCLFCON_EN_Pos                                     (0U)
#define    RCC_RCLFCON_EN_Msk                                     (0x1U << RCC_RCLFCON_EN_Pos)
#define    RCC_RCLFCON_EN                                         RCC_RCLFCON_EN_Msk

#define    RCC_RCLFTRIM_TRIM_Pos                                  (0U)
#define    RCC_RCLFTRIM_TRIM_Msk                                  (0x3fU << RCC_RCLFTRIM_TRIM_Pos)
#define    RCC_RCLFTRIM_TRIM                                      RCC_RCLFTRIM_TRIM_Msk

#define    RCC_XTHFCR_CAP_CFG_Pos                                 (16U)
#define    RCC_XTHFCR_CAP_CFG_Msk                                 (0x7U << RCC_XTHFCR_CAP_CFG_Pos)
#define    RCC_XTHFCR_CAP_CFG                                     RCC_XTHFCR_CAP_CFG_Msk

#define    RCC_XTHFCR_WAIT_Pos                                    (13U)
#define    RCC_XTHFCR_WAIT_Msk                                    (0x7U << RCC_XTHFCR_WAIT_Pos)
#define    RCC_XTHFCR_WAIT                                        RCC_XTHFCR_WAIT_Msk

#define    RCC_XTHFCR_CFG_Pos                                      (8U)
#define    RCC_XTHFCR_CFG_Msk                                     (0x1fU << RCC_XTHFCR_CFG_Pos)
#define    RCC_XTHFCR_CFG                                         RCC_XTHFCR_CFG_Msk

#define    RCC_XTHFCR_RDY_Pos                                     (1U)
#define    RCC_XTHFCR_RDY_Msk                                     (0x1U << RCC_XTHFCR_RDY_Pos)
#define    RCC_XTHFCR_RDY                                         RCC_XTHFCR_RDY_Msk

#define    RCC_XTHFCR_EN_Pos                                      (0U)
#define    RCC_XTHFCR_EN_Msk                                      (0x1U << RCC_XTHFCR_EN_Pos)
#define    RCC_XTHFCR_EN                                          RCC_XTHFCR_EN_Msk



#define    FL_RCC_GROUP1_BUSCLK_LPTIM                             (0x1U << 0U)
#define    FL_RCC_GROUP1_BUSCLK_LPTIM_CNT                         (0x1U << 1U)
#define    FL_RCC_GROUP1_BUSCLK_RTC                               (0x1U << 2U)
#define    FL_RCC_GROUP1_BUSCLK_PMU                               (0x1U << 3U)
#define    FL_RCC_GROUP1_BUSCLK_SCU                               (0x1U << 4U)
#define    FL_RCC_GROUP1_BUSCLK_IWDT                              (0x1U << 5U)
#define    FL_RCC_GROUP1_BUSCLK_ANAC                              (0x1U << 6U)
#define    FL_RCC_GROUP1_BUSCLK_PAD                               (0x1U << 7U)
#define    FL_RCC_GROUP1_BUSCLK_EXTI0                             (0x1U << 8U)
#define    FL_RCC_GROUP1_BUSCLK_EXTI1                             (0x1U << 9U)
#define    FL_RCC_GROUP1_BUSCLK_EXTI2                             (0x1U << 10U)
#define    FL_RCC_GROUP1_BUSCLK_DCU                               (0x1U << 31U)
#define    FL_RCC_GROUP2_BUSCLK_CRC                               (0x1U << 0U)
#define    FL_RCC_GROUP2_BUSCLK_RNG                               (0x1U << 1U)
#define    FL_RCC_GROUP2_BUSCLK_AES                               (0x1U << 2U)
#define    FL_RCC_GROUP2_BUSCLK_LCD                               (0x1U << 3U)
#define    FL_RCC_GROUP2_BUSCLK_DMA                               (0x1U << 4U)
#define    FL_RCC_GROUP2_BUSCLK_FLASH                             (0x1U << 5U)
#define    FL_RCC_GROUP2_BUSCLK_RAMBIST                           (0x1U << 6U)
#define    FL_RCC_GROUP2_BUSCLK_WWDT                              (0x1U << 7U)
#define    FL_RCC_GROUP2_BUSCLK_ADC                               (0x1U << 8U)
#define    FL_RCC_GROUP2_BUSCLK_SARADC                            (0x1U << 19U)

#define    FL_RCC_GROUP3_BUSCLK_SPI1                              (0x1U << 0U)
#define    FL_RCC_GROUP3_BUSCLK_SPI2                              (0x1U << 1U)
#define    FL_RCC_GROUP3_BUSCLK_SPI0                              (0x1U << 2U)
#define    FL_RCC_GROUP3_BUSCLK_UART0                             (0x1U << 8U)
#define    FL_RCC_GROUP3_BUSCLK_UART1                             (0x1U << 9U)
#define    FL_RCC_GROUP3_BUSCLK_UART2                             (0x1U << 10U)
#define    FL_RCC_GROUP3_BUSCLK_UART3                             (0x1U << 11U)
#define    FL_RCC_GROUP3_BUSCLK_UART4                             (0x1U << 12U)
#define    FL_RCC_GROUP3_BUSCLK_UART5                             (0x1U << 13U)
#define    FL_RCC_GROUP3_BUSCLK_UARTIR                            (0x1U << 14U)
#define    FL_RCC_GROUP3_BUSCLK_LPUART0                           (0x1U << 15U)
#define    FL_RCC_GROUP3_BUSCLK_U7816CK0                          (0x1U << 16U)
#define    FL_RCC_GROUP3_BUSCLK_U7816CK1                          (0x1U << 17U)
#define    FL_RCC_GROUP3_BUSCLK_LPUART0FCK                        (0x1U << 23U)
#define    FL_RCC_GROUP3_BUSCLK_I2C0                              (0x1U << 24U)
#define    FL_RCC_GROUP3_BUSCLK_I2C1                              (0x1U << 25U)
#define    FL_RCC_GROUP3_BUSCLK_LPUART1                           (0x1U << 26U)
#define    FL_RCC_GROUP3_BUSCLK_LPUART1FCK                        (0x1U << 27U)
#define    FL_RCC_GROUP4_BUSCLK_BSTIM1                            (0x1U << 0U)
#define    FL_RCC_GROUP4_BUSCLK_BSTIM2                            (0x1U << 1U)
#define    FL_RCC_GROUP4_BUSCLK_EXTIM1                            (0x1U << 2U)
#define    FL_RCC_GROUP4_BUSCLK_EXTIM2                            (0x1U << 3U)
#define    FL_RCC_GROUP4_BUSCLK_EXTIM3                            (0x1U << 4U)
#define    FL_RCC_GROUP4_BUSCLK_EXTIM4                            (0x1U << 5U)
#define    FL_RCC_GROUP4_BUSCLK_GPTIM0                            (0x1U << 6U)
#define    FL_RCC_GROUP4_BUSCLK_GPTIM1                            (0x1U << 7U)



#define    FL_RCC_WAKEUP_FREQ_RCHF8M_DIV16                        (0x1U << RCC_SYSCLKSEL_WKUPCLK_Pos)
#define    FL_RCC_WAKEUP_FREQ_RCHF8M                              (0x0U << RCC_SYSCLKSEL_WKUPCLK_Pos)

#define    FL_RCC_EXTI_SAMPLING_CLK_LSCLK                         (0x1U << RCC_SYSCLKSEL_EXTICKSEL_Pos)
#define    FL_RCC_EXTI_SAMPLING_CLK_AHBCLK                        (0x0U << RCC_SYSCLKSEL_EXTICKSEL_Pos)


#define    FL_RCC_APBPRES_PSC_DIV1                                (0x0U << RCC_SYSCLKSEL_APBPRES_Pos)
#define    FL_RCC_APBPRES_PSC_DIV2                                (0x4U << RCC_SYSCLKSEL_APBPRES_Pos)
#define    FL_RCC_APBPRES_PSC_DIV4                                (0x5U << RCC_SYSCLKSEL_APBPRES_Pos)
#define    FL_RCC_APBPRES_PSC_DIV8                                (0x6U << RCC_SYSCLKSEL_APBPRES_Pos)
#define    FL_RCC_APBPRES_PSC_DIV16                               (0x7U << RCC_SYSCLKSEL_APBPRES_Pos)


#define    FL_RCC_AHBCLK_PSC_DIV1                                 (0x0U << RCC_SYSCLKSEL_AHBPRES_Pos)
#define    FL_RCC_AHBCLK_PSC_DIV2                                 (0x4U << RCC_SYSCLKSEL_AHBPRES_Pos)
#define    FL_RCC_AHBCLK_PSC_DIV4                                 (0x5U << RCC_SYSCLKSEL_AHBPRES_Pos)
#define    FL_RCC_AHBCLK_PSC_DIV8                                 (0x6U << RCC_SYSCLKSEL_AHBPRES_Pos)
#define    FL_RCC_AHBCLK_PSC_DIV16                                (0x7U << RCC_SYSCLKSEL_AHBPRES_Pos)


#define    FL_RCC_SYSTEM_CLK_SOURCE_RCHF                          (0x0U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)
#define    FL_RCC_SYSTEM_CLK_SOURCE_RCLF                          (0x1U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)
#define    FL_RCC_SYSTEM_CLK_SOURCE_LSCLK                         (0x2U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)
#define    FL_RCC_SYSTEM_CLK_SOURCE_PLL                           (0x3U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)
#define    FL_RCC_SYSTEM_CLK_SOURCE_XTHF                          (0x4U << RCC_SYSCLKSEL_SYSCLKSEL_Pos)


#define    FL_RCC_RCHF_FREQUENCY_8MHZ                             (0x0U << RCC_RCHFCON_FSEL_Pos)
#define    FL_RCC_RCHF_FREQUENCY_16MHZ                            (0x1U << RCC_RCHFCON_FSEL_Pos)
#define    FL_RCC_RCHF_FREQUENCY_24MHZ                            (0x2U << RCC_RCHFCON_FSEL_Pos)
#define    FL_RCC_RCHF_FREQUENCY_32MHZ                            (0x3U << RCC_RCHFCON_FSEL_Pos)


#define    FL_RCC_PLL_INPUT_SOURCE_XTLF                           (0x0U << RCC_PLLCON_PLLINSEL_Pos)
#define    FL_RCC_PLL_INPUT_SOURCE_RCLP                           (0x1U << RCC_PLLCON_PLLINSEL_Pos)
#define    FL_RCC_PLL_INPUT_SOURCE_RCHF_DIV256                    (0x2U << RCC_PLLCON_PLLINSEL_Pos)


#define    FL_RCC_PLL_OUT_PLLx1                                   (0x0U << RCC_PLLCON_PLLOSEL_Pos)
#define    FL_RCC_PLL_OUT_PLLx2                                   (0x1U << RCC_PLLCON_PLLOSEL_Pos)


#define    FL_RCC_XTLF_WORK_CURRENT_450NA                         (0x0U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_400NA                         (0x1U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_350NA                         (0x2U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_300NA                         (0x3U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_250NA                         (0x4U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_200NA                         (0x5U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_150NA                         (0x6U << RCC_XTLFIPW_IPW_Pos)
#define    FL_RCC_XTLF_WORK_CURRENT_100NA                         (0x7U << RCC_XTLFIPW_IPW_Pos)


#define    FL_RCC_SDADC_CLK_SOURCE_RCLF                           (0x0U << RCC_PERCLKCON2_SDADCSEL_Pos)
#define    FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV32                     (0x1U << RCC_PERCLKCON2_SDADCSEL_Pos)
#define    FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV16                     (0x2U << RCC_PERCLKCON2_SDADCSEL_Pos)
#define    FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV8                      (0x3U << RCC_PERCLKCON2_SDADCSEL_Pos)


#define    FL_RCC_SARADC_PSC_DIV1                                 (0x0U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    FL_RCC_SARADC_PSC_DIV2                                 (0x1U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    FL_RCC_SARADC_PSC_DIV4                                 (0x2U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    FL_RCC_SARADC_PSC_DIV8                                 (0x3U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    FL_RCC_SARADC_PSC_DIV16                                (0x4U << RCC_PERCLKCON5_SARADCPRSC_Pos)
#define    FL_RCC_SARADC_PSC_DIV32                                (0x5U << RCC_PERCLKCON5_SARADCPRSC_Pos)


#define    FL_RCC_SARADC_CLK_SOURCE_RCLF                          (0x0U << RCC_PERCLKCON5_SARADCCKS_Pos)
#define    FL_RCC_SARADC_CLK_SOURCE_RCHF                          (0x1U << RCC_PERCLKCON5_SARADCCKS_Pos)
#define    FL_RCC_SARADC_CLK_SOURCE_XTHF                          (0x2U << RCC_PERCLKCON5_SARADCCKS_Pos)
#define    FL_RCC_SARADC_CLK_SOURCE_PLL                           (0x3U << RCC_PERCLKCON5_SARADCCKS_Pos)


#define    FL_RCC_AHB_MASTER_PRIORITY_DMA_FIRST                   (0x0U << RCC_MPRIL_AHBMCR_Pos)
#define    FL_RCC_AHB_MASTER_PRIORITY_CPU_FIRST                   (0x1U << RCC_MPRIL_AHBMCR_Pos)


#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_128                      (0x0U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_256                      (0x1U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_512                      (0x2U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_1024                     (0x3U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_2048                     (0x4U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_4096                     (0x5U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_8192                     (0x6U << RCC_XTHFCR_WAIT_Pos)
#define    FL_RCC_XTHF_STARTUP_WAIT_TIME_16384                    (0x7U << RCC_XTHFCR_WAIT_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup RCC_FL_Exported_Functions RCC Exported Functions
  * @{
  */

/**
  * @brief    Enable XTHF Fail Interrupt
  * @rmtoll   FDETIE    HFDET_IE    FL_FDET_EnableIT_XTHFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_EnableIT_XTHFFail(void)
{
    SET_BIT(RCC->FDETIE, RCC_FDETIE_HFDET_IE_Msk);
}

/**
  * @brief    Get XTHF Fail Interrupt Enable Status
  * @rmtoll   FDETIE    HFDET_IE    FL_FDET_IsEnabledIT_XTHFFail
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsEnabledIT_XTHFFail(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIE, RCC_FDETIE_HFDET_IE_Msk) == RCC_FDETIE_HFDET_IE_Msk);
}

/**
  * @brief    Disable XTHF Fail Interrupt
  * @rmtoll   FDETIE    HFDET_IE    FL_FDET_DisableIT_XTHFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_DisableIT_XTHFFail(void)
{
    CLEAR_BIT(RCC->FDETIE, RCC_FDETIE_HFDET_IE_Msk);
}

/**
  * @brief    Enable XTLF Fail Interrupt
  * @rmtoll   FDETIE    LFDET_IE    FL_FDET_EnableIT_XTLFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_EnableIT_XTLFFail(void)
{
    SET_BIT(RCC->FDETIE, RCC_FDETIE_LFDET_IE_Msk);
}

/**
  * @brief    Get XTLF Fail Interrupt Enable Status
  * @rmtoll   FDETIE    LFDET_IE    FL_FDET_IsEnabledIT_XTLFFail
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsEnabledIT_XTLFFail(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIE, RCC_FDETIE_LFDET_IE_Msk) == RCC_FDETIE_LFDET_IE_Msk);
}

/**
  * @brief    Disable XTLF Fail Interrupt
  * @rmtoll   FDETIE    LFDET_IE    FL_FDET_DisableIT_XTLFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_DisableIT_XTLFFail(void)
{
    CLEAR_BIT(RCC->FDETIE, RCC_FDETIE_LFDET_IE_Msk);
}

/**
  * @brief    Get XTHF Vibrating Output
  * @rmtoll   FDETIF    HFDETO    FL_FDET_IsActiveFlag_XTHFFailOutput
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsActiveFlag_XTHFFailOutput(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIF, RCC_FDETIF_HFDETO_Msk) == (RCC_FDETIF_HFDETO_Msk));
}

/**
  * @brief    Get XTLF Vibrating Output
  * @rmtoll   FDETIF    LFDETO    FL_FDET_IsActiveFlag_XTLFFailOutput
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsActiveFlag_XTLFFailOutput(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIF, RCC_FDETIF_LFDETO_Msk) == (RCC_FDETIF_LFDETO_Msk));
}

/**
  * @brief    Get XTHF Vibrating Flag
  * @rmtoll   FDETIF    HFDETIF    FL_FDET_IsActiveFlag_XTHFFail
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsActiveFlag_XTHFFail(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIF, RCC_FDETIF_HFDETIF_Msk) == (RCC_FDETIF_HFDETIF_Msk));
}

/**
  * @brief    Clear XTHF Vibrating Flag
  * @rmtoll   FDETIF    HFDETIF    FL_FDET_ClearFlag_XTHFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_ClearFlag_XTHFFail(void)
{
    WRITE_REG(RCC->FDETIF, RCC_FDETIF_HFDETIF_Msk);
}

/**
  * @brief    Get XTLF Vibrating Output
  * @rmtoll   FDETIF    LFDETIF    FL_FDET_IsActiveFlag_XTLFFail
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FDET_IsActiveFlag_XTLFFail(void)
{
    return (uint32_t)(READ_BIT(RCC->FDETIF, RCC_FDETIF_LFDETIF_Msk) == (RCC_FDETIF_LFDETIF_Msk));
}

/**
  * @brief    Clear XTLF Vibrating Output
  * @rmtoll   FDETIF    LFDETIF    FL_FDET_ClearFlag_XTLFFail
  * @retval   None
  */
__STATIC_INLINE void FL_FDET_ClearFlag_XTLFFail(void)
{
    WRITE_REG(RCC->FDETIF, RCC_FDETIF_LFDETIF_Msk);
}

/**
  * @brief    Enable RCLP In Sleep/DeepSleep Mode
  * @rmtoll   SYSCLKSEL    LPM_RCLP_OFF    FL_RCC_EnableRCLPInSleep
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_EnableRCLPInSleep(void)
{
    CLEAR_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk);
}

/**
  * @brief    Get RCLP In Sleep/DeepSleep Mode Enable Status
  * @rmtoll   SYSCLKSEL    LPM_RCLP_OFF    FL_RCC_IsEnabledRCLPInSleep
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledRCLPInSleep(void)
{
    return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk) == RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk);
}

/**
  * @brief    Disable RCLP In Sleep/DeepSleep Mode
  * @rmtoll   SYSCLKSEL    LPM_RCLP_OFF    FL_RCC_DisableRCLPInSleep
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableRCLPInSleep(void)
{
    SET_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_LPM_RCLP_OFF_Msk);
}

/**
  * @brief    Set Default Clock Frequency After Wake Up
  * @rmtoll   SYSCLKSEL    WKUPCLK    FL_RCC_SetDefaultClockFrequencyAfterWakeUp
  * @param    freq This parameter can be one of the following values:
  *           @arg @ref FL_RCC_WAKEUP_FREQ_RCHF8M_DIV16
  *           @arg @ref FL_RCC_WAKEUP_FREQ_RCHF8M
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetDefaultClockFrequencyAfterWakeUp(uint32_t freq)
{
    MODIFY_REG(RCC->SYSCLKSEL, RCC_SYSCLKSEL_WKUPCLK_Msk, freq);
}

/**
  * @brief    Get Default Clock Frequency  Setting After Wake Up
  * @rmtoll   SYSCLKSEL    WKUPCLK    FL_RCC_GetDefaultClockFrequencyAfterWakeUp
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_WAKEUP_FREQ_RCHF8M_DIV16
  *           @arg @ref FL_RCC_WAKEUP_FREQ_RCHF8M
  */
__STATIC_INLINE uint32_t FL_RCC_GetDefaultClockFrequencyAfterWakeUp(void)
{
        return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_WKUPCLK_Msk));
}

/**
  * @brief    Enable Sleep/DeepSleep Mode External Interrupt
  * @rmtoll   SYSCLKSEL    SLP_ENEXTI    FL_RCC_EnableEXTIOnSleep
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_EnableEXTIOnSleep(void)
{
    SET_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_SLP_ENEXTI_Msk);
}

/**
  * @brief    Get Sleep/DeepSleep Mode External Interrupt Enable Status
  * @rmtoll   SYSCLKSEL    SLP_ENEXTI    FL_RCC_IsEnabledEXTIOnSleep
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledEXTIOnSleep(void)
{
    return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_SLP_ENEXTI_Msk) == RCC_SYSCLKSEL_SLP_ENEXTI_Msk);
}

/**
  * @brief    Disable Sleep/DeepSleep Mode External Interrupt
  * @rmtoll   SYSCLKSEL    SLP_ENEXTI    FL_RCC_DisableEXTIOnSleep
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableEXTIOnSleep(void)
{
    CLEAR_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_SLP_ENEXTI_Msk);
}

/**
  * @brief    Set EXTI Interrupt Sampling Clock
  * @rmtoll   SYSCLKSEL    EXTICKSEL    FL_RCC_SetEXTIInterruptSamplingClock
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_RCC_EXTI_SAMPLING_CLK_LSCLK
  *           @arg @ref FL_RCC_EXTI_SAMPLING_CLK_AHBCLK
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetEXTIInterruptSamplingClock(uint32_t clock)
{
    MODIFY_REG(RCC->SYSCLKSEL, RCC_SYSCLKSEL_EXTICKSEL_Msk, clock);
}

/**
  * @brief    Get EXTI Interrupt Sampling Clock Setting
  * @rmtoll   SYSCLKSEL    EXTICKSEL    FL_RCC_GetEXTIInterruptSamplingClock
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_EXTI_SAMPLING_CLK_LSCLK
  *           @arg @ref FL_RCC_EXTI_SAMPLING_CLK_AHBCLK
  */
__STATIC_INLINE uint32_t FL_RCC_GetEXTIInterruptSamplingClock(void)
{
        return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_EXTICKSEL_Msk));
}


/**
  * @brief    Set APB2 Prescaler
  * @rmtoll   SYSCLKSEL    APBPRES    FL_RCC_SetAPBPrescaler
  * @param    prescaler This parameter can be one of the following values:
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV1
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV2
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV4
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV8
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV16
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetAPBPrescaler(uint32_t prescaler)
{
    MODIFY_REG(RCC->SYSCLKSEL, RCC_SYSCLKSEL_APBPRES_Msk, prescaler);
}

/**
  * @brief    Get APB2 Prescaler
  * @rmtoll   SYSCLKSEL    APBPRES    FL_RCC_GetAPBPrescaler
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV1
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV2
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV4
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV8
  *           @arg @ref FL_RCC_APBPRES_PSC_DIV16
  */
__STATIC_INLINE uint32_t FL_RCC_GetAPBPrescaler(void)
{
    return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_APBPRES_Msk));
}

/**
  * @brief    Set AHB Prescaler
  * @rmtoll   SYSCLKSEL    AHBPRES    FL_RCC_SetAHBPrescaler
  * @param    prescaler This parameter can be one of the following values:
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV1
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV2
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV4
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV8
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV16
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetAHBPrescaler(uint32_t prescaler)
{
    MODIFY_REG(RCC->SYSCLKSEL, RCC_SYSCLKSEL_AHBPRES_Msk, prescaler);
}

/**
  * @brief    Get AHB Prescaler
  * @rmtoll   SYSCLKSEL    AHBPRES    FL_RCC_GetAHBPrescaler
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV1
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV2
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV4
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV8
  *           @arg @ref FL_RCC_AHBCLK_PSC_DIV16
  */
__STATIC_INLINE uint32_t FL_RCC_GetAHBPrescaler(void)
{
    return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_AHBPRES_Msk));
}

/**
  * @brief    Set System Clock Source
  * @rmtoll   SYSCLKSEL    SYSCLKSEL    FL_RCC_SetSystemClockSource
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_RCC_SYSTEM_CLK_SOURCE_RCHF
  *           @arg @ref FL_RCC_SYSTEM_CLK_SOURCE_RCLF
  *           @arg @ref FL_RCC_SYSTEM_CLK_SOURCE_LSCLK
  *           @arg @ref FL_RCC_SYSTEM_CLK_SOURCE_PLL
  *           @arg @ref FL_RCC_SYSTEM_CLK_SOURCE_XTHF
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetSystemClockSource(uint32_t clock)
{
    MODIFY_REG(RCC->SYSCLKSEL, RCC_SYSCLKSEL_SYSCLKSEL_Msk, clock);
}

/**
  * @brief    Get System Clock Source Setting
  * @rmtoll   SYSCLKSEL    SYSCLKSEL    FL_RCC_GetSystemClockSource
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_RCC_GetSystemClockSource(void)
{
    return (uint32_t)(READ_BIT(RCC->SYSCLKSEL, RCC_SYSCLKSEL_SYSCLKSEL_Msk));
}

/**
  * @brief    Set RCHF Frequency
  * @rmtoll   RCHFCON    FSEL    FL_RCC_RCHF_SetFrequency
  * @param    frequency This parameter can be one of the following values:
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_8MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_16MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_24MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_32MHZ
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCHF_SetFrequency(uint32_t frequency)
{
    MODIFY_REG(RCC->RCHFCON, RCC_RCHFCON_FSEL_Msk, frequency);
}

/**
  * @brief    Get RCHF Frequency Setting
  * @rmtoll   RCHFCON    FSEL    FL_RCC_RCHF_GetFrequency
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_8MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_16MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_24MHZ
  *           @arg @ref FL_RCC_RCHF_FREQUENCY_32MHZ
  */
__STATIC_INLINE uint32_t FL_RCC_RCHF_GetFrequency(void)
{
    return (uint32_t)(READ_BIT(RCC->RCHFCON, RCC_RCHFCON_FSEL_Msk));
}

/**
  * @brief    Enable RCHF
  * @rmtoll   RCHFCON    EN    FL_RCC_RCHF_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCHF_Enable(void)
{
    SET_BIT(RCC->RCHFCON, RCC_RCHFCON_EN_Msk);
}

/**
  * @brief    Get RCHF Enable Status
  * @rmtoll   RCHFCON    EN    FL_RCC_RCHF_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_RCHF_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->RCHFCON, RCC_RCHFCON_EN_Msk) == RCC_RCHFCON_EN_Msk);
}

/**
  * @brief    Disable RCHF
  * @rmtoll   RCHFCON    EN    FL_RCC_RCHF_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCHF_Disable(void)
{
    CLEAR_BIT(RCC->RCHFCON, RCC_RCHFCON_EN_Msk);
}

/**
  * @brief    Set RCHF Frequency Trim Value
  * @rmtoll   RCHFTRIM    TRIM    FL_RCC_RCHF_WriteTrimValue
  * @param    value TrimValue The value of RCHF trim
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCHF_WriteTrimValue(uint32_t value)
{
    MODIFY_REG(RCC->RCHFTRIM, (0x7fU << 0U), (value << 0U));
}

/**
  * @brief    Get RCHF Frequency Trim Value
  * @rmtoll   RCHFTRIM    TRIM    FL_RCC_RCHF_ReadTrimValue
  * @retval   The Value of RCHF trim
  */
__STATIC_INLINE uint32_t FL_RCC_RCHF_ReadTrimValue(void)
{
    return (uint32_t)(READ_BIT(RCC->RCHFTRIM, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    Enable PLL
  * @rmtoll   PLLCON    EN    FL_RCC_PLL_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_PLL_Enable(void)
{
    SET_BIT(RCC->PLLCON, RCC_PLLCON_EN_Msk);
}

/**
  * @brief    Get PLL Enable Status
  * @rmtoll   PLLCON    EN    FL_RCC_PLL_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_PLL_Disable(void)
{
    CLEAR_BIT(RCC->PLLCON, RCC_PLLCON_EN_Msk);
}

/**
  * @brief    Disable PLL
  * @rmtoll   PLLCON    EN    FL_RCC_PLL_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_PLL_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->PLLCON, RCC_PLLCON_EN_Msk) == RCC_PLLCON_EN_Msk);
}

/**
  * @brief    Set PLL Input Source
  * @rmtoll   PLLCON    PLLINSEL    FL_RCC_SetPLLInputSource
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_XTLF
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_RCLP
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_RCHF_DIV256
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetPLLInputSource(uint32_t source)
{
    MODIFY_REG(RCC->PLLCON, RCC_PLLCON_PLLINSEL_Msk, source);
}

/**
  * @brief    Get PLL Input Source
  * @rmtoll   PLLCON    PLLINSEL    FL_RCC_GetPLLInputSource
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_XTLF
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_RCLP
  *           @arg @ref FL_RCC_PLL_INPUT_SOURCE_RCHF_DIV256
  */
__STATIC_INLINE uint32_t FL_RCC_GetPLLInputSource(void)
{
    return (uint32_t)(READ_BIT(RCC->PLLCON, RCC_PLLCON_PLLINSEL_Msk));
}

/**
  * @brief    Set PLL Input Source
  * @rmtoll   PLLCON    PLLOSEL    FL_RCC_SetPLLOutput
  * @param    output This parameter can be one of the following values:
  *           @arg @ref FL_RCC_PLL_OUT_PLLx1
  *           @arg @ref FL_RCC_PLL_OUT_PLLx2
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetPLLOutput(uint32_t output)
{
    MODIFY_REG(RCC->PLLCON, RCC_PLLCON_PLLOSEL_Msk, output);
}


/**
  * @brief    Get PLL Input Source
  * @rmtoll   PLLCON    PLLOSEL    FL_RCC_GetPLLOutput
  * @param    output This parameter can be one of the following values:
  *           @arg @ref FL_RCC_PLL_OUT_PLLx1
  *           @arg @ref FL_RCC_PLL_OUT_PLLx2
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_RCC_GetPLLOutput(void)
{
	return (uint32_t)(READ_BIT(RCC->PLLCON, RCC_PLLCON_PLLOSEL_Msk));
}



/**
  * @brief    Get PLL Ready Status
  * @rmtoll   PLLCON    LOCKED    FL_RCC_IsActiveFlag_PLLReady
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsActiveFlag_PLLReady(void)
{
    return (uint32_t)(READ_BIT(RCC->PLLCON, RCC_PLLCON_LOCKED_Msk) == (RCC_PLLCON_LOCKED_Msk));
}

/**
  * @brief    Set PLL Multiplier
  * @rmtoll   PLLCON    DB    FL_RCC_PLL_WriteMultiplier
  * @param    multiplier 
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_PLL_WriteMultiplier(uint32_t multiplier)
{
    MODIFY_REG(RCC->PLLCON, (0x3ffU << 16U), (multiplier << 16U));
}

/**
  * @brief    Get PLL Multiplier Setting
  * @rmtoll   PLLCON    DB    FL_RCC_PLL_ReadMultiplier
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RCC_PLL_ReadMultiplier(void)
{
    return (uint32_t)(READ_BIT(RCC->PLLCON, (0x3ffU << 16U)) >> 16U);
}

/**
  * @brief    Enable RCLP
  * @rmtoll   RCLPCON    EN    FL_RCC_RCLP_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLP_Enable(void)
{
    CLEAR_BIT(RCC->RCLPCON, RCC_RCLPCON_EN_Msk);
}

/**
  * @brief    Get RCLP Enable Status
  * @rmtoll   RCLPCON    EN    FL_RCC_RCLP_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_RCLP_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->RCLPCON, RCC_RCLPCON_EN_Msk) == RCC_RCLPCON_EN_Msk);
}

/**
  * @brief    Disable RCLP
  * @rmtoll   RCLPCON    EN    FL_RCC_RCLP_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLP_Disable(void)
{
    SET_BIT(RCC->RCLPCON, RCC_RCLPCON_EN_Msk);
}

/**
  * @brief    Set RCLP Frequency Trim Value
  * @rmtoll   RCLPTRIM    TRIM    FL_RCC_RCLP_WriteTrimValue
  * @param    value TrimValue The value of RCLP trim
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLP_WriteTrimValue(uint32_t value)
{
    MODIFY_REG(RCC->RCLPTRIM, (0xfU << 0U), (value << 0U));
}

/**
  * @brief    Get RCLP Frequency Trim Value
  * @rmtoll   RCLPTRIM    TRIM    FL_RCC_RCLP_ReadTrimValue
  * @retval   The Value of RCLP trim
  */
__STATIC_INLINE uint32_t FL_RCC_RCLP_ReadTrimValue(void)
{
    return (uint32_t)(READ_BIT(RCC->RCLPTRIM, (0xfU << 0U)) >> 0U);
}

/**
  * @brief    Set XTLF Current
  * @rmtoll   XTLFIPW    IPW    FL_RCC_XTLF_SetWorkCurrent
  * @param    current This parameter can be one of the following values:
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_450NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_400NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_350NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_300NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_250NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_200NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_150NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_100NA
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_XTLF_SetWorkCurrent(uint32_t current)
{
    MODIFY_REG(RCC->XTLFIPW, RCC_XTLFIPW_IPW_Msk, current);
}

/**
  * @brief    Get XTLF Current Setting
  * @rmtoll   XTLFIPW    IPW    FL_RCC_XTLF_GetWorkCurrent
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_450NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_400NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_350NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_300NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_250NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_200NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_150NA
  *           @arg @ref FL_RCC_XTLF_WORK_CURRENT_100NA
  */
__STATIC_INLINE uint32_t FL_RCC_XTLF_GetWorkCurrent(void)
{
    return (uint32_t)(READ_BIT(RCC->XTLFIPW, RCC_XTLFIPW_IPW_Msk));
}

/**
  * @brief    Enable Group1 Periph Bus Clock
  * @rmtoll   PERCLKCON1        FL_RCC_EnableGroup1BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM_CNT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_RTC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PMU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_SCU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_IWDT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_ANAC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PAD
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI0
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI1
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI2
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_DCU
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_EnableGroup1BusClock(uint32_t Peripheral)
{
    SET_BIT(RCC->PERCLKCON1, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Enable Group2 Periph Bus Clock
  * @rmtoll   PERCLKCON2        FL_RCC_EnableGroup2BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_CRC
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RNG
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_AES
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_LCD
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_DMA
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_FLASH
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RAMBIST
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_WWDT
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_ADC
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_SARADC
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_EnableGroup2BusClock(uint32_t Peripheral)
{
    SET_BIT(RCC->PERCLKCON2, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Set SDADC Clock Source
  * @rmtoll   PERCLKCON2    SDADCSEL    FL_RCC_SetSDADCClockSource
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCLF
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV32
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV16
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV8
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetSDADCClockSource(uint32_t clock)
{
    MODIFY_REG(RCC->PERCLKCON2, RCC_PERCLKCON2_SDADCSEL_Msk, clock);
}

/**
  * @brief    Get SDADC Clock Source Setting
  * @rmtoll   PERCLKCON2    SDADCSEL    FL_RCC_GetSDADCClockSource
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCLF
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV32
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV16
  *           @arg @ref FL_RCC_SDADC_CLK_SOURCE_RCHF_DIV8
  */
__STATIC_INLINE uint32_t FL_RCC_GetSDADCClockSource(void)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON2, RCC_PERCLKCON2_SDADCSEL_Msk));
}

/**
  * @brief    Enable Group3 Periph Bus Clock
  * @rmtoll   PERCLKCON3        FL_RCC_EnableGroup3BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART3
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART4
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART5
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UARTIR
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0FCK
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1FCK
  * @retval   None
  */
	

__STATIC_INLINE void FL_RCC_EnableGroup3BusClock(uint32_t Peripheral)
{
    SET_BIT(RCC->PERCLKCON3, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Enable Group4 Periph Bus Clock
  * @rmtoll   PERCLKCON4        FL_RCC_EnableGroup4BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM3
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM4
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM0
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM1
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_EnableGroup4BusClock(uint32_t Peripheral)
{
    SET_BIT(RCC->PERCLKCON4, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable Group1 Periph Bus Clock
  * @rmtoll   PERCLKCON1        FL_RCC_DisableGroup1BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM_CNT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_RTC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PMU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_SCU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_IWDT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_ANAC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PAD
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI0
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI1
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI2
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_DCU
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableGroup1BusClock(uint32_t Peripheral)
{
    CLEAR_BIT(RCC->PERCLKCON1, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable Group2 Periph Bus Clock
  * @rmtoll   PERCLKCON2        FL_RCC_DisableGroup2BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_CRC
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RNG
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_AES
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_LCD
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_DMA
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_FLASH
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RAMBIST
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_WWDT
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_ADC
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_SARADC
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableGroup2BusClock(uint32_t Peripheral)
{
    CLEAR_BIT(RCC->PERCLKCON2, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable Group3 Periph Bus Clock
  * @rmtoll   PERCLKCON3        FL_RCC_DisableGroup3BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART3
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART4
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART5
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UARTIR
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0FCK
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1FCK
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableGroup3BusClock(uint32_t Peripheral)
{
    CLEAR_BIT(RCC->PERCLKCON3, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable Group4 Periph Bus Clock
  * @rmtoll   PERCLKCON4        FL_RCC_DisableGroup4BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM3
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM4
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM0
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM1
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_DisableGroup4BusClock(uint32_t Peripheral)
{
    CLEAR_BIT(RCC->PERCLKCON4, ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Get Group1 Periph Bus Clock Enable Status
  * @rmtoll   PERCLKCON1        FL_RCC_IsEnabledGroup1BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_LPTIM_CNT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_RTC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PMU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_SCU
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_IWDT
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_ANAC
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_PAD
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI0
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI1
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_EXTI2
  *           @arg @ref FL_RCC_GROUP1_BUSCLK_DCU
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledGroup1BusClock(uint32_t Peripheral)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON1, ((Peripheral & 0xffffffff) << 0x0U)) == ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Get Group2 Periph Bus Clock Enable Status
  * @rmtoll   PERCLKCON2        FL_RCC_IsEnabledGroup2BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_CRC
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RNG
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_AES
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_LCD
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_DMA
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_FLASH
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_RAMBIST
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_WWDT
  *           @arg @ref FL_RCC_GROUP2_BUSCLK_ADC
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledGroup2BusClock(uint32_t Peripheral)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON2, ((Peripheral & 0xffffffff) << 0x0U)) == ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Get Group3 Periph Bus Clock Enable Status
  * @rmtoll   PERCLKCON3        FL_RCC_IsEnabledGroup3BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_SPI0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART2
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART3
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART4
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UART5
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_UARTIR
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_U7816CK1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART0FCK
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C0
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_I2C1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1
  *           @arg @ref FL_RCC_GROUP3_BUSCLK_LPUART1FCK
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledGroup3BusClock(uint32_t Peripheral)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON3, ((Peripheral & 0xffffffff) << 0x0U)) == ((Peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    Get Group4 Periph Bus Clock Enable Status
  * @rmtoll   PERCLKCON4        FL_RCC_IsEnabledGroup4BusClock
  * @param    Peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_BSTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM1
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM2
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM3
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_EXTIM4
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM0
  *           @arg @ref FL_RCC_GROUP4_BUSCLK_GPTIM1
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsEnabledGroup4BusClock(uint32_t Peripheral)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON4, ((Peripheral & 0xffffffff) << 0x0U)) == ((Peripheral & 0xffffffff) << 0x0U));
}


/**
  * @brief    Enable SARADC
  * @rmtoll   PERCLKCON5    SARCKE    FL_RCC_SARADC_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SARADC_Enable(void)
{
    SET_BIT(RCC->PERCLKCON5, RCC_PERCLKCON5_SARCKE_Msk);
}

/**
  * @brief    Get SARADC Enable Status
  * @rmtoll   PERCLKCON5    SARCKE    FL_RCC_SARADC_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_SARADC_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON5, RCC_PERCLKCON5_SARCKE_Msk) == RCC_PERCLKCON5_SARCKE_Msk);
}

/**
  * @brief    Disable SARADC
  * @rmtoll   PERCLKCON5    SARCKE    FL_RCC_SARADC_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SARADC_Disable(void)
{
    CLEAR_BIT(RCC->PERCLKCON5, RCC_PERCLKCON5_SARCKE_Msk);
}

/**
  * @brief    Set SARADC Prescaler
  * @rmtoll   PERCLKCON5    SARADCPRSC    FL_RCC_SetSARADCPrescaler
  * @param    prescaler This parameter can be one of the following values:
  *           @arg @ref FL_RCC_SARADC_PSC_DIV1
  *           @arg @ref FL_RCC_SARADC_PSC_DIV2
  *           @arg @ref FL_RCC_SARADC_PSC_DIV4
  *           @arg @ref FL_RCC_SARADC_PSC_DIV8
  *           @arg @ref FL_RCC_SARADC_PSC_DIV16
  *           @arg @ref FL_RCC_SARADC_PSC_DIV32
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetSARADCPrescaler(uint32_t prescaler)
{
    MODIFY_REG(RCC->PERCLKCON5, RCC_PERCLKCON5_SARADCPRSC_Msk, prescaler);
}

/**
  * @brief    Get SARADC Prescaler Setting
  * @rmtoll   PERCLKCON5    SARADCPRSC    FL_RCC_GetSARADCPrescaler
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_SARADC_PSC_DIV1
  *           @arg @ref FL_RCC_SARADC_PSC_DIV2
  *           @arg @ref FL_RCC_SARADC_PSC_DIV4
  *           @arg @ref FL_RCC_SARADC_PSC_DIV8
  *           @arg @ref FL_RCC_SARADC_PSC_DIV16
  *           @arg @ref FL_RCC_SARADC_PSC_DIV32
  */
__STATIC_INLINE uint32_t FL_RCC_GetSARADCPrescaler(void)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON5, RCC_PERCLKCON5_SARADCPRSC_Msk));
}

/**
  * @brief    Set SARADC Operation Clock
  * @rmtoll   PERCLKCON5    SARADCCKS    FL_RCC_SetSARADCClockSource
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_RCLF
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_RCHF
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_XTHF
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_PLL
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetSARADCClockSource(uint32_t clock)
{
    MODIFY_REG(RCC->PERCLKCON5, RCC_PERCLKCON5_SARADCCKS_Msk, clock);
}

/**
  * @brief    Get SARADC Operation Clock
  * @rmtoll   PERCLKCON5    SARADCCKS    FL_RCC_GetSARADCClockSource
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_RCLF
  *           @arg @ref FL_RCC_SARADC_CLK_SOURCE_RCHF
  */
__STATIC_INLINE uint32_t FL_RCC_GetSARADCClockSource(void)
{
    return (uint32_t)(READ_BIT(RCC->PERCLKCON5, RCC_PERCLKCON5_SARADCCKS_Msk));
}

/**
  * @brief    Set AHB Master Priority
  * @rmtoll   MPRIL    AHBMCR    FL_RCC_SetAHBMasterPriority
  * @param    priority This parameter can be one of the following values:
  *           @arg @ref FL_RCC_AHB_MASTER_PRIORITY_DMA_FIRST
  *           @arg @ref FL_RCC_AHB_MASTER_PRIORITY_CPU_FIRST
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetAHBMasterPriority(uint32_t priority)
{
    MODIFY_REG(RCC->MPRIL, RCC_MPRIL_AHBMCR_Msk, priority);
}

/**
  * @brief    Get AHB Master Priority Setting
  * @rmtoll   MPRIL    AHBMCR    FL_RCC_GetAHBMasterPriority
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_AHB_MASTER_PRIORITY_DMA_FIRST
  *           @arg @ref FL_RCC_AHB_MASTER_PRIORITY_CPU_FIRST
  */
__STATIC_INLINE uint32_t FL_RCC_GetAHBMasterPriority(void)
{
    return (uint32_t)(READ_BIT(RCC->MPRIL, RCC_MPRIL_AHBMCR_Msk));
}

/**
  * @brief    Enable RCLF
  * @rmtoll   RCLFCON    EN    FL_RCC_RCLF_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLF_Enable(void)
{
    CLEAR_BIT(RCC->RCLFCON, RCC_RCLFCON_EN_Msk);
}

/**
  * @brief    Get RCLF Enable Status
  * @rmtoll   RCLFCON    EN    FL_RCC_RCLF_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_RCLF_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->RCLFCON, RCC_RCLFCON_EN_Msk) == RCC_RCLFCON_EN_Msk);
}

/**
  * @brief    Disable RCLF
  * @rmtoll   RCLFCON    EN    FL_RCC_RCLF_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLF_Disable(void)
{
    SET_BIT(RCC->RCLFCON, RCC_RCLFCON_EN_Msk);
}

/**
  * @brief    Set RCLF Frequency Trim Value
  * @rmtoll   RCLFTRIM    TRIM    FL_RCC_RCLF_WriteTrimValue
  * @param    value TrimValue The value of RCLF trim
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_RCLF_WriteTrimValue(uint32_t value)
{
    MODIFY_REG(RCC->RCLFTRIM, (0x3fU << 0U), (value << 0U));
}

/**
  * @brief    Get RCLF Frequency Trim Value
  * @rmtoll   RCLFTRIM    TRIM    FL_RCC_RCLF_ReadTrimValue
  * @retval   The Value of RCLF trim
  */
__STATIC_INLINE uint32_t FL_RCC_RCLF_ReadTrimValue(void)
{
    return (uint32_t)(READ_BIT(RCC->RCLFTRIM, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    Set XTHF Electric Capacity
  * @rmtoll   XTHFCR    CAP_CFG    FL_RCC_SetXTHFElectricCapacity
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetXTHFElectricCapacity(uint32_t data)
{
    MODIFY_REG(RCC->XTHFCR, (0x7U << 16U), (data << 16U));
}

/**
  * @brief    Get XTHF Electric Capacity Setting 
  * @rmtoll   XTHFCR    CAP_CFG    FL_RCC_GetXTHFElectricCapacity
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RCC_GetXTHFElectricCapacity(void)
{
    return (uint32_t)(READ_BIT(RCC->XTHFCR, (0x7U << 16U)) >> 16U);
}

/**
  * @brief    Set XTHF Startup Wait Time
  * @rmtoll   XTHFCR    WAIT    FL_RCC_SetXTHFStartupWaitTime
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_128
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_256
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_512
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_1024
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_2048
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_4096
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_8192
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_16384
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_SetXTHFStartupWaitTime(uint32_t clock)
{
    MODIFY_REG(RCC->XTHFCR, RCC_XTHFCR_WAIT_Msk, clock);
}

/**
  * @brief    Get I2C Clock Source Setting
  * @rmtoll   XTHFCR    WAIT    FL_RCC_GetI2CClockSource
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_128
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_256
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_512
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_1024
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_2048
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_4096
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_8192
  *           @arg @ref FL_RCC_XTHF_STARTUP_WAIT_TIME_16384
  */
__STATIC_INLINE uint32_t FL_RCC_GetI2CClockSource(void)
{
    return (uint32_t)(READ_BIT(RCC->XTHFCR, RCC_XTHFCR_WAIT_Msk));
}

/**
  * @brief    Set XTHF Oscillation Strength
  * @rmtoll   XTHFCR    CFG    FL_RCC_XTHF_WriteDriverStrength
  * @param    strength 
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_XTHF_WriteDriverStrength(uint32_t strength)
{
    MODIFY_REG(RCC->XTHFCR, (0x1fU << 8U), (strength << 8U));
}

/**
  * @brief    Get XTHF Oscillation Strength Setting
  * @rmtoll   XTHFCR    CFG    FL_RCC_XTHF_ReadDriverStrength
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RCC_XTHF_ReadDriverStrength(void)
{
    return (uint32_t)(READ_BIT(RCC->XTHFCR, (0x1fU << 8U)) >> 8U);
}

/**
  * @brief    Get XTHF Ready Status
  * @rmtoll   XTHFCR    RDY    FL_RCC_IsActiveFlag_XTHFReady
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_IsActiveFlag_XTHFReady(void)
{
    return (uint32_t)(READ_BIT(RCC->XTHFCR, RCC_XTHFCR_RDY_Msk) == (RCC_XTHFCR_RDY_Msk));
}

/**
  * @brief    Enable XTHF
  * @rmtoll   XTHFCR    EN    FL_RCC_XTHF_Enable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_XTHF_Enable(void)
{
    SET_BIT(RCC->XTHFCR, RCC_XTHFCR_EN_Msk);
}

/**
  * @brief    Get XTHF Enable Status
  * @rmtoll   XTHFCR    EN    FL_RCC_XTHF_IsEnabled
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RCC_XTHF_IsEnabled(void)
{
    return (uint32_t)(READ_BIT(RCC->XTHFCR, RCC_XTHFCR_EN_Msk) == RCC_XTHFCR_EN_Msk);
}

/**
  * @brief    Disable XTHF
  * @rmtoll   XTHFCR    EN    FL_RCC_XTHF_Disable
  * @retval   None
  */
__STATIC_INLINE void FL_RCC_XTHF_Disable(void)
{
    CLEAR_BIT(RCC->XTHFCR, RCC_XTHFCR_EN_Msk);
}

/**
  * @}
  */

/** @defgroup RCC_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

uint32_t FL_RCC_GetSystemClockFreq(void);

uint32_t FL_RCC_GetAHBClockFreq(void);

uint32_t FL_RCC_GetAPBClockFreq(void);


uint32_t FL_RCC_GetRCHFClockFreq(void);


uint32_t FL_RCC_GetPLLClockFreq(void);


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_RCC_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
