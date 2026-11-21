/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_lpuart.h
  * @author  FMSH Application Team
  * @brief   Head file of LPUART FL Module
  * @version  V0.0.2
  * @date     23. March 2026
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
#ifndef __FM33L0XXD_FL_LPUART_H
#define __FM33L0XXD_FL_LPUART_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup LPUART_FL_ES_INIT LPUART Exported Init structures
  * @{
  */

/**
  * @brief FL LPUART Init Sturcture definition
  */
typedef struct
{
    /** 时钟源选择 */
    uint32_t clockSrc;
    /** 通讯波特率*/
    uint32_t baudRate;
    /**  数据位宽*/
    uint32_t dataWidth;
    /** 停止位 */
    uint32_t stopBits;
    /** 奇偶校验 */
    uint32_t parity;
    /** 传输方向 */
    uint32_t transferDirection;

} FL_LPUART_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup LPUART_FL_Exported_Constants LPUART Exported Constants
  * @{
  */

#define    LPUART_LPUSTA_TC_Pos                                   (7U)
#define    LPUART_LPUSTA_TC_Msk                                   (0x1U << LPUART_LPUSTA_TC_Pos)
#define    LPUART_LPUSTA_TC                                       LPUART_LPUSTA_TC_Msk

#define    LPUART_LPUSTA_TXE_Pos                                  (6U)
#define    LPUART_LPUSTA_TXE_Msk                                  (0x1U << LPUART_LPUSTA_TXE_Pos)
#define    LPUART_LPUSTA_TXE                                      LPUART_LPUSTA_TXE_Msk

#define    LPUART_LPUSTA_START_Pos                                (5U)
#define    LPUART_LPUSTA_START_Msk                                (0x1U << LPUART_LPUSTA_START_Pos)
#define    LPUART_LPUSTA_START                                    LPUART_LPUSTA_START_Msk

#define    LPUART_LPUSTA_PERR_Pos                                 (4U)
#define    LPUART_LPUSTA_PERR_Msk                                 (0x1U << LPUART_LPUSTA_PERR_Pos)
#define    LPUART_LPUSTA_PERR                                     LPUART_LPUSTA_PERR_Msk

#define    LPUART_LPUSTA_FERR_Pos                                 (3U)
#define    LPUART_LPUSTA_FERR_Msk                                 (0x1U << LPUART_LPUSTA_FERR_Pos)
#define    LPUART_LPUSTA_FERR                                     LPUART_LPUSTA_FERR_Msk

#define    LPUART_LPUSTA_RXOV_Pos                                 (2U)
#define    LPUART_LPUSTA_RXOV_Msk                                 (0x1U << LPUART_LPUSTA_RXOV_Pos)
#define    LPUART_LPUSTA_RXOV                                     LPUART_LPUSTA_RXOV_Msk

#define    LPUART_LPUSTA_RXF_Pos                                  (1U)
#define    LPUART_LPUSTA_RXF_Msk                                  (0x1U << LPUART_LPUSTA_RXF_Pos)
#define    LPUART_LPUSTA_RXF                                      LPUART_LPUSTA_RXF_Msk

#define    LPUART_LPUSTA_MATCH_Pos                                (0U)
#define    LPUART_LPUSTA_MATCH_Msk                                (0x1U << LPUART_LPUSTA_MATCH_Pos)
#define    LPUART_LPUSTA_MATCH                                    LPUART_LPUSTA_MATCH_Msk

#define    LPUART_LPUCON_TXPOL_Pos                                (12U)
#define    LPUART_LPUCON_TXPOL_Msk                                (0x1U << LPUART_LPUCON_TXPOL_Pos)
#define    LPUART_LPUCON_TXPOL                                    LPUART_LPUCON_TXPOL_Msk

#define    LPUART_LPUCON_TCIE_Pos                                 (11U)
#define    LPUART_LPUCON_TCIE_Msk                                 (0x1U << LPUART_LPUCON_TCIE_Pos)
#define    LPUART_LPUCON_TCIE                                     LPUART_LPUCON_TCIE_Msk

#define    LPUART_LPUCON_TXIE_Pos                                 (10U)
#define    LPUART_LPUCON_TXIE_Msk                                 (0x1U << LPUART_LPUCON_TXIE_Pos)
#define    LPUART_LPUCON_TXIE                                     LPUART_LPUCON_TXIE_Msk

#define    LPUART_LPUCON_NEDET_Pos                                (9U)
#define    LPUART_LPUCON_NEDET_Msk                                (0x1U << LPUART_LPUCON_NEDET_Pos)
#define    LPUART_LPUCON_NEDET                                    LPUART_LPUCON_NEDET_Msk

#define    LPUART_LPUCON_PAREN_Pos                                (8U)
#define    LPUART_LPUCON_PAREN_Msk                                (0x1U << LPUART_LPUCON_PAREN_Pos)
#define    LPUART_LPUCON_PAREN                                    LPUART_LPUCON_PAREN_Msk

#define    LPUART_LPUCON_PTYP_Pos                                 (7U)
#define    LPUART_LPUCON_PTYP_Msk                                 (0x1U << LPUART_LPUCON_PTYP_Pos)
#define    LPUART_LPUCON_PTYP                                     LPUART_LPUCON_PTYP_Msk

#define    LPUART_LPUCON_SL_Pos                                   (6U)
#define    LPUART_LPUCON_SL_Msk                                   (0x1U << LPUART_LPUCON_SL_Pos)
#define    LPUART_LPUCON_SL                                       LPUART_LPUCON_SL_Msk

#define    LPUART_LPUCON_DL_Pos                                   (5U)
#define    LPUART_LPUCON_DL_Msk                                   (0x1U << LPUART_LPUCON_DL_Pos)
#define    LPUART_LPUCON_DL                                       LPUART_LPUCON_DL_Msk

#define    LPUART_LPUCON_RXPOL_Pos                                (4U)
#define    LPUART_LPUCON_RXPOL_Msk                                (0x1U << LPUART_LPUCON_RXPOL_Pos)
#define    LPUART_LPUCON_RXPOL                                    LPUART_LPUCON_RXPOL_Msk

#define    LPUART_LPUCON_ERRIE_Pos                                (3U)
#define    LPUART_LPUCON_ERRIE_Msk                                (0x1U << LPUART_LPUCON_ERRIE_Pos)
#define    LPUART_LPUCON_ERRIE                                    LPUART_LPUCON_ERRIE_Msk

#define    LPUART_LPUCON_RXIE_Pos                                 (2U)
#define    LPUART_LPUCON_RXIE_Msk                                 (0x1U << LPUART_LPUCON_RXIE_Pos)
#define    LPUART_LPUCON_RXIE                                     LPUART_LPUCON_RXIE_Msk

#define    LPUART_LPUCON_RXEV_Pos                                 (0U)
#define    LPUART_LPUCON_RXEV_Msk                                 (0x3U << LPUART_LPUCON_RXEV_Pos)
#define    LPUART_LPUCON_RXEV                                     LPUART_LPUCON_RXEV_Msk

#define    LPUART_LPUIF_TC_IF_Pos                                 (3U)
#define    LPUART_LPUIF_TC_IF_Msk                                 (0x1U << LPUART_LPUIF_TC_IF_Pos)
#define    LPUART_LPUIF_TC_IF                                     LPUART_LPUIF_TC_IF_Msk

#define    LPUART_LPUIF_TXIF_Pos                                  (2U)
#define    LPUART_LPUIF_TXIF_Msk                                  (0x1U << LPUART_LPUIF_TXIF_Pos)
#define    LPUART_LPUIF_TXIF                                      LPUART_LPUIF_TXIF_Msk

#define    LPUART_LPUIF_RXNEGIF_Pos                               (1U)
#define    LPUART_LPUIF_RXNEGIF_Msk                               (0x1U << LPUART_LPUIF_RXNEGIF_Pos)
#define    LPUART_LPUIF_RXNEGIF                                   LPUART_LPUIF_RXNEGIF_Msk

#define    LPUART_LPUIF_RXIF_Pos                                  (0U)
#define    LPUART_LPUIF_RXIF_Msk                                  (0x1U << LPUART_LPUIF_RXIF_Pos)
#define    LPUART_LPUIF_RXIF                                      LPUART_LPUIF_RXIF_Msk

#define    LPUART_LPUBAUD_BAUD_Pos                                (0U)
#define    LPUART_LPUBAUD_BAUD_Msk                                (0x7U << LPUART_LPUBAUD_BAUD_Pos)
#define    LPUART_LPUBAUD_BAUD                                    LPUART_LPUBAUD_BAUD_Msk

#define    LPUART_LPUEN_TXEN_Pos                                  (1U)
#define    LPUART_LPUEN_TXEN_Msk                                  (0x1U << LPUART_LPUEN_TXEN_Pos)
#define    LPUART_LPUEN_TXEN                                      LPUART_LPUEN_TXEN_Msk

#define    LPUART_LPUEN_RXEN_Pos                                  (0U)
#define    LPUART_LPUEN_RXEN_Msk                                  (0x1U << LPUART_LPUEN_RXEN_Pos)
#define    LPUART_LPUEN_RXEN                                      LPUART_LPUEN_RXEN_Msk






#define    FL_LPUART_TX_POLARITY_NORMAL                           (0x0U << LPUART_LPUCON_TXPOL_Pos)
#define    FL_LPUART_TX_POLARITY_INVERT                           (0x1U << LPUART_LPUCON_TXPOL_Pos)


#define    FL_LPUART_PARITY_NONE                                  (0x0U << LPUART_LPUCON_PTYP_Pos)
#define    FL_LPUART_PARITY_EVEN                                  (0x2U << LPUART_LPUCON_PTYP_Pos)
#define    FL_LPUART_PARITY_ODD                                   (0x3U << LPUART_LPUCON_PTYP_Pos)


#define    FL_LPUART_STOP_BIT_WIDTH_1B                            (0x0U << LPUART_LPUCON_SL_Pos)
#define    FL_LPUART_STOP_BIT_WIDTH_2B                            (0x1U << LPUART_LPUCON_SL_Pos)


#define    FL_LPUART_DATA_WIDTH_8B                                (0x0U << LPUART_LPUCON_DL_Pos)
#define    FL_LPUART_DATA_WIDTH_7B                                (0x1U << LPUART_LPUCON_DL_Pos)


#define    FL_LPUART_RX_POLARITY_NORMAL                           (0x0U << LPUART_LPUCON_RXPOL_Pos)
#define    FL_LPUART_RX_POLARITY_INVERT                           (0x1U << LPUART_LPUCON_RXPOL_Pos)


#define    FL_LPUART_WAKEUP_EVENT_START                           (0x0U << LPUART_LPUCON_RXEV_Pos)
#define    FL_LPUART_WAKEUP_EVENT_RECV_1BYTE                      (0x1U << LPUART_LPUCON_RXEV_Pos)
#define    FL_LPUART_WAKEUP_EVENT_RECV_MATCH                      (0x2U << LPUART_LPUCON_RXEV_Pos)
#define    FL_LPUART_WAKEUP_EVENT_RX_FALLING                      (0x3U << LPUART_LPUCON_RXEV_Pos)


#define    FL_LPUART_BAUDRATE_9600                                (0x0U << LPUART_LPUBAUD_BAUD_Pos)
#define    FL_LPUART_BAUDRATE_4800                                (0x1U << LPUART_LPUBAUD_BAUD_Pos)
#define    FL_LPUART_BAUDRATE_2400                                (0x2U << LPUART_LPUBAUD_BAUD_Pos)
#define    FL_LPUART_BAUDRATE_1200                                (0x3U << LPUART_LPUBAUD_BAUD_Pos)
#define    FL_LPUART_BAUDRATE_600                                 (0x4U << LPUART_LPUBAUD_BAUD_Pos)
#define    FL_LPUART_BAUDRATE_300                                 (0x5U << LPUART_LPUBAUD_BAUD_Pos)

#define    FL_LPUART_DIRECTION_NONE                               0x00000000U
#define    FL_LPUART_DIRECTION_RX                                 LPUART_LPUEN_RXEN
#define    FL_LPUART_DIRECTION_TX                                 LPUART_LPUEN_TXEN
#define    FL_LPUART_DIRECTION_TX_RX                              (LPUART_LPUEN_RXEN|LPUART_LPUEN_TXEN)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup LPUART_FL_Exported_Functions LPUART Exported Functions
  * @{
  */

/**
  * @brief    LPUART接收一个字节
  * @rmtoll   LPURXD        FL_LPUART_ReadRXBuff
  * @param    LPUARTx LPUART instance
  * @retval   The LPUart received data
  */
__STATIC_INLINE uint32_t FL_LPUART_ReadRXBuff(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPURXD, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    LPUART发送一个字节
  * @rmtoll   TXBUF        FL_LPUART_WriteTXBuff
  * @param    LPUARTx LPUART instance
  * @param    data The data need to transmit through the LPUart
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_WriteTXBuff(LPUART_Type *LPUARTx, uint32_t data)
{
    LPUARTx->LPUTXD = data;
}

/**
  * @brief    获取发送完成标志
  * @rmtoll   LPUSTA    TC    FL_LPUART_IsActiveFlag_TXCompleteSTA
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_TXCompleteSTA(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_TC_Msk) == (LPUART_LPUSTA_TC_Msk));
}

/**
  * @brief    清除发送完成标志
  * @rmtoll   LPUSTA    TC    FL_LPUART_ClearFlag_TXCompleteSTA
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_TXCompleteSTA(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_TC_Msk);
}

/**
  * @brief    获取发送缓存空标志
  * @rmtoll   LPUSTA    TXE    FL_LPUART_IsActiveFlag_TXBuffEmptySTA
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_TXBuffEmptySTA(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_TXE_Msk) == (LPUART_LPUSTA_TXE_Msk));
}

/**
  * @brief    清除发送缓存空标志
  * @rmtoll   LPUSTA    TXE    FL_LPUART_ClearFlag_TXBuffEmptySTA
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_TXBuffEmptySTA(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_TXE_Msk);
}

/**
  * @brief    获取起始位检测标志
  * @rmtoll   LPUSTA    START    FL_LPUART_IsActiveFlag_StartBit
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_StartBit(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_START_Msk) == (LPUART_LPUSTA_START_Msk));
}

/**
  * @brief    清除起始位检测标志
  * @rmtoll   LPUSTA    START    FL_LPUART_ClearFlag_StartBit
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_StartBit(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_START_Msk);
}

/**
  * @brief    获取奇偶校验错误中断标志
  * @rmtoll   LPUSTA    PERR    FL_LPUART_IsActiveFlag_ParityError
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_ParityError(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_PERR_Msk) == (LPUART_LPUSTA_PERR_Msk));
}

/**
  * @brief    清除奇偶校验错误中断标志
  * @rmtoll   LPUSTA    PERR    FL_LPUART_ClearFlag_ParityError
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_ParityError(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_PERR_Msk);
}

/**
  * @brief    获取帧格式错误中断标志
  * @rmtoll   LPUSTA    FERR    FL_LPUART_IsActiveFlag_FrameError
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_FrameError(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_FERR_Msk) == (LPUART_LPUSTA_FERR_Msk));
}

/**
  * @brief    清除帧格式错误中断标志
  * @rmtoll   LPUSTA    FERR    FL_LPUART_ClearFlag_FrameError
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_FrameError(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_FERR_Msk);
}

/**
  * @brief    获取接收缓存溢出错误标志
  * @rmtoll   LPUSTA    RXOV    FL_LPUART_IsActiveFlag_RXBuffOverflow
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_RXBuffOverflow(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_RXOV_Msk) == (LPUART_LPUSTA_RXOV_Msk));
}

/**
  * @brief    清除接收缓存溢出错误标志
  * @rmtoll   LPUSTA    RXOV    FL_LPUART_ClearFlag_RXBuffOverflow
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_RXBuffOverflow(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_RXOV_Msk);
}

/**
  * @brief    获取接收缓存满标志
  * @rmtoll   LPUSTA    RXF    FL_LPUART_IsActiveFlag_RXBuffFullSTA
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_RXBuffFullSTA(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_RXF_Msk) == (LPUART_LPUSTA_RXF_Msk));
}

/**
  * @brief    获取数据匹配标志
  * @rmtoll   LPUSTA    MATCH    FL_LPUART_IsActiveFlag_DataMatch
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_DataMatch(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUSTA, LPUART_LPUSTA_MATCH_Msk) == (LPUART_LPUSTA_MATCH_Msk));
}

/**
  * @brief    清除数据匹配标志
  * @rmtoll   LPUSTA    MATCH    FL_LPUART_ClearFlag_DataMatch
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_DataMatch(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUSTA, LPUART_LPUSTA_MATCH_Msk);
}

/**
  * @brief    设置LPUART发送数据极性
  * @rmtoll   LPUCON    TXPOL    FL_LPUART_SetTXPolarity
  * @param    LPUARTx LPUART instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_TX_POLARITY_NORMAL
  *           @arg @ref FL_LPUART_TX_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetTXPolarity(LPUART_Type *LPUARTx, uint32_t polarity)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_TXPOL_Msk, polarity);
}

/**
  * @brief    获取LPUART发送数据极性设置
  * @rmtoll   LPUCON    TXPOL    FL_LPUART_GetTXPolarity
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_TX_POLARITY_NORMAL
  *           @arg @ref FL_LPUART_TX_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_LPUART_GetTXPolarity(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TXPOL_Msk));
}

/**
  * @brief    使能LPUART发送完成中断
  * @rmtoll   LPUCON    TCIE    FL_LPUART_EnableIT_TXComplete
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableIT_TXComplete(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TCIE_Msk);
}

/**
  * @brief    获取LPUART发送完成中断使能状态
  * @rmtoll   LPUCON    TCIE    FL_LPUART_IsEnabledIT_TXComplete
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledIT_TXComplete(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TCIE_Msk) == LPUART_LPUCON_TCIE_Msk);
}

/**
  * @brief    关闭LPUART发送完成中断
  * @rmtoll   LPUCON    TCIE    FL_LPUART_DisableIT_TXComplete
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableIT_TXComplete(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TCIE_Msk);
}

/**
  * @brief    使能LPUART发送缓存空中断
  * @rmtoll   LPUCON    TXIE    FL_LPUART_EnableIT_TXBuffEmpty
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableIT_TXBuffEmpty(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TXIE_Msk);
}

/**
  * @brief    获取LPUART发送缓存空中断使能状态
  * @rmtoll   LPUCON    TXIE    FL_LPUART_IsEnabledIT_TXBuffEmpty
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledIT_TXBuffEmpty(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TXIE_Msk) == LPUART_LPUCON_TXIE_Msk);
}

/**
  * @brief    关闭LPUART发送缓存空中断使能
  * @rmtoll   LPUCON    TXIE    FL_LPUART_DisableIT_TXBuffEmpty
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableIT_TXBuffEmpty(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_TXIE_Msk);
}

/**
  * @brief    使能LPUART下降沿采样
  * @rmtoll   LPUCON    NEDET    FL_LPUART_Enable_FallingEdgeSampling
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_Enable_FallingEdgeSampling(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_NEDET_Msk);
}

/**
  * @brief    获取LPUART下降沿采样使能状态
  * @rmtoll   LPUCON    NEDET    FL_LPUART_IsEnabled_FallingEdgeSampling
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabled_FallingEdgeSampling(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_NEDET_Msk) == LPUART_LPUCON_NEDET_Msk);
}

/**
  * @brief    关闭LPUART下降沿采样使能
  * @rmtoll   LPUCON    NEDET    FL_LPUART_Disable_FallingEdgeSampling
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_Disable_FallingEdgeSampling(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_NEDET_Msk);
}

/**
  * @brief    使能LPUART校验位
  * @rmtoll   LPUCON    PAREN    FL_LPUART_Enable_ParityChecking
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_Enable_ParityChecking(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_PAREN_Msk);
}

/**
  * @brief    获取LPUART校验位状态
  * @rmtoll   LPUCON    PAREN    FL_LPUART_IsEnabled_ParityChecking
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabled_ParityChecking(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_PAREN_Msk) == LPUART_LPUCON_PAREN_Msk);
}

/**
  * @brief    关闭LPUART校验位使能
  * @rmtoll   LPUCON    PAREN    FL_LPUART_Disable_ParityChecking
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_Disable_ParityChecking(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_PAREN_Msk);
}

/**
  * @brief    设置LPUART校验位
  * @rmtoll   LPUCON    PTYP    FL_LPUART_SetParity
  * @param    LPUARTx LPUART instance
  * @param    parity This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_PARITY_EVEN
  *           @arg @ref FL_LPUART_PARITY_ODD
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetParity(LPUART_Type *LPUARTx, uint32_t parity)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_PTYP_Msk, parity);
}

/**
  * @brief    获取LPUART校验位设置
  * @rmtoll   LPUCON    PTYP    FL_LPUART_GetParity
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_PARITY_EVEN
  *           @arg @ref FL_LPUART_PARITY_ODD
  */
__STATIC_INLINE uint32_t FL_LPUART_GetParity(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_PTYP_Msk));
}

/**
  * @brief    设置LPUART停止位长度
  * @rmtoll   LPUCON    SL    FL_LPUART_SetStopBitsWidth
  * @param    LPUARTx LPUART instance
  * @param    stopBits This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_STOP_BIT_WIDTH_1B
  *           @arg @ref FL_LPUART_STOP_BIT_WIDTH_2B
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetStopBitsWidth(LPUART_Type *LPUARTx, uint32_t stopBits)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_SL_Msk, stopBits);
}

/**
  * @brief    获取LPUART停止位长度设置
  * @rmtoll   LPUCON    SL    FL_LPUART_GetStopBitsWidth
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_STOP_BIT_WIDTH_1B
  *           @arg @ref FL_LPUART_STOP_BIT_WIDTH_2B
  */
__STATIC_INLINE uint32_t FL_LPUART_GetStopBitsWidth(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_SL_Msk));
}

/**
  * @brief    设置LPUART数据长度
  * @rmtoll   LPUCON    DL    FL_LPUART_SetDataWidth
  * @param    LPUARTx LPUART instance
  * @param    dataWidth This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_DATA_WIDTH_8B
  *           @arg @ref FL_LPUART_DATA_WIDTH_7B
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetDataWidth(LPUART_Type *LPUARTx, uint32_t dataWidth)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_DL_Msk, dataWidth);
}

/**
  * @brief    获取LPUART数据长度设置
  * @rmtoll   LPUCON    DL    FL_LPUART_GetDataWidth
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_DATA_WIDTH_8B
  *           @arg @ref FL_LPUART_DATA_WIDTH_7B
  */
__STATIC_INLINE uint32_t FL_LPUART_GetDataWidth(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_DL_Msk));
}

/**
  * @brief    设置LPUART接收数据极性
  * @rmtoll   LPUCON    RXPOL    FL_LPUART_SetRXPolarity
  * @param    LPUARTx LPUART instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_RX_POLARITY_NORMAL
  *           @arg @ref FL_LPUART_RX_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetRXPolarity(LPUART_Type *LPUARTx, uint32_t polarity)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_RXPOL_Msk, polarity);
}

/**
  * @brief    获取LPUART接收数据极性设置
  * @rmtoll   LPUCON    RXPOL    FL_LPUART_GetRXPolarity
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_RX_POLARITY_NORMAL
  *           @arg @ref FL_LPUART_RX_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_LPUART_GetRXPolarity(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_RXPOL_Msk));
}

/**
  * @brief    使能LPUART错误中断
  * @rmtoll   LPUCON    ERRIE    FL_LPUART_EnableIT_Error
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableIT_Error(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_ERRIE_Msk);
}

/**
  * @brief    获取LPUART错误中断使能状态
  * @rmtoll   LPUCON    ERRIE    FL_LPUART_IsEnabledIT_Error
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledIT_Error(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_ERRIE_Msk) == LPUART_LPUCON_ERRIE_Msk);
}

/**
  * @brief    关闭LPUART错误中断
  * @rmtoll   LPUCON    ERRIE    FL_LPUART_DisableIT_Error
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableIT_Error(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_ERRIE_Msk);
}

/**
  * @brief    使能LPUART接收中断
  * @rmtoll   LPUCON    RXIE    FL_LPUART_EnableIT_RXComplete
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableIT_RXComplete(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUCON, LPUART_LPUCON_RXIE_Msk);
}

/**
  * @brief    获取LPUART接收中断使能状态
  * @rmtoll   LPUCON    RXIE    FL_LPUART_IsEnabledIT_RXComplete
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledIT_RXComplete(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_RXIE_Msk) == LPUART_LPUCON_RXIE_Msk);
}

/**
  * @brief    关闭LPUART接收中断
  * @rmtoll   LPUCON    RXIE    FL_LPUART_DisableIT_RXComplete
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableIT_RXComplete(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUCON, LPUART_LPUCON_RXIE_Msk);
}

/**
  * @brief    设置接收唤醒中断事件
  * @rmtoll   LPUCON    RXEV    FL_LPUART_ConfigRXEvent
  * @param    LPUARTx LPUART instance
  * @param    event This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_START
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RECV_1BYTE
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RECV_MATCH
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RX_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ConfigRXEvent(LPUART_Type *LPUARTx, uint32_t event)
{
    MODIFY_REG(LPUARTx->LPUCON, LPUART_LPUCON_RXEV_Msk, event);
}

/**
  * @brief    获取接收唤醒中断事件配置
  * @rmtoll   LPUCON    RXEV    FL_LPUART_GetRXEventConfig
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_START
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RECV_1BYTE
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RECV_MATCH
  *           @arg @ref FL_LPUART_WAKEUP_EVENT_RX_FALLING
  */
__STATIC_INLINE uint32_t FL_LPUART_GetRXEventConfig(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUCON, LPUART_LPUCON_RXEV_Msk));
}


/**
  * @brief    获取发送完成中断标志
  * @rmtoll   LPUIF    TC_IF    FL_LPUART_IsActiveFlag_TXComplete
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_TXComplete(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUIF, LPUART_LPUIF_TC_IF_Msk) == (LPUART_LPUIF_TC_IF_Msk));
}

/**
  * @brief    清除发送完成中断标志
  * @rmtoll   LPUIF    TC_IF    FL_LPUART_ClearFlag_TXComplete
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_TXComplete(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUIF, LPUART_LPUIF_TC_IF_Msk);
}

/**
  * @brief    获取发送缓存空中断标志
  * @rmtoll   LPUIF    TC_IF    FL_LPUART_IsActiveFlag_TXBuffEmpty
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_TXBuffEmpty(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUIF, LPUART_LPUIF_TXIF_Msk) == (LPUART_LPUIF_TXIF_Msk));
}

/**
  * @brief    清除发送缓存空中断标志
  * @rmtoll   LPUIF    TC_IF    FL_LPUART_ClearFlag_TXBuffEmpty
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_TXBuffEmpty(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUIF, LPUART_LPUIF_TXIF_Msk);
}

/**
  * @brief    获取RX下降沿中断标志
  * @rmtoll   LPUIF    RXNEGIF    FL_LPUART_IsActiveFlag_RXFallingEdge
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_RXFallingEdge(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUIF, LPUART_LPUIF_RXNEGIF_Msk) == (LPUART_LPUIF_RXNEGIF_Msk));
}

/**
  * @brief    清除RX下降沿中断标志
  * @rmtoll   LPUIF    RXNEGIF    FL_LPUART_ClearFlag_RXFallingEdge
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_RXFallingEdge(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUIF, LPUART_LPUIF_RXNEGIF_Msk);
}

/**
  * @brief    获取接收数据完成中断标志
  * @rmtoll   LPUIF    RXIF    FL_LPUART_IsActiveFlag_RXComplete
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsActiveFlag_RXComplete(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUIF, LPUART_LPUIF_RXIF_Msk) == (LPUART_LPUIF_RXIF_Msk));
}

/**
  * @brief    清除接收数据完成中断标志
  * @rmtoll   LPUIF    RXIF    FL_LPUART_ClearFlag_RXComplete
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_ClearFlag_RXComplete(LPUART_Type *LPUARTx)
{
    WRITE_REG(LPUARTx->LPUIF, LPUART_LPUIF_RXIF_Msk);
}

/**
  * @brief    设置LPUART波特率
  * @rmtoll   LPUBAUD    BAUD    FL_LPUART_SetBaudRate
  * @param    LPUARTx LPUART instance
  * @param    baudRate This parameter can be one of the following values:
  *           @arg @ref FL_LPUART_BAUDRATE_9600
  *           @arg @ref FL_LPUART_BAUDRATE_4800
  *           @arg @ref FL_LPUART_BAUDRATE_2400
  *           @arg @ref FL_LPUART_BAUDRATE_1200
  *           @arg @ref FL_LPUART_BAUDRATE_600
  *           @arg @ref FL_LPUART_BAUDRATE_300
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_SetBaudRate(LPUART_Type *LPUARTx, uint32_t baudRate)
{
    MODIFY_REG(LPUARTx->LPUBAUD, LPUART_LPUBAUD_BAUD_Msk, baudRate);
}

/**
  * @brief    获取LPUART波特率
  * @rmtoll   LPUBAUD    BAUD    FL_LPUART_GetBaudRate
  * @param    LPUARTx LPUART instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPUART_BAUDRATE_9600
  *           @arg @ref FL_LPUART_BAUDRATE_4800
  *           @arg @ref FL_LPUART_BAUDRATE_2400
  *           @arg @ref FL_LPUART_BAUDRATE_1200
  *           @arg @ref FL_LPUART_BAUDRATE_600
  *           @arg @ref FL_LPUART_BAUDRATE_300
  */
__STATIC_INLINE uint32_t FL_LPUART_GetBaudRate(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUBAUD, LPUART_LPUBAUD_BAUD_Msk));
}

/**
  * @brief    使能LPUART发送
  * @rmtoll   LPUEN    TXEN    FL_LPUART_EnableTX
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableTX(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUEN, LPUART_LPUEN_TXEN_Msk);
}

/**
  * @brief    获取LPUART发送使能状态
  * @rmtoll   LPUEN    TXEN    FL_LPUART_IsEnabledTX
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledTX(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUEN, LPUART_LPUEN_TXEN_Msk) == LPUART_LPUEN_TXEN_Msk);
}

/**
  * @brief    关闭LPUART发送
  * @rmtoll   LPUEN    TXEN    FL_LPUART_DisableTX
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableTX(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUEN, LPUART_LPUEN_TXEN_Msk);
}

/**
  * @brief    使能LPUART接收
  * @rmtoll   LPUEN    RXEN    FL_LPUART_EnableRX
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_EnableRX(LPUART_Type *LPUARTx)
{
    SET_BIT(LPUARTx->LPUEN, LPUART_LPUEN_RXEN_Msk);
}

/**
  * @brief    获取LPUART接收使能状态
  * @rmtoll   LPUEN    RXEN    FL_LPUART_IsEnabledRX
  * @param    LPUARTx LPUART instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPUART_IsEnabledRX(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->LPUEN, LPUART_LPUEN_RXEN_Msk) == LPUART_LPUEN_RXEN_Msk);
}

/**
  * @brief    关闭LPUART接收
  * @rmtoll   LPUEN    RXEN    FL_LPUART_DisableRX
  * @param    LPUARTx LPUART instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_DisableRX(LPUART_Type *LPUARTx)
{
    CLEAR_BIT(LPUARTx->LPUEN, LPUART_LPUEN_RXEN_Msk);
}

/**
  * @brief    设置LPUART接收匹配数据
  * @rmtoll   COMPARE        FL_LPUART_WriteMatchData
  * @param    LPUARTx LPUART instance
  * @param    data The value of match under SLEEP MODE
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_WriteMatchData(LPUART_Type *LPUARTx, uint32_t data)
{
    MODIFY_REG(LPUARTx->COMPARE, (0xffU << 0U), (data << 0U));
}

/**
  * @brief    获取LPUART接收匹配数据
  * @rmtoll   COMPARE        FL_LPUART_ReadMatchData
  * @param    LPUARTx LPUART instance
  * @retval   The value of match data under SLEEP MODE
  */
__STATIC_INLINE uint32_t FL_LPUART_ReadMatchData(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->COMPARE, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    设置LPUART每个Bit的调制长度
  * @rmtoll   MCTL        FL_LPUART_WriteBitModulation
  * @param    LPUARTx LPUART instance
  * @param    bitModulation The value of Bit Modulation Control
  * @retval   None
  */
__STATIC_INLINE void FL_LPUART_WriteBitModulation(LPUART_Type *LPUARTx, uint32_t bitModulation)
{
    MODIFY_REG(LPUARTx->MODU, (0xfffU << 0U), (bitModulation << 0U));
}

/**
  * @brief    获取LPUART每个Bit的调制长度
  * @rmtoll   MCTL        FL_LPUART_ReadBitModulation
  * @param    LPUARTx LPUART instance
  * @retval   The value of Bit Modulation Control
  */
__STATIC_INLINE uint32_t FL_LPUART_ReadBitModulation(LPUART_Type *LPUARTx)
{
    return (uint32_t)(READ_BIT(LPUARTx->MODU, (0xfffU << 0U)) >> 0U);
}

/**
  * @}
  */

/** @defgroup LPUART_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_LPUART_DeInit(LPUART_Type *LPUARTx);
FL_ErrorStatus FL_LPUART_Init(LPUART_Type *LPUARTx, FL_LPUART_InitTypeDef *initStruct);
void FL_LPUART_StructInit(FL_LPUART_InitTypeDef *initStruct);
/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_LPUART_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-05*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
