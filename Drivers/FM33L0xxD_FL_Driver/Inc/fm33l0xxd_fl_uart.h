/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_uart.h
  * @author  FMSH Application Team
  * @brief   Head file of UART FL Module
  * @version  V0.0.3
  * @date     7. May 2026
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
#ifndef __FM33L0XXD_FL_UART_H
#define __FM33L0XXD_FL_UART_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup UART_FL_ES_INIT UART Exported Init structures
  * @{
  */

/**
  * @brief FL UART Init Sturcture definition
  */
//#warning "PLEASE INPUT THE INIT OR OTHER STRUCTURES DEFINITION HERE!!!"
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup UART_FL_Exported_Constants UART Exported Constants
  * @{
  */

typedef struct
{
    /*! 通信波特率 */
    uint32_t baudRate;
    /*! 数据宽度 */
    uint32_t dataWidth;
    /*! 停止位 */
    uint32_t stopBits;
    /*! 奇偶校验位 */
    uint32_t parity;
    /*! 传输反向 */
    uint32_t transferDirection;

} FL_UART_InitTypeDef;

typedef struct
{
    /*! 调制极性默认bit1调制 */
    uint32_t polarity;
    /*! 红外调制占空比 */
    uint32_t modulationDuty;
    /*! 红外调制频率*/
    uint32_t modulationFrequency;

} FL_UART_InfraRed_InitTypeDef;


#define    FL_UART_DIRECTION_NONE                                 0x00000000U
#define    FL_UART_DIRECTION_RX                                   UART_RXSTA_RXEN
#define    FL_UART_DIRECTION_TX                                   UART_TXSTA_TXEN
#define    FL_UART_DIRECTION_TX_RX                               (UART_TXSTA_TXEN | UART_RXSTA_RXEN)


#define    UART_IRCON_IRFLAG_Pos                                  (15U)
#define    UART_IRCON_IRFLAG_Msk                                  (0x1U << UART_IRCON_IRFLAG_Pos)
#define    UART_IRCON_IRFLAG                                      UART_IRCON_IRFLAG_Msk

#define    UART_IRCON_TH_Pos                                      (11U)
#define    UART_IRCON_TH_Msk                                      (0xfU << UART_IRCON_TH_Pos)
#define    UART_IRCON_TH                                          UART_IRCON_TH_Msk

#define    UART_IRCON_TZBRG_Pos                                   (0U)
#define    UART_IRCON_TZBRG_Msk                                   (0x7ffU << UART_IRCON_TZBRG_Pos)
#define    UART_IRCON_TZBRG                                       UART_IRCON_TZBRG_Msk

#define    UART_RXSTA_PDSEL_Pos                                   (6U)
#define    UART_RXSTA_PDSEL_Msk                                   (0x3U << UART_RXSTA_PDSEL_Pos)
#define    UART_RXSTA_PDSEL                                       UART_RXSTA_PDSEL_Msk

#define    UART_RXSTA_ERRIE_Pos                                   (5U)
#define    UART_RXSTA_ERRIE_Msk                                   (0x1U << UART_RXSTA_ERRIE_Pos)
#define    UART_RXSTA_ERRIE                                       UART_RXSTA_ERRIE_Msk

#define    UART_RXSTA_RXEN_Pos                                    (4U)
#define    UART_RXSTA_RXEN_Msk                                    (0x1U << UART_RXSTA_RXEN_Pos)
#define    UART_RXSTA_RXEN                                        UART_RXSTA_RXEN_Msk

#define    UART_RXSTA_PERR_Pos                                    (3U)
#define    UART_RXSTA_PERR_Msk                                    (0x1U << UART_RXSTA_PERR_Pos)
#define    UART_RXSTA_PERR                                        UART_RXSTA_PERR_Msk

#define    UART_RXSTA_FERR_Pos                                    (2U)
#define    UART_RXSTA_FERR_Msk                                    (0x1U << UART_RXSTA_FERR_Pos)
#define    UART_RXSTA_FERR                                        UART_RXSTA_FERR_Msk

#define    UART_RXSTA_OERR_Pos                                    (1U)
#define    UART_RXSTA_OERR_Msk                                    (0x1U << UART_RXSTA_OERR_Pos)
#define    UART_RXSTA_OERR                                        UART_RXSTA_OERR_Msk

#define    UART_RXSTA_RX9D_Pos                                    (0U)
#define    UART_RXSTA_RX9D_Msk                                    (0x1U << UART_RXSTA_RX9D_Pos)
#define    UART_RXSTA_RX9D                                        UART_RXSTA_RX9D_Msk

#define    UART_TXSTA_STOPSEL_Pos                                 (6U)
#define    UART_TXSTA_STOPSEL_Msk                                 (0x1U << UART_TXSTA_STOPSEL_Pos)
#define    UART_TXSTA_STOPSEL                                     UART_TXSTA_STOPSEL_Msk

#define    UART_TXSTA_TXIS_Pos                                    (5U)
#define    UART_TXSTA_TXIS_Msk                                    (0x1U << UART_TXSTA_TXIS_Pos)
#define    UART_TXSTA_TXIS                                        UART_TXSTA_TXIS_Msk

#define    UART_TXSTA_TXEN_Pos                                    (4U)
#define    UART_TXSTA_TXEN_Msk                                    (0x1U << UART_TXSTA_TXEN_Pos)
#define    UART_TXSTA_TXEN                                        UART_TXSTA_TXEN_Msk

#define    UART_TXSTA_IREN_Pos                                    (3U)
#define    UART_TXSTA_IREN_Msk                                    (0x1U << UART_TXSTA_IREN_Pos)
#define    UART_TXSTA_IREN                                        UART_TXSTA_IREN_Msk

#define    UART_TXSTA_TX9D_Pos                                    (0U)
#define    UART_TXSTA_TX9D_Msk                                    (0x1U << UART_TXSTA_TX9D_Pos)
#define    UART_TXSTA_TX9D                                        UART_TXSTA_TX9D_Msk

#define    UART_UARTIE_TXIE_Pos                                   (0U)
#define    UART_UARTIE_TXIE_Msk                                   (0x1U << UART_UARTIE_TXIE_Pos)
#define    UART_UARTIE_TXIE                                       UART_UARTIE_TXIE_Msk

#define    UART_UARTIE_RXIE_Pos                                   (1U)
#define    UART_UARTIE_RXIE_Msk                                   (0x1U << UART_UARTIE_RXIE_Pos)
#define    UART_UARTIE_RXIE                                       UART_UARTIE_RXIE_Msk

#define    UART_UARTIF_TXIF_Pos                                   (0U)
#define    UART_UARTIF_TXIF_Msk                                   (0x1U << UART_UARTIF_TXIF_Pos)
#define    UART_UARTIF_TXIF                                       UART_UARTIF_TXIF_Msk

#define    UART_UARTIF_RXIF_Pos                                   (1U)
#define    UART_UARTIF_RXIF_Msk                                   (0x1U << UART_UARTIF_RXIF_Pos)
#define    UART_UARTIF_RXIF                                       UART_UARTIF_RXIF_Msk

#define    UART_TXBUFSTA_TX_INTSEL_Pos                            (2U)
#define    UART_TXBUFSTA_TX_INTSEL_Msk                            (0x3U << UART_TXBUFSTA_TX_INTSEL_Pos)
#define    UART_TXBUFSTA_TX_INTSEL                                UART_TXBUFSTA_TX_INTSEL_Msk

#define    UART_TXBUFSTA_TXFF_Pos                                 (0U)
#define    UART_TXBUFSTA_TXFF_Msk                                 (0x1U << UART_TXBUFSTA_TXFF_Pos)
#define    UART_TXBUFSTA_TXFF                                     UART_TXBUFSTA_TXFF_Msk

#define    UART_RXBUFSTA_RX_INTSEL_Pos                            (2U)
#define    UART_RXBUFSTA_RX_INTSEL_Msk                            (0x3U << UART_RXBUFSTA_RX_INTSEL_Pos)
#define    UART_RXBUFSTA_RX_INTSEL                                UART_RXBUFSTA_RX_INTSEL_Msk

#define    UART_RXBUFSTA_RXFF_Pos                                 (0U)
#define    UART_RXBUFSTA_RXFF_Msk                                 (0x1U << UART_RXBUFSTA_RXFF_Pos)
#define    UART_RXBUFSTA_RXFF                                     UART_RXBUFSTA_RXFF_Msk

#define    UART_RTXCON_RTX7EN_Pos                                 (2U)
#define    UART_RTXCON_RTX7EN_Msk                                 (0x1U << UART_RTXCON_RTX7EN_Pos)
#define    UART_RTXCON_RTX7EN                                     UART_RTXCON_RTX7EN_Msk

#define    UART_RTXCON_RXDFLAG_Pos                                (1U)
#define    UART_RTXCON_RXDFLAG_Msk                                (0x1U << UART_RTXCON_RXDFLAG_Pos)
#define    UART_RTXCON_RXDFLAG                                    UART_RTXCON_RXDFLAG_Msk

#define    UART_RTXCON_TXDFLAG_Pos                                (0U)
#define    UART_RTXCON_TXDFLAG_Msk                                (0x1U << UART_RTXCON_TXDFLAG_Pos)
#define    UART_RTXCON_TXDFLAG                                    UART_RTXCON_TXDFLAG_Msk






#define    FL_UART_INFRARED_POLARITY_NORMAL                       (0x0U << UART_IRCON_IRFLAG_Pos)
#define    FL_UART_INFRARED_POLARITY_INVERT                       (0x1U << UART_IRCON_IRFLAG_Pos)


#define    FL_UART_DATA_WIDTH_8BNONE                              (0x0U << UART_RXSTA_PDSEL_Pos)
#define    FL_UART_DATA_WIDTH_8BEVEN                              (0x1U << UART_RXSTA_PDSEL_Pos)
#define    FL_UART_DATA_WIDTH_8BODD                               (0x2U << UART_RXSTA_PDSEL_Pos)
#define    FL_UART_DATA_WIDTH_9BNONE                              (0x3U << UART_RXSTA_PDSEL_Pos)


#define    FL_UART_STOP_BIT_WIDTH_1B                              (0x0U << UART_TXSTA_STOPSEL_Pos)
#define    FL_UART_STOP_BIT_WIDTH_2B                              (0x1U << UART_TXSTA_STOPSEL_Pos)


#define    FL_UART_TX_IT_BE                                       (0x0U << UART_TXSTA_TXIS_Pos)
#define    FL_UART_TX_IT_SE                                       (0x1U << UART_TXSTA_TXIS_Pos)


#define    FL_UART_INTSEL_TXIS                                    (0x0U << UART_TXBUFSTA_TX_INTSEL_Pos)
#define    FL_UART_INTSEL_TXBE_TXSE                               (0x1U << UART_TXBUFSTA_TX_INTSEL_Pos)
#define    FL_UART_INTSEL_TXBE                                    (0x2U << UART_TXBUFSTA_TX_INTSEL_Pos)
#define    FL_UART_INTSEL_NONE_IT                                 (0x3U << UART_TXBUFSTA_TX_INTSEL_Pos)


#define    FL_UART_INTSEL_RX_DONE                                 (0x0U << UART_RXBUFSTA_RX_INTSEL_Pos)
#define    FL_UART_INTSEL_RX_FULL                                 (0x1U << UART_RXBUFSTA_RX_INTSEL_Pos)


#define    FL_UART_RX_POLARITY_NORMAL                             (0x0U << UART_RTXCON_RXDFLAG_Pos)
#define    FL_UART_RX_POLARITY_INVERT                             (0x1U << UART_RTXCON_RXDFLAG_Pos)


#define    FL_UART_TX_POLARITY_NORMAL                             (0x0U << UART_RTXCON_TXDFLAG_Pos)
#define    FL_UART_TX_POLARITY_INVERT                             (0x1U << UART_RTXCON_TXDFLAG_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup UART_FL_Exported_Functions UART Exported Functions
  * @{
  */

/**
  * @brief    设置红外调制极性
  * @rmtoll   IRCON    IRFLAG    FL_UART_SetIRPolarity
  * @param    UART_Common UART_Common instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_UART_INFRARED_POLARITY_NORMAL
  *           @arg @ref FL_UART_INFRARED_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetIRPolarity(UARTCOM_Type* UART_Common, uint32_t polarity)
{
    MODIFY_REG(UART_Common->IRCON, UART_IRCON_IRFLAG_Msk, polarity);
}

/**
  * @brief    获取红外调制极性
  * @rmtoll   IRCON    IRFLAG    FL_UART_GetIRPolarity
  * @param    UART_Common UART_Common instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_INFRARED_POLARITY_NORMAL
  *           @arg @ref FL_UART_INFRARED_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_UART_GetIRPolarity(UARTCOM_Type* UART_Common)
{
    return (uint32_t)(READ_BIT(UART_Common->IRCON, UART_IRCON_IRFLAG_Msk));
}

/**
  * @brief    设置红外调制占空比
  * @rmtoll   IRCON    TH    FL_UART_WriteIRModulationDuty
  * @param    UART_Common UART_Common instance
  * @param    duty 
  * @retval   None
  */
__STATIC_INLINE void FL_UART_WriteIRModulationDuty(UARTCOM_Type* UART_Common, uint32_t duty)
{
    MODIFY_REG(UART_Common->IRCON, (0xfU << 11U), (duty << 11U));
}

/**
  * @brief    获取红外调制占空比
  * @rmtoll   IRCON    TH    FL_UART_ReadIRModulationDuty
  * @param    UART_Common UART_Common instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_UART_ReadIRModulationDuty(UARTCOM_Type* UART_Common)
{
    return (uint32_t)(READ_BIT(UART_Common->IRCON, (0xfU << 11U)) >> 11U);
}

/**
  * @brief    设置红外调制频率
  * @rmtoll   IRCON    TZBRG    FL_UART_WriteIRModulationFrequency
  * @param    UART_Common UART_Common instance
  * @param    freq 
  * @retval   None
  */
__STATIC_INLINE void FL_UART_WriteIRModulationFrequency(UARTCOM_Type* UART_Common, uint32_t freq)
{
    MODIFY_REG(UART_Common->IRCON, (0x7ffU << 0U), (freq << 0U));
}

/**
  * @brief    获取红外调制频率
  * @rmtoll   IRCON    TZBRG    FL_UART_ReadIRModulationFrequency
  * @param    UART_Common UART_Common instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_UART_ReadIRModulationFrequency(UARTCOM_Type* UART_Common)
{
    return (uint32_t)(READ_BIT(UART_Common->IRCON, (0x7ffU << 0U)) >> 0U);
}

/**
  * @brief    设置UART数据位宽度
  * @rmtoll   RXSTA    PDSEL    FL_UART_SetDataWidth
  * @param    UARTx UART instance
  * @param    dataWidth This parameter can be one of the following values:
  *           @arg @ref FL_UART_DATA_WIDTH_8BNONE
  *           @arg @ref FL_UART_DATA_WIDTH_8BEVEN
  *           @arg @ref FL_UART_DATA_WIDTH_8BODD
  *           @arg @ref FL_UART_DATA_WIDTH_9BNONE
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetDataWidth(UART_Type* UARTx, uint32_t dataWidth)
{
    MODIFY_REG(UARTx->RXSTA, UART_RXSTA_PDSEL_Msk, dataWidth);
}

/**
  * @brief    获取UART数据位宽度
  * @rmtoll   RXSTA    PDSEL    FL_UART_GetDataWidth
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_DATA_WIDTH_8BNONE
  *           @arg @ref FL_UART_DATA_WIDTH_8BEVEN
  *           @arg @ref FL_UART_DATA_WIDTH_8BODD
  *           @arg @ref FL_UART_DATA_WIDTH_9BNONE
  */
__STATIC_INLINE uint32_t FL_UART_GetDataWidth(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_PDSEL_Msk));
}

/**
  * @brief    使能UART错误中断允许功能
  * @rmtoll   RXSTA    ERRIE    FL_UART_EnableIT_Error
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableIT_Error(UART_Type* UARTx)
{
    SET_BIT(UARTx->RXSTA, UART_RXSTA_ERRIE_Msk);
}

/**
  * @brief    失能UART错误中断允许功能
  * @rmtoll   RXSTA    ERRIE    FL_UART_DisableIT_Error
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableIT_Error(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->RXSTA, UART_RXSTA_ERRIE_Msk);
}

/**
  * @brief    获取UART错误中断允许状态
  * @rmtoll   RXSTA    ERRIE    FL_UART_IsEnabledIT_Error
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledIT_Error(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_ERRIE_Msk) == UART_RXSTA_ERRIE_Msk);
}

/**
  * @brief    使能UART接收模块功能
  * @rmtoll   RXSTA    RXEN    FL_UART_EnableRX
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableRX(UART_Type* UARTx)
{
    SET_BIT(UARTx->RXSTA, UART_RXSTA_RXEN_Msk);
}

/**
  * @brief    失能UART接收模块功能
  * @rmtoll   RXSTA    RXEN    FL_UART_DisableRX
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableRX(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->RXSTA, UART_RXSTA_RXEN_Msk);
}

/**
  * @brief    获取UART接收模块功能使能状态
  * @rmtoll   RXSTA    RXEN    FL_UART_IsEnabledRX
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledRX(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_RXEN_Msk) == UART_RXSTA_RXEN_Msk);
}

/**
  * @brief    获取UART奇偶校验错误中断标志
  * @rmtoll   RXSTA    PERR    FL_UART_IsActiveFlag_ParityError
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_ParityError(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_PERR_Msk) == (UART_RXSTA_PERR_Msk));
}

/**
  * @brief    清除UART奇偶校验错误中断标志
  * @rmtoll   RXSTA    PERR    FL_UART_ClearFlag_ParityError
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_ParityError(UART_Type* UARTx)
{
     CLEAR_BIT(UARTx->RXSTA, UART_RXSTA_PERR_Msk);
}

/**
  * @brief    获取UART帧格式错误中断标志
  * @rmtoll   RXSTA    FERR    FL_UART_IsActiveFlag_FrameError
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_FrameError(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_FERR_Msk) == (UART_RXSTA_FERR_Msk));
}

/**
  * @brief    清除UART帧格式错误中断标志
  * @rmtoll   RXSTA    FERR    FL_UART_ClearFlag_FrameError
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_FrameError(UART_Type* UARTx)
{
     CLEAR_BIT(UARTx->RXSTA, UART_RXSTA_FERR_Msk);
}

/**
  * @brief    获取UART溢出错误中断标志
  * @rmtoll   RXSTA    OERR    FL_UART_IsActiveFlag_RXBuffOverflowError
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_RXBuffOverflowError(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_OERR_Msk) == (UART_RXSTA_OERR_Msk));
}

/**
  * @brief    清除UART溢出错误中断标志
  * @rmtoll   RXSTA    OERR    FL_UART_ClearFlag_RXBuffOverflowError
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_RXBuffOverflowError(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->RXSTA, UART_RXSTA_OERR_Msk);
}

/**
  * @brief    获取UART接收数据的第九位
  * @rmtoll   RXSTA    RX9D    FL_UART_IsActiveFlag_RXBuff9Data
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_RXBuff9Data(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXSTA, UART_RXSTA_RX9D_Msk) == (UART_RXSTA_RX9D_Msk));
}

/**
  * @brief    设置UART停止位长度
  * @rmtoll   TXSTA    STOPSEL    FL_UART_SetStopBitsWidth
  * @param    UARTx UART instance
  *           length This parameter can be one of the following values:
  *           @arg @ref FL_UART_STOP_BIT_WIDTH_1B
  *           @arg @ref FL_UART_STOP_BIT_WIDTH_2B
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetStopBitsWidth(UART_Type* UARTx, uint32_t length)
{
    MODIFY_REG(UARTx->TXSTA, UART_TXSTA_STOPSEL_Msk, length);
}

/**
  * @brief    获取UART停止位长度
  * @rmtoll   TXSTA    STOPSEL    FL_UART_GetStopBitsWidth
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_STOP_BIT_WIDTH_1B
  *           @arg @ref FL_UART_STOP_BIT_WIDTH_2B
  */
__STATIC_INLINE uint32_t FL_UART_GetStopBitsWidth(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXSTA, UART_TXSTA_STOPSEL_Msk));
}

/**
  * @brief    发送中断选择TXIS,设置UART发送中断选择
  * @rmtoll   TXSTA    TXIS    FL_UART_SetTxIs
  * @param    UARTx UART instance
  *           @arg @ref FL_UART_TX_IT_BE
  *           @arg @ref FL_UART_TX_IT_SE
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetTxIs(UART_Type* UARTx, uint32_t select)
{
    MODIFY_REG(UARTx->TXSTA, UART_TXSTA_TXIS_Msk, select);
}

/**
  * @brief    发送中断选择TXIS,获取UART发送中断选择
  * @rmtoll   TXSTA    TXIS    FL_UART_GetTxIs
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_TX_IT_BE
  *           @arg @ref FL_UART_TX_IT_SE
  */
__STATIC_INLINE uint32_t FL_UART_GetTxIs(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXSTA, UART_TXSTA_TXIS_Msk));
}

/**
  * @brief    使能UART发送
  * @rmtoll   TXSTA    TXEN    FL_UART_EnableTX
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableTX(UART_Type* UARTx)
{
    SET_BIT(UARTx->TXSTA, UART_TXSTA_TXEN_Msk);
}

/**
  * @brief    失能UART发送
  * @rmtoll   TXSTA    TXEN    FL_UART_DisableTX
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableTX(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->TXSTA, UART_TXSTA_TXEN_Msk);
}

/**
  * @brief    获取UART发送使能状态
  * @rmtoll   TXSTA    TXEN    FL_UART_IsEnabledTX
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledTX(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXSTA, UART_TXSTA_TXEN_Msk) == UART_TXSTA_TXEN_Msk);
}

/**
  * @brief    使能UART红外调制
  * @rmtoll   TXSTA    IREN    FL_UART_EnableIRModulation
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableIRModulation(UART_Type* UARTx)
{
    SET_BIT(UARTx->TXSTA, UART_TXSTA_IREN_Msk);
}

/**
  * @brief    失能UART红外调制
  * @rmtoll   TXSTA    IREN    FL_UART_DisableIRModulation
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableIRModulation(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->TXSTA, UART_TXSTA_IREN_Msk);
}

/**
  * @brief    获取UART红外调制使能状态
  * @rmtoll   TXSTA    IREN    FL_UART_IsEnabledIRModulation
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledIRModulation(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXSTA, UART_TXSTA_IREN_Msk) == UART_TXSTA_IREN_Msk);
}

/**
  * @brief    获取UART发送数据的第九位
  * @rmtoll   TXSTA    TX9D    FL_UART_IsActiveFlag_TXBuff9Data
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_TXBuff9Data(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXSTA, UART_TXSTA_TX9D_Msk) == (UART_TXSTA_TX9D_Msk));
}

/**
  * @brief    使能UART发送中断
  * @rmtoll   UARTIE    TXIE    FL_UART_EnableIT_TXIE
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableIT_TXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    UARTCOM->UARTIE |= (1UL << (2U * uart_index));
}

/**
  * @brief    失能UART发送中断
  * @rmtoll   UARTIE    TXIE    FL_UART_DisableIT_TXIE
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableIT_TXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    UARTCOM->UARTIE &= ~(1UL << (2U * uart_index));
}

/**
  * @brief    获取UART发送中断使能状态
  * @rmtoll   UARTIE    TXIE    FL_UART_IsEnabledIT_TXIE
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledIT_TXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    return (UARTCOM->UARTIE & (1UL << (2U * uart_index))) ? 1U: 0U;
}

/**
  * @brief    使能UART接收中断
  * @rmtoll   UARTIE    RXIE    FL_UART_EnableIT_RXIE
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableIT_RXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    UARTCOM->UARTIE |= (1UL << (2U * uart_index + 1U));
}

/**
  * @brief    失能UART接收中断
  * @rmtoll   UARTIE    RXIE    FL_UART_DisableIT_RXIE
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableIT_RXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    UARTCOM->UARTIE &= ~(1UL << (2U * uart_index + 1U));
}

/**
  * @brief    获取UART接收中断使能状态
  * @rmtoll   UARTIE    RXIE    FL_UART_IsEnabledIT_RXIE
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledIT_RXIE(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    return (UARTCOM->UARTIE & (1UL << (2U * uart_index + 1U))) ? 1U: 0U;
}

/**
  * @brief    获取UART发送中断标志
  * @rmtoll   UARTIF    TXIF    FL_UART_IsActiveFlag_TXIF
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_TXIF(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    return (UARTCOM->UARTIF & (1UL << (2U * uart_index))) ? 1U : 0U;
}

/**
  * @brief    获取UART接收中断标志
  * @rmtoll   UARTIF    RXIF    FL_UART_IsActiveFlag_RXIF
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_RXIF(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    return (UARTCOM->UARTIF & (1UL << (2U * uart_index + 1U))) ? 1U : 0U;

}

/**
  * @brief    清除UART发送中断标志
  * @rmtoll   UARTIF    TXIF    FL_UART_ClearFlag_TXIF
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_TXIF(UART_Type* UARTx)
{
    uint32_t uart_index;

    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

    UARTCOM->UARTIF = (1UL << (2U *uart_index));
}

/**
  * @brief    清除UART接收中断标志
  * @rmtoll   UARTIF    RXIF    FL_UART_ClearFlag_RXIE
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_RXIF(UART_Type* UARTx)
{
//    uint32_t uart_index;

//    uart_index = ((uint32_t)UARTx - (uint32_t)UART0) / sizeof(UART_Type);

//    UARTCOM->UARTIF = (1UL << (2U *uart_index) + 1U);
}

/**
  * @brief    UART接收一个字节
  * @rmtoll   RXREG        FL_UART_ReadRXBuff
  * @param    UARTx UART instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_UART_ReadRXBuff(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXREG, (0x1ffU << 0U)) >> 0U);
}

/**
  * @brief    UART发送一个字节
  * @rmtoll   TXREG        FL_UART_WriteTXBuff
  * @param    UARTx UART instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_UART_WriteTXBuff(UART_Type* UARTx, uint32_t data)
{
    MODIFY_REG(UARTx->TXREG, (0x1ffU << 0U), (data << 0U));
}

/**
  * @brief    设置UART波特率
  * @rmtoll   SPBRG        FL_UART_WriteBaudRate
  * @param    UARTx UART instance
  * @param    baudRate 
  * @retval   None
  */
__STATIC_INLINE void FL_UART_WriteBaudRate(UART_Type* UARTx, uint32_t baudRate)
{
    MODIFY_REG(UARTx->SPBRG, (0xffffU << 0U), (baudRate << 0U));
}

/**
  * @brief    获取UART波特率
  * @rmtoll   SPBRG        FL_UART_ReadBaudRate
  * @param    UARTx UART instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_UART_ReadBaudRate(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->SPBRG, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    设置UART发送中断选择
  * @rmtoll   TXBUFSTA    TX_INTSEL    FL_UART_SetTxInterruptSelect
  * @param    UARTx UART instance
  *           @arg @ref FL_UART_INTSEL_TXIS
  *           @arg @ref FL_UART_INTSEL_TXBE
  *           @arg @ref FL_UART_INTSEL_TXBE_TXSE
  *           @arg @ref FL_UART_INTSEL_NONE_IT
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetTxInterruptSelect(UART_Type* UARTx, uint32_t select)
{
    MODIFY_REG(UARTx->TXBUFSTA, UART_TXBUFSTA_TX_INTSEL_Msk, select);
}

/**
  * @brief    获取UART发送中断选择
  * @rmtoll   TXBUFSTA    TX_INTSEL    FL_UART_GetTxInterruptSelect
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_INTSEL_TXIS
  *           @arg @ref FL_UART_INTSEL_TXBE
  *           @arg @ref FL_UART_INTSEL_TXBE_TXSE
  *           @arg @ref FL_UART_INTSEL_NONE_IT
  */
__STATIC_INLINE uint32_t FL_UART_GetTxInterruptSelect(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXBUFSTA, UART_TXBUFSTA_TX_INTSEL_Msk));
}

/**
  * @brief    获取UART TXBUFF状态位
  * @rmtoll   TXBUFSTA    TXFF    FL_UART_IsActiveFlag_TXBUffEmpty
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_TXBUffEmpty(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->TXBUFSTA, UART_TXBUFSTA_TXFF_Msk) == (UART_TXBUFSTA_TXFF_Msk));
}

/**
  * @brief    清除UART TXBUFF状态位
  * @rmtoll   TXBUFSTA    TXFF    FL_UART_ClearFlag_TXBUffEmpty
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_TXBUffEmpty(UART_Type* UARTx)
{
    WRITE_REG(UARTx->TXBUFSTA, UART_TXBUFSTA_TXFF_Msk);
}

/**
  * @brief    设置UART接收中断选择
  * @rmtoll   RXBUFSTA    RX_INTSEL    FL_UART_SetRxInterruptSelect
  * @param    UARTx UART instance
  *           @arg @ref FL_UART_INTSEL_RX_DONE
  *           @arg @ref FL_UART_INTSEL_RX_FULL
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetRxInterruptSelect(UART_Type* UARTx, uint32_t select)
{
    MODIFY_REG(UARTx->RXBUFSTA, UART_RXBUFSTA_RX_INTSEL_Msk, select);
}

/**
  * @brief    获取UART接收中断选择
  * @rmtoll   RXBUFSTA    RX_INTSEL    FL_UART_GetRxInterruptSelect
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_INTSEL_RX_DONE
  *           @arg @ref FL_UART_INTSEL_RX_FULL
  */
__STATIC_INLINE uint32_t FL_UART_GetRxInterruptSelect(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXBUFSTA, UART_RXBUFSTA_RX_INTSEL_Msk));
}

/**
  * @brief    获取UART RXBUFF状态位
  * @rmtoll   RXBUFSTA    RXFF    FL_UART_IsActiveFlag_RXBUffEmpty
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsActiveFlag_RXBUffEmpty(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RXBUFSTA, UART_RXBUFSTA_RXFF_Msk) == (UART_RXBUFSTA_RXFF_Msk));
}

/**
  * @brief    清除UART RXBUFF状态位
  * @rmtoll   RXBUFSTA    RXFF    FL_UART_ClearFlag_RXBUffEmpty
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_ClearFlag_RXBUffEmpty(UART_Type* UARTx)
{
    WRITE_REG(UARTx->RXBUFSTA, UART_RXBUFSTA_RXFF_Msk);
}

/**
  * @brief    使能UART收发7bit数据
  * @rmtoll   RTXCON    RTX7EN    FL_UART_EnableRX_TXSevenBit
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_EnableRX_TXSevenBit(UART_Type* UARTx)
{
    SET_BIT(UARTx->RTXCON, UART_RTXCON_RTX7EN_Msk);
}

/**
  * @brief    失能UART收发7bit数据
  * @rmtoll   RTXCON    RTX7EN    FL_UART_DisableRX_TXSevenBit
  * @param    UARTx UART instance
  * @retval   None
  */
__STATIC_INLINE void FL_UART_DisableRX_TXSevenBit(UART_Type* UARTx)
{
    CLEAR_BIT(UARTx->RTXCON, UART_RTXCON_RTX7EN_Msk);
}

/**
  * @brief    获取UART收发7bit数据使能状态
  * @rmtoll   RTXCON    RTX7EN    FL_UART_IsEnabledRX_TXSevenBit
  * @param    UARTx UART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_UART_IsEnabledRX_TXSevenBit(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RTXCON, UART_RTXCON_RTX7EN_Msk) == UART_RTXCON_RTX7EN_Msk);
}

/**
  * @brief    设置UART接收数据极性
  * @rmtoll   RTXCON    RXDFLAG    FL_UART_SetRXPolarity
  * @param    UARTx UART instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_UART_RX_POLARITY_NORMAL
  *           @arg @ref FL_UART_RX_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetRXPolarity(UART_Type* UARTx, uint32_t polarity)
{
    MODIFY_REG(UARTx->RTXCON, UART_RTXCON_RXDFLAG_Msk, polarity);
}

/**
  * @brief    获取UART接收数据极性
  * @rmtoll   RTXCON    RXDFLAG    FL_UART_GetRXPolarity
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_RX_POLARITY_NORMAL
  *           @arg @ref FL_UART_RX_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_UART_GetRXPolarity(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RTXCON, UART_RTXCON_RXDFLAG_Msk));
}

/**
  * @brief    设置UART发送数据极性
  * @rmtoll   RTXCON    TXDFLAG    FL_UART_SetTXPolarity
  * @param    UARTx UART instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_UART_TX_POLARITY_NORMAL
  *           @arg @ref FL_UART_TX_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_UART_SetTXPolarity(UART_Type* UARTx, uint32_t polarity)
{
    MODIFY_REG(UARTx->RTXCON, UART_RTXCON_TXDFLAG_Msk, polarity);
}

/**
  * @brief    获取UART发送数据极性
  * @rmtoll   RTXCON    TXDFLAG    FL_UART_GetTXPolarity
  * @param    UARTx UART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_UART_TX_POLARITY_NORMAL
  *           @arg @ref FL_UART_TX_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_UART_GetTXPolarity(UART_Type* UARTx)
{
    return (uint32_t)(READ_BIT(UARTx->RTXCON, UART_RTXCON_TXDFLAG_Msk));
}

/**
  * @}
  */

/** @defgroup UART_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_UART_DeInit(UART_Type *UARTx);
FL_ErrorStatus FL_UART_Init(UART_Type *UARTx, FL_UART_InitTypeDef *UART_InitStruct);
FL_ErrorStatus FL_UART_InfraRed_Init(UART_Type *UARTx, FL_UART_InfraRed_InitTypeDef *initStruct);
void FL_UART_InfraRed_StructInit(FL_UART_InfraRed_InitTypeDef *InfraRed_InitStruct);
void FL_UART_StructInit(FL_UART_InitTypeDef *UART_InitStruct);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_UART_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
