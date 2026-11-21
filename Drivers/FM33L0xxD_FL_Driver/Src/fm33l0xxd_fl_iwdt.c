/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_iwdt.c
  * @author  FMSH Application Team
  * @brief   Src file of IWDT FL Module
  * @version  V0.0.2
  * @date     18. March 2026
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

/** @addtogroup IWDT
  * @{
  */
#define FL_IWDT_DRIVER_ENABLED
#ifdef FL_IWDT_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup IWDT_FL_Private_Macros
  * @{
  */
#define         IS_IWDT_INSTANCE(INTANCE)                    ((INTANCE) == IWDT)

#define         IS_FL_IWDT_WINDOWSVEL(__VALUE__)                ((__VALUE__) < 0xFFF)

#define         IS_FL_IWDT_OVERFLOWPERIOD(__VALUE__)            (((__VALUE__) == FL_IWDT_PERIOD_125MS)||\
                                                                 ((__VALUE__) == FL_IWDT_PERIOD_500MS)||\
                                                                 ((__VALUE__) == FL_IWDT_PERIOD_2000MS)||\
                                                                 ((__VALUE__) == FL_IWDT_PERIOD_8000MS))

/**
  * @}
  */

/** @addtogroup IWDT_FL_EF_Init
  * @{
  */

/**
  * @brief  复位IWDT外设
  *
  * @note   此函数只能用于配制前复位外设，因为IWDT开启后不可以关闭
  *
  * @param  IWDTx 外设入口地址
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_IWDT_DeInit(IWDT_Type *IWDTx)
{
    assert_param(IS_IWDT_INSTANCE(IWDTx));
    return FL_PASS;
}

/**
  * @brief  配置IWDT
  *
  * @note   IWTD使能后将无法关闭，直到下一次芯片复位
  *
  * @param  IWDTx  外设入口地址
  * @param  IWDT_InitStruct 指向 @ref FL_IWDT_InitTypeDef 结构体的指针
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_IWDT_Init(IWDT_Type *IWDTx, FL_IWDT_InitTypeDef *IWDT_InitStruct)
{
    FL_ErrorStatus status = FL_PASS;
    /* 入口参数检查 */
    assert_param(IS_IWDT_INSTANCE(IWDTx));
    assert_param(IS_FL_IWDT_WINDOWSVEL(IWDT_InitStruct->iwdtWindows));
    assert_param(IS_FL_IWDT_OVERFLOWPERIOD(IWDT_InitStruct->overflowPeriod));
    /* 开启总线时钟 */
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_IWDT);
    /* 启动看门狗 */
    FL_IWDT_ReloadCounter(IWDTx);
    /* 配置独立看门狗溢出周期 */
    FL_IWDT_SetPeriod(IWDTx, IWDT_InitStruct->overflowPeriod);
    return status;
}

/**
  * @brief  将 @ref FL_IWDT_InitTypeDef 结构体初始化为默认配置
  * @param  IWDT_InitStruct 指向 @ref FL_IWDT_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_IWDT_StructInit(FL_IWDT_InitTypeDef *IWDT_InitStruct)
{
    /* 默认不使用窗口 */
    IWDT_InitStruct->iwdtWindows    = 0;
    /*最长溢出时间*/
    IWDT_InitStruct->overflowPeriod = FL_IWDT_PERIOD_500MS;
}

void IWDT_Clr(void)
{
    IWDT->IWDTSERV = FL_IWDT_RELOAD_KEY;
}

void FL_IWDT_EnableSleep4096S(void)
{
    IWDT->IWDTCFG |=0x04;
}

void FL_IWDT_DisableSleep4096S(void)
{
    IWDT->IWDTCFG &= (~0x04);
}
/**
  * @}
  */

#endif /* FL_IWDT_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
