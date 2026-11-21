/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_rcc.c
  * @author  FMSH Application Team
  * @brief   Src file of RCC FL Module
  * @version  V0.0.1
  * @date     29. January 2026
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

/** @addtogroup RCC
  * @{
  */

#ifdef FL_RCC_DRIVER_ENABLED

/** @addtogroup RCC_FL_EF_Operation
  * @{
  */


/**
  * @brief  获取系统当前工作时钟SYSCLK
  *
  * @note   函数中用到了 @ref XTHF_VALUE 宏，这个宏应该被定义为外部晶振的输入频率值
  *
  * @retval 系统时钟频率(Hz)
  *
  */
uint32_t FL_RCC_GetSystemClockFreq(void)
{
    uint32_t frequency = 0;
    /* 获取系统时钟源 */
    switch(FL_RCC_GetSystemClockSource())
    {
        /* 系统时钟源为内部RCHF */
        case FL_RCC_SYSTEM_CLK_SOURCE_RCHF:
            /* 内部RCHF默认为8MHz ,可以配置为16或24M或者32*/
            frequency = FL_RCC_GetRCHFClockFreq();
            break;
        /* 系统时钟源为XTHF */
        case FL_RCC_SYSTEM_CLK_SOURCE_XTHF:
            frequency = XTHFClock;
            break;
				/* 系统时钟源为RCLF */
        case FL_RCC_SYSTEM_CLK_SOURCE_RCLF:
            frequency = 512000;
            break;
				/* 系统时钟源为LSCLK  */
        case FL_RCC_SYSTEM_CLK_SOURCE_LSCLK:
							frequency = 32768;
            break;
        /* 系统时钟源为PLL */
        case FL_RCC_SYSTEM_CLK_SOURCE_PLL:
            frequency = FL_RCC_GetPLLClockFreq();
            break;
        default:
            frequency = FL_RCC_GetRCHFClockFreq();
            break;
    }
    return frequency;
}
/**
  * @brief  获取AHB总线时钟频率
  *
  * @retval AHB总线时钟频率(Hz)
  *
  */
uint32_t FL_RCC_GetAHBClockFreq(void)
{
    uint32_t frequency = 0;
    /* 获取AHB分频系数，AHB源自系统主时钟 */
    switch(FL_RCC_GetAHBPrescaler())
    {
        case FL_RCC_AHBCLK_PSC_DIV1:
            frequency = FL_RCC_GetSystemClockFreq();
            break;
        case FL_RCC_AHBCLK_PSC_DIV2:
            frequency = FL_RCC_GetSystemClockFreq() / 2;
            break;
        case FL_RCC_AHBCLK_PSC_DIV4:
            frequency = FL_RCC_GetSystemClockFreq() / 4;
            break;
        case FL_RCC_AHBCLK_PSC_DIV8:
            frequency = FL_RCC_GetSystemClockFreq() / 8;
            break;
        case FL_RCC_AHBCLK_PSC_DIV16:
            frequency = FL_RCC_GetSystemClockFreq() / 16;
            break;
        default:
            frequency = FL_RCC_GetSystemClockFreq();
            break;
    }
    return frequency;
}

/**
  * @brief  获取当前系统的APB总线时钟
  *
  * @retval APB1总线时钟频率(Hz)
  *
  */
uint32_t FL_RCC_GetAPBClockFreq(void)
{
    uint32_t frequency = 0;
    /* 获取APB1分频系数，APB源自AHB */
    switch(FL_RCC_GetAPBPrescaler())
    {
        case FL_RCC_APBPRES_PSC_DIV1:
            frequency = FL_RCC_GetAHBClockFreq();
            break;
        case FL_RCC_APBPRES_PSC_DIV2:
            frequency = FL_RCC_GetAHBClockFreq() / 2;
            break;
        case FL_RCC_APBPRES_PSC_DIV4:
            frequency = FL_RCC_GetAHBClockFreq() / 4;
            break;
        case FL_RCC_APBPRES_PSC_DIV8:
            frequency = FL_RCC_GetAHBClockFreq() / 8;
            break;
        case FL_RCC_APBPRES_PSC_DIV16:
            frequency = FL_RCC_GetAHBClockFreq() / 16;
            break;
        default:
            frequency = FL_RCC_GetAHBClockFreq();
            break;
    }
    return frequency;
}
/**
  * @brief  获取RCHF输出时钟频率
  *
  * @retval 返回RCHF输出时钟频率(Hz)
  *
  */
uint32_t FL_RCC_GetRCHFClockFreq(void)
{
    uint32_t frequency = 0;
    switch(FL_RCC_RCHF_GetFrequency())
    {
        case FL_RCC_RCHF_FREQUENCY_8MHZ:
            frequency = 8000000;
            break;
        case FL_RCC_RCHF_FREQUENCY_16MHZ:
            frequency = 16000000;
            break;
        case FL_RCC_RCHF_FREQUENCY_24MHZ:
            frequency = 24000000;
            break;
        case FL_RCC_RCHF_FREQUENCY_32MHZ:
            frequency = 32000000;
            break;            
        default:
            frequency = 8000000;
            break;
    }
    return frequency;
}
/**
  * @brief  获取PLL输出时钟频率
  *
  * @retval 返回PLL输出时钟频率(Hz)
  *
  */
uint32_t FL_RCC_GetPLLClockFreq(void)
{
    uint32_t frequency = 0;
    uint32_t multiplier = 0;
    /* 获取PLL时钟源 */
    switch(FL_RCC_GetPLLInputSource()) 
    {
        case FL_RCC_PLL_INPUT_SOURCE_RCHF_DIV256:
            /* 获取RCHF配置主频 */
            frequency = FL_RCC_GetRCHFClockFreq()/256;
            break;
        case FL_RCC_PLL_INPUT_SOURCE_XTLF:
            frequency = 32768;
            break;
        case FL_RCC_PLL_INPUT_SOURCE_RCLP:
            frequency = 32768;
            break;
        default:
            frequency = FL_RCC_GetRCHFClockFreq()/256;
            break;
    }
    multiplier = FL_RCC_PLL_ReadMultiplier() + 1; 
    frequency *= multiplier;
    return	(FL_RCC_GetPLLOutput()==FL_RCC_PLL_OUT_PLLx2) ? (2*frequency) : frequency;
}

/**
  * @}
  */

#endif /* FL_RCC_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
