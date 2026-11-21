/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_dma.c
  * @author  FMSH Application Team
  * @brief   Src file of DMA FL Module
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

/** @addtogroup DMA
  * @{
  */

#ifdef FL_DMA_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup DMA_FL_Private_Macros
  * @{
  */

#define         IS_FL_DMA_INSTANCE(INTANCE)                         ((INTANCE) == DMA)

#define         IS_FL_DMA_PRIORITY(__VALUE__)                       (((__VALUE__) == FL_DMA_PRIORITY_LOW)||\
                                                                     ((__VALUE__) == FL_DMA_PRIORITY_MEDIUM)||\
                                                                     ((__VALUE__) == FL_DMA_PRIORITY_HIGH)||\
                                                                     ((__VALUE__) == FL_DMA_PRIORITY_VERYHIGH))

#define         IS_FL_DMA_DIRECION(__VALUE__)                       (((__VALUE__) == FL_DMA_DIR_FLASH_TO_RAM)||\
                                                                     ((__VALUE__) == FL_DMA_DIR_RAM_TO_FLASH))

#define         IS_FL_DMA_MEMORY_INCMODE(__VALUE__)                (((__VALUE__) == FL_DMA_MEMORY_INC_MODE_INCREASE)||\
                                                                    ((__VALUE__) == FL_DMA_MEMORY_INC_MODE_DECREASE))
                                                                    																													
#define         IS_FL_DMA_CH7FLASH_INCMODE(__VALUE__)               (((__VALUE__) == FL_DMA_CH7FI_MODE_INCREASE)||\
                                                                    ((__VALUE__) == FL_DMA_CH7FI_MODE_DECREASE))

#define         IS_FL_DMA_CH7RAM_INCMODE(__VALUE__)                 (((__VALUE__) == FL_DMA_CH7RI_MODE_INCREASE)||\
                                                                    ((__VALUE__) == FL_DMA_CH7RI_MODE_DECREASE))

#define         IS_FL_DMA_PERIPH(__VALUE__)                        (((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION1)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION2)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION3)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION4)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION5)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION6)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION7)||\
                                                                    ((__VALUE__) == FL_DMA_PERIPHERAL_FUNCTION8))
																																		
#define         IS_FL_DMA_CHANNEL(__VALUE__)               			(((__VALUE__) == FL_DMA_CHANNEL_0)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_1)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_2)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_3)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_4)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_5)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_6)||\
                                                                    ((__VALUE__) == FL_DMA_CHANNEL_7))








/**
  * @}
  */

/* Private consts ------------------------------------------------------------*/
/** @addtogroup DMA_FL_Private_Consts
  * @{
  */



/**
  * @}
  */

/* Private function prototypes -----------------------------------------------*/



/* Exported functions --------------------------------------------------------*/
/** @addtogroup DMA_FL_EF_Init
  * @{
  */

/**
  * @brief  复位对应DMA寄存器.
  * @param  DMAx
  * @retval ErrorStatus枚举值:
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_DMA_DeInit(DMA_Type *DMAx)
{
    assert_param(IS_FL_DMA_INSTANCE(DMAx));
    /* 使能外设复位 */
    FL_RMU_EnablePeripheralReset(RMU);
    /* 复位外设寄存器 */
    FL_RMU_EnableResetAHBPeripheral(RMU, FL_RMU_RSTAHB_DMA);
    FL_RMU_DisableResetAHBPeripheral(RMU, FL_RMU_RSTAHB_DMA);
    /* 关闭外设总线始时钟和工作时钟 */
    FL_RCC_DisableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_DMA);
    /* 锁定外设复位 */
    FL_RMU_DisablePeripheralReset(RMU);
    return FL_PASS;
}
/**
  * @brief  根据 DMA_InitStruct 的配置信息初始化对应外设入口地址的寄存器值.
  * @param  DMAx DMAx
  * @param  DMA_InitStruct 指向一个 @ref FL_DMA_InitTypeDef 结构体
  *         其中包含了外设的相关配置信息.
  * @param  Channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval ErrorStatus枚举值
  *         -FL_FAIL 配置过程发生错误
  *         -FL_PASS 配置成功
  */
FL_ErrorStatus FL_DMA_Init(DMA_Type *DMAx, FL_DMA_InitTypeDef *initStruct, uint32_t channel)
{
    FL_ErrorStatus status = FL_FAIL;
    if(initStruct != NULL)
    {
        /* 参数检查 */
        assert_param(IS_FL_DMA_INSTANCE(DMAx));
        assert_param(IS_FL_DMA_PRIORITY(initStruct->priority));
	    assert_param(IS_FL_DMA_CHANNEL(channel));
        /* 开启时钟 */
        FL_RCC_EnableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_DMA);
        /*通道7不同，需要特殊处理*/
        if(channel==FL_DMA_CHANNEL_7)
        {
            assert_param(IS_FL_DMA_DIRECION(initStruct->direction));
            assert_param(IS_FL_DMA_CH7FLASH_INCMODE(initStruct->flashAddressIncMode));
            assert_param(IS_FL_DMA_CH7RAM_INCMODE(initStruct->memoryAddressIncMode));
            /*设置通道7RAM方向,FLASH方向、传输方向*/
            FL_DMA_SetMemoryIncrementMode(DMAx,initStruct->memoryAddressIncMode,channel);
            FL_DMA_SetChannel7TransmissionDirection(DMAx,initStruct->direction);
            FL_DMA_SetChannel7FlashIncrementMode(DMAx,initStruct->flashAddressIncMode);
        }
        else
        {
            assert_param(IS_FL_DMA_MEMORY_INCMODE(initStruct->memoryAddressIncMode));
            FL_DMA_SetMemoryIncrementMode(DMAx,initStruct->memoryAddressIncMode,channel);
            assert_param(IS_FL_DMA_PERIPH(initStruct->periphAddress));
            FL_DMA_SetPeripheralMap(DMAx, initStruct->periphAddress, channel);

		}
        /* 配置通道优先级 */
        FL_DMA_SetPriority(DMAx, initStruct->priority, channel);
        status = FL_PASS;
    }
    return status;
}
/**
  * @brief  设置 CRC_InitStruct 为默认配置
  * @param  CRC_InitStruct 指向需要将值设置为默认配置的结构体 @ref FL_CRC_InitTypeDef 结构体
  *
  * @retval None
  */

void FL_DMA_StructInit(FL_DMA_InitTypeDef *initStruct)
{
    if(initStruct != NULL)
    {
		initStruct->flashAddressIncMode     = FL_DMA_CH7FI_MODE_INCREASE;
		initStruct->direction			    = FL_DMA_DIR_RAM_TO_FLASH;
        initStruct->periphAddress           = FL_DMA_PERIPHERAL_FUNCTION1;
        initStruct->priority                = FL_DMA_PRIORITY_LOW;
        initStruct->memoryAddressIncMode    = FL_DMA_MEMORY_INC_MODE_INCREASE;
    }
}

/**
  * @brief  启动一次DMA传输.
  * @param  DMAx DMAx
  * @param  configStruct 指向一个 @ref FL_DMA_ConfigTypeDef 结构体
  *         其中包含了外设的相关配置信息.
  * @param  Channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval ErrorStatus枚举值
  *         -FL_FAIL 过程发生错误可能是超时也可能是地址非法
  *         -FL_PASS 成功
  */
FL_ErrorStatus FL_DMA_StartTransmission(DMA_Type *DMAx, FL_DMA_ConfigTypeDef *configStruct, uint32_t channel)
{
    FL_ErrorStatus status = FL_FAIL;
    assert_param(IS_FL_DMA_INSTANCE(DMAx));
    if(configStruct != NULL)
    {
        /* 配置传输个数 */
        FL_DMA_WriteTransmissionSize(DMAx, configStruct->transmissionCount, channel);
        /* 配置Memory地址 */
        FL_DMA_WriteMemoryAddress(DMAx, configStruct->memoryAddress, channel);
        /* 清除通道中断标志位 */
        FL_DMA_ClearFlag_TransferHalfComplete(DMAx, channel);
        FL_DMA_ClearFlag_TransferComplete(DMAx, channel);
        /* 使能DMA通道使能开关 */
        FL_DMA_EnableChannel(DMAx, channel);
        status = FL_PASS;
    }
    return status;
}

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup DMA_FL_Private_Functions DMA Private Functions
  * @{
  */



/**
  * @}
  */

#endif /* FL_DMA_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
