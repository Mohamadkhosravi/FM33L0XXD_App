/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_spi.c
  * @author  FMSH Application Team
  * @brief   Src file of SPI FL Module
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

/** @addtogroup SPI
  * @{
  */

// #ifdef FL_SPI_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup Private_Macros
  * @{
  */
#define         IS_FL_SPI_INSTANCE(INTANCE)                     (((INTANCE) == SPI0)||\
                                                                 ((INTANCE) == SPI1)||\
                                                                 ((INTANCE) == SPI2))

#define         IS_FL_SPI_MODE(__VALUE__)                       (((__VALUE__) == FL_SPI_WORK_MODE_SLAVE)||\
                                                                 ((__VALUE__) == FL_SPI_WORK_MODE_MASTER))

#define         IS_FL_SPI_BITORDER(__VALUE__)                   (((__VALUE__) == FL_SPI_BIT_ORDER_MSB_FIRST)||\
                                                                 ((__VALUE__) == FL_SPI_BIT_ORDER_LSB_FIRST))

#define         IS_FL_SPI_DATAWIDT(__VALUE__)                   (((__VALUE__) == FL_SPI_DATA_WIDTH_8B)||\
                                                                 ((__VALUE__) == FL_SPI_DATA_WIDTH_16B)||\
                                                                 ((__VALUE__) == FL_SPI_DATA_WIDTH_24B)||\
                                                                 ((__VALUE__) == FL_SPI_DATA_WIDTH_32B))

#define         IS_FL_SPI_CLOCK_PHASE(__VALUE__)                (((__VALUE__) == FL_SPI_PHASE_EDGE1)||\
                                                                 ((__VALUE__) == FL_SPI_PHASE_EDGE2))

#define         IS_FL_SPI_CLOCK_POLARITY(__VALUE__)             (((__VALUE__) == FL_SPI_POLARITY_NORMAL)||\
                                                                 ((__VALUE__) == FL_SPI_POLARITY_INVERT))

#define         IS_FL_SPI_BAUDRATE(__VALUE__)                   (((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV2)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV4)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV4_SPI12DIV8)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV8_SPI12DIV16)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV16_SPI12DIV32)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV32_SPI12DIV64)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV64_SPI12DIV128)||\
                                                                 ((__VALUE__) == FL_SPI_BAUDRATE_SPI0DIV128_SPI12DIV256))

#define         IS_FL_SPI_TANSFERMODE(__VALUE__)                (((__VALUE__) == FL_SPI_TRANSFER_MODE_FULL_DUPLEX)||\
                                                                 ((__VALUE__) == FL_SPI_TRANSFER_MODE_HALF_DUPLEX))


/**
  * @}
  */

/** @addtogroup SPI_FL_EF_Init
  * @{
  */

/**
  * @brief  复位SPI
  * @param  SPIx 外设入口地址
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_SPI_DeInit(SPI_Type *SPIx)
{
     assert_param(IS_FL_SPI_INSTANCE(SPIx));

    /* 使能外设复位 */
    FL_RMU_EnablePeripheralReset(RMU);
    if(SPIx == SPI0)
    {
        /* 复位SPI外设寄存器 */
        FL_RMU_EnableResetAPBPeripheral1(RMU, FL_RMU_SPI0RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU, FL_RMU_SPI0RST);
        /* 关闭外设总线时钟和工作时钟 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI0);
    }
    else if(SPIx == SPI1)
    {
        /* 复位SPI外设寄存器 */
        FL_RMU_EnableResetAPBPeripheral1(RMU, FL_RMU_SPI1RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU, FL_RMU_SPI1RST);
        /* 关闭外设总线时钟和工作时钟 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI1);
    }
    else if(SPIx == SPI2)
    {
        /* 复位SPI外设寄存器 */
        FL_RMU_EnableResetAPBPeripheral1(RMU, FL_RMU_SPI2RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU, FL_RMU_SPI2RST);
        /* 关闭外设总线时钟和工作时钟 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI2);
    }
    else
    {
        FL_RMU_DisablePeripheralReset(RMU);
        return FL_FAIL;
    }
    /* 锁定外设复位 */
    FL_RMU_DisablePeripheralReset(RMU);
    return FL_PASS;
}

/**
  * @brief  配置SPI
  * @param  SPIx 外设入口地址
  * @param  initStruct 指向 @ref FL_SPI_InitTypeDef 结构体的指针
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_SPI_Init(SPI_Type *SPIx, FL_SPI_InitTypeDef *initStruct)
{
    assert_param(IS_FL_SPI_INSTANCE(SPIx));
    assert_param(IS_FL_SPI_MODE(initStruct->mode));
    assert_param(IS_FL_SPI_BITORDER(initStruct->bitOrder));
    assert_param(IS_FL_SPI_BAUDRATE(initStruct->baudRate));
    assert_param(IS_FL_SPI_CLOCK_PHASE(initStruct->clockPhase));
    assert_param(IS_FL_SPI_CLOCK_POLARITY(initStruct->clockPolarity));
    if(SPIx == SPI0)
    {
        /* 外设总线时钟 */
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI0);
    }
    else if(SPIx == SPI1)
    {
        /* 外设总线时钟 */
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI1);
    }
    else if(SPIx == SPI2)
    {
        /* 外设总线时钟 */
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_SPI2);
    }
    else
    {
        return FL_FAIL;
    }
    /* 选择NSS脚控制模式 */
    if(initStruct->softControl == FL_ENABLE)
    {
        FL_SPI_EnableSSNSoftControl(SPIx);
    }
    else
    {
        FL_SPI_DisableSSNSoftControl(SPIx);
    }
    /* 外设工作主从模式 */
    FL_SPI_SetWorkMode(SPIx, initStruct->mode);
    /* 总线通讯速率 */
    FL_SPI_SetClockDivision(SPIx, initStruct->baudRate);
    /* 数据bit方向 */
    FL_SPI_SetBitOrder(SPIx, initStruct->bitOrder);
    /* 时钟相位 */
    FL_SPI_SetClockPhase(SPIx, initStruct->clockPhase);
    /* 时钟极性 */
    FL_SPI_SetClockPolarity(SPIx, initStruct->clockPolarity);
    /* 使能 外设*/
    FL_SPI_Enable(SPIx);
    return FL_PASS;
}

/**
  * @brief  将 @ref FL_SPI_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct 指向 @ref FL_SPI_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_SPI_StructInit(FL_SPI_InitTypeDef *initStruct)
{
    initStruct->softControl         =   FL_DISABLE;
    initStruct->mode                =   FL_SPI_WORK_MODE_MASTER;
    initStruct->baudRate            =   FL_SPI_BAUDRATE_SPI0DIV4_SPI12DIV8;
    initStruct->bitOrder            =   FL_SPI_BIT_ORDER_MSB_FIRST;
    initStruct->clockPolarity       =   FL_SPI_POLARITY_NORMAL;
    initStruct->clockPhase          =   FL_SPI_PHASE_EDGE1;
}

/**
  * @}
  */

// #endif /* FL_SPI_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
