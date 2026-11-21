/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_adc.c
  * @author  FMSH Application Team
  * @brief   Src file of ADC FL Module
  * @version  V0.0.3
  * @date     23. June 2026
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
#include "fm33l0xxd_fl_adc.h"
#include "fm33l0xxd_fl_rcc.h"
#include "fm33_assert.h"

/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @addtogroup ADC
  * @{
  */

// #ifdef FL_ADC_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup ADC_FL_PM ADC Private Macros
  * @{
  */

#define         IS_FL_ADC_INSTANCE(INSTANCE)                ((INSTANCE) == SARADC)

#define         IS_FL_ADC_ADCCLK_SOURCE(__VALUE__)          (((__VALUE__) == FL_RCC_SARADC_CLK_SOURCE_RCLF)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_CLK_SOURCE_RCHF)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_CLK_SOURCE_XTHF)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_CLK_SOURCE_PLL))


#define         IS_FL_ADC_ADCCLK_PRESCALER(__VALUE__)       (((__VALUE__) == FL_RCC_SARADC_PSC_DIV1)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_PSC_DIV2)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_PSC_DIV4)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_PSC_DIV8)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_PSC_DIV16)||\
                                                            ((__VALUE__) == FL_RCC_SARADC_PSC_DIV32))


#define         IS_FL_ADC_CONTINUOUSCONVMODE(__VALUE__)     (((__VALUE__) == FL_SARADC_CONV_MODE_SINGLE)||\
                                                            ((__VALUE__) == FL_SARADC_CONV_MODE_CONTINUOUS))

#define         IS_FL_ADC_AUTO_MODE(__VALUE__)              (((__VALUE__) == FL_SARADC_SINGLE_CONV_MODE_AUTO)||\
                                                            ((__VALUE__) == FL_SARADC_SINGLE_CONV_MODE_SEMIAUTO))


#define         IS_FL_ADC_SCANDIRECTION(__VALUE__)          (((__VALUE__) == FL_SARADC_SEQ_SCAN_DIR_FORWARD)||\
                                                            ((__VALUE__) == FL_SARADC_SEQ_SCAN_DIR_BACKWARD))


#define         IS_FL_ADC_EXTERNALTRIGCONV(__VALUE__)       (((__VALUE__) == FL_SARADC_TRIGGER_EDGE_NONE)||\
                                                            ((__VALUE__) == FL_SARADC_TRIGGER_EDGE_RISING)||\
                                                            ((__VALUE__) == FL_SARADC_TRIGGER_EDGE_BOTH))||\
                                                            ((__VALUE__) == FL_SARADC_TRIGGER_EDGE_FALLING)

#define         IS_FL_ADC_EXTERNALTRIGSOURCE(__VALUE__)     (((__VALUE__) == FL_SARADC_TRGI_PA8)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_PB9)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_GPTIM0)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_GPTIM1)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_RTC)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_COMP1)||\
                                                            ((__VALUE__) == FL_SARADC_TRGI_COMP2))

#define         IS_FL_ADC_CHANNEL_SAMPLE_TIME(__VALUE__)    (((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_4_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_6_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_8_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_12_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_16_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_24_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_32_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_48_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_96_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_128_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_160_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_192_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_256_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_320_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_384_ADCCLK)||\
                                                            ((__VALUE__) == FL_SARADC_CH_SAMPLING_TIME_512_ADCCLK))


#define         IS_FL_ADC_OVERSAMPCOFIG(__VALUE__)          (((__VALUE__) == FL_DISABLE)||\
                                                            ((__VALUE__) == FL_ENABLE))
                                                            
#define         IS_FL_ADC_WAITMODECOFIG(__VALUE__)          (((__VALUE__) == FL_DISABLE)||\
                                                             ((__VALUE__) == FL_ENABLE))
                                                            

#define         IS_FL_ADC_OVERSAMPINGRATIO(__VALUE__)       (((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_2X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_4X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_8X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_16X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_32X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_64X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_128X)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_MUL_256X))

#define         IS_FL_ADC_OVERSAMPINGSHIFT(__VALUE__)       (((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_0B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_1B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_2B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_3B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_4B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_5B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_6B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_7B)||\
                                                            ((__VALUE__) == FL_SARADC_OVERSAMPLING_SHIFT_8B))

/**
  * @}
  */

/** @addtogroup ADC_FL_EF_Init
  * @{
  */

/**
  * @brief  恢复ADC公用寄存器到复位值
  * @param  None
  * @retval 执行结果
  *         -FL_PASS ADC公用寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_ADC_CommonDeInit(void)
{
    /* 关闭总线时钟 */
    FL_RCC_DisableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_ADC);
    return FL_PASS;
}
/**
  * @brief  配置ADC公用寄存器
  * @param  ADC_CommonInitStruct 指向 @ref FL_ADC_CommonInitTypeDef 的结构体，它包含ADC公用寄存器的配置信息
  * @retval 执行结果
  *         -FL_FAIL 配置过程发生错误
  *         -FL_PASS ADC公用寄存器配置成功
  */
FL_ErrorStatus FL_ADC_CommonInit(FL_ADC_CommonInitTypeDef *ADC_CommonInitStruct)
{
    FL_ErrorStatus status = FL_PASS;
    /* 入口参数检查 */
    assert_param(IS_FL_ADC_ADCCLK_PRESCALER(ADC_CommonInitStruct->clockPrescaler));
    assert_param(IS_FL_ADC_ADCCLK_SOURCE(ADC_CommonInitStruct->clockSource));
    
    /* 开启总线时钟 */
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_ANAC);
    FL_RCC_EnableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_SARADC);
    /* 开启工作时钟 */
    FL_RCC_SARADC_Enable();
    /* 配置ADCCLOCK时钟预分频 */
    FL_RCC_SetSARADCPrescaler(ADC_CommonInitStruct->clockPrescaler);
    /* 配置ADCCLOCK时钟模块时钟源 */
    FL_RCC_SetSARADCClockSource(ADC_CommonInitStruct->clockSource);   

    return status;
}
/**
  * @brief  初始化 @ref FL_ADC_CommonInitTypeDef 配置结构体
  * @param  ADC_CommonInitStruct 指向需要初始化的 @ref FL_ADC_CommonInitTypeDef 结构体
  * @retval None
  */
void FL_ADC_CommonStructInit(FL_ADC_CommonInitTypeDef *ADC_CommonInitStruct)
{
    /*默认使用RCHF作为ADC时钟模块时钟源，预分频系数16*/
    ADC_CommonInitStruct->clockSource           = FL_RCC_SARADC_CLK_SOURCE_RCHF;
    ADC_CommonInitStruct->clockPrescaler        = FL_RCC_SARADC_PSC_DIV8;
}
/**
  * @brief  恢复ADC外设寄存器到复位值
  * @param  ADCx  外设入口地址
  * @retval 执行结果
  *         -FL_PASS ADC外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_ADC_DeInit(SARADC_Type *ADCx)
{
    FL_ErrorStatus status = FL_PASS;
    /* 入口合法性检查 */
    assert_param(IS_FL_ADC_INSTANCE(ADCx));
    /* 外设复位使能 */
    FL_RMU_EnablePeripheralReset(RMU);
    FL_RMU_EnableResetAPBPeripheral3(RMU, FL_RMU_SADCRST);
    FL_RMU_DisableResetAPBPeripheral3(RMU, FL_RMU_SADCRST);
    FL_RMU_DisablePeripheralReset(RMU);
    return status;
}

/**
  * @brief  配置指定的ADC外设
  * @note   用户必须检查此函数的返回值，以确保自校准完成，否则转换结果精度无法保证，除此之外ADC使能过采样实际不会增加ADC的
  *         转换精度只会提高转换结果的稳定性（同时配置移位寄存器的情况下），同时过采样会降低转换速度。
  * @param  ADCx  外设入口地址
  * @param  ADC_InitStruct 指向 @ref FL_ADC_InitTypeDef 的结构体，它包含ADC外设寄存器的配置信息
  * @retval 执行结果
  *         -FL_FAIL 配置过程发生错误
  *         -FL_PASS ADC外设寄存器配置成功
  */
FL_ErrorStatus FL_ADC_Init(SARADC_Type *ADCx, FL_ADC_InitTypeDef  *ADC_InitStruct)
{
    FL_ErrorStatus status = FL_PASS;
    // uint32_t i = 0;
    /* 入口合法性检查 */
    assert_param(IS_FL_ADC_INSTANCE(ADCx));
    assert_param(IS_FL_ADC_CONTINUOUSCONVMODE(ADC_InitStruct->conversionMode));
    assert_param(IS_FL_ADC_AUTO_MODE(ADC_InitStruct->autoMode));
    assert_param(IS_FL_ADC_SCANDIRECTION(ADC_InitStruct->scanDirection));
    assert_param(IS_FL_ADC_EXTERNALTRIGCONV(ADC_InitStruct->externalTrigConv));
    assert_param(IS_FL_ADC_CHANNEL_SAMPLE_TIME(ADC_InitStruct->channelSampleTime));
    assert_param(IS_FL_ADC_WAITMODECOFIG(ADC_InitStruct->waitMode));
    assert_param(IS_FL_ADC_OVERSAMPCOFIG(ADC_InitStruct->oversamplingMode));
    assert_param(IS_FL_ADC_OVERSAMPINGRATIO(ADC_InitStruct->overSampingMultiplier));
    assert_param(IS_FL_ADC_OVERSAMPINGSHIFT(ADC_InitStruct->oversamplingShift));
    
    /* 使能ADC工作时钟 */
    /* 模拟外设工作时钟使能 */
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_ANAC);
    FL_RCC_EnableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_SARADC);
     /* 开启工作时钟 */
    FL_RCC_SARADC_Enable();
    FL_ADC_Disable(SARADC);
    if(FL_ADC_IsEnabled(SARADC) == 0U)
    {
        /* 连续转换模式 */
        FL_ADC_SetConversionMode(ADCx, ADC_InitStruct->conversionMode);
        /* 自动转换模式 */
        FL_ADC_SetSingleConversionAutoMode(ADCx, ADC_InitStruct->autoMode);
        /* 多通道扫描方向 */
        FL_ADC_SetSequenceScanDirection(ADCx, ADC_InitStruct->scanDirection);
        /* 外部硬件触发ADC模式 */
        FL_ADC_SetTriggerEdge(ADCx, ADC_InitStruct->externalTrigConv);
        /* 外部硬件触发源选择 */
        FL_ADC_SetTriggerSource(ADCx, ADC_InitStruct->triggerSource);
        /* 通道采样时间设置 */
        FL_ADC_SetChannelSamplingTime(ADCx, ADC_InitStruct->channelSampleTime);
        
         /* 通道等待使能 */
        if(ADC_InitStruct->waitMode == FL_ENABLE)
        {
            FL_ADC_EnableWaitMode(SARADC);
        }
        else
        {
            FL_ADC_DisableWaitMode(SARADC);
        } 
        /*数据冲突模式设置*/
        if(ADC_InitStruct->overrunMode == FL_ENABLE)
        {
            FL_ADC_EnableOverrunMode(SARADC);
        }
        else
        {
            FL_ADC_DisableOverrunMode(SARADC);
        }
        if(ADC_InitStruct->oversamplingMode == FL_ENABLE)
        {
            /*使能过采样倍数后，需要配置移位寄存器进行移位，这一过程是硬件自动完成的最终最大
            可输出16位的结果值（即256被采样得到的结果是20bit的，右移8bit结果就是12bit的）*/
            FL_ADC_SetOverSamplingMultiplier(SARADC, ADC_InitStruct->overSampingMultiplier);
            FL_ADC_SetOverSamplingShift(SARADC, ADC_InitStruct->oversamplingShift);
            /* 过采样使能 */
            FL_ADC_EnableOverSampling(SARADC); 
        }
        else
        {
            FL_ADC_SetOverSamplingMultiplier(SARADC, ADC_InitStruct->overSampingMultiplier);
            FL_ADC_SetOverSamplingShift(SARADC, ADC_InitStruct->oversamplingShift);
            /* 关闭过采样 */
            FL_ADC_DisableOverSampling(SARADC); 
        }   
    }
    else
    {
        status = FL_FAIL;
    }
    return status;
}
/**
  * @brief  初始化 @ref FL_ADC_InitTypeDef 配置结构体
  * @param  ADC_InitStruct 指向需要初始化的 @ref FL_ADC_InitTypeDef 结构体
  * @retval None
  */
void FL_ADC_StructInit(FL_ADC_InitTypeDef *ADC_InitStruct)
{
    ADC_InitStruct->conversionMode        = FL_SARADC_CONV_MODE_SINGLE;
    ADC_InitStruct->autoMode              = FL_SARADC_SINGLE_CONV_MODE_AUTO;
    ADC_InitStruct->scanDirection         = FL_SARADC_SEQ_SCAN_DIR_FORWARD;
    ADC_InitStruct->externalTrigConv      = FL_SARADC_TRIGGER_EDGE_NONE;
    ADC_InitStruct->triggerSource         = FL_SARADC_TRGI_PA8;
    ADC_InitStruct->channelSampleTime     = FL_SARADC_CH_SAMPLING_TIME_192_ADCCLK;
    ADC_InitStruct->overrunMode           = FL_ENABLE;
    ADC_InitStruct->waitMode              = FL_DISABLE;
    ADC_InitStruct->oversamplingMode      = FL_ENABLE;
    ADC_InitStruct->overSampingMultiplier = FL_SARADC_OVERSAMPLING_MUL_16X;
    ADC_InitStruct->oversamplingShift     = FL_SARADC_OVERSAMPLING_SHIFT_4B;
}

/**
  * @}
  */

// #endif /* FL_ADC_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
