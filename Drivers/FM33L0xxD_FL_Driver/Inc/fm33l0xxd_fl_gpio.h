/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_gpio.h
  * @author  FMSH Application Team
  * @brief   Head file of GPIO FL Module
  * @version  V0.0.2
  * @date     15. May 2026
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
#ifndef __FM33L0XXD_FL_GPIO_H
#define __FM33L0XXD_FL_GPIO_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup GPIO_FL_ES_INIT GPIO Exported Init structures
  * @{
  */

/**
  * @brief FL GPIO Init Sturcture definition
  */
typedef struct
{
    /*! PIN */
    uint32_t pin;

    /*! 功能模式 */
    uint32_t mode;

    /*! 输出类型 */
    uint32_t outputType;

    /*! 上下拉选择 */
    uint32_t pull;
	
    /*! 数字功能重定向 */
    uint32_t remapPin;
	
	/*! 驱动强度 */
	uint32_t drivestrength;
	
	/*! 驱动速度 */
	uint32_t slewrate;

} FL_GPIO_InitTypeDef;

typedef struct
{
    /*! 触发边沿 */
    uint32_t polarity;

} FL_WKUP_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup GPIO_FL_Exported_Constants GPIO Exported Constants
  * @{
  */

#define    GPIO_FCR_Pos                                           (0U)
#define    GPIO_FCR_Msk                                           (0x3U << GPIO_FCR_Pos)
#define    GPIO_FCR                                               GPIO_FCR_Msk

#define    GPIO_FOUTSEL_FOUTSEL_Pos                               (0U)
#define    GPIO_FOUTSEL_FOUTSEL_Msk                               (0xfU << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    GPIO_FOUTSEL_FOUTSEL                                   GPIO_FOUTSEL_FOUTSEL_Msk

#define    GPIO_EXTI0_SEL_Pos                                     (0U)
#define    GPIO_EXTI0_SEL_Msk                                     (0x3U << GPIO_EXTI0_SEL_Pos)
#define    GPIO_EXTI0_SEL                                         GPIO_EXTI0_SEL_Msk

#define    GPIO_EXTI1_SEL_Pos                                     (0U)
#define    GPIO_EXTI1_SEL_Msk                                     (0x3U << GPIO_EXTI1_SEL_Pos)
#define    GPIO_EXTI1_SEL                                         GPIO_EXTI1_SEL_Msk

#define    GPIO_EXTI2_SEL_Pos                                     (0U)
#define    GPIO_EXTI2_SEL_Msk                                     (0x3U << GPIO_EXTI2_SEL_Pos)
#define    GPIO_EXTI2_SEL                                         GPIO_EXTI2_SEL_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL0_Pos                          (0U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL0_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL0_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL0                              GPIO_EXTI0_SEL_EXTI0_SEL0_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL1_Pos                          (2U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL1_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL1_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL1                              GPIO_EXTI0_SEL_EXTI0_SEL1_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL2_Pos                          (4U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL2_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL2_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL2                              GPIO_EXTI0_SEL_EXTI0_SEL2_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL3_Pos                          (6U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL3_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL3_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL3                              GPIO_EXTI0_SEL_EXTI0_SEL3_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL4_Pos                          (8U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL4_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL4_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL4                              GPIO_EXTI0_SEL_EXTI0_SEL4_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL5_Pos                          (10U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL5_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL5_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL5                              GPIO_EXTI0_SEL_EXTI0_SEL5_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL6_Pos                          (12U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL6_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL6_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL6                              GPIO_EXTI0_SEL_EXTI0_SEL6_Msk

#define    GPIO_EXTI0_SEL_EXTI0_SEL7_Pos                          (14U)
#define    GPIO_EXTI0_SEL_EXTI0_SEL7_Msk                          (0x3U << GPIO_EXTI0_SEL_EXTI0_SEL7_Pos)
#define    GPIO_EXTI0_SEL_EXTI0_SEL7                              GPIO_EXTI0_SEL_EXTI0_SEL7_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL0_Pos                          (0U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL0_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL0_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL0                              GPIO_EXTI1_SEL_EXTI1_SEL0_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL1_Pos                          (2U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL1_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL1_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL1                              GPIO_EXTI1_SEL_EXTI1_SEL1_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL2_Pos                          (4U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL2_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL2_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL2                              GPIO_EXTI1_SEL_EXTI1_SEL2_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL3_Pos                          (6U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL3_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL3_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL3                              GPIO_EXTI1_SEL_EXTI1_SEL3_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL4_Pos                          (8U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL4_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL4_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL4                              GPIO_EXTI1_SEL_EXTI1_SEL4_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL5_Pos                          (10U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL5_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL5_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL5                              GPIO_EXTI1_SEL_EXTI1_SEL5_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL6_Pos                          (12U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL6_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL6_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL6                              GPIO_EXTI1_SEL_EXTI1_SEL6_Msk

#define    GPIO_EXTI1_SEL_EXTI1_SEL7_Pos                          (14U)
#define    GPIO_EXTI1_SEL_EXTI1_SEL7_Msk                          (0x3U << GPIO_EXTI1_SEL_EXTI1_SEL7_Pos)
#define    GPIO_EXTI1_SEL_EXTI1_SEL7                              GPIO_EXTI1_SEL_EXTI1_SEL7_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL0_Pos                          (0U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL0_Msk                          (0x1U << GPIO_EXTI2_SEL_EXTI2_SEL0_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL0                              GPIO_EXTI2_SEL_EXTI2_SEL0_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL1_Pos                          (1U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL1_Msk                          (0x1U << GPIO_EXTI2_SEL_EXTI2_SEL1_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL1                              GPIO_EXTI2_SEL_EXTI2_SEL1_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL2_Pos                          (2U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL2_Msk                          (0x1U << GPIO_EXTI2_SEL_EXTI2_SEL2_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL2                              GPIO_EXTI2_SEL_EXTI2_SEL2_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL3_Pos                          (3U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL3_Msk                          (0x1U << GPIO_EXTI2_SEL_EXTI2_SEL3_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL3                              GPIO_EXTI2_SEL_EXTI2_SEL3_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL4_Pos                          (4U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL4_Msk                          (0x3U << GPIO_EXTI2_SEL_EXTI2_SEL4_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL4                              GPIO_EXTI2_SEL_EXTI2_SEL4_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL5_Pos                          (6U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL5_Msk                          (0x3U << GPIO_EXTI2_SEL_EXTI2_SEL5_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL5                              GPIO_EXTI2_SEL_EXTI2_SEL5_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL6_Pos                          (8U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL6_Msk                          (0x3U << GPIO_EXTI2_SEL_EXTI2_SEL6_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL6                              GPIO_EXTI2_SEL_EXTI2_SEL6_Msk

#define    GPIO_EXTI2_SEL_EXTI2_SEL7_Pos                          (10U)
#define    GPIO_EXTI2_SEL_EXTI2_SEL7_Msk                          (0x3U << GPIO_EXTI2_SEL_EXTI2_SEL7_Pos)
#define    GPIO_EXTI2_SEL_EXTI2_SEL7                              GPIO_EXTI2_SEL_EXTI2_SEL7_Msk

#define    GPIO_HDSEL_PE2HDEN_Pos                                 (0U)
#define    GPIO_HDSEL_PE2HDEN_Msk                                 (0x1U << GPIO_HDSEL_PE2HDEN_Pos)
#define    GPIO_HDSEL_PE2HDEN                                     GPIO_HDSEL_PE2HDEN_Msk

#define    GPIO_HDSEL_PG6HDEN_Pos                                 (1U)
#define    GPIO_HDSEL_PG6HDEN_Msk                                 (0x1U << GPIO_HDSEL_PG6HDEN_Pos)
#define    GPIO_HDSEL_PG6HDEN                                     GPIO_HDSEL_PG6HDEN_Msk

#define    GPIO_ANASELECT_PC12ANS_Pos                             (0U)
#define    GPIO_ANASELECT_PC12ANS_Msk                             (0x1U << GPIO_ANASELECT_PC12ANS_Pos)
#define    GPIO_ANASELECT_PC12ANS                                 GPIO_ANASELECT_PC12ANS_Msk

#define    GPIO_ANASELECT_PC13ANS_Pos                             (1U)
#define    GPIO_ANASELECT_PC13ANS_Msk                             (0x1U << GPIO_ANASELECT_PC13ANS_Pos)
#define    GPIO_ANASELECT_PC13ANS                                 GPIO_ANASELECT_PC13ANS_Msk

#define    GPIO_ANASELECT_PC14ANS_Pos                             (2U)
#define    GPIO_ANASELECT_PC14ANS_Msk                             (0x1U << GPIO_ANASELECT_PC14ANS_Pos)
#define    GPIO_ANASELECT_PC14ANS                                 GPIO_ANASELECT_PC14ANS_Msk

#define    GPIO_ANASELECT_PC15ANS_Pos                             (3U)
#define    GPIO_ANASELECT_PC15ANS_Msk                             (0x1U << GPIO_ANASELECT_PC15ANS_Pos)
#define    GPIO_ANASELECT_PC15ANS                                 GPIO_ANASELECT_PC15ANS_Msk

#define    GPIO_ANASELECT_PE3ANS_Pos                              (4U)
#define    GPIO_ANASELECT_PE3ANS_Msk                              (0x1U << GPIO_ANASELECT_PE3ANS_Pos)
#define    GPIO_ANASELECT_PE3ANS                                  GPIO_ANASELECT_PE3ANS_Msk

#define    GPIO_ANASELECT_PE4ANS_Pos                              (5U)
#define    GPIO_ANASELECT_PE4ANS_Msk                              (0x1U << GPIO_ANASELECT_PE4ANS_Pos)
#define    GPIO_ANASELECT_PE4ANS                                  GPIO_ANASELECT_PE4ANS_Msk

#define    GPIO_IODF_IOAINF_Pos                                   (0U)
#define    GPIO_IODF_IOAINF_Msk                                   (0xffffffU << GPIO_IODF_IOAINF_Pos)
#define    GPIO_IODF_IOAINF                                       GPIO_IODF_IOAINF_Msk

#define    GPIO_PINWKEN_EN_Pos                                    (0U)
#define    GPIO_PINWKEN_EN_Msk                                    (0xffU << GPIO_PINWKEN_EN_Pos)
#define    GPIO_PINWKEN_EN                                        GPIO_PINWKEN_EN_Msk

#define    GPIO_PINWKEN_WKISEL_Pos                                (31U)
#define    GPIO_PINWKEN_WKISEL_Msk                                (0x1U << GPIO_PINWKEN_WKISEL_Pos)
#define    GPIO_PINWKEN_WKISEL                                    GPIO_PINWKEN_WKISEL_Msk

#define    GPIO_PINWKEN_SEL_Pos                                   (8U)
#define    GPIO_PINWKEN_SEL_Msk                                   (0x1U << GPIO_PINWKEN_SEL_Pos)
#define    GPIO_PINWKEN_SEL                                       GPIO_PINWKEN_SEL_Msk

#define    GPIO_PF4AFSEL_TFOSEL_Pos                               (0U)
#define    GPIO_PF4AFSEL_TFOSEL_Msk                               (0x7U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    GPIO_PF4AFSEL_TFOSEL                                   GPIO_PF4AFSEL_TFOSEL_Msk

#define    GPIO_PF4AFSEL_PF4AFS_Pos                               (3U)
#define    GPIO_PF4AFSEL_PF4AFS_Msk                               (0x3U << GPIO_PF4AFSEL_PF4AFS_Pos)
#define    GPIO_PF4AFSEL_PF4AFS                                   GPIO_PF4AFSEL_PF4AFS_Msk

#define    GPIO_DSCFG_DR_Pos                                      (0U)
#define    GPIO_DSCFG_DR_Msk                                      (0xffffU << GPIO_DSCFG_DR_Pos)
#define    GPIO_DSCFG_DR                                          GPIO_DSCFG_DR_Msk

#define    GPIO_DSCFG_SR_Pos                                      (16U)
#define    GPIO_DSCFG_SR_Msk                                      (0xffffU << GPIO_DSCFG_SR_Pos)
#define    GPIO_DSCFG_SR                                          GPIO_DSCFG_SR_Msk



#define    FL_GPIO_PIN_0                                          (0x1U << 0U)
#define    FL_GPIO_PIN_1                                          (0x1U << 1U)
#define    FL_GPIO_PIN_2                                          (0x1U << 2U)
#define    FL_GPIO_PIN_3                                          (0x1U << 3U)
#define    FL_GPIO_PIN_4                                          (0x1U << 4U)
#define    FL_GPIO_PIN_5                                          (0x1U << 5U)
#define    FL_GPIO_PIN_6                                          (0x1U << 6U)
#define    FL_GPIO_PIN_7                                          (0x1U << 7U)
#define    FL_GPIO_PIN_8                                          (0x1U << 8U)
#define    FL_GPIO_PIN_9                                          (0x1U << 9U)
#define    FL_GPIO_PIN_10                                         (0x1U << 10U)
#define    FL_GPIO_PIN_11                                         (0x1U << 11U)
#define    FL_GPIO_PIN_12                                         (0x1U << 12U)
#define    FL_GPIO_PIN_13                                         (0x1U << 13U)
#define    FL_GPIO_PIN_14                                         (0x1U << 14U)
#define    FL_GPIO_PIN_15                                         (0x1U << 15U)
#define    FL_GPIO_PIN_ALL                                        (0xffffU << 0U)
#define    FL_GPIO_PIN_ALL_EXCEPTSWD                              0xFCFFU
#define    FL_GPIO_EXTI0_ESD_0                                    (0x1U << 0U)
#define    FL_GPIO_EXTI0_ESD_1                                    (0x1U << 1U)
#define    FL_GPIO_EXTI0_ESD_2                                    (0x1U << 2U)
#define    FL_GPIO_EXTI0_ESD_3                                    (0x1U << 3U)
#define    FL_GPIO_EXTI0_ESD_4                                    (0x1U << 4U)
#define    FL_GPIO_EXTI0_ESD_5                                    (0x1U << 5U)
#define    FL_GPIO_EXTI0_ESD_6                                    (0x1U << 6U)
#define    FL_GPIO_EXTI0_ESD_7                                    (0x1U << 7U)
#define    FL_GPIO_EXTI1_ESD_0                                    (0x1U << 0U)
#define    FL_GPIO_EXTI1_ESD_1                                    (0x1U << 1U)
#define    FL_GPIO_EXTI1_ESD_2                                    (0x1U << 2U)
#define    FL_GPIO_EXTI1_ESD_3                                    (0x1U << 3U)
#define    FL_GPIO_EXTI1_ESD_4                                    (0x1U << 4U)
#define    FL_GPIO_EXTI1_ESD_5                                    (0x1U << 5U)
#define    FL_GPIO_EXTI1_ESD_6                                    (0x1U << 6U)
#define    FL_GPIO_EXTI1_ESD_7                                    (0x1U << 7U)
#define    FL_GPIO_EXTI2_ESD_0                                    (0x1U << 0U)
#define    FL_GPIO_EXTI2_ESD_1                                    (0x1U << 1U)
#define    FL_GPIO_EXTI2_ESD_2                                    (0x1U << 2U)
#define    FL_GPIO_EXTI2_ESD_3                                    (0x1U << 3U)
#define    FL_GPIO_EXTI2_ESD_4                                    (0x1U << 4U)
#define    FL_GPIO_EXTI2_ESD_5                                    (0x1U << 5U)
#define    FL_GPIO_EXTI2_ESD_6                                    (0x1U << 6U)
#define    FL_GPIO_EXTI2_ESD_7                                    (0x1U << 7U)
#define    FL_GPIO_EXTI_LINE_0                                    (0x1U << 0U)
#define    FL_GPIO_EXTI_LINE_1                                    (0x1U << 1U)
#define    FL_GPIO_EXTI_LINE_2                                    (0x1U << 2U)
#define    FL_GPIO_EXTI_LINE_3                                    (0x1U << 3U)
#define    FL_GPIO_EXTI_LINE_4                                    (0x1U << 4U)
#define    FL_GPIO_EXTI_LINE_5                                    (0x1U << 5U)
#define    FL_GPIO_EXTI_LINE_6                                    (0x1U << 6U)
#define    FL_GPIO_EXTI_LINE_7                                    (0x1U << 7U)
#define    FL_GPIO_EXTI0_SEL0_PA0                                 (0x0U << 0U)
#define    FL_GPIO_EXTI0_SEL0_PA8                                 (0x1U << 0U)
#define    FL_GPIO_EXTI0_SEL0_PB0                                 (0x2U << 0U)
#define    FL_GPIO_EXTI0_SEL0_PB8                                 (0x3U << 0U)
#define    FL_GPIO_EXTI0_SEL1_PA1                                 (0x0U << 2U)
#define    FL_GPIO_EXTI0_SEL1_PA9                                 (0x1U << 2U)
#define    FL_GPIO_EXTI0_SEL1_PB1                                 (0x2U << 2U)
#define    FL_GPIO_EXTI0_SEL1_PB9                                 (0x3U << 2U)
#define    FL_GPIO_EXTI0_SEL2_PA2                                 (0x0U << 4U)
#define    FL_GPIO_EXTI0_SEL2_PA10                                (0x1U << 4U)
#define    FL_GPIO_EXTI0_SEL2_PB2                                 (0x2U << 4U)
#define    FL_GPIO_EXTI0_SEL2_PB10                                (0x3U << 4U)
#define    FL_GPIO_EXTI0_SEL3_PA3                                 (0x0U << 6U)
#define    FL_GPIO_EXTI0_SEL3_PA11                                (0x1U << 6U)
#define    FL_GPIO_EXTI0_SEL3_PB3                                 (0x2U << 6U)
#define    FL_GPIO_EXTI0_SEL3_PB11                                (0x3U << 6U)
#define    FL_GPIO_EXTI0_SEL4_PA4                                 (0x0U << 8U)
#define    FL_GPIO_EXTI0_SEL4_PA12                                (0x1U << 8U)
#define    FL_GPIO_EXTI0_SEL4_PB4                                 (0x2U << 8U)
#define    FL_GPIO_EXTI0_SEL4_PB12                                (0x3U << 8U)
#define    FL_GPIO_EXTI0_SEL5_PA5                                 (0x0U << 10U)
#define    FL_GPIO_EXTI0_SEL5_PA13                                (0x1U << 10U)
#define    FL_GPIO_EXTI0_SEL5_PB5                                 (0x2U << 10U)
#define    FL_GPIO_EXTI0_SEL5_PB13                                (0x3U << 10U)
#define    FL_GPIO_EXTI0_SEL6_PA6                                 (0x0U << 12U)
#define    FL_GPIO_EXTI0_SEL6_PA14                                (0x1U << 12U)
#define    FL_GPIO_EXTI0_SEL6_PB6                                 (0x2U << 12U)
#define    FL_GPIO_EXTI0_SEL6_PB14                                (0x3U << 12U)
#define    FL_GPIO_EXTI0_SEL7_PA7                                 (0x0U << 14U)
#define    FL_GPIO_EXTI0_SEL7_PA15                                (0x1U << 14U)
#define    FL_GPIO_EXTI0_SEL7_PB7                                 (0x2U << 14U)
#define    FL_GPIO_EXTI0_SEL7_PB15                                (0x3U << 14U)
#define    FL_GPIO_EXTI1_SEL0_PC8                                 (0x1U << 0U)
#define    FL_GPIO_EXTI1_SEL0_PD0                                 (0x2U << 0U)
#define    FL_GPIO_EXTI1_SEL1_PC9                                 (0x1U << 2U)
#define    FL_GPIO_EXTI1_SEL1_PD1                                 (0x2U << 2U)
#define    FL_GPIO_EXTI1_SEL2_PC2                                 (0x0U << 4U)
#define    FL_GPIO_EXTI1_SEL2_PC10                                (0x1U << 4U)
#define    FL_GPIO_EXTI1_SEL2_PD2                                 (0x2U << 4U)
#define    FL_GPIO_EXTI1_SEL3_PC3                                 (0x0U << 6U)
#define    FL_GPIO_EXTI1_SEL3_PC11                                (0x1U << 6U)
#define    FL_GPIO_EXTI1_SEL3_PD3                                 (0x2U << 6U)
#define    FL_GPIO_EXTI1_SEL3_PG2                                 (0x3U << 6U)
#define    FL_GPIO_EXTI1_SEL4_PC4                                 (0x0U << 8U)
#define    FL_GPIO_EXTI1_SEL4_PC12                                (0x1U << 8U)
#define    FL_GPIO_EXTI1_SEL4_PD4                                 (0x2U << 8U)
#define    FL_GPIO_EXTI1_SEL5_PC5                                 (0x0U << 10U)
#define    FL_GPIO_EXTI1_SEL5_PC13                                (0x1U << 10U)
#define    FL_GPIO_EXTI1_SEL5_PD5                                 (0x2U << 10U)
#define    FL_GPIO_EXTI1_SEL5_PG6                                 (0x3U << 10U)
#define    FL_GPIO_EXTI1_SEL6_PC6                                 (0x0U << 12U)
#define    FL_GPIO_EXTI1_SEL6_PC14                                (0x1U << 12U)
#define    FL_GPIO_EXTI1_SEL6_PD6                                 (0x2U << 12U)
#define    FL_GPIO_EXTI1_SEL6_PG7                                 (0x3U << 12U)
#define    FL_GPIO_EXTI1_SEL7_PC7                                 (0x0U << 14U)
#define    FL_GPIO_EXTI1_SEL7_PC15                                (0x1U << 14U)
#define    FL_GPIO_EXTI1_SEL7_PD7                                 (0x2U << 14U)
#define    FL_GPIO_EXTI1_SEL7_PG8                                 (0x3U << 14U)
#define    FL_GPIO_EXTI2_SEL0_PE2                                 (0x0U << 0U)
#define    FL_GPIO_EXTI2_SEL1_PE3                                 (0x0U << 1U)
#define    FL_GPIO_EXTI2_SEL2_PE4                                 (0x0U << 2U)
#define    FL_GPIO_EXTI2_SEL3_PE5                                 (0x0U << 3U)
#define    FL_GPIO_EXTI2_SEL3_PF3                                 (0x1U << 3U)
#define    FL_GPIO_EXTI2_SEL4_PF4                                 (0x1U << 4U)
#define    FL_GPIO_EXTI2_SEL5_PF5                                 (0x1U << 6U)
#define    FL_GPIO_EXTI2_SEL6_PF6                                 (0x1U << 8U)
#define    FL_GPIO_EXTI2_SEL7_PF11                                (0x2U << 10U)
#define    FL_GPIO_WAKEUP_0                                       (0x1U << 0U)
#define    FL_GPIO_WAKEUP_1                                       (0x1U << 1U)
#define    FL_GPIO_WAKEUP_2                                       (0x1U << 2U)
#define    FL_GPIO_WAKEUP_3                                       (0x1U << 3U)
#define    FL_GPIO_WAKEUP_4                                       (0x1U << 4U)
#define    FL_GPIO_WAKEUP_5                                       (0x1U << 5U)
#define    FL_GPIO_WAKEUP_6                                       (0x1U << 6U)
#define    FL_GPIO_WAKEUP_7                                       (0x1U << 7U)
#define    FL_GPIO_IOA_PA8                                        (0x1U << 0U)
#define    FL_GPIO_IOA_PA9                                        (0x1U << 1U)
#define    FL_GPIO_IOA_PA10                                       (0x1U << 2U)
#define    FL_GPIO_IOA_PA11                                       (0x1U << 3U)
#define    FL_GPIO_IOB_PB4                                        (0x1U << 4U)
#define    FL_GPIO_IOB_PB5                                        (0x1U << 5U)
#define    FL_GPIO_IOB_PB6                                        (0x1U << 6U)
#define    FL_GPIO_IOB_PB7                                        (0x1U << 7U)
#define    FL_GPIO_IOC_PC12                                       (0x1U << 8U)
#define    FL_GPIO_IOC_PC13                                       (0x1U << 9U)
#define    FL_GPIO_IOC_PC14                                       (0x1U << 10U)
#define    FL_GPIO_IOC_PC15                                       (0x1U << 11U)
#define    FL_GPIO_IOD_PD0                                        (0x1U << 12U)
#define    FL_GPIO_IOD_PD1                                        (0x1U << 13U)
#define    FL_GPIO_IOD_PD2                                        (0x1U << 14U)
#define    FL_GPIO_IOD_PD3                                        (0x1U << 15U)
#define    FL_GPIO_IOE_PE2                                        (0x1U << 16U)
#define    FL_GPIO_IOE_PE5                                        (0x1U << 17U)
#define    FL_GPIO_IOF_PF3                                        (0x1U << 23U)

#define    FL_GPIO_PULLUP_ENABLE                                  0x0U
#define    FL_GPIO_PULLDOWN_ENABLE                                0x1U
#define    FL_GPIO_BOTH_DISABLE                                   0x2U

#define    FL_GPIO_MODE_INPUT                                     (0x0U << GPIO_FCR_Pos)
#define    FL_GPIO_MODE_OUTPUT                                    (0x1U << GPIO_FCR_Pos)
#define    FL_GPIO_MODE_DIGITAL                                   (0x2U << GPIO_FCR_Pos)
#define    FL_GPIO_MODE_ANALOG                                    (0x3U << GPIO_FCR_Pos)


#define    FL_GPIO_FOUT0_SELECT_XTLF                              (0x0U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_RCLP                              (0x1U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_RCHF_DIV64                        (0x2U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_LSCLK                             (0x3U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_AHBCLK_DIV64                      (0x4U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_RTCTM                             (0x5U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_PLLOUTPUT_DIV64                   (0x6U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_RTCCLK64Hz                        (0x7U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_APB1CLK_DIV64                     (0x8U << GPIO_FOUTSEL_FOUTSEL_Pos)
#define    FL_GPIO_FOUT0_SELECT_TDOSC_DIV64                       (0xaU << GPIO_FOUTSEL_FOUTSEL_Pos)


#define    FL_GPIO_EXTI0_TRIGGER_EDGE_RISING                       (0x0U << GPIO_EXTI0_SEL_Pos)
#define    FL_GPIO_EXTI0_TRIGGER_EDGE_FALLING                      (0x1U << GPIO_EXTI0_SEL_Pos)
#define    FL_GPIO_EXTI0_TRIGGER_EDGE_BOTH                         (0x2U << GPIO_EXTI0_SEL_Pos)
#define    FL_GPIO_EXTI0_TRIGGER_EDGE_DISABLE                      (0x3U << GPIO_EXTI0_SEL_Pos)


#define    FL_GPIO_EXTI1_TRIGGER_EDGE_RISING                       (0x0U << GPIO_EXTI1_SEL_Pos)
#define    FL_GPIO_EXTI1_TRIGGER_EDGE_FALLING                      (0x1U << GPIO_EXTI1_SEL_Pos)
#define    FL_GPIO_EXTI1_TRIGGER_EDGE_BOTH                         (0x2U << GPIO_EXTI1_SEL_Pos)
#define    FL_GPIO_EXTI1_TRIGGER_EDGE_DISABLE                      (0x3U << GPIO_EXTI1_SEL_Pos)


#define    FL_GPIO_EXTI2_TRIGGER_EDGE_RISING                       (0x0U << GPIO_EXTI2_SEL_Pos)
#define    FL_GPIO_EXTI2_TRIGGER_EDGE_FALLING                      (0x1U << GPIO_EXTI2_SEL_Pos)
#define    FL_GPIO_EXTI2_TRIGGER_EDGE_BOTH                         (0x2U << GPIO_EXTI2_SEL_Pos)
#define    FL_GPIO_EXTI2_TRIGGER_EDGE_DISABLE                      (0x3U << GPIO_EXTI2_SEL_Pos)


#define    FL_GPIO_PC12_Analog_SEG36                               (0x1U << GPIO_ANASELECT_PC12ANS_Pos)
#define    FL_GPIO_PC12_Analog_ADC_IN1                             (0x0U << GPIO_ANASELECT_PC12ANS_Pos)


#define    FL_GPIO_PC13_Analog_SEG37                               (0x1U << GPIO_ANASELECT_PC13ANS_Pos)
#define    FL_GPIO_PC13_Analog_ADC_IN2                             (0x0U << GPIO_ANASELECT_PC13ANS_Pos)


#define    FL_GPIO_PC14_Analog_SEG38                               (0x1U << GPIO_ANASELECT_PC14ANS_Pos)
#define    FL_GPIO_PC14_Analog_ACMP2_INN0                          (0x0U << GPIO_ANASELECT_PC14ANS_Pos)


#define    FL_GPIO_PC15_Analog_SEG39                               (0x1U << GPIO_ANASELECT_PC15ANS_Pos)
#define    FL_GPIO_PC15_Analog_ACMP2_INP0_ADC_IN6                  (0x0U << GPIO_ANASELECT_PC15ANS_Pos)


#define    FL_GPIO_PE3_Analog_SEG18                                (0x1U << GPIO_ANASELECT_PE3ANS_Pos)
#define    FL_GPIO_PE3_Analog_ACMP2_INN1                           (0x0U << GPIO_ANASELECT_PE3ANS_Pos)


#define    FL_GPIO_PE4_Analog_SEG19                                (0x1U << GPIO_ANASELECT_PE4ANS_Pos)
#define    FL_GPIO_PE4_Analog_ACMP2_INP1                           (0x0U << GPIO_ANASELECT_PE4ANS_Pos)


#define    FL_GPIO_WAKEUP_INT_ENTRY_NMI                           (0x0U << GPIO_PINWKEN_WKISEL_Pos)
#define    FL_GPIO_WAKEUP_INT_ENTRY_38                            (0x1U << GPIO_PINWKEN_WKISEL_Pos)


#define    FL_GPIO_WAKEUP_TRIGGER_RISING                          (0x1U << GPIO_PINWKEN_SEL_Pos)
#define    FL_GPIO_WAKEUP_TRIGGER_FALLING                         (0x0U << GPIO_PINWKEN_SEL_Pos)


#define    FL_GPIO_PF4_FOUT_SELECT_RCHF                           (0x0U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV4                      (0x1U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV64                     (0x2U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_PLL                            (0x3U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_PLL_DIV4                       (0x4U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_PLL_DIV16                      (0x5U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_RCLF                           (0x6U << GPIO_PF4AFSEL_TFOSEL_Pos)
#define    FL_GPIO_PF4_FOUT_SELECT_RCLP                           (0x7U << GPIO_PF4AFSEL_TFOSEL_Pos)


#define    FL_GPIO_PF4_PRFunction_SELECT_UART_TX                  (0x0U << GPIO_PF4AFSEL_PF4AFS_Pos)
#define    FL_GPIO_PF4_PRFunction_SELECT_LPUART_TX                (0x1U << GPIO_PF4AFSEL_PF4AFS_Pos)
#define    FL_GPIO_PF4_PRFunction_SELECT_TFO                      (0x2U << GPIO_PF4AFSEL_PF4AFS_Pos)
#define    FL_GPIO_PF4_PRFunction_SELECT_TOF                      (0x3U << GPIO_PF4AFSEL_PF4AFS_Pos)


#define    FL_GPIO_DRIVESTRENGTH_HIGH                             (0x0U << GPIO_DSCFG_DR_Pos)
#define    FL_GPIO_DRIVESTRENGTH_LOW                              (0x1U << GPIO_DSCFG_DR_Pos)


#define    FL_GPIO_SLEWRATE_HIGH                                  (0x0U << GPIO_DSCFG_SR_Pos)
#define    FL_GPIO_SLEWRATE_LOW                                   (0x1U << GPIO_DSCFG_SR_Pos)

#define    FL_GPIO_OUTPUT_PUSHPULL                                0x0U
#define    FL_GPIO_OUTPUT_OPENDRAIN                               0x1U

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup GPIO_FL_Exported_Functions GPIO Exported Functions
  * @{
  */

/**
  * @brief    GPIOx input enable
  * @rmtoll   INEN        FL_GPIO_EnablePinInput
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePinInput(GPIO_Type *GPIOx, uint32_t pin)
{
    SET_BIT(GPIOx->INEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    CPIOx input disable
  * @rmtoll   INEN        FL_GPIO_DisablePinInput
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePinInput(GPIO_Type *GPIOx, uint32_t pin)
{
    CLEAR_BIT(GPIOx->INEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get GPIOx input enable status
  * @rmtoll   INEN        FL_GPIO_IsEnabledPinInput
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPinInput(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->INEN, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx Pull-Up enable
  * @rmtoll   PUEN        FL_GPIO_EnablePinPullup
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePinPullup(GPIO_Type *GPIOx, uint32_t pin)
{
    SET_BIT(GPIOx->PUEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx Pull-Up disable
  * @rmtoll   PUEN        FL_GPIO_DisablePinPullup
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePinPullup(GPIO_Type *GPIOx, uint32_t pin)
{
    CLEAR_BIT(GPIOx->PUEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get GPIOx Pull-Up enable status
  * @rmtoll   PUEN        FL_GPIO_IsEnabledPinPullup
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPinPullup(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->PUEN, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx Open-Drain enable
  * @rmtoll   ODEN        FL_GPIO_EnablePinOpenDrain
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePinOpenDrain(GPIO_Type *GPIOx, uint32_t pin)
{
    SET_BIT(GPIOx->ODEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Open-Drain disable
  * @rmtoll   ODEN        FL_GPIO_DisablePinOpenDrain
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePinOpenDrain(GPIO_Type *GPIOx, uint32_t pin)
{
    CLEAR_BIT(GPIOx->ODEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get Open-Drain enable status
  * @rmtoll   ODEN        FL_GPIO_IsEnabledPinOpenDrain
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPinOpenDrain(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->ODEN, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx digital function enable
  * @rmtoll   DFS        FL_GPIO_EnablePinRemap
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePinRemap(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    SET_BIT(GPIOx_HD->DFS, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx digital function disable
  * @rmtoll   DFS        FL_GPIO_DisablePinRemap
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePinRemap(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    CLEAR_BIT(GPIOx_HD->DFS, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get GPIOx digital function enable status
  * @rmtoll   DFS        FL_GPIO_IsEnabledPinRemap
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPinRemap(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx_HD->DFS, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Set Portx mode
  * @rmtoll   FCR        FL_GPIO_SetPinMode
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_MODE_INPUT
  *           @arg @ref FL_GPIO_MODE_OUTPUT
  *           @arg @ref FL_GPIO_MODE_DIGITAL
  *           @arg @ref FL_GPIO_MODE_ANALOG
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPinMode(GPIO_Type *GPIOx, uint32_t pin, uint32_t mode)
{
    MODIFY_REG(GPIOx->FCR, ((pin * pin) * GPIO_FCR), ((pin * pin) * mode));
}

/**
  * @brief    Get Portx mode
  * @rmtoll   FCR        FL_GPIO_GetPinMode
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_MODE_INPUT
  *           @arg @ref FL_GPIO_MODE_OUTPUT
  *           @arg @ref FL_GPIO_MODE_DIGITAL
  *           @arg @ref FL_GPIO_MODE_ANALOG
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPinMode(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->FCR, ((pin * pin) * GPIO_FCR)) / (pin * pin));
}

/**
  * @brief    Set GPIO output data
  * @rmtoll   DO        FL_GPIO_WriteOutputPort
  * @param    GPIOx GPIO Port
  * @param    output Level value for each pin of the port
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_WriteOutputPort(GPIO_Type *GPIOx, uint32_t output)
{
    MODIFY_REG(GPIOx->DO, (0xffffU << 0U), (output << 0U));
}

/**
  * @brief    Get GPIO output data 
  * @rmtoll   DO        FL_GPIO_ReadOutputPort
  * @param    GPIOx GPIO Port
  * @retval   Output data register value of port
  */
__STATIC_INLINE uint32_t FL_GPIO_ReadOutputPort(GPIO_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->DO, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Get GPIO output pin status 
  * @rmtoll   DO        FL_GPIO_GetOutputPin
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_GetOutputPin(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->DO, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Toggle output pin
  * @rmtoll   DO        FL_GPIO_ToggleOutputPin
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ToggleOutputPin(GPIO_Type *GPIOx, uint32_t pin)
{
    WRITE_REG(GPIOx->DO, READ_REG(GPIOx->DO) ^ pin);
}

/**
  * @brief    Get input data
  * @rmtoll   DIN        FL_GPIO_ReadInputPort
  * @param    GPIOx GPIO Port
  * @retval   Input data register value of port
  */
__STATIC_INLINE uint32_t FL_GPIO_ReadInputPort(GPIO_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->DIN, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Get GPIO input set status 
  * @rmtoll   DIN        FL_GPIO_GetInputPin
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_GetInputPin(GPIO_Type *GPIOx, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx->DIN, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Set pin output 1
  * @rmtoll   DSET        FL_GPIO_SetOutputPin
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetOutputPin(GPIO_Type *GPIOx, uint32_t pin)
{
    SET_BIT(GPIOx->DSET, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Set pin output 0
  * @rmtoll   DRST        FL_GPIO_ResetOutputPin
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ResetOutputPin(GPIO_Type *GPIOx, uint32_t pin)
{
    SET_BIT(GPIOx->DRESET, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Set PG6 frequency output
  * @rmtoll   FOUTSEL    FOUTSEL    FL_GPIO_SetFOUT0
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_FOUT0_SELECT_XTLF
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RCLP
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RCHF_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_LSCLK
  *           @arg @ref FL_GPIO_FOUT0_SELECT_AHBCLK_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RTCTM
  *           @arg @ref FL_GPIO_FOUT0_SELECT_PLLOUTPUT_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RTCCLK64Hz
  *           @arg @ref FL_GPIO_FOUT0_SELECT_APB1CLK_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_TDOSC_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetFOUT0(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->FOUTSEL, GPIO_FOUTSEL_FOUTSEL_Msk, select);
}

/**
  * @brief    Get PG6 frequency output
  * @rmtoll   FOUTSEL    FOUTSEL    FL_GPIO_GetFOUT0
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_FOUT0_SELECT_XTLF
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RCLP
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RCHF_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_LSCLK
  *           @arg @ref FL_GPIO_FOUT0_SELECT_AHBCLK_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RTCTM
  *           @arg @ref FL_GPIO_FOUT0_SELECT_PLLOUTPUT_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_RTCCLK64Hz
  *           @arg @ref FL_GPIO_FOUT0_SELECT_APB1CLK_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_TDOSC_DIV64
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  *           @arg @ref FL_GPIO_FOUT0_SELECT_
  */
__STATIC_INLINE uint32_t FL_GPIO_GetFOUT0(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->FOUTSEL, GPIO_FOUTSEL_FOUTSEL_Msk));
}

/**
  * @brief    EXTI0 edge select 
  * @rmtoll   EXTI0_SEL        FL_GPIO_SetTriggerEdge0
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_ESD_0
  *           @arg @ref FL_GPIO_EXTI0_ESD_1
  *           @arg @ref FL_GPIO_EXTI0_ESD_2
  *           @arg @ref FL_GPIO_EXTI0_ESD_3
  *           @arg @ref FL_GPIO_EXTI0_ESD_4
  *           @arg @ref FL_GPIO_EXTI0_ESD_5
  *           @arg @ref FL_GPIO_EXTI0_ESD_6
  *           @arg @ref FL_GPIO_EXTI0_ESD_7
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_DISABLE
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetTriggerEdge0(GPIOCOM_Type *GPIOx, uint32_t line, uint32_t edge)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, (((line * line) * GPIO_EXTI0_SEL)<<16), (((line * line) * edge)<<16));
}

/**
  * @brief    Get EXTI0 edge select
  * @rmtoll   EXTI0_SEL        FL_GPIO_GetTriggerEdge0
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_ESD_0
  *           @arg @ref FL_GPIO_EXTI0_ESD_1
  *           @arg @ref FL_GPIO_EXTI0_ESD_2
  *           @arg @ref FL_GPIO_EXTI0_ESD_3
  *           @arg @ref FL_GPIO_EXTI0_ESD_4
  *           @arg @ref FL_GPIO_EXTI0_ESD_5
  *           @arg @ref FL_GPIO_EXTI0_ESD_6
  *           @arg @ref FL_GPIO_EXTI0_ESD_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI0_TRIGGER_EDGE_DISABLE
  */
__STATIC_INLINE uint32_t FL_GPIO_GetTriggerEdge0(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, (((line * line) * GPIO_EXTI0_SEL)<<16)) / ((line * line)<<16));
}

/**
  * @brief    EXTI1 edge select 
  * @rmtoll   EXTI1_SEL        FL_GPIO_SetTriggerEdge1
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_ESD_0
  *           @arg @ref FL_GPIO_EXTI1_ESD_1
  *           @arg @ref FL_GPIO_EXTI1_ESD_2
  *           @arg @ref FL_GPIO_EXTI1_ESD_3
  *           @arg @ref FL_GPIO_EXTI1_ESD_4
  *           @arg @ref FL_GPIO_EXTI1_ESD_5
  *           @arg @ref FL_GPIO_EXTI1_ESD_6
  *           @arg @ref FL_GPIO_EXTI1_ESD_7
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_DISABLE
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetTriggerEdge1(GPIOCOM_Type *GPIOx, uint32_t line, uint32_t edge)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, (((line * line) * GPIO_EXTI1_SEL)<<16), (((line * line) * edge)<<16));
}

/**
  * @brief    Get EXTI1 edge select
  * @rmtoll   EXTI1_SEL        FL_GPIO_GetTriggerEdge1
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_ESD_0
  *           @arg @ref FL_GPIO_EXTI1_ESD_1
  *           @arg @ref FL_GPIO_EXTI1_ESD_2
  *           @arg @ref FL_GPIO_EXTI1_ESD_3
  *           @arg @ref FL_GPIO_EXTI1_ESD_4
  *           @arg @ref FL_GPIO_EXTI1_ESD_5
  *           @arg @ref FL_GPIO_EXTI1_ESD_6
  *           @arg @ref FL_GPIO_EXTI1_ESD_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI1_TRIGGER_EDGE_DISABLE
  */
__STATIC_INLINE uint32_t FL_GPIO_GetTriggerEdge1(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, (((line * line) * GPIO_EXTI1_SEL)<<16)) / ((line * line)<<16));
}

/**
  * @brief    EXTI2 edge select 
  * @rmtoll   EXTI2_SEL        FL_GPIO_SetTriggerEdge2
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_ESD_0
  *           @arg @ref FL_GPIO_EXTI2_ESD_1
  *           @arg @ref FL_GPIO_EXTI2_ESD_2
  *           @arg @ref FL_GPIO_EXTI2_ESD_3
  *           @arg @ref FL_GPIO_EXTI2_ESD_4
  *           @arg @ref FL_GPIO_EXTI2_ESD_5
  *           @arg @ref FL_GPIO_EXTI2_ESD_6
  *           @arg @ref FL_GPIO_EXTI2_ESD_7
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_DISABLE
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetTriggerEdge2(GPIOCOM_Type *GPIOx, uint32_t line, uint32_t edge)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, (((line * line) * GPIO_EXTI2_SEL)<<16), (((line * line) * edge)<<16));
}

/**
  * @brief    Get EXTI2 edge select
  * @rmtoll   EXTI2_SEL        FL_GPIO_GetTriggerEdge2
  * @param    GPIOx GPIO Port
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_ESD_0
  *           @arg @ref FL_GPIO_EXTI2_ESD_1
  *           @arg @ref FL_GPIO_EXTI2_ESD_2
  *           @arg @ref FL_GPIO_EXTI2_ESD_3
  *           @arg @ref FL_GPIO_EXTI2_ESD_4
  *           @arg @ref FL_GPIO_EXTI2_ESD_5
  *           @arg @ref FL_GPIO_EXTI2_ESD_6
  *           @arg @ref FL_GPIO_EXTI2_ESD_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_RISING
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_BOTH
  *           @arg @ref FL_GPIO_EXTI2_TRIGGER_EDGE_DISABLE
  */
__STATIC_INLINE uint32_t FL_GPIO_GetTriggerEdge2(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, (((line * line) * GPIO_EXTI2_SEL)<<16)) / ((line * line)<<16));
}

/**
  * @brief    Set EXTI0_SEL0 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL0    FL_GPIO_SetEXTI0SEL0
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL0_PA0
  *           @arg @ref FL_GPIO_EXTI0_SEL0_PA8
  *           @arg @ref FL_GPIO_EXTI0_SEL0_PB0
  *           @arg @ref FL_GPIO_EXTI0_SEL0_PB8
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL0(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL0_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI0_SEL0 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL0    FL_GPIO_GetEXTI0SEL0
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL0(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL0_Msk));
}

/**
  * @brief    Set EXTI0_SEL1 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL1    FL_GPIO_SetEXTI0SEL1
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL1_PA1
  *           @arg @ref FL_GPIO_EXTI0_SEL1_PA9
  *           @arg @ref FL_GPIO_EXTI0_SEL1_PB1
  *           @arg @ref FL_GPIO_EXTI0_SEL1_PB9
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL1(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL1_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI0_SEL1 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL1    FL_GPIO_GetEXTI0SEL1
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL1(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL1_Msk));
}

/**
  * @brief    Set EXTI0_SEL2 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL2    FL_GPIO_SetEXTI0SEL2
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL2_PA2
  *           @arg @ref FL_GPIO_EXTI0_SEL2_PA10
  *           @arg @ref FL_GPIO_EXTI0_SEL2_PB2
  *           @arg @ref FL_GPIO_EXTI0_SEL2_PB10
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL2(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL2_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI0_SEL2 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL2    FL_GPIO_GeEXTI0SEL2
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL2(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL2_Msk));
}

/**
  * @brief    Set EXTI0_SEL3 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL3    FL_GPIO_SetEXTI0SEL3
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL3_PA3
  *           @arg @ref FL_GPIO_EXTI0_SEL3_PA11
  *           @arg @ref FL_GPIO_EXTI0_SEL3_PB3
  *           @arg @ref FL_GPIO_EXTI0_SEL3_PB11
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL3(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL3_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI0_SEL3 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL3    FL_GPIO_GetEXTI0SEL3
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL3(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL3_Msk));
}

/**
  * @brief    Set EXTI0_SEL4 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL4    FL_GPIO_SetEXTI0SEL4
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL4_PA4
  *           @arg @ref FL_GPIO_EXTI0_SEL4_PA12
  *           @arg @ref FL_GPIO_EXTI0_SEL4_PB4
  *           @arg @ref FL_GPIO_EXTI0_SEL4_PB12
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL4(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL4_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI0_SEL4 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL4    FL_GPIO_GetEXTI0SEL4
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL4(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL4_Msk));
}

/**
  * @brief    Set EXTI0_SEL5 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL5    FL_GPIO_SetEXTI0SEL5
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL5_PA5
  *           @arg @ref FL_GPIO_EXTI0_SEL5_PA13
  *           @arg @ref FL_GPIO_EXTI0_SEL5_PB5
  *           @arg @ref FL_GPIO_EXTI0_SEL5_PB13
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL5(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL5_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI5 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL5    FL_GPIO_GetEXTI0SEL5
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL5(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL5_Msk));
}

/**
  * @brief    Set EXTI0_SEL6 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL6    FL_GPIO_SetEXTI0SEL6
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL6_PA6
  *           @arg @ref FL_GPIO_EXTI0_SEL6_PA14
  *           @arg @ref FL_GPIO_EXTI0_SEL6_PB6
  *           @arg @ref FL_GPIO_EXTI0_SEL6_PB14
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL6(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL6_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI6 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL6    FL_GPIO_GetEXTI0SEL6
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL6(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL6_Msk));
}

/**
  * @brief    Set EXTI0_SEL7 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL7    FL_GPIO_SetEXTI0SEL7
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_SEL7_PA7
  *           @arg @ref FL_GPIO_EXTI0_SEL7_PA15
  *           @arg @ref FL_GPIO_EXTI0_SEL7_PB7
  *           @arg @ref FL_GPIO_EXTI0_SEL7_PB15
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI0SEL7(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL7_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI7 interrupt input
  * @rmtoll   EXTI0_SEL    EXTI0_SEL7    FL_GPIO_GetEXTI0SEL7
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI0SEL7(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_SEL, GPIO_EXTI0_SEL_EXTI0_SEL7_Msk));
}

/**
  * @brief    Set EXTI1_SEL0 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL0    FL_GPIO_SetEXTI1SEL0
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL0_PC8
  *           @arg @ref FL_GPIO_EXTI1_SEL0_PD0
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL0(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL0_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL0 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL0    FL_GPIO_GetEXTI1SEL0
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL0(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL0_Msk));
}

/**
  * @brief    Set EXTI1_SEL1 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL1    FL_GPIO_SetEXTI1SEL1
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL1_PC9
  *           @arg @ref FL_GPIO_EXTI1_SEL1_PD1
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL1(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL1_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL1 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL1    FL_GPIO_GetEXTI1SEL1
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL1(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL1_Msk));
}

/**
  * @brief    Set EXTI1_SEL2 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL2    FL_GPIO_SetEXTI1SEL2
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL2_PC2
  *           @arg @ref FL_GPIO_EXTI1_SEL2_PC10
  *           @arg @ref FL_GPIO_EXTI1_SEL2_PD2
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL2(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL2_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL2 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL2    FL_GPIO_GetEXTI1SEL2
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL2(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL2_Msk));
}

/**
  * @brief    Set EXTI1_SEL3 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL3    FL_GPIO_SetEXTI1SEL3
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL3_PC3
  *           @arg @ref FL_GPIO_EXTI1_SEL3_PC11
  *           @arg @ref FL_GPIO_EXTI1_SEL3_PD3
  *           @arg @ref FL_GPIO_EXTI1_SEL3_PG2
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL3(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL3_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL3 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL3    FL_GPIO_GetEXTI1SEL3
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL3(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL3_Msk));
}

/**
  * @brief    Set EXTI1_SEL4 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL4    FL_GPIO_SetEXTI1SEL4
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL4_PC4
  *           @arg @ref FL_GPIO_EXTI1_SEL4_PC12
  *           @arg @ref FL_GPIO_EXTI1_SEL4_PD4
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL4(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL4_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL4 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL4    FL_GPIO_GetEXTI1SEL4
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL4(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL4_Msk));
}

/**
  * @brief    Set EXTI1_SEL5 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL5    FL_GPIO_SetEXTI1SEL5
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL5_PC5
  *           @arg @ref FL_GPIO_EXTI1_SEL5_PC13
  *           @arg @ref FL_GPIO_EXTI1_SEL5_PD5
  *           @arg @ref FL_GPIO_EXTI1_SEL5_PG6
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL5(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL5_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL5 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL5    FL_GPIO_GetEXTI1SEL5
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL5(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL5_Msk));
}

/**
  * @brief    Set EXTI1_SEL6 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL6    FL_GPIO_SetEXTI1SEL6
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL6_PC6
  *           @arg @ref FL_GPIO_EXTI1_SEL6_PC14
  *           @arg @ref FL_GPIO_EXTI1_SEL6_PD6
  *           @arg @ref FL_GPIO_EXTI1_SEL6_PG7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL6(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL6_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL6 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL6    FL_GPIO_GetEXTI1SEL6
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL6(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL6_Msk));
}

/**
  * @brief    Set EXTI1_SEL7 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL7    FL_GPIO_SetEXTI1SEL7
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI1_SEL7_PC7
  *           @arg @ref FL_GPIO_EXTI1_SEL7_PC15
  *           @arg @ref FL_GPIO_EXTI1_SEL7_PD7
  *           @arg @ref FL_GPIO_EXTI1_SEL7_PG8
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI1SEL7(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL7_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI1_SEL7 interrupt input
  * @rmtoll   EXTI1_SEL    EXTI1_SEL7    FL_GPIO_GetEXTI1SEL7
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI1SEL7(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_SEL, GPIO_EXTI1_SEL_EXTI1_SEL7_Msk));
}

/**
  * @brief    Set EXTI2_SEL0 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL0    FL_GPIO_SetEXTI2SEL0
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL0_PE2
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL0(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL0_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL0 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL0    FL_GPIO_GetEXTI2SEL0
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL0(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL0_Msk));
}

/**
  * @brief    Set EXTI2_SEL1 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL1    FL_GPIO_SetEXTI2SEL1
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL1_PE3
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL1(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL1_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL1 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL1    FL_GPIO_GetEXTI2SEL1
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL1(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL1_Msk));
}

/**
  * @brief    Set EXTI2_SEL2 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL2    FL_GPIO_SetEXTI2SEL2
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL2_PE4
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL2(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL2_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL2 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL2    FL_GPIO_GetEXTI2SEL2
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL2(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL2_Msk));
}

/**
  * @brief    Set EXTI2_SEL3 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL3    FL_GPIO_SetEXTI2SEL3
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL3_PE5
  *           @arg @ref FL_GPIO_EXTI2_SEL3_PF3
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL3(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL3_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL3 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL3    FL_GPIO_GetEXTI2SEL3
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL3(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL3_Msk));
}

/**
  * @brief    Set EXTI2_SEL4 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL4    FL_GPIO_SetEXTI2SEL4
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL4_PF4
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL4(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL4_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL4 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL4    FL_GPIO_GetEXTI2SEL4
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL4(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL4_Msk));
}

/**
  * @brief    Set EXTI2_SEL5 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL5    FL_GPIO_SetEXTI2SEL5
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL5_PF5
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL5(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL5_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL5 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL5    FL_GPIO_GetEXTI2SEL5
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL5(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL5_Msk));
}

/**
  * @brief    Set EXTI2_SEL6 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL6    FL_GPIO_SetEXTI2SEL6
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL6_PF6
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL6(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL6_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL6 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL6    FL_GPIO_GetEXTI2SEL6
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL6(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL6_Msk));
}

/**
  * @brief    Set EXTI2_SEL7 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL7    FL_GPIO_SetEXTI2SEL7
  * @param    GPIOx GPIO Port
  * @param    EXTIPin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI2_SEL7_PF11
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetEXTI2SEL7(GPIOCOM_Type *GPIOx, uint32_t EXTIPin)
{
    MODIFY_REG(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL7_Msk, EXTIPin);
}

/**
  * @brief    Get EXTI2_SEL7 interrupt input
  * @rmtoll   EXTI2_SEL    EXTI2_SEL7    FL_GPIO_GetEXTISEL7
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_GPIO_GetEXTI2SEL7(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_SEL, GPIO_EXTI2_SEL_EXTI2_SEL7_Msk));
}
/**
  * @brief    Get EXTI interrupt flag
  * @rmtoll   EXITIF    EXITIF    FL_GPIO_IsActiveFlag_EXTI
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_LINE_0
  *           @arg @ref FL_GPIO_EXTI0_LINE_1
  *           @arg @ref FL_GPIO_EXTI0_LINE_2
  *           @arg @ref FL_GPIO_EXTI0_LINE_3
  *           @arg @ref FL_GPIO_EXTI0_LINE_4
  *           @arg @ref FL_GPIO_EXTI0_LINE_5
  *           @arg @ref FL_GPIO_EXTI0_LINE_6
  *           @arg @ref FL_GPIO_EXTI0_LINE_7
  *           @arg @ref FL_GPIO_EXTI1_LINE_0
  *           @arg @ref FL_GPIO_EXTI1_LINE_1
  *           @arg @ref FL_GPIO_EXTI1_LINE_2
  *           @arg @ref FL_GPIO_EXTI1_LINE_3
  *           @arg @ref FL_GPIO_EXTI1_LINE_4
  *           @arg @ref FL_GPIO_EXTI1_LINE_5
  *           @arg @ref FL_GPIO_EXTI1_LINE_6
  *           @arg @ref FL_GPIO_EXTI1_LINE_7
  *           @arg @ref FL_GPIO_EXTI2_LINE_0
  *           @arg @ref FL_GPIO_EXTI2_LINE_1
  *           @arg @ref FL_GPIO_EXTI2_LINE_2
  *           @arg @ref FL_GPIO_EXTI2_LINE_3
  *           @arg @ref FL_GPIO_EXTI2_LINE_4
  *           @arg @ref FL_GPIO_EXTI2_LINE_5
  *           @arg @ref FL_GPIO_EXTI2_LINE_6
  *           @arg @ref FL_GPIO_EXTI2_LINE_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsActiveFlag_EXTI(GPIOCOM_Type *GPIOx, uint32_t line)
{
    if(line<8)
        return (uint32_t)(READ_BIT(GPIOx->EXTI0_IF, 1<<(line)) == (1<<(line)));
    else if(line<16)
        return (uint32_t)(READ_BIT(GPIOx->EXTI1_IF, 1<<(line&0x07)) == (1<<(line&0x07)));
    else if(line<24)
        return (uint32_t)(READ_BIT(GPIOx->EXTI2_IF, 1<<(line&0x07)) == (1<<(line&0x07)));
    else 
        return 0;
}
/**
  * @brief    Glear EXTI interrupt flag
  * @rmtoll   EXITIF    EXITIF    FL_GPIO_ClearFlag_EXTI
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI0_LINE_0
  *           @arg @ref FL_GPIO_EXTI0_LINE_1
  *           @arg @ref FL_GPIO_EXTI0_LINE_2
  *           @arg @ref FL_GPIO_EXTI0_LINE_3
  *           @arg @ref FL_GPIO_EXTI0_LINE_4
  *           @arg @ref FL_GPIO_EXTI0_LINE_5
  *           @arg @ref FL_GPIO_EXTI0_LINE_6
  *           @arg @ref FL_GPIO_EXTI0_LINE_7
  *           @arg @ref FL_GPIO_EXTI1_LINE_0
  *           @arg @ref FL_GPIO_EXTI1_LINE_1
  *           @arg @ref FL_GPIO_EXTI1_LINE_2
  *           @arg @ref FL_GPIO_EXTI1_LINE_3
  *           @arg @ref FL_GPIO_EXTI1_LINE_4
  *           @arg @ref FL_GPIO_EXTI1_LINE_5
  *           @arg @ref FL_GPIO_EXTI1_LINE_6
  *           @arg @ref FL_GPIO_EXTI1_LINE_7
  *           @arg @ref FL_GPIO_EXTI2_LINE_0
  *           @arg @ref FL_GPIO_EXTI2_LINE_1
  *           @arg @ref FL_GPIO_EXTI2_LINE_2
  *           @arg @ref FL_GPIO_EXTI2_LINE_3
  *           @arg @ref FL_GPIO_EXTI2_LINE_4
  *           @arg @ref FL_GPIO_EXTI2_LINE_5
  *           @arg @ref FL_GPIO_EXTI2_LINE_6
  *           @arg @ref FL_GPIO_EXTI2_LINE_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ClearFlag_EXTI(GPIOCOM_Type *GPIOx, uint32_t line)
{
    if(line<8)
        WRITE_REG(GPIOx->EXTI0_IF, (1<<(line)));
    else if(line<16)
        WRITE_REG(GPIOx->EXTI1_IF, (1<<(line&0x07)));
    else if(line<24)
        WRITE_REG(GPIOx->EXTI2_IF, (1<<(line&0x07)));
    else ;  
}

/**
  * @brief    Get EXTI0 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_IsActiveFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsActiveFlag_EXTI0(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI0_IF, (line & 0xff)) == (line & 0xff));
}

/**
  * @brief    Glear EXTI0 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_ClearFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ClearFlag_EXTI0(GPIOCOM_Type *GPIOx, uint32_t line)
{
    WRITE_REG(GPIOx->EXTI0_IF, (line & 0xff));
}

/**
  * @brief    Get EXTI1 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_IsActiveFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsActiveFlag_EXTI1(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI1_IF, (line & 0xff)) == (line & 0xff));
}

/**
  * @brief    Glear EXTI1 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_ClearFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ClearFlag_EXTI1(GPIOCOM_Type *GPIOx, uint32_t line)
{
    WRITE_REG(GPIOx->EXTI1_IF, (line & 0xff));
}

/**
  * @brief    Get EXTI2 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_IsActiveFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsActiveFlag_EXTI2(GPIOCOM_Type *GPIOx, uint32_t line)
{
    return (uint32_t)(READ_BIT(GPIOx->EXTI2_IF, (line & 0xff)) == (line & 0xff));
}

/**
  * @brief    Glear EXTI2 interrupt flag
  * @rmtoll   EXIT0IF    EXIT0IF0    FL_GPIO_ClearFlag_EXTI0_0
  * @param    line This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_EXTI_LINE_0
  *           @arg @ref FL_GPIO_EXTI_LINE_1
  *           @arg @ref FL_GPIO_EXTI_LINE_2
  *           @arg @ref FL_GPIO_EXTI_LINE_3
  *           @arg @ref FL_GPIO_EXTI_LINE_4
  *           @arg @ref FL_GPIO_EXTI_LINE_5
  *           @arg @ref FL_GPIO_EXTI_LINE_6
  *           @arg @ref FL_GPIO_EXTI_LINE_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_ClearFlag_EXTI2(GPIOCOM_Type *GPIOx, uint32_t line)
{
    WRITE_REG(GPIOx->EXTI2_IF, (line & 0xff));
}


/**
  * @brief    PE2HD enable
  * @rmtoll   HDSEL    PE2HDEN    FL_GPIO_EnablePE2HD
  * @param    GPIOx GPIO Port
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePE2HD(GPIOCOM_Type *GPIOx)
{
    SET_BIT(GPIOx->HDSEL, GPIO_HDSEL_PE2HDEN_Msk);
}

/**
  * @brief    Get PE2HD enable status
  * @rmtoll   HDSEL    PE2HDEN    FL_GPIO_IsEnabledPE2HD
  * @param    GPIOx GPIO Port
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPE2HD(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->HDSEL, GPIO_HDSEL_PE2HDEN_Msk) == GPIO_HDSEL_PE2HDEN_Msk);
}

/**
  * @brief    PE2HD disable
  * @rmtoll   HDSEL    PE2HDEN    FL_GPIO_DisablePE2HD
  * @param    GPIOx GPIO Port
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePE2HD(GPIOCOM_Type *GPIOx)
{
    CLEAR_BIT(GPIOx->HDSEL, GPIO_HDSEL_PE2HDEN_Msk);
}

/**
  * @brief    PG6HD enable
  * @rmtoll   HDSEL    PG6HDEN    FL_GPIO_EnablePG6HD
  * @param    GPIOx GPIO Port
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePG6HD(GPIOCOM_Type *GPIOx)
{
    SET_BIT(GPIOx->HDSEL, GPIO_HDSEL_PG6HDEN_Msk);
}

/**
  * @brief    Get PG6HD enable status
  * @rmtoll   HDSEL    PG6HDEN    FL_GPIO_IsEnabledPG6HD
  * @param    GPIOx GPIO Port
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPG6HD(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->HDSEL, GPIO_HDSEL_PG6HDEN_Msk) == GPIO_HDSEL_PG6HDEN_Msk);
}

/**
  * @brief    PG6HD disable
  * @rmtoll   HDSEL    PG6HDEN    FL_GPIO_DisablePG6HD
  * @param    GPIOx GPIO Port
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePG6HD(GPIOCOM_Type *GPIOx)
{
    CLEAR_BIT(GPIOx->HDSEL, GPIO_HDSEL_PG6HDEN_Msk);
}

/**
  * @brief    Set PC12 analog function
  * @rmtoll   ANASELECT    PC12ANS    FL_GPIO_SetPC12AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PC12_Analog_Function_SEG36
  *           @arg @ref FL_GPIO_PC12_Analog_Function_ADC_IN1
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPC12AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PC12ANS_Msk, select);
}

/**
  * @brief    Get PC12 analog function
  * @rmtoll   ANASELECT    PC12ANS    FL_GPIO_GetPC12AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PC12_Analog_Function_SEG36
  *           @arg @ref FL_GPIO_PC12_Analog_Function_ADC_IN1
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPC12AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PC12ANS_Msk));
}

/**
  * @brief    Set PC13 analog function
  * @rmtoll   ANASELECT    PC13ANS    FL_GPIO_SetPC13AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PC13_Analog_Function_SEG37
  *           @arg @ref FL_GPIO_PC13_Analog_Function_ADC_IN2
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPC13AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PC13ANS_Msk, select);
}

/**
  * @brief    Get PC13 analog function
  * @rmtoll   ANASELECT    PC13ANS    FL_GPIO_GetPC13AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PC13_Analog_Function_SEG37
  *           @arg @ref FL_GPIO_PC13_Analog_Function_ADC_IN2
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPC13AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PC13ANS_Msk));
}

/**
  * @brief    Set PC14 analog function
  * @rmtoll   ANASELECT    PC14ANS    FL_GPIO_SetPC14AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PC14_Analog_Function_SEG38
  *           @arg @ref FL_GPIO_PC14_Analog_Function_ACMP2_INN0
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPC14AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PC14ANS_Msk, select);
}

/**
  * @brief    Get PC14 analog function
  * @rmtoll   ANASELECT    PC14ANS    FL_GPIO_GetPC14AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PC14_Analog_Function_SEG38
  *           @arg @ref FL_GPIO_PC14_Analog_Function_ACMP2_INN0
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPC14AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PC14ANS_Msk));
}

/**
  * @brief    Set PC15 analog function
  * @rmtoll   ANASELECT    PC15ANS    FL_GPIO_SetPC15AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PC15_Analog_Function_SEG39
  *           @arg @ref FL_GPIO_PC15_Analog_Function_ACMP2_INP0_ADC_IN6
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPC15AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PC15ANS_Msk, select);
}

/**
  * @brief    Get PC15 analog function
  * @rmtoll   ANASELECT    PC15ANS    FL_GPIO_GetPC15AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PC15_Analog_Function_SEG39
  *           @arg @ref FL_GPIO_PC15_Analog_Function_ACMP2_INP0_ADC_IN6
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPC15AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PC15ANS_Msk));
}

/**
  * @brief    Set PE3 analog function
  * @rmtoll   ANASELECT    PE3ANS    FL_GPIO_SetPE3AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PE3_Analog_Function_SEG18
  *           @arg @ref FL_GPIO_PE3_Analog_Function_ACMP2_INN1
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPE3AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PE3ANS_Msk, select);
}

/**
  * @brief    Get PE3 analog function
  * @rmtoll   ANASELECT    PE3ANS    FL_GPIO_GetPE3AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PE3_Analog_Function_SEG18
  *           @arg @ref FL_GPIO_PE3_Analog_Function_ACMP2_INN1
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPE3AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PE3ANS_Msk));
}

/**
  * @brief    Set PE4 analog function
  * @rmtoll   ANASELECT    PE4ANS    FL_GPIO_SetPE4AnalogFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PE4_Analog_Function_SEG19
  *           @arg @ref FL_GPIO_PE4_Analog_Function_ACMP2_INP1
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPE4AnalogFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->ANASELECT, GPIO_ANASELECT_PE4ANS_Msk, select);
}

/**
  * @brief    Get PE4 analog function
  * @rmtoll   ANASELECT    PE4ANS    FL_GPIO_GetPE4AnalogFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PE4_Analog_Function_SEG19
  *           @arg @ref FL_GPIO_PE4_Analog_Function_ACMP2_INP1
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPE4AnalogFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->ANASELECT, GPIO_ANASELECT_PE4ANS_Msk));
}

/**
  * @brief    IODF enable
  * @rmtoll   IODF    IOAINF[0]    FL_GPIO_EnableIODF
  * @param    GPIOx GPIO Port
  * @param    DF_Pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_IOA_PA8
  *           @arg @ref FL_GPIO_IOA_PA9
  *           @arg @ref FL_GPIO_IOA_PA10
  *           @arg @ref FL_GPIO_IOA_PA11
  *           @arg @ref FL_GPIO_IOB_PB4
  *           @arg @ref FL_GPIO_IOB_PB5
  *           @arg @ref FL_GPIO_IOB_PB6
  *           @arg @ref FL_GPIO_IOB_PB7
  *           @arg @ref FL_GPIO_IOC_PC12
  *           @arg @ref FL_GPIO_IOC_PC13
  *           @arg @ref FL_GPIO_IOC_PC14
  *           @arg @ref FL_GPIO_IOC_PC15
  *           @arg @ref FL_GPIO_IOD_PD0
  *           @arg @ref FL_GPIO_IOD_PD1
  *           @arg @ref FL_GPIO_IOD_PD2
  *           @arg @ref FL_GPIO_IOD_PD3
  *           @arg @ref FL_GPIO_IOE_PE2
  *           @arg @ref FL_GPIO_IOE_PE5
  *           @arg @ref FL_GPIO_IOF_PF3
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnableIODF(GPIOCOM_Type *GPIOx, uint32_t DF_Pin)
{
    SET_BIT(GPIOx->IODF, ((DF_Pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get IODF enable status
  * @rmtoll   IODF    IOAINF[0]    FL_GPIO_IsEnabledIODF
  * @param    GPIOx GPIO Port
  * @param    DF_Pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_IOA_PA8
  *           @arg @ref FL_GPIO_IOA_PA9
  *           @arg @ref FL_GPIO_IOA_PA10
  *           @arg @ref FL_GPIO_IOA_PA11
  *           @arg @ref FL_GPIO_IOB_PB4
  *           @arg @ref FL_GPIO_IOB_PB5
  *           @arg @ref FL_GPIO_IOB_PB6
  *           @arg @ref FL_GPIO_IOB_PB7
  *           @arg @ref FL_GPIO_IOC_PC12
  *           @arg @ref FL_GPIO_IOC_PC13
  *           @arg @ref FL_GPIO_IOC_PC14
  *           @arg @ref FL_GPIO_IOC_PC15
  *           @arg @ref FL_GPIO_IOD_PD0
  *           @arg @ref FL_GPIO_IOD_PD1
  *           @arg @ref FL_GPIO_IOD_PD2
  *           @arg @ref FL_GPIO_IOD_PD3
  *           @arg @ref FL_GPIO_IOE_PE2
  *           @arg @ref FL_GPIO_IOE_PE5
  *           @arg @ref FL_GPIO_IOF_PF3
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledIODF(GPIOCOM_Type *GPIOx, uint32_t DF_Pin)
{
    return (uint32_t)(READ_BIT(GPIOx->IODF, DF_Pin) == DF_Pin);
}

/**
  * @brief    IODF disable
  * @rmtoll   IODF    IOAINF[0]    FL_GPIO_DisableIODF
  * @param    GPIOx GPIO Port
  * @param    DF_Pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_IOA_PA8
  *           @arg @ref FL_GPIO_IOA_PA9
  *           @arg @ref FL_GPIO_IOA_PA10
  *           @arg @ref FL_GPIO_IOA_PA11
  *           @arg @ref FL_GPIO_IOB_PB4
  *           @arg @ref FL_GPIO_IOB_PB5
  *           @arg @ref FL_GPIO_IOB_PB6
  *           @arg @ref FL_GPIO_IOB_PB7
  *           @arg @ref FL_GPIO_IOC_PC12
  *           @arg @ref FL_GPIO_IOC_PC13
  *           @arg @ref FL_GPIO_IOC_PC14
  *           @arg @ref FL_GPIO_IOC_PC15
  *           @arg @ref FL_GPIO_IOD_PD0
  *           @arg @ref FL_GPIO_IOD_PD1
  *           @arg @ref FL_GPIO_IOD_PD2
  *           @arg @ref FL_GPIO_IOD_PD3
  *           @arg @ref FL_GPIO_IOE_PE2
  *           @arg @ref FL_GPIO_IOE_PE5
  *           @arg @ref FL_GPIO_IOF_PF3
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisableIODF(GPIOCOM_Type *GPIOx, uint32_t DF_Pin)
{
    CLEAR_BIT(GPIOx->IODF, ((DF_Pin & 0xfffff) << 0x0U));
}

/**
  * @brief    Get WKUP enable status
  * @rmtoll   PINWKEN    EN    FL_GPIO_IsEnabledWakeup
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_0
  *           @arg @ref FL_GPIO_WAKEUP_1
  *           @arg @ref FL_GPIO_WAKEUP_2
  *           @arg @ref FL_GPIO_WAKEUP_3
  *           @arg @ref FL_GPIO_WAKEUP_4
  *           @arg @ref FL_GPIO_WAKEUP_5
  *           @arg @ref FL_GPIO_WAKEUP_6
  *           @arg @ref FL_GPIO_WAKEUP_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledWakeup(GPIOCOM_Type *GPIOx, uint32_t wakeup)
{
    return (uint32_t)(READ_BIT(GPIOx->PINWKEN, ((wakeup & 0xff) << 0x0U)) == ((wakeup & 0xff) << 0x0U));
}

/**
  * @brief    WKUP enable
  * @rmtoll   PINWKEN    EN    FL_GPIO_EnableWakeup
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_0
  *           @arg @ref FL_GPIO_WAKEUP_1
  *           @arg @ref FL_GPIO_WAKEUP_2
  *           @arg @ref FL_GPIO_WAKEUP_3
  *           @arg @ref FL_GPIO_WAKEUP_4
  *           @arg @ref FL_GPIO_WAKEUP_5
  *           @arg @ref FL_GPIO_WAKEUP_6
  *           @arg @ref FL_GPIO_WAKEUP_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnableWakeup(GPIOCOM_Type *GPIOx, uint32_t wakeup)
{
    SET_BIT(GPIOx->PINWKEN, ((wakeup & 0xff) << 0x0U));
}

/**
  * @brief    WKUP disable
  * @rmtoll   PINWKEN    EN    FL_GPIO_DisableWakeup
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_0
  *           @arg @ref FL_GPIO_WAKEUP_1
  *           @arg @ref FL_GPIO_WAKEUP_2
  *           @arg @ref FL_GPIO_WAKEUP_3
  *           @arg @ref FL_GPIO_WAKEUP_4
  *           @arg @ref FL_GPIO_WAKEUP_5
  *           @arg @ref FL_GPIO_WAKEUP_6
  *           @arg @ref FL_GPIO_WAKEUP_7
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisableWakeup(GPIOCOM_Type *GPIOx, uint32_t wakeup)
{
    CLEAR_BIT(GPIOx->PINWKEN, ((wakeup & 0xff) << 0x0U));
}

/**
  * @brief    Get WKUP interrupt entry
  * @rmtoll   PINWKEN    WKISEL    FL_GPIO_GetWakeupInterruptEntry
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_INT_ENTRY_NMI
  *           @arg @ref FL_GPIO_WAKEUP_INT_ENTRY_38
  */
__STATIC_INLINE uint32_t FL_GPIO_GetWakeupInterruptEntry(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->PINWKEN, GPIO_PINWKEN_WKISEL_Msk));
}

/**
  * @brief    Set wkup interrupt entry
  * @rmtoll   PINWKEN    WKISEL    FL_GPIO_SetWakeupInterruptEntry
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_INT_ENTRY_NMI
  *           @arg @ref FL_GPIO_WAKEUP_INT_ENTRY_38
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetWakeupInterruptEntry(GPIOCOM_Type *GPIOx, uint32_t wakeup)
{
    MODIFY_REG(GPIOx->PINWKEN, GPIO_PINWKEN_WKISEL_Msk, wakeup);
}

/**
  * @brief    Set WKUP edge polarity
  * @rmtoll   PINWKEN    SEL    FL_GPIO_SetWakeupEdge
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_0
  *           @arg @ref FL_GPIO_WAKEUP_1
  *           @arg @ref FL_GPIO_WAKEUP_2
  *           @arg @ref FL_GPIO_WAKEUP_3
  *           @arg @ref FL_GPIO_WAKEUP_4
  *           @arg @ref FL_GPIO_WAKEUP_5
  *           @arg @ref FL_GPIO_WAKEUP_6
  *           @arg @ref FL_GPIO_WAKEUP_7
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_TRIGGER_RISING
  *           @arg @ref FL_GPIO_WAKEUP_TRIGGER_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetWakeupEdge(GPIOCOM_Type *GPIOx, uint32_t wakeup, uint32_t mode)
{
    MODIFY_REG(GPIOx->PINWKEN, (wakeup << GPIO_PINWKEN_SEL_Pos), (wakeup * mode));
}

/**
  * @brief    Get WKUP edge polarity
  * @rmtoll   PINWKEN    SEL    FL_GPIO_GetWakeupEdge
  * @param    GPIOx GPIO Port
  * @param    wakeup This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_0
  *           @arg @ref FL_GPIO_WAKEUP_1
  *           @arg @ref FL_GPIO_WAKEUP_2
  *           @arg @ref FL_GPIO_WAKEUP_3
  *           @arg @ref FL_GPIO_WAKEUP_4
  *           @arg @ref FL_GPIO_WAKEUP_5
  *           @arg @ref FL_GPIO_WAKEUP_6
  *           @arg @ref FL_GPIO_WAKEUP_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_WAKEUP_TRIGGER_RISING
  *           @arg @ref FL_GPIO_WAKEUP_TRIGGER_FALLING
  */
__STATIC_INLINE uint32_t FL_GPIO_GetWakeupEdge(GPIOCOM_Type *GPIOx, uint32_t wakeup)
{
    return (uint32_t)(READ_BIT(GPIOx->PINWKEN, (wakeup << GPIO_PINWKEN_SEL_Pos)) / wakeup);
}

/**
  * @brief    Set PF4 frequency output
  * @rmtoll   PF4AFSEL    TFOSEL    FL_GPIO_SetPF4FOUT
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV4
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV64
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL_DIV4
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL_DIV16
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCLF
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCLP
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPF4FOUT(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->PF4AFSEL, GPIO_PF4AFSEL_TFOSEL_Msk, select);
}

/**
  * @brief    Get PF4 frequency output
  * @rmtoll   PF4AFSEL    TFOSEL    FL_GPIO_GetPF4FOUT
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV4
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCHF_DIV64
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL_DIV4
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_PLL_DIV16
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCLF
  *           @arg @ref FL_GPIO_PF4_FOUT_SELECT_RCLP
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPF4FOUT(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->PF4AFSEL, GPIO_PF4AFSEL_TFOSEL_Msk));
}

/**
  * @brief    Set PF4 Pinremap Function
  * @rmtoll   PF4AFSEL    PF4AFS    FL_GPIO_SetPF4_PRFunction
  * @param    GPIOx GPIO Port
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PF4_PRFunction_SELECT_UART_TX
  *           @arg @ref FL_GPIO_PF4_PRFunction_SELECT_LPUART_TX
  *           @arg @ref FL_GPIO_PF4_PRFunction_SELECT_TFO
  *           @arg @ref FL_GPIO_PF4_PRFunction_SELECT_TOF
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPF4_PRFunction(GPIOCOM_Type *GPIOx, uint32_t select)
{
    MODIFY_REG(GPIOx->PF4AFSEL, GPIO_PF4AFSEL_PF4AFS_Msk, select);
}

/**
  * @brief    Get PF4 Pinremap Function
  * @rmtoll   PF4AFSEL    PF4AFS    FL_GPIO_GetPF4_PRFunction
  * @param    GPIOx GPIO Port
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_PF4_PRFunction_SELECT_UART_TX
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPF4_PRFunction(GPIOCOM_Type *GPIOx)
{
    return (uint32_t)(READ_BIT(GPIOx->PF4AFSEL, GPIO_PF4AFSEL_PF4AFS_Msk));
}

/**
  * @brief    Set Portx driving strength
  * @rmtoll   DSCFG    DR    FL_GPIO_SetPinDriveStrength
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @param    strength This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_DRIVESTRENGTH_High_Driving_Strength
  *           @arg @ref FL_GPIO_DRIVESTRENGTH_Low_Driving_Strength
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPinDriveStrength(GPIOxHD_Type *GPIOx_HD, uint32_t pin, uint32_t strength)
{
    MODIFY_REG(GPIOx_HD->DSCFG, (pin*GPIO_DSCFG_DR), (pin*strength)); 
}

/**
  * @brief    Get Portx driving strength
  * @rmtoll   DSCFG    DR    FL_GPIO_GetPinDriveStrength
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_DRIVESTRENGTH_High_Driving_Strength
  *           @arg @ref FL_GPIO_DRIVESTRENGTH_Low_Driving_Strength
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPinDriveStrength(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx_HD->DSCFG, (pin*GPIO_DSCFG_DR))/pin);
}

/**
  * @brief    Set Portx driving slew rate
  * @rmtoll   DSCFG    SR    FL_GPIO_SetPinSlewRate
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @param    strength This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_SLEWRATE_FastSlew
  *           @arg @ref FL_GPIO_SLEWRATE_LowSlew
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_SetPinSlewRate(GPIOxHD_Type *GPIOx_HD, uint32_t pin, uint32_t rate)
{
    MODIFY_REG(GPIOx_HD->DSCFG, (pin*GPIO_DSCFG_SR_Msk), (pin*rate)); 
}

/**
  * @brief    Get Portx driving slew rate
  * @rmtoll   DSCFG    SR    FL_GPIO_GetPinSlesRate
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_GPIO_SLEWRATE_FastSlew
  *           @arg @ref FL_GPIO_SLEWRATE_LowSlew
  */
__STATIC_INLINE uint32_t FL_GPIO_GetPinSlesRate(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx_HD->DSCFG, (pin*GPIO_DSCFG_SR))/pin);
}

/**
  * @brief    GPIOx Pull-Down enable
  * @rmtoll   PDEN        FL_GPIO_EnablePinPulldown
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_EnablePinPulldown(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    SET_BIT(GPIOx_HD->PDEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    GPIOx Pull-Down disable
  * @rmtoll   PDEN        FL_GPIO_DisablePinPulldown
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  *           @arg @ref FL_GPIO_PIN_ALL
  * @retval   None
  */
__STATIC_INLINE void FL_GPIO_DisablePinPulldown(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    CLEAR_BIT(GPIOx_HD->PDEN, ((pin & 0xffff) << 0x0U));
}

/**
  * @brief    Get GPIOx Pull-Down enable status
  * @rmtoll   PDEN        FL_GPIO_IsEnabledPinPulldown
  * @param    GPIOx GPIO Port
  * @param    pin This parameter can be one of the following values:
  *           @arg @ref FL_GPIO_PIN_0
  *           @arg @ref FL_GPIO_PIN_1
  *           @arg @ref FL_GPIO_PIN_2
  *           @arg @ref FL_GPIO_PIN_3
  *           @arg @ref FL_GPIO_PIN_4
  *           @arg @ref FL_GPIO_PIN_5
  *           @arg @ref FL_GPIO_PIN_6
  *           @arg @ref FL_GPIO_PIN_7
  *           @arg @ref FL_GPIO_PIN_8
  *           @arg @ref FL_GPIO_PIN_9
  *           @arg @ref FL_GPIO_PIN_10
  *           @arg @ref FL_GPIO_PIN_11
  *           @arg @ref FL_GPIO_PIN_12
  *           @arg @ref FL_GPIO_PIN_13
  *           @arg @ref FL_GPIO_PIN_14
  *           @arg @ref FL_GPIO_PIN_15
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_GPIO_IsEnabledPinPulldown(GPIOxHD_Type *GPIOx_HD, uint32_t pin)
{
    return (uint32_t)(READ_BIT(GPIOx_HD->PDEN, ((pin & 0xffff) << 0x0U)) == ((pin & 0xffff) << 0x0U));
}

/**
  * @}
  */

/** @defgroup GPIO_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
extern FL_ErrorStatus FL_GPIO_Init(GPIO_Type *GPIOx, FL_GPIO_InitTypeDef *initStruct);
extern FL_ErrorStatus FL_GPIO_DeInit(GPIO_Type *GPIOx, uint32_t pin);
extern void FL_GPIO_StructInit(FL_GPIO_InitTypeDef *initStruct);
extern FL_ErrorStatus FL_WKUP_Init(FL_WKUP_InitTypeDef *initStruct, uint32_t wakeup);
extern FL_ErrorStatus FL_WKUP_DeInit(uint32_t wakeup);
extern void FL_WKUP_StructInit(FL_WKUP_InitTypeDef *initStruct);
extern void FL_GPIO_ALLPIN_LPM_MODE(void);
/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_GPIO_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
