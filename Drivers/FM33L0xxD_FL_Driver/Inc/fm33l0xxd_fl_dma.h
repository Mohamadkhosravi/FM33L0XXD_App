/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_dma.h
  * @author  FMSH Application Team
  * @brief   Head file of DMA FL Module
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
#ifndef __FM33L0XXD_FL_DMA_H
#define __FM33L0XXD_FL_DMA_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup DMA_FL_ES_INIT DMA Exported Init structures
  * @{
  */

/**
  * @brief Configuration with temporary structure variable users will not be used directly
  */
typedef struct
{
    __IO uint32_t CHCTRL;
    __IO uint32_t CHRAMAD;
} CHANNEL;

/**
  * @brief Configuration with temporary structure variable users will not be used directly
  */
typedef struct
{
    __IO uint32_t RESV;
    __IO CHANNEL  Channel[7];
    __IO uint32_t CH7CTRL;
    __IO uint32_t CH7FLSAD;
    __IO uint32_t CH7RAMAD;
} DMA_ADDR;

/**
  * @brief FL DMA Init Sturcture definition
  */

typedef struct
{
    /*! DMA外设映射地址 */
    uint32_t periphAddress;
    /*! RAM地址增长方向 */
    uint32_t memoryAddressIncMode;
    /*! FLASH地址增长方向，仅支持通道7 */
    uint32_t flashAddressIncMode;
    /*! DMA通道优先级 */
    uint32_t priority;
	/*! DMA传输方向,仅支持通道7 */
    uint32_t direction;


} FL_DMA_InitTypeDef;

/**
  * @brief FL DMA Config Sturcture definition
  */
typedef struct
{
    /*! RAM地址 */
    uint32_t memoryAddress;
    /*! DMA传输数据字节个数 */
    uint32_t transmissionCount;

} FL_DMA_ConfigTypeDef;


/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup DMA_FL_Exported_Constants DMA Exported Constants
  * @{
  */

#define    DMA_GLOBALCTRL_DMAEN_Pos                               (0U)
#define    DMA_GLOBALCTRL_DMAEN_Msk                               (0x1U << DMA_GLOBALCTRL_DMAEN_Pos)
#define    DMA_GLOBALCTRL_DMAEN                                   DMA_GLOBALCTRL_DMAEN_Msk

#define    DMA_CHCTRL_TSIZE_Pos                                   (16U)
#define    DMA_CHCTRL_TSIZE_Msk                                   (0xffffU << DMA_CHCTRL_TSIZE_Pos)
#define    DMA_CHCTRL_TSIZE                                       DMA_CHCTRL_TSIZE_Msk

#define    DMA_CHCTRL_PRI_Pos                                     (12U)
#define    DMA_CHCTRL_PRI_Msk                                     (0x3U << DMA_CHCTRL_PRI_Pos)
#define    DMA_CHCTRL_PRI                                         DMA_CHCTRL_PRI_Msk

#define    DMA_CHCTRL_INC_Pos                                     (11U)
#define    DMA_CHCTRL_INC_Msk                                     (0x1U << DMA_CHCTRL_INC_Pos)
#define    DMA_CHCTRL_INC                                         DMA_CHCTRL_INC_Msk

#define    DMA_CH7CTRL_CH7DIR_Pos                                  (10U)
#define    DMA_CH7CTRL_CH7DIR_Msk                                  (0x1U << DMA_CH7CTRL_CH7DIR_Pos)
#define    DMA_CH7CTRL_CH7DIR                                      DMA_CH7CTRL_CH7DIR_Msk

#define    DMA_CH7CTRL_CH7RI_INC_Pos                              (9U)
#define    DMA_CH7CTRL_CH7RI_INC_Msk                              (0x1U << DMA_CH7CTRL_CH7RI_INC_Pos)
#define    DMA_CH7CTRL_CH7RI_INC                                  DMA_CH7CTRL_CH7RI_INC_Msk

#define    DMA_CH7CTRL_CH7FI_Pos                                  (8U)
#define    DMA_CH7CTRL_CH7FI_Msk                                  (0x1U << DMA_CH7CTRL_CH7FI_Pos)
#define    DMA_CH7CTRL_CH7FI                                      DMA_CH7CTRL_CH7FI_Msk

#define    DMA_CHCTRL_SSEL_Pos                                    (8U)
#define    DMA_CHCTRL_SSEL_Msk                                    (0x7U << DMA_CHCTRL_SSEL_Pos)
#define    DMA_CHCTRL_SSEL                                        DMA_CHCTRL_SSEL_Msk

#define    DMA_CHCTRL_FTIE_Pos                                    (2U)
#define    DMA_CHCTRL_FTIE_Msk                                    (0x1U << DMA_CHCTRL_FTIE_Pos)
#define    DMA_CHCTRL_FTIE                                        DMA_CHCTRL_FTIE_Msk

#define    DMA_CHCTRL_HTIE_Pos                                    (1U)
#define    DMA_CHCTRL_HTIE_Msk                                    (0x1U << DMA_CHCTRL_HTIE_Pos)
#define    DMA_CHCTRL_HTIE                                        DMA_CHCTRL_HTIE_Msk

#define    DMA_CHCTRL_EN_Pos                                      (0U)
#define    DMA_CHCTRL_EN_Msk                                      (0x1U << DMA_CHCTRL_EN_Pos)
#define    DMA_CHCTRL_EN                                          DMA_CHCTRL_EN_Msk

#define    DMA_RAMADDR_RAMAD_Pos                                  (0U)
#define    DMA_RAMADDR_RAMAD_Msk                                  (0x7fffU << DMA_RAMADDR_RAMAD_Pos)
#define    DMA_RAMADDR_RAMAD                                      DMA_RAMADDR_RAMAD_Msk

#define    DMA_CH7FLSADDR_CH7FLSAD_Pos                            (0U)
#define    DMA_CH7FLSADDR_CH7FLSAD_Msk                            (0xffffU << DMA_CH7FLSADDR_CH7FLSAD_Pos)
#define    DMA_CH7FLSADDR_CH7FLSAD                                DMA_CH7FLSADDR_CH7FLSAD_Msk

#define    DMA_CH7FLSADDR_CH7RAMAD_Pos                            (0U)
#define    DMA_CH7FLSADDR_CH7RAMAD_Msk                            (0xffffU << DMA_CH7FLSADDR_CH7RAMAD_Pos)
#define    DMA_CH7FLSADDR_CH7RAMAD                                DMA_CH7FLSADDR_CH7RAMAD_Msk

#define    DMA_CHSTATUS_CHFT_Pos                                  (8U)
#define    DMA_CHSTATUS_CHFT_Msk                                  (0x1U << DMA_CHSTATUS_CHFT_Pos)
#define    DMA_CHSTATUS_CHFT                                      DMA_CHSTATUS_CHFT_Msk

#define    DMA_CHSTATUS_CHHT_Pos                                  (0U)
#define    DMA_CHSTATUS_CHHT_Msk                                  (0x1U << DMA_CHSTATUS_CHHT_Pos)
#define    DMA_CHSTATUS_CHHT                                      DMA_CHSTATUS_CHHT_Msk



#define    FL_DMA_CHANNEL_0                                       (0x0U << 0U)
#define    FL_DMA_CHANNEL_1                                       (0x1U << 0U)
#define    FL_DMA_CHANNEL_2                                       (0x2U << 0U)
#define    FL_DMA_CHANNEL_3                                       (0x3U << 0U)
#define    FL_DMA_CHANNEL_4                                       (0x4U << 0U)
#define    FL_DMA_CHANNEL_5                                       (0x5U << 0U)
#define    FL_DMA_CHANNEL_6                                       (0x6U << 0U)
#define    FL_DMA_CHANNEL_7                                       (0x7U << 0U)



#define    FL_DMA_PRIORITY_LOW                                    (0x0U << DMA_CHCTRL_PRI_Pos)
#define    FL_DMA_PRIORITY_MEDIUM                                 (0x1U << DMA_CHCTRL_PRI_Pos)
#define    FL_DMA_PRIORITY_HIGH                                   (0x2U << DMA_CHCTRL_PRI_Pos)
#define    FL_DMA_PRIORITY_VERYHIGH                               (0x3U << DMA_CHCTRL_PRI_Pos)

#define		 FL_DMA_DIR_FLASH_TO_RAM                                (0x1U<<DMA_CH7CTRL_CH7DIR_Pos)
#define    FL_DMA_DIR_RAM_TO_FLASH                                (0x0U<<DMA_CH7CTRL_CH7DIR_Pos)

#define    FL_DMA_MEMORY_INC_MODE_INCREASE                        (0x1U << DMA_CHCTRL_INC_Pos)
#define    FL_DMA_MEMORY_INC_MODE_DECREASE                        (0x0U << DMA_CHCTRL_INC_Pos)


#define    FL_DMA_CH7FI_MODE_INCREASE                         		(0x1U << DMA_CH7CTRL_CH7FI_Pos)
#define    FL_DMA_CH7FI_MODE_DECREASE                         		(0x0U << DMA_CH7CTRL_CH7FI_Pos)


#define    FL_DMA_CH7RI_MODE_INCREASE                         		(0x1U << DMA_CH7CTRL_CH7RI_INC_Pos)
#define    FL_DMA_CH7RI_MODE_DECREASE                         		(0x0U << DMA_CH7CTRL_CH7RI_INC_Pos)


#define    FL_DMA_PERIPHERAL_FUNCTION1                            (0x0U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION2                            (0x1U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION3                            (0x2U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION4                            (0x3U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION5                            (0x4U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION6                            (0x5U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION7                            (0x6U << DMA_CHCTRL_SSEL_Pos)
#define    FL_DMA_PERIPHERAL_FUNCTION8                            (0x7U << DMA_CHCTRL_SSEL_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup DMA_FL_Exported_Functions DMA Exported Functions
  * @{
  */

/**
  * @brief    DMA enable
  * @rmtoll   GLOBALCTRL    DMAEN    FL_DMA_Enable
  * @param    DMAx DMA instance
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_Enable(DMA_Type* DMAx)
{
    SET_BIT(DMAx->GLOBALCTRL, DMA_GLOBALCTRL_DMAEN_Msk);
}

/**
  * @brief    Get DMA enable status
  * @rmtoll   GLOBALCTRL    DMAEN    FL_DMA_IsEnabled
  * @param    DMAx DMA instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsEnabled(DMA_Type* DMAx)
{
    return (uint32_t)(READ_BIT(DMAx->GLOBALCTRL, DMA_GLOBALCTRL_DMAEN_Msk) == DMA_GLOBALCTRL_DMAEN_Msk);
}

/**
  * @brief    DMA disable
  * @rmtoll   GLOBALCTRL    DMAEN    FL_DMA_Disable
  * @param    DMAx DMA instance
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_Disable(DMA_Type* DMAx)
{
    CLEAR_BIT(DMAx->GLOBALCTRL, DMA_GLOBALCTRL_DMAEN_Msk);
}

/**
  * @brief    Set channelx transmission length
  * @rmtoll   CHCTRL    TSIZE    FL_DMA_WriteTransmissionSize
  * @param    DMAx DMA instance
  * @param    size 
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_WriteTransmissionSize(DMA_Type* DMAx, uint32_t size, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        MODIFY_REG(Temp->Channel[channel].CHCTRL, (0xffffU << 16U), (size << 16U));
    }
    else
    {
        MODIFY_REG(Temp->CH7CTRL, (0xffffU << 16U), (size << 16U));
    }
}

/**
  * @brief    Get channelx transmission length
  * @rmtoll   CHCTRL    TSIZE    FL_DMA_ReadTransmissionSize
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   
  */
__STATIC_INLINE uint32_t FL_DMA_ReadTransmissionSize(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, 0xffffU) >> 16U);
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, 0xffffU) >> 16U);
    }
}

/**
  * @brief    Set channelx priority
  * @rmtoll   CHCTRL    PRI    FL_DMA_SetPriority
  * @param    DMAx DMA instance
  * @param    priority This parameter can be one of the following values:
  *           @arg @ref FL_DMA_PRIORITY_LOW
  *           @arg @ref FL_DMA_PRIORITY_MEDIUM
  *           @arg @ref FL_DMA_PRIORITY_HIGH
  *           @arg @ref FL_DMA_PRIORITY_VERYHIGH
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetPriority(DMA_Type* DMAx, uint32_t priority, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        MODIFY_REG(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_PRI_Msk, priority);
    }
    else
    {
        MODIFY_REG(Temp->CH7CTRL, DMA_CHCTRL_PRI_Msk, priority);
    }
}

/**
  * @brief    Get channelx priority
  * @rmtoll   CHCTRL    PRI    FL_DMA_GetPriority
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_PRIORITY_LOW
  *           @arg @ref FL_DMA_PRIORITY_MEDIUM
  *           @arg @ref FL_DMA_PRIORITY_HIGH
  *           @arg @ref FL_DMA_PRIORITY_VERYHIGH
  */
__STATIC_INLINE uint32_t FL_DMA_GetPriority(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_PRI_Msk));
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, DMA_CHCTRL_PRI_Msk));
    }
}

/**
  * @brief    Set channelx RAM address incremental
  * @rmtoll   CHCTRL    INC    FL_DMA_SetMemoryIncrementMode
  * @param    DMAx DMA instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_DMA_MEMORY_INC_MODE_INCREASE
  *           @arg @ref FL_DMA_MEMORY_INC_MODE_DECREASE
  *           @arg @ref FL_DMA_CH7RI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7RI_MODE_DECREASE
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetMemoryIncrementMode(DMA_Type* DMAx, uint32_t mode, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        MODIFY_REG(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_INC_Msk, mode);
    }
    else
    {
        MODIFY_REG(Temp->CH7CTRL, DMA_CH7CTRL_CH7RI_INC_Msk, mode);
    }
}

/**
  * @brief    Get channelx RAM address incremental status
  * @rmtoll   CHCTRL    INC    FL_DMA_GetMemoryIncrementMode 
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_MEMORY_INC_MODE_INCREASE
  *           @arg @ref FL_DMA_MEMORY_INC_MODE_DECREASE
  *           @arg @ref FL_DMA_CH7RI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7RI_MODE_DECREASE
  */
__STATIC_INLINE uint32_t FL_DMA_GetMemoryIncrementMode (DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_INC_Msk));
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, DMA_CH7CTRL_CH7RI_INC_Msk));
    }
}
/**
  * @brief    Set channel7 transmit  direction
  * @rmtoll   CH7CTRL    CH7DIR    FL_DMA_SetChannel7TransmissionDirection
  * @param    DMAx DMA instance
  * @param    direction This parameter can be one of the following values:
  *           @arg @ref FL_DMA_DIR_PERIPHERAL_TO_RAM
  *           @arg @ref FL_DMA_DIR_RAM_TO_PERIPHERAL
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetChannel7TransmissionDirection(DMA_Type *DMAx, uint32_t direction)
{
    MODIFY_REG(DMAx->CH7CTRL, DMA_CH7CTRL_CH7DIR_Msk, direction);
}

/**
  * @brief    Get channel7 transmit  direction
  * @rmtoll   CH7CTRL    CH7DIR    FL_DMA_GetChannel7TransmissionDirection
  * @param    DMAx DMA instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_FLASH_TO_RAM
  *           @arg @ref FL_DMA_CHANNEL_RAM_TO_FALSH
  */
__STATIC_INLINE uint32_t FL_DMA_GetChannel7TransmissionDirection(DMA_Type *DMAx)
{
      return (uint32_t)(READ_BIT(DMA->CH7CTRL, DMA_CH7CTRL_CH7DIR_Msk));
}

/**
  * @brief    Set channel7 FLASH address incremental
  * @rmtoll   CH7CTRL    CH7FI    FL_DMA_SetChannel7FlashIncrementMode
  * @param    DMAx DMA instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CH7FI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7FI_MODE_DECREASE
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetChannel7FlashIncrementMode(DMA_Type* DMAx, uint32_t mode)
{
    MODIFY_REG(DMAx->CH7CTRL, DMA_CH7CTRL_CH7FI_Msk, mode);
}


/**
  * @brief    Get channel7 FLASH address incremental status
  * @rmtoll   CH7CTRL    CH7FI    FL_DMA_GetChannel7FlashIncrementMode 
  * @param    DMAx DMA instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_CH7FI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7FI_MODE_DECREASE
  */
__STATIC_INLINE uint32_t FL_DMA_GetChannel7FlashIncrementMode (DMA_Type* DMAx)
{
    return (uint32_t)(READ_BIT(DMAx->CH7CTRL, DMA_CH7CTRL_CH7FI_Msk));
}



/**
  * @brief    Set channel7 RAM address incremental
  * @rmtoll   CH7CTRL    CH7RI    FL_DMA_SetChannel7MemoryIncrementMode
  * @param    DMAx DMA instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CH7FI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7FI_MODE_DECREASE
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetChannel7MemoryIncrementMode(DMA_Type* DMAx, uint32_t mode)
{
    MODIFY_REG(DMAx->CH7CTRL, DMA_CH7CTRL_CH7RI_INC_Msk, mode);
}


/**
  * @brief    Get channel7 RAM address incremental status
  * @rmtoll   CH7CTRL    CH7RI    FL_DMA_GetChannel7MemoryIncrementMode 
  * @param    DMAx DMA instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_CH7FI_MODE_INCREASE
  *           @arg @ref FL_DMA_CH7FI_MODE_DECREASE
  */
__STATIC_INLINE uint32_t FL_DMA_GetChannel7MemoryIncrementMode (DMA_Type* DMAx)
{
    return (uint32_t)(READ_BIT(DMAx->CH7CTRL, DMA_CH7CTRL_CH7RI_INC_Msk));
}



/**
  * @brief    Channelx request source select
  * @rmtoll   CHCTRL    SSEL    FL_DMA_SetPeripheralMap
  * @param    DMAx DMA instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION1
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION2
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION3
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION4
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION5
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION6
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION7
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION8
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_SetPeripheralMap(DMA_Type* DMAx, uint32_t peripheral, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        MODIFY_REG(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_SSEL_Msk, peripheral);
    }
}

/**
  * @brief    Get Channelx request source select status
  * @rmtoll   CHCTRL    SSEL    FL_DMA_GetPeripheralMap
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION1
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION2
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION3
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION4
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION5
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION6
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION7
  *           @arg @ref FL_DMA_PERIPHERAL_FUNCTION8
  */
__STATIC_INLINE uint32_t FL_DMA_GetPeripheralMap(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_SSEL_Msk));
    }
    return 0;
}

/**
  * @brief    channelx transmit finished interrupt enable
  * @rmtoll   CHCTRL    FTIE    FL_DMA_EnableIT_TransferComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_EnableIT_TransferComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        SET_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_FTIE_Msk);
    }
    else
    {
        SET_BIT(Temp->CH7CTRL, DMA_CHCTRL_FTIE_Msk);
    }
}

/**
  * @brief    Get channelx transmit finished interrupt enable status
  * @rmtoll   CHCTRL    FTIE    FL_DMA_IsEnabledIT_TransferComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsEnabledIT_TransferComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_FTIE_Msk) == DMA_CHCTRL_FTIE_Msk);
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, DMA_CHCTRL_FTIE_Msk) == DMA_CHCTRL_FTIE_Msk);
    }
}

/**
  * @brief    channelx transmit finished interrupt disable
  * @rmtoll   CHCTRL    FTIE    FL_DMA_DisableIT_TransferComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_DisableIT_TransferComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        CLEAR_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_FTIE_Msk);
    }
    else
    {
        CLEAR_BIT(Temp->CH7CTRL, DMA_CHCTRL_FTIE_Msk);
    }
}

/**
  * @brief    Channelx Half-transfer interrupt enable
  * @rmtoll   CHCTRL    HTIE    FL_DMA_EnableIT_TransferHalfComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_EnableIT_TransferHalfComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        SET_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_HTIE_Msk);
    }
    else
    {
        SET_BIT(Temp->CH7CTRL, DMA_CHCTRL_HTIE_Msk);
    }
}

/**
  * @brief    Get Channelx Half-transfer interrupt enable status
  * @rmtoll   CHCTRL    HTIE    FL_DMA_IsEnabledIT_TransferHalfComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsEnabledIT_TransferHalfComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_HTIE_Msk) == DMA_CHCTRL_HTIE_Msk);
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, DMA_CHCTRL_HTIE_Msk) == DMA_CHCTRL_HTIE_Msk);
    }
}

/**
  * @brief    Channelx Half-transfer interrupt disable
  * @rmtoll   CHCTRL    HTIE    FL_DMA_DisableIT_TransferHalfComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_DisableIT_TransferHalfComplete(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        CLEAR_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_HTIE_Msk);
    }
    else
    {
        CLEAR_BIT(Temp->CH7CTRL, DMA_CHCTRL_HTIE_Msk);
    } 
}

/**
  * @brief    Channelx enable
  * @rmtoll   CHCTRL    EN    FL_DMA_EnableChannel
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_EnableChannel(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        SET_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_EN_Msk);
    }
    else
    {
        SET_BIT(Temp->CH7CTRL, DMA_CHCTRL_EN_Msk);
    }
}

/**
  * @brief    Get channelx enable status
  * @rmtoll   CHCTRL    EN    FL_DMA_IsEnabledChannel
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsEnabledChannel(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_EN_Msk) == DMA_CHCTRL_EN_Msk);
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7CTRL, DMA_CHCTRL_EN_Msk) == DMA_CHCTRL_EN_Msk);
    }
}

/**
  * @brief    Channelx disable
  * @rmtoll   CHCTRL    EN    FL_DMA_DisableChannel
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_DisableChannel(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        CLEAR_BIT(Temp->Channel[channel].CHCTRL, DMA_CHCTRL_EN_Msk);
    }
    else
    {
        CLEAR_BIT(Temp->CH7CTRL, DMA_CHCTRL_EN_Msk);
    }
}

/**
  * @brief    Set channelx memory pointer address 
  * @rmtoll   RAMADDR    RAMAD    FL_DMA_WriteMemoryAddress
  * @param    DMAx DMA instance
  * @param    data 
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_WriteMemoryAddress(DMA_Type* DMAx, uint32_t data, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;
    if(channel <= FL_DMA_CHANNEL_6)
    {
        MODIFY_REG(Temp->Channel[channel].CHRAMAD, (0xffffffffU), (data));
    }
    else
    {
        MODIFY_REG(Temp->CH7RAMAD, (0xffffffffU), (data));
		}
}

/**
  * @brief    Get channelx memory pointer address 
  * @rmtoll   RAMADDR    RAMAD    FL_DMA_ReadMemoryAddress
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   
  */
__STATIC_INLINE uint32_t FL_DMA_ReadMemoryAddress(DMA_Type* DMAx, uint32_t channel)
{
    DMA_ADDR  *Temp = (DMA_ADDR *)DMAx;

    if(channel <= FL_DMA_CHANNEL_6)
    {
        return (uint32_t)(READ_BIT(Temp->Channel[channel].CHRAMAD, (0xffffffffU)));
    }
    else
    {
        return (uint32_t)(READ_BIT(Temp->CH7RAMAD, (0xffffffffU)));
    } 
}

/**
  * @brief    Set channel7 flash pointer address
  * @rmtoll   CH7FLSADDR    CH7FLSAD    FL_DMA_WriteFlashAddress
  * @param    DMAx DMA instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_WriteFlashAddress(DMA_Type* DMAx, uint32_t data)
{
    MODIFY_REG(DMAx->CH7FLSADDR, (0xffffU << 0U), (data << 0U));
}

/**
  * @brief    Get channel7 flash pointer address
  * @rmtoll   CH7FLSADDR    CH7FLSAD    FL_DMA_ReadFlashAddress
  * @param    DMAx DMA instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_DMA_ReadFlashAddress(DMA_Type* DMAx)
{
    return (uint32_t)(READ_BIT(DMAx->CH7FLSADDR, (0xffffU << 0U)) >> 0U);
}


/**
  * @brief    Get DMA channelx finished-transfer flag
  * @rmtoll   CHSTATUS    CHFT    FL_DMA_IsActiveFlag_TransferComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsActiveFlag_TransferComplete(DMA_Type* DMAx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(DMAx->CHSTATUS, ((0x1U << channel) << DMA_CHSTATUS_CHFT_Pos)) == ((0x1U << channel) << DMA_CHSTATUS_CHFT_Pos));
}

/**
  * @brief    Clear DMA channelx finished-transfer flag
  * @rmtoll   CHSTATUS    CHFT    FL_DMA_ClearFlag_TransferComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_ClearFlag_TransferComplete(DMA_Type* DMAx, uint32_t channel)
{
    WRITE_REG(DMAx->CHSTATUS, (DMA_CHSTATUS_CHFT_Msk << channel));
}

/**
  * @brief    Get DMA channel half-transfer flag
  * @rmtoll   CHSTATUS    CHHT    FL_DMA_IsActiveFlag_TransferHalfComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_DMA_IsActiveFlag_TransferHalfComplete(DMA_Type* DMAx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(DMAx->CHSTATUS, ((0x1U << channel) << DMA_CHSTATUS_CHHT_Pos)) == ((0x1U << channel) << DMA_CHSTATUS_CHHT_Pos));
}

/**
  * @brief    Clear DMA channel half-transfer flag
  * @rmtoll   CHSTATUS    CHHT    FL_DMA_ClearFlag_TransferHalfComplete
  * @param    DMAx DMA instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_DMA_CHANNEL_0
  *           @arg @ref FL_DMA_CHANNEL_1
  *           @arg @ref FL_DMA_CHANNEL_2
  *           @arg @ref FL_DMA_CHANNEL_3
  *           @arg @ref FL_DMA_CHANNEL_4
  *           @arg @ref FL_DMA_CHANNEL_5
  *           @arg @ref FL_DMA_CHANNEL_6
  *           @arg @ref FL_DMA_CHANNEL_7
  * @retval   None
  */
__STATIC_INLINE void FL_DMA_ClearFlag_TransferHalfComplete(DMA_Type* DMAx, uint32_t channel)
{
    WRITE_REG(DMAx->CHSTATUS, (DMA_CHSTATUS_CHHT_Msk << channel));
}

/**
  * @}
  */

/** @defgroup DMA_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_DMA_DeInit(DMA_Type *DMAx);
FL_ErrorStatus FL_DMA_Init(DMA_Type *DMAx, FL_DMA_InitTypeDef *initStruct, uint32_t channel);
void FL_DMA_StructInit(FL_DMA_InitTypeDef *initStruct);
FL_ErrorStatus FL_DMA_StartTransmission(DMA_Type *DMAx, FL_DMA_ConfigTypeDef *configStruct, uint32_t channel);


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_DMA_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-06*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
