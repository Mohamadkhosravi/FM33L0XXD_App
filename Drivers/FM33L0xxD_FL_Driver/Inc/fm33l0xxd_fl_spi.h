/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_spi.h
  * @author  FMSH Application Team
  * @brief   Head file of SPI FL Module
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


/* Define to prevent recursive inclusion---------------------------------------------------------------*/
#ifndef __FM33L0XXD_FL_SPI_H
#define __FM33L0XXD_FL_SPI_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup SPI_FL_ES_INIT SPI Exported Init structures
  * @{
  */

/**
  * @brief FL SPI Init Sturcture definition
  */
typedef struct
{

   /*! 主从模式 */
    uint32_t mode;
    /*! 时钟极性 */
    uint32_t clockPolarity;
    /*! 时钟相位 */
    uint32_t clockPhase;
    /*! NSS 脚使能软件控制 */
    FL_FunState softControl;
    /*! 通讯速率 */
    uint32_t baudRate;
    /*! Bit方向 */
    uint32_t bitOrder;

} FL_SPI_InitTypeDef;



/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup SPI_FL_Exported_Constants SPI Exported Constants
  * @{
  */

#define    SPI_SPICR1_MSPA_Pos                                    (10U)
#define    SPI_SPICR1_MSPA_Msk                                    (0x1U << SPI_SPICR1_MSPA_Pos)
#define    SPI_SPICR1_MSPA                                        SPI_SPICR1_MSPA_Msk

#define    SPI_SPICR1_SSPA_Pos                                    (9U)
#define    SPI_SPICR1_SSPA_Msk                                    (0x1U << SPI_SPICR1_SSPA_Pos)
#define    SPI_SPICR1_SSPA                                        SPI_SPICR1_SSPA_Msk

#define    SPI_SPICR1_MM_Pos                                      (8U)
#define    SPI_SPICR1_MM_Msk                                      (0x1U << SPI_SPICR1_MM_Pos)
#define    SPI_SPICR1_MM                                          SPI_SPICR1_MM_Msk

#define    SPI_SPICR1_WAIT_Pos                                    (6U)
#define    SPI_SPICR1_WAIT_Msk                                    (0x3U << SPI_SPICR1_WAIT_Pos)
#define    SPI_SPICR1_WAIT                                        SPI_SPICR1_WAIT_Msk

#define    SPI_SPICR1_BAUD_Pos                                    (3U)
#define    SPI_SPICR1_BAUD_Msk                                    (0x7U << SPI_SPICR1_BAUD_Pos)
#define    SPI_SPICR1_BAUD                                        SPI_SPICR1_BAUD_Msk

#define    SPI_SPICR1_LSBF_Pos                                    (2U)
#define    SPI_SPICR1_LSBF_Msk                                    (0x1U << SPI_SPICR1_LSBF_Pos)
#define    SPI_SPICR1_LSBF                                        SPI_SPICR1_LSBF_Msk

#define    SPI_SPICR1_CPOL_Pos                                    (1U)
#define    SPI_SPICR1_CPOL_Msk                                    (0x1U << SPI_SPICR1_CPOL_Pos)
#define    SPI_SPICR1_CPOL                                        SPI_SPICR1_CPOL_Msk

#define    SPI_SPICR1_CPHA_Pos                                    (0U)
#define    SPI_SPICR1_CPHA_Msk                                    (0x1U << SPI_SPICR1_CPHA_Pos)
#define    SPI_SPICR1_CPHA                                        SPI_SPICR1_CPHA_Msk

#define    SPI_SPICR2_FLTEN_Pos                                   (6U)
#define    SPI_SPICR2_FLTEN_Msk                                   (0x1U << SPI_SPICR2_FLTEN_Pos)
#define    SPI_SPICR2_FLTEN                                       SPI_SPICR2_FLTEN_Msk

#define    SPI_SPICR2_SSNM_Pos                                    (5U)
#define    SPI_SPICR2_SSNM_Msk                                    (0x1U << SPI_SPICR2_SSNM_Pos)
#define    SPI_SPICR2_SSNM                                        SPI_SPICR2_SSNM_Msk

#define    SPI_SPICR2_TXO_AC_Pos                                  (4U)
#define    SPI_SPICR2_TXO_AC_Msk                                  (0x1U << SPI_SPICR2_TXO_AC_Pos)
#define    SPI_SPICR2_TXO_AC                                      SPI_SPICR2_TXO_AC_Msk

#define    SPI_SPICR2_TXO_Pos                                     (3U)
#define    SPI_SPICR2_TXO_Msk                                     (0x1U << SPI_SPICR2_TXO_Pos)
#define    SPI_SPICR2_TXO                                         SPI_SPICR2_TXO_Msk

#define    SPI_SPICR2_SSN_Pos                                     (2U)
#define    SPI_SPICR2_SSN_Msk                                     (0x1U << SPI_SPICR2_SSN_Pos)
#define    SPI_SPICR2_SSN                                         SPI_SPICR2_SSN_Msk

#define    SPI_SPICR2_SSNSEN_Pos                                  (1U)
#define    SPI_SPICR2_SSNSEN_Msk                                  (0x1U << SPI_SPICR2_SSNSEN_Pos)
#define    SPI_SPICR2_SSNSEN                                      SPI_SPICR2_SSNSEN_Msk

#define    SPI_SPICR2_SPIEN_Pos                                   (0U)
#define    SPI_SPICR2_SPIEN_Msk                                   (0x1U << SPI_SPICR2_SPIEN_Pos)
#define    SPI_SPICR2_SPIEN                                       SPI_SPICR2_SPIEN_Msk

#define    SPI_SPICR3_TXBFC_Pos                                   (3U)
#define    SPI_SPICR3_TXBFC_Msk                                   (0x1U << SPI_SPICR3_TXBFC_Pos)
#define    SPI_SPICR3_TXBFC                                       SPI_SPICR3_TXBFC_Msk

#define    SPI_SPICR3_RXBFC_Pos                                   (2U)
#define    SPI_SPICR3_RXBFC_Msk                                   (0x1U << SPI_SPICR3_RXBFC_Pos)
#define    SPI_SPICR3_RXBFC                                       SPI_SPICR3_RXBFC_Msk

#define    SPI_SPICR3_MERRC_Pos                                   (1U)
#define    SPI_SPICR3_MERRC_Msk                                   (0x1U << SPI_SPICR3_MERRC_Pos)
#define    SPI_SPICR3_MERRC                                       SPI_SPICR3_MERRC_Msk

#define    SPI_SPICR3_SERRC_Pos                                   (0U)
#define    SPI_SPICR3_SERRC_Msk                                   (0x1U << SPI_SPICR3_SERRC_Pos)
#define    SPI_SPICR3_SERRC                                       SPI_SPICR3_SERRC_Msk

#define    SPI_SPIIE_ERRIE_Pos                                    (2U)
#define    SPI_SPIIE_ERRIE_Msk                                    (0x1U << SPI_SPIIE_ERRIE_Pos)
#define    SPI_SPIIE_ERRIE                                        SPI_SPIIE_ERRIE_Msk

#define    SPI_SPIIE_TXIE_Pos                                     (1U)
#define    SPI_SPIIE_TXIE_Msk                                     (0x1U << SPI_SPIIE_TXIE_Pos)
#define    SPI_SPIIE_TXIE                                         SPI_SPIIE_TXIE_Msk

#define    SPI_SPIIE_RXIE_Pos                                     (0U)
#define    SPI_SPIIE_RXIE_Msk                                     (0x1U << SPI_SPIIE_RXIE_Pos)
#define    SPI_SPIIE_RXIE                                         SPI_SPIIE_RXIE_Msk

#define    SPI_SPIIF_MERR_Pos                                     (6U)
#define    SPI_SPIIF_MERR_Msk                                     (0x1U << SPI_SPIIF_MERR_Pos)
#define    SPI_SPIIF_MERR                                         SPI_SPIIF_MERR_Msk

#define    SPI_SPIIF_SERR_Pos                                     (5U)
#define    SPI_SPIIF_SERR_Msk                                     (0x1U << SPI_SPIIF_SERR_Pos)
#define    SPI_SPIIF_SERR                                         SPI_SPIIF_SERR_Msk

#define    SPI_SPIIF_RXCOL_Pos                                    (4U)
#define    SPI_SPIIF_RXCOL_Msk                                    (0x1U << SPI_SPIIF_RXCOL_Pos)
#define    SPI_SPIIF_RXCOL                                        SPI_SPIIF_RXCOL_Msk

#define    SPI_SPIIF_TXCOL_Pos                                    (3U)
#define    SPI_SPIIF_TXCOL_Msk                                    (0x1U << SPI_SPIIF_TXCOL_Pos)
#define    SPI_SPIIF_TXCOL                                        SPI_SPIIF_TXCOL_Msk

#define    SPI_SPIIF_BUSY_Pos                                     (2U)
#define    SPI_SPIIF_BUSY_Msk                                     (0x1U << SPI_SPIIF_BUSY_Pos)
#define    SPI_SPIIF_BUSY                                         SPI_SPIIF_BUSY_Msk


#define    SPI_SPIIF_TXBE_Pos                                     (1U)
#define    SPI_SPIIF_TXBE_Msk                                     (0x1U << SPI_SPIIF_TXBE_Pos)
#define    SPI_SPIIF_TXBE                                         SPI_SPIIF_TXBE_Msk

#define    SPI_SPIIF_RXBF_Pos                                     (0U)
#define    SPI_SPIIF_RXBF_Msk                                     (0x1U << SPI_SPIIF_RXBF_Pos)
#define    SPI_SPIIF_RXBF                                         SPI_SPIIF_RXBF_Msk

#define    SPI_TXBUF_TXBUF_Pos                       					   (0U)
#define    SPI_TXBUF_TXBUF_Msk                       					   (0xffU << SPI_TXBUF_TXBUF_Pos)
#define    SPI_TXBUF_TXBUF                           					   SPI_TXBUF_TXBUF_Msk
					
#define    SPI_RXBUF_RXBUF_Pos                       					   (0U)
#define    SPI_RXBUF_RXBUF_Msk                       					   (0xffU << SPI_RXBUF_RXBUF_Pos)
#define    SPI_RXBUF_RXBUF                           					   SPI_RXBUF_RXBUF_Msk






#define    FL_SPI_MASTER_SAMPLING_NORMAL                          (0x0U << SPI_SPICR1_MSPA_Pos)
#define    FL_SPI_MASTER_SAMPLING_DELAY_HALFCLK                   (0x1U << SPI_SPICR1_MSPA_Pos)


#define    FL_SPI_SLAVE_SAMPLING_NORMAL                           (0x0U << SPI_SPICR1_SSPA_Pos)
#define    FL_SPI_SLAVE_SAMPLING_ADVANCE_HALFCLK                  (0x1U << SPI_SPICR1_SSPA_Pos)


#define    FL_SPI_WORK_MODE_SLAVE                                 (0x0U << SPI_SPICR1_MM_Pos)
#define    FL_SPI_WORK_MODE_MASTER                                (0x1U << SPI_SPICR1_MM_Pos)


#define    FL_SPI_SEND_WAIT_1                                     (0x0U << SPI_SPICR1_WAIT_Pos)
#define    FL_SPI_SEND_WAIT_2                                     (0x1U << SPI_SPICR1_WAIT_Pos)
#define    FL_SPI_SEND_WAIT_3                                     (0x2U << SPI_SPICR1_WAIT_Pos)
#define    FL_SPI_SEND_WAIT_4                                     (0x3U << SPI_SPICR1_WAIT_Pos)


#define    FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV2                     (0x0U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV4                     (0x1U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV4_SPI12DIV8                     (0x2U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV8_SPI12DIV16                    (0x3U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV16_SPI12DIV32                   (0x4U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV32_SPI12DIV64                   (0x5U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV64_SPI12DIV128                  (0x6U << SPI_SPICR1_BAUD_Pos)
#define    FL_SPI_BAUDRATE_SPI0DIV128_SPI12DIV256                 (0x7U << SPI_SPICR1_BAUD_Pos)


#define    FL_SPI_BIT_ORDER_MSB_FIRST                             (0x0U << SPI_SPICR1_LSBF_Pos)
#define    FL_SPI_BIT_ORDER_LSB_FIRST                             (0x1U << SPI_SPICR1_LSBF_Pos)


#define    FL_SPI_POLARITY_NORMAL                                 (0x0U << SPI_SPICR1_CPOL_Pos)
#define    FL_SPI_POLARITY_INVERT                                 (0x1U << SPI_SPICR1_CPOL_Pos)


#define    FL_SPI_PHASE_EDGE1                                     (0x0U << SPI_SPICR1_CPHA_Pos)
#define    FL_SPI_PHASE_EDGE2                                     (0x1U << SPI_SPICR1_CPHA_Pos)


#define    FL_SPI_HARDWARE_SSN_AUTO_HIGH                          (0x0U << SPI_SPICR2_SSNM_Pos)
#define    FL_SPI_HARDWARE_SSN_KEEP_LOW                           (0x1U << SPI_SPICR2_SSNM_Pos)


#define    FL_SPI_SSN_LOW                                         (0x0U << SPI_SPICR2_SSN_Pos)
#define    FL_SPI_SSN_HIGH                                        (0x1U << SPI_SPICR2_SSN_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup SPI_FL_Exported_Functions SPI Exported Functions
  * @{
  */

/**
  * @brief    Set Master Sampling Position Adjustment
  * @note     For SPI1 And SPI2 Only
  * @rmtoll   SPICR1    MSPA    FL_SPI_SetMasterSamplingAdjust
  * @param    SPIx SPI instance
  * @param    adjust This parameter can be one of the following values:
  *           @arg @ref FL_SPI_MASTER_SAMPLING_NORMAL
  *           @arg @ref FL_SPI_MASTER_SAMPLING_DELAY_HALFCLK
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetMasterSamplingAdjust(SPI_Type* SPIx, uint32_t adjust)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_MSPA_Msk, adjust);
}

/**
  * @brief    Get Master Sampling Position Adjustment
  * @note     For SPI1 And SPI2 Only
  * @rmtoll   SPICR1    MSPA    FL_SPI_GetMasterSamplingAdjust
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_MASTER_SAMPLING_NORMAL
  *           @arg @ref FL_SPI_MASTER_SAMPLING_DELAY_HALFCLK
  */
__STATIC_INLINE uint32_t FL_SPI_GetMasterSamplingAdjust(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_MSPA_Msk));
}

/**
  * @brief    Set Slave Sending Position Adjustment
  * @note     For SPI1 And SPI2 Only
  * @rmtoll   SPICR1    SSPA    FL_SPI_SetSlaveSamplingAdjust
  * @param    SPIx SPI instance
  * @param    adjust This parameter can be one of the following values:
  *           @arg @ref FL_SPI_SLAVE_SAMPLING_NORMAL
  *           @arg @ref FL_SPI_SLAVE_SAMPLING_ADVANCE_HALFCLK
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetSlaveSamplingAdjust(SPI_Type* SPIx, uint32_t adjust)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_SSPA_Msk, adjust);
}

/**
  * @brief    Get Slave Sending Position Adjustment
  * @note     For SPI1 And SPI2 Only
  * @rmtoll   SPICR1    SSPA    FL_SPI_GetSlaveSamplingAdjust
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_SLAVE_SAMPLING_NORMAL
  *           @arg @ref FL_SPI_SLAVE_SAMPLING_ADVANCE_HALFCLK
  */
__STATIC_INLINE uint32_t FL_SPI_GetSlaveSamplingAdjust(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_SSPA_Msk));
}

/**
  * @brief    Set SPI Working Mode
  * @rmtoll   SPICR1    MM    FL_SPI_SetWorkMode
  * @param    SPIx SPI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SPI_WORK_MODE_SLAVE
  *           @arg @ref FL_SPI_WORK_MODE_MASTER
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetWorkMode(SPI_Type* SPIx, uint32_t mode)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_MM_Msk, mode);
}

/**
  * @brief    Get SPI Working Mode
  * @rmtoll   SPICR1    MM    FL_SPI_GetWorkMode
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_WORK_MODE_SLAVE
  *           @arg @ref FL_SPI_WORK_MODE_MASTER
  */
__STATIC_INLINE uint32_t FL_SPI_GetWorkMode(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_MM_Msk));
}

/**
  * @brief    Set SPI Send Wait Cycle Length in Master Mode
  * @rmtoll   SPICR1    WAIT    FL_SPI_SetSendWait
  * @param    SPIx SPI instance
  * @param    wait This parameter can be one of the following values:
  *           @arg @ref FL_SPI_SEND_WAIT_1
  *           @arg @ref FL_SPI_SEND_WAIT_2
  *           @arg @ref FL_SPI_SEND_WAIT_3
  *           @arg @ref FL_SPI_SEND_WAIT_4
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetSendWait(SPI_Type* SPIx, uint32_t wait)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_WAIT_Msk, wait);
}

/**
  * @brief    Get SPI Send Wait Cycle Length in Master Mode
  * @rmtoll   SPICR1    WAIT    FL_SPI_GetSendWait
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_SPI_GetSendWait(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_WAIT_Msk));
}

/**
  * @brief    Set SPI Baudrate in Master Mode
  * @rmtoll   SPICR1    BAUD    FL_SPI_SetClockDivision
  * @param    SPIx SPI instance
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV2
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV4
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV4_SPI12DIV8
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV8_SPI12DIV16
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV16_SPI12DIV32
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV32_SPI12DIV64
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV64_SPI12DIV128
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV128_SPI12DIV256         
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetClockDivision(SPI_Type* SPIx, uint32_t clock)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_BAUD_Msk, clock);
}

/**
  * @brief    Get SPI Baudrate in Master Mode
  * @rmtoll   SPICR1    BAUD    FL_SPI_GetClockDivision
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV2
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV2_SPI12DIV4
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV4_SPI12DIV8
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV8_SPI12DIV16
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV16_SPI12DIV32
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV32_SPI12DIV64
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV64_SPI12DIV128
  *           @arg @ref FL_SPI_BAUDRATE_SPI0DIV128_SPI12DIV256  
  */
__STATIC_INLINE uint32_t FL_SPI_GetClockDivision(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_BAUD_Msk));
}

/**
  * @brief    Set SPI Bit Order
  * @rmtoll   SPICR1    LSBF    FL_SPI_SetBitOrder
  * @param    SPIx SPI instance
  * @param    bitOrder This parameter can be one of the following values:
  *           @arg @ref FL_SPI_BIT_ORDER_MSB_FIRST
  *           @arg @ref FL_SPI_BIT_ORDER_LSB_FIRST
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetBitOrder(SPI_Type* SPIx, uint32_t bitOrder)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_LSBF_Msk, bitOrder);
}

/**
  * @brief    Get SPI Bit Order
  * @rmtoll   SPICR1    LSBF    FL_SPI_GetBitOrder
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_BIT_ORDER_MSB_FIRST
  *           @arg @ref FL_SPI_BIT_ORDER_LSB_FIRST
  */
__STATIC_INLINE uint32_t FL_SPI_GetBitOrder(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_LSBF_Msk));
}

/**
  * @brief    Set SPI Clock Polarity
  * @rmtoll   SPICR1    CPOL    FL_SPI_SetClockPolarity
  * @param    SPIx SPI instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_SPI_POLARITY_NORMAL
  *           @arg @ref FL_SPI_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetClockPolarity(SPI_Type* SPIx, uint32_t polarity)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_CPOL_Msk, polarity);
}

/**
  * @brief    Get SPI Clock Polarity
  * @rmtoll   SPICR1    CPOL    FL_SPI_GetClockPolarity
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_POLARITY_NORMAL
  *           @arg @ref FL_SPI_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_SPI_GetClockPolarity(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_CPOL_Msk));
}

/**
  * @brief    Set SPI Clock Phase
  * @rmtoll   SPICR1    CPHA    FL_SPI_SetClockPhase
  * @param    SPIx SPI instance
  * @param    phase This parameter can be one of the following values:
  *           @arg @ref FL_SPI_PHASE_EDGE1
  *           @arg @ref FL_SPI_PHASE_EDGE2
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetClockPhase(SPI_Type* SPIx, uint32_t phase)
{
    MODIFY_REG(SPIx->SPICR1, SPI_SPICR1_CPHA_Msk, phase);
}

/**
  * @brief    Get SPI Clock Phase
  * @rmtoll   SPICR1    CPHA    FL_SPI_GetClockPhase
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_PHASE_EDGE1
  *           @arg @ref FL_SPI_PHASE_EDGE2
  */
__STATIC_INLINE uint32_t FL_SPI_GetClockPhase(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR1, SPI_SPICR1_CPHA_Msk));
}

/**
  * @brief    Enable SPI Pin Filtering
  * @rmtoll   SPICR2    FLTEN    FL_SPI_PinFiltering_Enable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_PinFiltering_Enable(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPICR2, SPI_SPICR2_FLTEN_Msk);
}

/**
  * @brief    Get SPI Pin Filtering Enable Status
  * @rmtoll   SPICR2    FLTEN    FL_SPI_PinFiltering_IsEnabled
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_PinFiltering_IsEnabled(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_FLTEN_Msk) == SPI_SPICR2_FLTEN_Msk);
}

/**
  * @brief    Disable SPI Pin Filtering
  * @rmtoll   SPICR2    FLTEN    FL_SPI_PinFiltering_Disable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_PinFiltering_Disable(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPICR2, SPI_SPICR2_FLTEN_Msk);
}

/**
  * @brief    Set SPI SSN Hard Pin Mode
  * @rmtoll   SPICR2    SSNM    FL_SPI_SetHardwareSSNMode
  * @param    SPIx SPI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SPI_HARDWARE_SSN_AUTO_HIGH
  *           @arg @ref FL_SPI_HARDWARE_SSN_KEEP_LOW
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetHardwareSSNMode(SPI_Type* SPIx, uint32_t mode)
{
    MODIFY_REG(SPIx->SPICR2, SPI_SPICR2_SSNM_Msk, mode);
}

/**
  * @brief    Get SPI SSN Hard Pin Mode
  * @rmtoll   SPICR2    SSNM    FL_SPI_GetHardwareSSNMode
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_HARDWARE_SSN_AUTO_HIGH
  *           @arg @ref FL_SPI_HARDWARE_SSN_KEEP_LOW
  */
__STATIC_INLINE uint32_t FL_SPI_GetHardwareSSNMode(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_SSNM_Msk));
}

/**
  * @brief    Enabel TX Only Mode Auto Disable
  * @rmtoll   SPICR2    TXO_AC    FL_SPI_EnableTXOnlyModeAutoDisable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableTXOnlyModeAutoDisable(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_AC_Msk);
}

/**
  * @brief    Disable TX Only Mode Auto Disable
  * @rmtoll   SPICR2    TXO_AC    FL_SPI_DisableTXOnlyModeAutoDisable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableTXOnlyModeAutoDisable(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_AC_Msk);
}

/**
  * @brief    Get TX Only Mode Auto Disable Setting
  * @rmtoll   SPICR2    TXO_AC    FL_SPI_IsEnabledTXOnlyModeAutoDisable
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledTXOnlyModeAutoDisable(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_AC_Msk) == SPI_SPICR2_TXO_AC_Msk);
}

/**
  * @brief    EnableSPI TX Only Mode
  * @rmtoll   SPICR2    TXO    FL_SPI_EnableTXOnlyMode
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableTXOnlyMode(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_Msk);
}

/**
  * @brief    Get SPI TX Only Mode Setting State
  * @rmtoll   SPICR2    TXO    FL_SPI_IsEnabledTXOnlyMode
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledTXOnlyMode(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_Msk) == SPI_SPICR2_TXO_Msk);
}

/**
  * @brief    Diasble SPI TX Only Mode
  * @rmtoll   SPICR2    TXO    FL_SPI_DisableTXOnlyMode
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableTXOnlyMode(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPICR2, SPI_SPICR2_TXO_Msk);
}




/**
  * @brief    Set SSN Pin
  * @rmtoll   SPICR2    SSN    FL_SPI_SetSSNPin
  * @param    SPIx SPI instance
  * @param    state This parameter can be one of the following values:
  *           @arg @ref FL_SPI_SSN_LOW
  *           @arg @ref FL_SPI_SSN_HIGH
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_SetSSNPin(SPI_Type* SPIx, uint32_t state)
{
    MODIFY_REG(SPIx->SPICR2, SPI_SPICR2_SSN_Msk, state);
}

/**
  * @brief    Get SSN Pin  Setting
  * @rmtoll   SPICR2    SSN    FL_SPI_GetSSNPin
  * @param    SPIx SPI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SPI_SSN_LOW
  *           @arg @ref FL_SPI_SSN_HIGH
  */
__STATIC_INLINE uint32_t FL_SPI_GetSSNPin(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_SSN_Msk));
}

/**
  * @brief    Enable SNN Sofe Control Under Master Mode
  * @rmtoll   SPICR2    SSNSEN    FL_SPI_EnableSSNSoftControl
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableSSNSoftControl(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPICR2, SPI_SPICR2_SSNSEN_Msk);
}

/**
  * @brief    Get SNN Sofe Control State Under Master Mode
  * @rmtoll   SPICR2    SSNSEN    FL_SPI_IsEnabledSSNSoftControl
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledSSNSoftControl(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_SSNSEN_Msk) == SPI_SPICR2_SSNSEN_Msk);
}

/**
  * @brief    Disable SNN Sofe Control Under Master Mode
  * @rmtoll   SPICR2    SSNSEN    FL_SPI_DisableSSNSoftControl
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableSSNSoftControl(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPICR2, SPI_SPICR2_SSNSEN_Msk);
}

/**
  * @brief    Enable SPI
  * @rmtoll   SPICR2    SPIEN    FL_SPI_Enable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_Enable(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPICR2, SPI_SPICR2_SPIEN_Msk);
}

/**
  * @brief    Get SPI Enable Status
  * @rmtoll   SPICR2    SPIEN    FL_SPI_IsEnabled
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabled(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPICR2, SPI_SPICR2_SPIEN_Msk) == SPI_SPICR2_SPIEN_Msk);
}

/**
  * @brief    Disable SPI
  * @rmtoll   SPICR2    SPIEN    FL_SPI_Disable
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_Disable(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPICR2, SPI_SPICR2_SPIEN_Msk);
}

/**
  * @brief    Get SPI TX Buffer	Flag
  * @rmtoll   SPICR3    TXBFC    FL_SPI_IsActiveFlag_TXBuff
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActive_TXBuff(SPI_Type* SPIx)
{
		return (uint32_t)(READ_BIT(SPIx->SPICR3, SPI_SPICR3_TXBFC_Msk) == SPI_SPICR3_TXBFC_Msk);
}

/**
  * @brief    Get SPI RX Buffer Flag
  * @rmtoll   SPICR3    RXBFC    FL_SPI_IsActiveFlag_RXBuff
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActive_RXBuff(SPI_Type* SPIx)
{
		return (uint32_t)(READ_BIT(SPIx->SPICR3, SPI_SPICR3_RXBFC_Msk) == SPI_SPICR3_RXBFC_Msk);
}

/**
  * @brief    Get SPI Master Error 
  * @rmtoll   SPICR3    MERRC    FL_SPI_IsActiveFlag_Master
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActive_MasterError(SPI_Type* SPIx)
{
		return (uint32_t)(READ_BIT(SPIx->SPICR3, SPI_SPICR3_MERRC_Msk) == SPI_SPICR3_MERRC_Msk);
}

/**
  * @brief    Get SPI Slave Error 
  * @rmtoll   SPICR3    SERRC    FL_SPI_IsActiveFlag_SlaveError
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActive_SlaveError(SPI_Type* SPIx)
{
	return (uint32_t)(READ_BIT(SPIx->SPICR3, SPI_SPICR3_SERRC_Msk) == SPI_SPICR3_SERRC_Msk);
}

/**
  * @brief    Clear SPI TX Buffer	Flag
  * @rmtoll   SPICR3    TXBFC    FL_SPI_ClearFlag_TXBuff
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_TXBuff(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPICR3, SPI_SPICR3_TXBFC_Msk);
}

/**
  * @brief    Clear SPI RX Buffer Flag
  * @rmtoll   SPICR3    RXBFC    FL_SPI_ClearFlag_RXBuff
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_RXBuff(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPICR3, SPI_SPICR3_RXBFC_Msk);
}

/**
  * @brief    Clear SPI Master Error Flag
  * @rmtoll   SPICR3    MERRC    FL_SPI_ClearFlag_MasterError
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_MasterError(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPICR3, SPI_SPICR3_MERRC_Msk);
}

/**
  * @brief    Clear SPI Slave Error Flag
  * @rmtoll   SPICR3    SERRC    FL_SPI_ClearFlag_SlaveError
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_SlaveError(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPICR3, SPI_SPICR3_SERRC_Msk);
}







/**
  * @brief    Disable SPI Error Interrupt
  * @rmtoll   SPIIE    ERRIE    FL_SPI_DisableIT_Error
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableIT_Error(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPIIE, SPI_SPIIE_ERRIE_Msk);
}

/**
  * @brief    Enable SPI Error Interrupt
  * @rmtoll   SPIIE    ERRIE    FL_SPI_EnableIT_Error
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableIT_Error(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPIIE, SPI_SPIIE_ERRIE_Msk);
}

/**
  * @brief    Get SPI Error Interrupt Enable Status
  * @rmtoll   SPIIE    ERRIE    FL_SPI_IsEnabledIT_Error
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledIT_Error(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIE, SPI_SPIIE_ERRIE_Msk) == SPI_SPIIE_ERRIE_Msk);
}

/**
  * @brief    Disable SPI Transmit Complete Interrupt
  * @rmtoll   SPIIE    TXIE    FL_SPI_DisableIT_TXComplete
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableIT_TXComplete(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPIIE, SPI_SPIIE_TXIE_Msk);
}

/**
  * @brief    Enable SPI Transmit Complete Interrupt
  * @rmtoll   SPIIE    TXIE    FL_SPI_EnableIT_TXComplete
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableIT_TXComplete(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPIIE, SPI_SPIIE_TXIE_Msk);
}

/**
  * @brief    Get SPI Transmit Complete Interrupt Enable Status
  * @rmtoll   SPIIE    TXIE    FL_SPI_IsEnabledIT_TXComplete
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledIT_TXComplete(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIE, SPI_SPIIE_TXIE_Msk) == SPI_SPIIE_TXIE_Msk);
}
/**
  * @brief    Disable SPI Receive Complete Interrupt
  * @rmtoll   SPIIE    RXIE    FL_SPI_DisableIT_RXComplete
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_DisableIT_RXComplete(SPI_Type* SPIx)
{
    CLEAR_BIT(SPIx->SPIIE, SPI_SPIIE_RXIE_Msk);
}

/**
  * @brief    Enable SPI Receive Complete Interrupt
  * @rmtoll   SPIIE    RXIE    FL_SPI_EnableIT_RXComplete
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_EnableIT_RXComplete(SPI_Type* SPIx)
{
    SET_BIT(SPIx->SPIIE, SPI_SPIIE_RXIE_Msk);
}

/**
  * @brief    Get SPI Receive Complete Interrupt Enable Status
  * @rmtoll   SPIIE    RXIE    FL_SPI_IsEnabledIT_RXComplete
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsEnabledIT_RXComplete(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIE, SPI_SPIIE_RXIE_Msk) == SPI_SPIIE_RXIE_Msk);
}

/**
  * @brief    Get SPI Receive Collision Flag
  * @rmtoll   SPIIF    RXCOL    FL_SPI_IsActiveFlag_RXBuffOverflow
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_RXBuffOverflow(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_RXCOL_Msk) == (SPI_SPIIF_RXCOL_Msk));
}

/**
  * @brief    Clear SPI Receive Collision Flag
  * @rmtoll   SPIIF    RXCOL    FL_SPI_ClearFlag_RXBuffOverflow
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_RXBuffOverflow(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPIIF, SPI_SPIIF_RXCOL_Msk);
}

/**
  * @brief    Get SPI Transmit Collision Flag
  * @rmtoll   SPIIF    TXCOL    FL_SPI_IsActiveFlag_TXBuffOverflow
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_TXBuffOverflow(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_TXCOL_Msk) == (SPI_SPIIF_TXCOL_Msk));
}

/**
  * @brief    Clear SPI Transmit Collision Flag
  * @rmtoll   SPIIF    TXCOL    FL_SPI_ClearFlag_TXBuffOverflow
  * @param    SPIx SPI instance
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_ClearFlag_TXBuffOverflow(SPI_Type* SPIx)
{
    WRITE_REG(SPIx->SPIIF, SPI_SPIIF_TXCOL_Msk);
}

/**
  * @brief    Get SPI Busy Flag
  * @rmtoll   SPIIF    BUSY    FL_SPI_IsActiveFlag_Busy
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_Busy(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_BUSY_Msk) == (SPI_SPIIF_BUSY_Msk));
}

/**
  * @brief    Get SPI Master Error Flag
  * @rmtoll   SPIIF    MERR    FL_SPI_IsActiveFlag_MasterError
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_MasterError(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_MERR_Msk) == (SPI_SPIIF_MERR_Msk));
}

/**
  * @brief    Get SPI Slave Error Flag
  * @rmtoll   SPIIF    SERR    FL_SPI_IsActiveFlag_SlaveError
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_SlaveError(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_SERR_Msk) == (SPI_SPIIF_SERR_Msk));
}

/**
  * @brief    Get SPI TX Buffer Empty Flag
  * @rmtoll   SPIIF    TXBE    FL_SPI_IsActiveFlag_TXBuffEmpty
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_TXBuffEmpty(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_TXBE_Msk) == (SPI_SPIIF_TXBE_Msk));
}

/**
  * @brief    Get SPI RX Buffer Full Flag
  * @rmtoll   SPIIF    RXBF    FL_SPI_IsActiveFlag_RXBuffFull
  * @param    SPIx SPI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_SPI_IsActiveFlag_RXBuffFull(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->SPIIF, SPI_SPIIF_RXBF_Msk) == (SPI_SPIIF_RXBF_Msk));
}

/**
  * @brief    Write SPI TX Buffer
  * @rmtoll   TXBUF    TXBUF    FL_SPI_WriteTXBuff
  * @param    SPIx SPI instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_SPI_WriteTXBuff(SPI_Type* SPIx, uint32_t data)
{
    MODIFY_REG(SPIx->TXBUF, (0xffU << 0U), (data << 0U));
}

/**
  * @brief    Read SPI TX Buffer
  * @rmtoll   RXBUF    RXBUF    FL_SPI_ReadRXBuff
  * @param    SPIx SPI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_SPI_ReadRXBuff(SPI_Type* SPIx)
{
    return (uint32_t)(READ_BIT(SPIx->RXBUF, (0xffU << 0U)) >> 0U);
}

/**
  * @}
  */

/** @defgroup SPI_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_SPI_DeInit(SPI_Type *SPIx);
FL_ErrorStatus FL_SPI_Init(SPI_Type *SPIx, FL_SPI_InitTypeDef *initStruct);
void FL_SPI_StructInit(FL_SPI_InitTypeDef *initStruct);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_SPI_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
