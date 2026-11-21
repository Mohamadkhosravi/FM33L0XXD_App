/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_rng.c
  * @author  FMSH Application Team
  * @brief   Src file of RNG FL Module
  * @version  V0.0.1
  * @date     29. January 2026
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


/* Includes ------------------------------------------------------------------*/
#include "fm33l0xxd_fl.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @addtogroup RNG
  * @{
  */

#ifdef FL_RNG_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup RNG_FL_Private_Macros
* @{
*/
#define         IS_FL_RNG_INSTANCE(INTANCE)                         ((INTANCE) == RNG)

#define         IS_FL_RNG_CLOCK_PRESCALER(__VALUE__)               (((__VALUE__) == FL_RCC_RNG_PSC_DIV1)||\
                                                                     ((__VALUE__) == FL_RCC_RNG_PSC_DIV2)||\
                                                                     ((__VALUE__) == FL_RCC_RNG_PSC_DIV4)||\
                                                                     ((__VALUE__) == FL_RCC_RNG_PSC_DIV8)||\
                                                                     ((__VALUE__) == FL_RCC_RNG_PSC_DIV16)||\
                                                                     ((__VALUE__) == FL_RCC_RNG_PSC_DIV32))
/**
  *@}
  */

/** @addtogroup RNG_FL_EF_Init
  * @{
  */

/**
  * @brief  复位RNG
  *
  * @param  RNGx 外设入口地址
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_RNG_DeInit(RNG_Type *RNGx)
{
    assert_param(IS_FL_RNG_INSTANCE(RNGx));
    /* 使能外设复位 */
    FL_RMU_EnablePeripheralReset(RMU);
    /* 复位外设寄存器 */
    FL_RMU_EnableResetAPBPeripheral2(RMU,FL_RMU_RNGRST);
    FL_RMU_DisableResetAPBPeripheral2(RMU,FL_RMU_RNGRST);
    /* 关闭外设总线始时钟和工作时钟 */
    FL_RCC_DisableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_RNG);
    /* 锁定外设复位 */
    FL_RMU_DisablePeripheralReset(RMU);
    return FL_PASS;
}

/**
  * @brief  配置RNG
  *
  * @param  RNGx 外设入口地址
  * @param  initStruct 指向 @ref FL_RNG_InitTypeDef 结构体的指针
  *
  * @note   RNG使用RCHF默认的8M作为时钟输入，经2分频后4M提供给RNG
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_RNG_Init(RNG_Type *RNGx)
{
    assert_param(IS_FL_RNG_INSTANCE(RNGx));
    /* RNG 使用RCHF作为工作时钟因此必须确认RCHF使能*/
    if(FL_RCC_RCHF_IsEnabled() != FL_SET)
    {
        FL_RCC_RCHF_Enable();
    }
    FL_RCC_EnableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_RNG);
    return FL_PASS;
}

/**
  * @brief  获取一次随机数
  *
  * @note   如果返回值为0xFFFFFFFF 则说明随机数生成失败，请用户检查此函数的返回值，失败时重新生成
  *
  * @retval 生成的随机数，生成失败返回0xFFFFFFFF
  *
  */
uint32_t GetRandomNumber(void)
{
    uint32_t rn32;
    FL_RNG_ClearFlag_RandomFail(RNG);
    FL_RNG_Enable(RNGCTL);
    /* 由于LFSR循环移位周期是32cycle，为保证随机数质量，应用应保证两次读取RNGOUT之间的间隔大于32个TRNG_CLK周期 */
    FL_DelayUs(12);
    FL_RNG_Disable(RNGCTL);
    rn32 = FL_RNG_ReadData(RNG);
    if(FL_RNG_IsActiveFlag_RandomFail(RNG))
    {
        FL_RNG_ClearFlag_RandomFail(RNG);
        return 0xFFFFFFFF;
    }
    return rn32;
}

/**
  * @brief  获取CRC32
  *
  * @param  dataIn 待计算的数据
  *
  * @retval 计算得到的CRC32，计算失败返回0xFFFFFFFF
  *
  */
uint32_t GetCrc32(uint32_t dataIn)
{
    uint32_t i = 0;
    uint32_t crc32 = 0;
    FL_RNG_CRC_WriteData(RNG, dataIn);
    FL_RNG_ClearFlag_CRCComplete(RNG);
    FL_RNG_CRC_Enable(RNG);
    while(0 == FL_RNG_IsActiveFlag_CRCComplete(RNG))
    {
        i++;
        if(i > 600)
        { break; }
    }
    if(i >= 600)
    {
        FL_RNG_ClearFlag_CRCComplete(RNG);
        FL_RNG_Disable(RNGCTL);
        return 0xFFFFFFFF;
    }
    FL_RNG_ClearFlag_CRCComplete(RNG);
    crc32 = FL_RNG_ReadData(RNG);
    FL_RNG_Disable(RNGCTL);
    return crc32;
}

/**
  * @}
  */

#endif /* FL_RNG_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
