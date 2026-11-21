/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_exti.c
  * @author  FMSH Application Team
  * @brief   Src file of EXTI FL Module
  * @version  V0.0.1
  * @date     29. May 2026
  ****************************************************************************************************
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


/* Includes ------------------------------------------------------------------*/
#include "fm33l0xxd_fl.h"  

/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @addtogroup EXTI
  * @{
  */

#ifdef FL_EXTI_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup EXTI_FL_Private_Macros
  * @{
  */

#define IS_EXTI_ALL_INSTANCE(INSTANCE)             (((INSTANCE) == FL_GPIO_EXTI0_LINE_0)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_1)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_2)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_3)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_4)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_5)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_6)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI0_LINE_7)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_0)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_1)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_2)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_3)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_4)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_5)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_6)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI1_LINE_7)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_0)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_1)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_2)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_3)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_4)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_5)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_6)||\
                                                    ((INSTANCE) == FL_GPIO_EXTI2_LINE_7))

#define IS_EXTI_CLK_SOURCE(__VALUE__)              (((__VALUE__) == FL_RCC_EXTI_SAMPLING_CLK_AHBCLK)||\
                                                    ((__VALUE__) == FL_RCC_EXTI_SAMPLING_CLK_LSCLK))

#define IS_EXTI_INPUT_GROUP(__VALUE__)             (((__VALUE__) == FL_GPIO_EXTI_INPUT_GROUP0)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_INPUT_GROUP1)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_INPUT_GROUP2)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_INPUT_GROUP3))

#define IS_EXTI_TRIG_EDGE(__VALUE__)               (((__VALUE__) == FL_GPIO_EXTI_TRIGGER_EDGE_RISING)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_TRIGGER_EDGE_FALLING)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_TRIGGER_EDGE_BOTH)||\
                                                    ((__VALUE__) == FL_GPIO_EXTI_TRIGGER_EDGE_DISABLE))

#define IS_EXTI_FILTER(__VALUE__)                  (((__VALUE__) == FL_ENABLE)||\
                                                    ((__VALUE__) == FL_DISABLE))

/**
  * @}
  */

/* Private consts ------------------------------------------------------------*/
/** @addtogroup EXTI_FL_Private_Consts
  * @{
  */

typedef void (*pSetExtiLineFunc)(GPIOCOM_Type *, uint32_t);
static const pSetExtiLineFunc setExtiLineFuncs[] =
{
    FL_GPIO_SetEXTI0SEL0,
    FL_GPIO_SetEXTI0SEL1,
    FL_GPIO_SetEXTI0SEL2,
    FL_GPIO_SetEXTI0SEL3,
    FL_GPIO_SetEXTI0SEL4,
    FL_GPIO_SetEXTI0SEL5,
    FL_GPIO_SetEXTI0SEL6,
    FL_GPIO_SetEXTI0SEL7,
    FL_GPIO_SetEXTI1SEL0,
    FL_GPIO_SetEXTI1SEL1,
    FL_GPIO_SetEXTI1SEL2,
    FL_GPIO_SetEXTI1SEL3,
    FL_GPIO_SetEXTI1SEL4,
    FL_GPIO_SetEXTI1SEL5,
    FL_GPIO_SetEXTI1SEL6,
    FL_GPIO_SetEXTI1SEL7,
    FL_GPIO_SetEXTI2SEL0,
    FL_GPIO_SetEXTI2SEL1,
    FL_GPIO_SetEXTI2SEL2,
    FL_GPIO_SetEXTI2SEL3,
    FL_GPIO_SetEXTI2SEL4,
    FL_GPIO_SetEXTI2SEL5,
    FL_GPIO_SetEXTI2SEL6,
    FL_GPIO_SetEXTI2SEL7,    
};

typedef void (*pSetTrigEdgeFunc)(GPIOCOM_Type *, uint32_t, uint32_t);
static const pSetTrigEdgeFunc setTrigEdgeFuncs[] =
{
    FL_GPIO_SetTriggerEdge0,
    FL_GPIO_SetTriggerEdge1,
    FL_GPIO_SetTriggerEdge2,
};

/**
  * @}
  */

/** @addtogroup EXTI_FL_EF_Init
  * @{
  */

/**
  * @brief  EXTI通用配置设置
  *
  * @param  EXTI_CommonInitStruct 指向 @ref FL_EXTI_CommonInitTypeDef 类型的结构体，它包含EXTI外设通用配置信息
  *
  * @retval ErrorStatus枚举值
  *         -FL_FAIL 配置过程发生错误
  *         -FL_PASS EXTI配置成功
  */
FL_ErrorStatus FL_EXTI_CommonInit(FL_EXTI_CommonInitTypeDef *EXTI_CommonInitStruct)
{
    assert_param(IS_EXTI_CLK_SOURCE(EXTI_CommonInitStruct->clockSource));
    /* 使能IO时钟寄存器总线时钟 */
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_PAD);
    /* 使能并配置外部中断时钟源 */ 
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI0);
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI1);
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI2);
    FL_RCC_SetEXTIInterruptSamplingClock(EXTI_CommonInitStruct->clockSource);
    return FL_PASS;
}

/**
  * @brief  复位EXTI通用配置设置
  *
  * @retval 执行结果
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_EXTI_CommonDeinit(void)
{
    /* 关闭外部中断时钟源 */
    FL_RCC_DisableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI0);
    FL_RCC_DisableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI1);
    FL_RCC_DisableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_EXTI2);
    return FL_PASS;
}

/**
  * @brief  设置 EXTI_CommonInitStruct 为默认配置
  * @param  EXTI_CommonInitStruct 指向需要将值设置为默认配置的结构体 @ref FL_EXTI_CommonInitTypeDef 结构体
  *
  * @retval None
  */
void FL_EXTI_CommonStructInit(FL_EXTI_CommonInitTypeDef *EXTI_CommonInitStruct)
{
    EXTI_CommonInitStruct->clockSource = FL_RCC_EXTI_SAMPLING_CLK_LSCLK;
}

/**
  * @brief  EXTI配置设置
  *
  * @param  extiLineX 外设入口地址
  * @param  EXTI_InitStruct 指向 @ref FL_EXTI_InitTypeDef 类型的结构体，它包含EXTI外设配置信息
  *
  * @retval ErrorStatus枚举值
  *         -FL_FAIL 配置过程发生错误
  *         -FL_PASS EXTI配置成功
  */
FL_ErrorStatus FL_EXTI_Init(uint32_t extiLineX, FL_EXTI_InitTypeDef *EXTI_InitStruct)
{
    uint32_t i = 0;
    /* 通过内核时钟计算200us延时的计数个数 */
    uint32_t temp = SystemCoreClock / 1000000 * 200 ;
    /* 检查参数合法性 */
    assert_param(IS_EXTI_ALL_INSTANCE(extiLineX));
    assert_param(IS_EXTI_INPUT_GROUP(EXTI_InitStruct->input));
    assert_param(IS_EXTI_TRIG_EDGE(EXTI_InitStruct->triggerEdge));
    /* 设置中断线连接的IO */
    if(extiLineX<16)
        setExtiLineFuncs[extiLineX](GPIO, EXTI_InitStruct->input << (2 * (extiLineX&0x07)));
    else if(extiLineX<20)
        setExtiLineFuncs[extiLineX](GPIO, EXTI_InitStruct->input << ((extiLineX&0x07)));
    else
        setExtiLineFuncs[extiLineX](GPIO, EXTI_InitStruct->input << (2 * (extiLineX&0x07)-4)); 
    /* 设置中断线触发边沿 */
    setTrigEdgeFuncs[extiLineX / 8](GPIO, 1<<(extiLineX&0x07), EXTI_InitStruct->triggerEdge);
    /* 延时需要大于5个32K的周期 */
    for(i = 0; i < temp; i++)
    {
        __NOP();
    }
    /* 清除外部中断标志 */
    if(extiLineX<8)
        FL_GPIO_ClearFlag_EXTI0(GPIO, 1<<(extiLineX));
    else if(extiLineX<16)
        FL_GPIO_ClearFlag_EXTI1(GPIO, 1<<(extiLineX&0x07));
    else if(extiLineX<24)
        FL_GPIO_ClearFlag_EXTI2(GPIO, 1<<(extiLineX&0x07));
    /* 清除中断挂起 */
    NVIC_ClearPendingIRQ(GPIO_IRQn);
    return FL_PASS;
}

/**
  * @brief  复位EXTI配置设置
  *
  * @retval ErrorStatus枚举值
  *         -FL_FAIL 发生错误
  *         -FL_PASS EXTI设置复位成功
  */
FL_ErrorStatus FL_EXTI_DeInit(uint32_t extiLineX)
{
    /* 检查参数合法性 */
    assert_param(IS_EXTI_ALL_INSTANCE(extiLineX));
    /* 清除外部中断标志 */
    if(extiLineX<8)
        FL_GPIO_ClearFlag_EXTI0(GPIO, 1<<(extiLineX));
    else if(extiLineX<16)
        FL_GPIO_ClearFlag_EXTI1(GPIO, 1<<(extiLineX&0x07));
    else if(extiLineX<24)
        FL_GPIO_ClearFlag_EXTI2(GPIO, 1<<(extiLineX&0x07));
    /* 中断线触发边沿禁止 */
    setTrigEdgeFuncs[extiLineX / 8](GPIO, 1<<(extiLineX&0x07), FL_GPIO_EXTI_TRIGGER_EDGE_DISABLE);
    return FL_PASS;
}

/**
  * @brief  设置 EXTI_InitStruct 为默认配置
  * @param  EXTI_InitStruct 指向需要将值设置为默认配置的结构体 @ref FL_EXTI_InitTypeDef 结构体
  *
  * @retval None
  */
void FL_EXTI_StructInit(FL_EXTI_InitTypeDef *EXTI_InitStruct)
{
    EXTI_InitStruct->input = FL_GPIO_EXTI_INPUT_GROUP0;
    EXTI_InitStruct->triggerEdge = FL_GPIO_EXTI_TRIGGER_EDGE_RISING;
}

/**
  * @}
  */

#endif /* FL_EXTI_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
