/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_uart.c
  * @author  FMSH Application Team
  * @brief   Src file of UART LL Module
  * @version  V0.0.3
  * @date     7. MAy 2026
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
#include "fm33l0xxd_fl_uart.h"
#include "fm33l0xxd_fl_rcc.h"
#include "fm33l0xxd_fl_rmu.h"
#include "fm33_assert.h"
#include "fm33l0xxd_fl.h"

/** @addtogroup FM33L0xxd_FL_Driver_UART
  * @{
  */
  
/* Private macros ------------------------------------------------------------*/
/** @addtogroup UART_FL_Private_Macros
  * @{
  */

                                                          
#define         IS_UART_INSTANCE(INSTANCE)              (((INSTANCE) == UART0)||\
                                                         ((INSTANCE) == UART1)||\
                                                         ((INSTANCE) == UART2)||\
                                                         ((INSTANCE) == UART3)||\
                                                         ((INSTANCE) == UART4)||\
                                                         ((INSTANCE) == UART5))
                                                           
                                                             
#define         IS_FL_UART_BAUDRATE(__VALUE__)            (((__VALUE__) <= 460800))
                                                             
#define         IS_FL_UART_DATAWIDTH(__VALUE__)           (((__VALUE__) == FL_UART_DATA_WIDTH_8BNONE)||\
                                                           ((__VALUE__) == FL_UART_DATA_WIDTH_8BEVEN)||\
                                                           ((__VALUE__) == FL_UART_DATA_WIDTH_8BODD) ||\
                                                           ((__VALUE__) == FL_UART_DATA_WIDTH_9BNONE))
                                                      
#define         IS_FL_UART_STOPBITS(__VALUE__)            (((__VALUE__) == FL_UART_STOP_BIT_WIDTH_1B)||\
                                                           ((__VALUE__) == FL_UART_STOP_BIT_WIDTH_2B))
                                                             
#define         IS_FL_UART_DIRECTION(__VALUE__)           (((__VALUE__) == FL_UART_DIRECTION_NONE)||\
                                                           ((__VALUE__) == FL_UART_DIRECTION_RX)||\
                                                           ((__VALUE__) == FL_UART_DIRECTION_TX)||\
                                                           ((__VALUE__) == FL_UART_DIRECTION_TX_RX)) 
                                                             
#define         IS_FL_UART_INFRA_MODULATION(__VALUE__)    (((__VALUE__) == FL_DISABLE)||\
                                                           ((__VALUE__) == FL_ENABLE))


#define         IS_FL_UART_INFRARED_POLARITY(__VALUE__)        (((__VALUE__) == FL_UART_INFRARED_POLARITY_NORMAL)||\
                                                                ((__VALUE__) == FL_UART_INFRARED_POLARITY_INVERT))
                                                             
#define         IS_FL_UART_INFRARED_MODULATION_DUTY(__VALUE__) (((__VALUE__) <= 16))
                                                                
                                                             
#define         IS_FL_UART_INFRARED_MODULATION_FREQ(__VALUE__) (((__VALUE__) > 0))                                                           
/**
  * @}
  */
  
/** @addtogroup UART_FL_EF_Init
  * @{
  */

/**
  * @brief    复位UART 外设寄存器值为复位值
  * @param    外设入口地址
  * @retval    返回错误状态，可能值：
  *           -FL_PASS 外设寄存器值恢复复位值
  *           -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_UART_DeInit(UART_Type *UARTx)
{
    FL_ErrorStatus status = FL_PASS;

    /* 入口参数合法性断言 */
    assert_param(IS_UART_INSTANCE(UARTx));
    /* 外设复位使能 */
    FL_RMU_EnablePeripheralReset(RMU);
    if (UARTx == UART0)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral2(RMU, FL_RMU_UART0RST);
        FL_RMU_DisableResetAPBPeripheral2(RMU,FL_RMU_UART0RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART0);
    }
    else if (UARTx == UART1)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral2(RMU,FL_RMU_UART1RST);
        FL_RMU_DisableResetAPBPeripheral2(RMU,FL_RMU_UART1RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART1);
    }
    else if (UARTx == UART2)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral1(RMU,FL_RMU_UART2RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU,FL_RMU_UART2RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART2);
    }
    else if (UARTx == UART3)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral1(RMU,FL_RMU_UART3RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU,FL_RMU_UART3RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART3);
    }
    else if (UARTx == UART4)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral1(RMU,FL_RMU_UART4RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU,FL_RMU_UART4RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART4);
    }
    else if (UARTx == UART5)
    {
        /*复位UART*/
        FL_RMU_EnableResetAPBPeripheral1(RMU,FL_RMU_UART5RST);
        FL_RMU_DisableResetAPBPeripheral1(RMU,FL_RMU_UART5RST);
        /* 外设总线时钟关闭 */
        FL_RCC_DisableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART5);
    }
    else
    {
        status = FL_FAIL;
    }
    
//    FL_RMU_EnableResetAPBPeripheral2(RMU, FL_RMU_UARTIRRST);
//    FL_RMU_DisableResetAPBPeripheral2(RMU,FL_RMU_UARTIRRST);
    
    /* 锁定外设复位功能 */
    FL_RMU_DisablePeripheralReset(RMU);
    return (status);
}

/**
  * @brief    根据需要功能配置UART寄存器 
  *               
  * @param    UARTx  外设入口地址
  * @param     UART_InitStruct指向一个LL_UART_InitTypeDef类型的结构体，它包含指定UART外设的配置信息      
  *         
  * @retval    FL_FL_ErrorStatus枚举值    
  *            -FL_FAIL 配置过程发生错误        
  *            -FL_PASS UART配置成功        
  */
FL_ErrorStatus FL_UART_Init(UART_Type *UARTx, FL_UART_InitTypeDef *UART_InitStruct)
{
    FL_ErrorStatus status = FL_FAIL;
    uint32_t Fclk,BaudRate;

    /* 参数合法性检查 */
    assert_param(IS_UART_INSTANCE(UARTx));
    assert_param(IS_FL_UART_DATAWIDTH(UART_InitStruct->dataWidth));
    assert_param(IS_FL_UART_BAUDRATE(UART_InitStruct->baudRate));
    assert_param(IS_FL_UART_STOPBITS(UART_InitStruct->stopBits));
    assert_param(IS_FL_UART_DIRECTION(UART_InitStruct->transferDirection));

    Fclk = FL_RCC_GetAPBClockFreq();
    BaudRate = Fclk/UART_InitStruct->baudRate - 1;
    
    FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UARTIR);
    
    if(UARTx == UART0)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART0); 
    }
    else if(UARTx == UART1)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART1);
    }
    else if(UARTx == UART2)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART2); 
    }
    else if(UARTx == UART3)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART3);
    }
    else if(UARTx == UART4)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART4);
    }
    else if(UARTx == UART5)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART5);
    }
    /*发送接收配置*/
    if(UART_InitStruct->transferDirection & FL_UART_DIRECTION_TX)
    {
        FL_UART_EnableTX(UARTx);
    }
    if(UART_InitStruct->transferDirection & FL_UART_DIRECTION_RX)
    {
        FL_UART_EnableRX(UARTx);
    }
    /*配置波特率*/
    FL_UART_WriteBaudRate(UARTx,BaudRate);
    /*配置停止位*/
    FL_UART_SetStopBitsWidth(UARTx,UART_InitStruct->stopBits);
    /*配置数据位宽与校验位*/
    FL_UART_SetDataWidth(UARTx,UART_InitStruct->dataWidth);
    
    status = FL_PASS;
    return status;
}
/**
  * @brief    根据需要功能配置红外调制寄存器 
  *               
  * @param    UARTx  外设入口地址
  *
  * @param     UART_InitStruct指向一个FL_UART_InitTypeDef类型的结构体，它包含指定UART外设的配置信息      
  *         
  * @retval    FL_ErrorStatus枚举值    
  *            -FL_FAIL 配置过程发生错误        
  *            -FL_PASS UART配置成功        
  */
FL_ErrorStatus FL_UART_InfraRed_Init(UART_Type *UARTx, FL_UART_InfraRed_InitTypeDef *initStruct)
{
    FL_ErrorStatus status = FL_FAIL;
    uint32_t  tempTZBRG,tempTH;

    /* 参数合法性检查 */
    assert_param(IS_FL_UART_INFRARED_POLARITY(initStruct->polarity));
    
    FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UARTIR);
    
    if(UARTx == UART0)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART0); 
    }
    else if(UARTx == UART1)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART1);
    }
    else if(UARTx == UART2)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART2); 
    }
    else if(UARTx == UART3)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART3);
    }
    else if(UARTx == UART4)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART4);
    }
    else if(UARTx == UART5)
    {
        /*总线时钟使能*/
        FL_RCC_EnableGroup3BusClock(FL_RCC_GROUP3_BUSCLK_UART5);
    }
    /*红外发送使能*/
    FL_UART_EnableIRModulation(UARTx);
    
    /*红外调制极性*/
    FL_UART_SetIRPolarity(UARTCOM, initStruct->polarity);
    
    /*红外调制频率*/
    tempTZBRG = (uint32_t)((FL_RCC_GetAPBClockFreq())*1.0)/initStruct->modulationFrequency -1;
    
    /* 占空比计算 */
    if((tempTZBRG>>4) != 0)
    {
        
        tempTH = (uint32_t)(((float)initStruct->modulationDuty/100.0)*((float)(tempTZBRG + 1)/(float)(tempTZBRG>>4)) + 0.5);
    }
    else
    {
        tempTH = (uint32_t)(((float)initStruct->modulationDuty/100.0)*(float)(tempTZBRG + 1) + 0.5);
        
    }
    
    /* 占空比限位到小于95%，否则结果会有问题 */
    tempTH = ((float)((tempTZBRG >> 4) * tempTH) / (float)(tempTZBRG + 1)) < 0.95f ? tempTH : tempTH - 1;
    
    /* 调制频率和占空比配置 */    
    FL_UART_WriteIRModulationDuty(UARTCOM, tempTH);
    FL_UART_WriteIRModulationFrequency(UARTCOM, tempTZBRG);
    
    status = FL_PASS;
    return status;
}

/**
  * @brief    UART_InitStruct 为默认配置
  * @param     UART_InitStruct 指向需要将值设置为默认配置的结构体 @ref LL_UART_InitTypeDef structure 
  *         结构体
  * @retval    None
  */
void FL_UART_InfraRed_StructInit(FL_UART_InfraRed_InitTypeDef *InfraRed_InitStruct)
{
    InfraRed_InitStruct->polarity                  = FL_UART_INFRARED_POLARITY_NORMAL;
    InfraRed_InitStruct->modulationDuty            = 50;
    InfraRed_InitStruct->modulationFrequency       = 38000;
}

/**
  * @brief    UART_InitStruct 为默认配置
  * @param     UART_InitStruct 指向需要将值设置为默认配置的结构体 @ref LL_UART_InitTypeDef structure 
  *         结构体
  * @retval    None
  */
void FL_UART_StructInit(FL_UART_InitTypeDef *UART_InitStruct)
{
    UART_InitStruct->baudRate            = 9600;
    UART_InitStruct->dataWidth           = FL_UART_DATA_WIDTH_8BNONE;
    UART_InitStruct->stopBits            = FL_UART_STOP_BIT_WIDTH_1B;
    UART_InitStruct->transferDirection   = FL_UART_DIRECTION_TX_RX;
}
/**
  * @}
  */

/**
  * @}
  */

/*************************************************************END OF FILE************************************************************/

