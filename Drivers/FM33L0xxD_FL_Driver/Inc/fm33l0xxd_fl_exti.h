/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_exti.h
  * @author  FMSH Application Team
  * @brief   Head file of EXTI FL Module
  * @version  V0.0.1
  * @date     28. May 2026
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
#ifndef __FM33L0XXD_FL_EXTI_H
#define __FM33L0XXD_FL_EXTI_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup EXTI EXTI
  * @brief EXTI FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup EXTI_FL_ES_INIT EXTI Exported Init structures
  * @{
  */

/**
  * @brief FL EXTI Init Sturcture definition
  */
typedef struct
{
    /*! EXTI时钟源配置 */
    uint32_t clockSource;

} FL_EXTI_CommonInitTypeDef;

/**
  * @brief FL EXTI Init Sturcture definition
  */
typedef struct
{
    /*! EXTI输入配置 */
    uint32_t input;

    /*! EXTI触发边沿配置 */
    uint32_t triggerEdge;

//    /*! EXTI数字滤波配置 */
//    uint32_t filter; //引脚初始化配置

} FL_EXTI_InitTypeDef;

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup EXTI_FL_Exported_Constants EXTI Exported Constants
  * @{
  */

#define    FL_GPIO_EXTI0_LINE_0                                    (0U)
#define    FL_GPIO_EXTI0_LINE_1                                    (1U)
#define    FL_GPIO_EXTI0_LINE_2                                    (2U)
#define    FL_GPIO_EXTI0_LINE_3                                    (3U)
#define    FL_GPIO_EXTI0_LINE_4                                    (4U)
#define    FL_GPIO_EXTI0_LINE_5                                    (5U)
#define    FL_GPIO_EXTI0_LINE_6                                    (6U)
#define    FL_GPIO_EXTI0_LINE_7                                    (7U)
#define    FL_GPIO_EXTI1_LINE_0                                    (8U)
#define    FL_GPIO_EXTI1_LINE_1                                    (9U)
#define    FL_GPIO_EXTI1_LINE_2                                    (10U)
#define    FL_GPIO_EXTI1_LINE_3                                    (11U)
#define    FL_GPIO_EXTI1_LINE_4                                    (12U)
#define    FL_GPIO_EXTI1_LINE_5                                    (13U)
#define    FL_GPIO_EXTI1_LINE_6                                    (14U)
#define    FL_GPIO_EXTI1_LINE_7                                    (15U)
#define    FL_GPIO_EXTI2_LINE_0                                    (16U)
#define    FL_GPIO_EXTI2_LINE_1                                    (17U)
#define    FL_GPIO_EXTI2_LINE_2                                    (18U)
#define    FL_GPIO_EXTI2_LINE_3                                    (19U)
#define    FL_GPIO_EXTI2_LINE_4                                    (20U)
#define    FL_GPIO_EXTI2_LINE_5                                    (21U)
#define    FL_GPIO_EXTI2_LINE_6                                    (22U)
#define    FL_GPIO_EXTI2_LINE_7                                    (23U)


#define    FL_GPIO_EXTI_INPUT_GROUP0                              (0x0U << 0U)
#define    FL_GPIO_EXTI_INPUT_GROUP1                              (0x1U << 0U)
#define    FL_GPIO_EXTI_INPUT_GROUP2                              (0x2U << 0U)
#define    FL_GPIO_EXTI_INPUT_GROUP3                              (0x3U << 0U)

#define    FL_GPIO_EXTI_TRIGGER_EDGE_RISING                       (0x0U << 0U)
#define    FL_GPIO_EXTI_TRIGGER_EDGE_FALLING                      (0x1U << 0U)
#define    FL_GPIO_EXTI_TRIGGER_EDGE_BOTH                         (0x2U << 0U)
#define    FL_GPIO_EXTI_TRIGGER_EDGE_DISABLE                      (0x3U << 0U)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup EXTI_FL_Exported_Functions EXTI Exported Functions
  * @{
  */

/**
  * @}
  */

/** @defgroup EXTI_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

FL_ErrorStatus  FL_EXTI_CommonInit(FL_EXTI_CommonInitTypeDef *init);
FL_ErrorStatus  FL_EXTI_CommonDeinit(void);
void            FL_EXTI_CommonStructInit(FL_EXTI_CommonInitTypeDef *init);

FL_ErrorStatus  FL_EXTI_Init(uint32_t extiLineX, FL_EXTI_InitTypeDef *init);
FL_ErrorStatus  FL_EXTI_DeInit(uint32_t extiLineX);
void            FL_EXTI_StructInit(FL_EXTI_InitTypeDef *init);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_EXTI_H */

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
