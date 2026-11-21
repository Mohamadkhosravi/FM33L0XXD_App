/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_rmu.h
  * @author  FMSH Application Team
  * @brief   Head file of RMU FL Module
  * @version  V0.0.2
  * @date     13. May 2026
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
#ifndef __FM33L0XXD_FL_RMU_H
#define __FM33L0XXD_FL_RMU_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup RMU_FL_ES_INIT RMU Exported Init structures
  * @{
  */

/**
  * @brief FL RMU Init Sturcture definition
  */
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup RMU_FL_Exported_Constants RMU Exported Constants
  * @{
  */

#define    RMU_PDRCFG_PDRCFG_Pos                                  (1U)
#define    RMU_PDRCFG_PDRCFG_Msk                                  (0x3U << RMU_PDRCFG_PDRCFG_Pos)
#define    RMU_PDRCFG_PDRCFG                                      RMU_PDRCFG_PDRCFG_Msk

#define    RMU_PDRCFG_PDRENEN_Pos                                 (0U)
#define    RMU_PDRCFG_PDRENEN_Msk                                 (0x1U << RMU_PDRCFG_PDRENEN_Pos)
#define    RMU_PDRCFG_PDRENEN                                     RMU_PDRCFG_PDRENEN_Msk

#define    RMU_BORCFG_BOR_PDRCFG_Pos                              (1U)
#define    RMU_BORCFG_BOR_PDRCFG_Msk                              (0x3U << RMU_BORCFG_BOR_PDRCFG_Pos)
#define    RMU_BORCFG_BOR_PDRCFG                                  RMU_BORCFG_BOR_PDRCFG_Msk

#define    RMU_BORCFG_OFF_BOR_Pos                                 (0U)
#define    RMU_BORCFG_OFF_BOR_Msk                                 (0x1U << RMU_BORCFG_OFF_BOR_Pos)
#define    RMU_BORCFG_OFF_BOR                                     RMU_BORCFG_OFF_BOR_Msk

#define    RMU_RSTCFG_LKUPRST_EN_Pos                              (1U)
#define    RMU_RSTCFG_LKUPRST_EN_Msk                              (0x1U << RMU_RSTCFG_LKUPRST_EN_Pos)
#define    RMU_RSTCFG_LKUPRST_EN                                  RMU_RSTCFG_LKUPRST_EN_Msk

#define    RMU_RSTCFG_EMCRST_EN_Pos                               (1U)
#define    RMU_RSTCFG_EMCRST_EN_Msk                               (0x1U << RMU_RSTCFG_EMCRST_EN_Pos)
#define    RMU_RSTCFG_EMCRST_EN                                   RMU_RSTCFG_EMCRST_EN_Msk

#define    RMU_RSTFLAG_NRSTN_FLAG_Pos                             (11U)
#define    RMU_RSTFLAG_NRSTN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_NRSTN_FLAG_Pos)
#define    RMU_RSTFLAG_NRSTN_FLAG                                 RMU_RSTFLAG_NRSTN_FLAG_Msk

#define    RMU_RSTFLAG_TESTN_FLAG_Pos                             (10U)
#define    RMU_RSTFLAG_TESTN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_TESTN_FLAG_Pos)
#define    RMU_RSTFLAG_TESTN_FLAG                                 RMU_RSTFLAG_TESTN_FLAG_Msk

#define    RMU_RSTFLAG_PORN_FLAG_Pos                              (9U)
#define    RMU_RSTFLAG_PORN_FLAG_Msk                              (0x1U << RMU_RSTFLAG_PORN_FLAG_Pos)
#define    RMU_RSTFLAG_PORN_FLAG                                  RMU_RSTFLAG_PORN_FLAG_Msk

#define    RMU_RSTFLAG_PDRN_FLAG_Pos                              (8U)
#define    RMU_RSTFLAG_PDRN_FLAG_Msk                              (0x1U << RMU_RSTFLAG_PDRN_FLAG_Pos)
#define    RMU_RSTFLAG_PDRN_FLAG                                  RMU_RSTFLAG_PDRN_FLAG_Msk

#define    RMU_RSTFLAG_EMCN_FLAG_Pos                              (6U)
#define    RMU_RSTFLAG_EMCN_FLAG_Msk                              (0x1U << RMU_RSTFLAG_EMCN_FLAG_Pos)
#define    RMU_RSTFLAG_EMCN_FLAG                                  RMU_RSTFLAG_EMCN_FLAG_Msk

#define    RMU_RSTFLAG_SOFTN_FLAG_Pos                             (5U)
#define    RMU_RSTFLAG_SOFTN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_SOFTN_FLAG_Pos)
#define    RMU_RSTFLAG_SOFTN_FLAG                                 RMU_RSTFLAG_SOFTN_FLAG_Msk

#define    RMU_RSTFLAG_IWDTN_FLAG_Pos                             (4U)
#define    RMU_RSTFLAG_IWDTN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_IWDTN_FLAG_Pos)
#define    RMU_RSTFLAG_IWDTN_FLAG                                 RMU_RSTFLAG_IWDTN_FLAG_Msk

#define    RMU_RSTFLAG_WWDTN_FLAG_Pos                             (2U)
#define    RMU_RSTFLAG_WWDTN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_WWDTN_FLAG_Pos)
#define    RMU_RSTFLAG_WWDTN_FLAG                                 RMU_RSTFLAG_WWDTN_FLAG_Msk

#define    RMU_RSTFLAG_LKUPN_FLAG_Pos                             (1U)
#define    RMU_RSTFLAG_LKUPN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_LKUPN_FLAG_Pos)
#define    RMU_RSTFLAG_LKUPN_FLAG                                 RMU_RSTFLAG_LKUPN_FLAG_Msk

#define    RMU_RSTFLAG_NVICN_FLAG_Pos                             (0U)
#define    RMU_RSTFLAG_NVICN_FLAG_Msk                             (0x1U << RMU_RSTFLAG_NVICN_FLAG_Pos)
#define    RMU_RSTFLAG_NVICN_FLAG                                 RMU_RSTFLAG_NVICN_FLAG_Msk

#define    PERHRSTEN_KEY                                          (0x13579BDFUL)
#define    SOFTWARERESET_KEY                                      (0x5C5CAABBUL)

#define    FL_RMU_RSTAHB_DMA                                      (0x1U << 0U)
#define    FL_RMU_UART5RST                                        (0x1fU << 0U)
#define    FL_RMU_UART4RST                                        (0x1eU << 0U)
#define    FL_RMU_UART3RST                                        (0x1dU << 0U)
#define    FL_RMU_UART2RST                                        (0x1cU << 0U)
#define    FL_RMU_TIMARST                                         (0x17U << 0U)
#define    FL_RMU_LCDRST                                          (0x10U << 0U)
#define    FL_RMU_U7816RST                                        (0xeU << 0U)
#define    FL_RMU_SPI2RST                                         (0xcU << 0U)
#define    FL_RMU_SPI1RST                                         (0xbU << 0U)
#define    FL_RMU_SPI0RST                                         (0xaU << 0U)
#define    FL_RMU_LPUART0RST                                      (0x6U << 0U)
#define    FL_RMU_LPTRST                                          (0x0U << 0U)
#define    FL_RMU_UART1RST                                        (0x1fU << 0U)
#define    FL_RMU_UART0RST                                        (0x1eU << 0U)
#define    FL_RMU_UARTIRRST                                       (0x1dU << 0U)
#define    FL_RMU_AESRST                                          (0x12U << 0U)
#define    FL_RMU_CRCRST                                          (0x11U << 0U)
#define    FL_RMU_RNGRST                                          (0x10U << 0U)
#define    FL_RMU_LPUART1RST                                      (0x7U << 0U)
#define    FL_RMU_I2C0RST                                         (0x3U << 0U)
#define    FL_RMU_GT1RST                                          (0x3U << 0U)
#define    FL_RMU_GT0RST                                          (0x2U << 0U)
#define    FL_RMU_SADCRST                                         (0x1U << 0U)
#define    FL_RMU_I2C1RST                                         (0x0U << 0U)
#define    FL_RMU_RSTAPB_CAN1                                     (0x11U << 0U)
#define    FL_RMU_RSTAPB_CAN0                                     (0x10U << 0U)
#define    FL_RMU_RSTAPB_INTMUX                                   (0xfU << 0U)
#define    FL_RMU_RSTAPB_LCD                                      (0xeU << 0U)
#define    FL_RMU_RSTAPB_I2CSMB1                                  (0xdU << 0U)
#define    FL_RMU_RSTAPB_I2CSMB0                                  (0xcU << 0U)
#define    FL_RMU_RSTAPB_I2C3                                     (0xbU << 0U)
#define    FL_RMU_RSTAPB_I2C2                                     (0xaU << 0U)
#define    FL_RMU_RSTAPB_I2C1                                     (0x9U << 0U)
#define    FL_RMU_RSTAPB_I2C0                                     (0x8U << 0U)
#define    FL_RMU_RSTAPB_TSC                                      (0x7U << 0U)
#define    FL_RMU_RSTAPB_PGL                                      (0x5U << 0U)
#define    FL_RMU_RSTAPB_ATIM                                     (0x4U << 0U)
#define    FL_RMU_RSTAPB_TAU1                                     (0x3U << 0U)
#define    FL_RMU_RSTAPB_TAU0                                     (0x2U << 0U)
#define    FL_RMU_RSTAPB_LPTIM16                                  (0x1U << 0U)
#define    FL_RMU_RSTAPB_BTIM16                                   (0x0U << 0U)
#define    FL_RMU_RSTAPB_ADCCR                                    (0x38U << 0U)
#define    FL_RMU_RSTAPB_ADC                                      (0x37U << 0U)
#define    FL_RMU_RSTAPB_AES                                      (0x32U << 0U)
#define    FL_RMU_RSTAPB_CRC                                      (0x31U << 0U)
#define    FL_RMU_RSTAPB_RNG                                      (0x30U << 0U)
#define    FL_RMU_RSTAPB_DIVAS                                    (0x23U << 0U)
#define    FL_RMU_RSTAPB_SVD                                      (0x21U << 0U)
#define    FL_RMU_RSTAPB_COMP                                     (0x20U << 0U)



#define    FL_RMU_PDR_THRESHOLD_1P50V                             (0x0U << RMU_PDRCFG_PDRCFG_Pos)
#define    FL_RMU_PDR_THRESHOLD_1P25V                             (0x1U << RMU_PDRCFG_PDRCFG_Pos)
#define    FL_RMU_PDR_THRESHOLD_1P35V                             (0x2U << RMU_PDRCFG_PDRCFG_Pos)
#define    FL_RMU_PDR_THRESHOLD_1P40V                             (0x3U << RMU_PDRCFG_PDRCFG_Pos)


#define    FL_RMU_BOR_THRESHOLD_1P70V                             (0x0U << RMU_BORCFG_BOR_PDRCFG_Pos)
#define    FL_RMU_BOR_THRESHOLD_1P60V                             (0x1U << RMU_BORCFG_BOR_PDRCFG_Pos)
#define    FL_RMU_BOR_THRESHOLD_1P65V                             (0x2U << RMU_BORCFG_BOR_PDRCFG_Pos)
#define    FL_RMU_BOR_THRESHOLD_1P75V                             (0x3U << RMU_BORCFG_BOR_PDRCFG_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup RMU_FL_Exported_Functions RMU Exported Functions
  * @{
  */

/**
  * @brief    设置PDR下电复位电压
  * @rmtoll   PDRCFG    PDRCFG    FL_RMU_PDR_SetThreshold
  * @param    RMUx RMU instance
  * @param    threshold This parameter can be one of the following values:
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P50V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P25V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P35V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P40V
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_PDR_SetThreshold(RMU_Type* RMUx, uint32_t threshold)
{
    MODIFY_REG(RMUx->PDRCFG, RMU_PDRCFG_PDRCFG_Msk, threshold);
}

/**
  * @brief    获取PDR下电复位电压
  * @rmtoll   PDRCFG    PDRCFG    FL_RMU_PDR_GetThreshold
  * @param    RMUx RMU instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P50V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P25V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P35V
  *           @arg @ref FL_RMU_PDR_THRESHOLD_1P40V
  */
__STATIC_INLINE uint32_t FL_RMU_PDR_GetThreshold(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->PDRCFG, RMU_PDRCFG_PDRCFG_Msk));
}

/**
  * @brief    获取PDR下电复位使能状态
  * @rmtoll   PDRCFG    PDRENEN    FL_RMU_PDR_IsEnabled
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_PDR_IsEnabled(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->PDRCFG, RMU_PDRCFG_PDRENEN_Msk) == RMU_PDRCFG_PDRENEN_Msk);
}

/**
  * @brief    失能PDR下电复位
  * @rmtoll   PDRCFG    PDRENEN    FL_RMU_PDR_Disable
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_PDR_Disable(RMU_Type* RMUx)
{
    CLEAR_BIT(RMUx->PDRCFG, RMU_PDRCFG_PDRENEN_Msk);
}

/**
  * @brief    使能PDR下电复位
  * @rmtoll   PDRCFG    PDRENEN    FL_RMU_PDR_Enable
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_PDR_Enable(RMU_Type* RMUx)
{
    SET_BIT(RMUx->PDRCFG, RMU_PDRCFG_PDRENEN_Msk);
}

/**
  * @brief    设置BOR下电复位电压
  * @rmtoll   BORCFG    BOR_PDRCFG    FL_RMU_BOR_SetThreshold
  * @param    RMUx RMU instance
  * @param    threshold This parameter can be one of the following values:
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P70V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P60V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P65V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P75V
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_BOR_SetThreshold(RMU_Type* RMUx, uint32_t threshold)
{
    MODIFY_REG(RMUx->BORCFG, RMU_BORCFG_BOR_PDRCFG_Msk, threshold);
}

/**
  * @brief    获取BOR下电复位电压
  * @rmtoll   BORCFG    BOR_PDRCFG    FL_RMU_BOR_GetThreshold
  * @param    RMUx RMU instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P70V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P60V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P65V
  *           @arg @ref FL_RMU_BOR_THRESHOLD_1P75V
  */
__STATIC_INLINE uint32_t FL_RMU_BOR_GetThreshold(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->BORCFG, RMU_BORCFG_BOR_PDRCFG_Msk));
}

/**
  * @brief    获取BOR下电复位使能状态
  * @rmtoll   BORCFG    OFF_BOR    FL_RMU_BOR_IsEnabled
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_BOR_IsEnabled(RMU_Type* RMUx)
{
    return (uint32_t)!(READ_BIT(RMUx->BORCFG, RMU_BORCFG_OFF_BOR_Msk) == RMU_BORCFG_OFF_BOR_Msk);
}

/**
  * @brief    失能BOR下电复位
  * @rmtoll   BORCFG    OFF_BOR    FL_RMU_BOR_Disable
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_BOR_Disable(RMU_Type* RMUx)
{
    SET_BIT(RMUx->BORCFG, RMU_BORCFG_OFF_BOR_Msk);
}

/**
  * @brief    使能BOR下电复位
  * @rmtoll   BORCFG    OFF_BOR    FL_RMU_BOR_Enable
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_BOR_Enable(RMU_Type* RMUx)
{
    CLEAR_BIT(RMUx->BORCFG, RMU_BORCFG_OFF_BOR_Msk);
}

/**
  * @brief    获取LockUp复位使能状态
  * @rmtoll   RSTCFG    LKUPRST_EN    FL_RMU_IsEnabledLockUpReset
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsEnabledLockUpReset(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTCFG, RMU_RSTCFG_LKUPRST_EN_Msk) == RMU_RSTCFG_LKUPRST_EN_Msk);
}

/**
  * @brief    失能LockUp复位
  * @rmtoll   RSTCFG    LKUPRST_EN    FL_RMU_DisableLockUpReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableLockUpReset(RMU_Type* RMUx)
{
    CLEAR_BIT(RMUx->RSTCFG, RMU_RSTCFG_LKUPRST_EN_Msk);
}

/**
  * @brief    使能LockUp复位
  * @rmtoll   RSTCFG    LKUPRST_EN    FL_RMU_EnableLockUpReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableLockUpReset(RMU_Type* RMUx)
{
    SET_BIT(RMUx->RSTCFG, RMU_RSTCFG_LKUPRST_EN_Msk);
}

/**
  * @brief    获取EMC复位使能状态
  * @rmtoll   RSTCFG    EMCRST_EN    FL_RMU_IsEnabledEMCReset
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsEnabledEMCReset(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTCFG, RMU_RSTCFG_EMCRST_EN_Msk) == RMU_RSTCFG_EMCRST_EN_Msk);
}

/**
  * @brief    失能EMC复位
  * @rmtoll   RSTCFG    EMCRST_EN    FL_RMU_DisableEMCReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableEMCReset(RMU_Type* RMUx)
{
    CLEAR_BIT(RMUx->RSTCFG, RMU_RSTCFG_EMCRST_EN_Msk);
}

/**
  * @brief    使能EMC复位
  * @rmtoll   RSTCFG    EMCRST_EN    FL_RMU_EnableEMCReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableEMCReset(RMU_Type* RMUx)
{
    SET_BIT(RMUx->RSTCFG, RMU_RSTCFG_EMCRST_EN_Msk);
}

/**
  * @brief    复位芯片
  * @rmtoll   SOFTRST        FL_RMU_SetSoftReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_SetSoftReset(RMU_Type* RMUx)
{
   WRITE_REG(RMUx->SOFTRST, SOFTWARERESET_KEY);
}

/**
  * @brief    获取NRST引脚复位标志
  * @rmtoll   RSTFLAG    NRSTN_FLAG    FL_RMU_IsActiveFlag_NRSTN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_NRSTN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_NRSTN_FLAG_Msk) == (RMU_RSTFLAG_NRSTN_FLAG_Msk));
}

/**
  * @brief    清除NRST引脚复位标志
  * @rmtoll   RSTFLAG    NRSTN_FLAG    FL_RMU_ClearFlag_NRSTN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_NRSTN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_NRSTN_FLAG_Msk);
}

/**
  * @brief    获取TESTN引脚复位标志
  * @rmtoll   RSTFLAG    TESTN_FLAG    FL_RMU_IsActiveFlag_TESTN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_TESTN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_TESTN_FLAG_Msk) == (RMU_RSTFLAG_TESTN_FLAG_Msk));
}

/**
  * @brief    清除TESTN引脚复位标志
  * @rmtoll   RSTFLAG    TESTN_FLAG    FL_RMU_ClearFlag_TESTN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_TESTN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_TESTN_FLAG_Msk);
}

/**
  * @brief    获取上电复位标志
  * @rmtoll   RSTFLAG    PORN_FLAG    FL_RMU_IsActiveFlag_PORN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_PORN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_PORN_FLAG_Msk) == (RMU_RSTFLAG_PORN_FLAG_Msk));
}

/**
  * @brief    清除上电复位标志
  * @rmtoll   RSTFLAG    PORN_FLAG    FL_RMU_ClearFlag_PORN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_PORN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_PORN_FLAG_Msk);
}

/**
  * @brief    获取下电复位标志
  * @rmtoll   RSTFLAG    PDRN_FLAG    FL_RMU_IsActiveFlag_PDRN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_PDRN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_PDRN_FLAG_Msk) == (RMU_RSTFLAG_PDRN_FLAG_Msk));
}

/**
  * @brief    清除下电复位标志
  * @rmtoll   RSTFLAG    PDRN_FLAG    FL_RMU_ClearFlag_PDRN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_PDRN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_PDRN_FLAG_Msk);
}

/**
  * @brief    获取EMCN引脚复位标志
  * @rmtoll   RSTFLAG    EMCN_FLAG    FL_RMU_IsActiveFlag_EMCN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_EMCN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_EMCN_FLAG_Msk) == (RMU_RSTFLAG_EMCN_FLAG_Msk));
}

/**
  * @brief    清除EMCN引脚复位标志
  * @rmtoll   RSTFLAG    EMCN_FLAG    FL_RMU_ClearFlag_EMCN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_EMCN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_EMCN_FLAG_Msk);
}

/**
  * @brief    获取软件复位标志
  * @rmtoll   RSTFLAG    SOFTN_FLAG    FL_RMU_IsActiveFlag_SOFTN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_SOFTN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_SOFTN_FLAG_Msk) == (RMU_RSTFLAG_SOFTN_FLAG_Msk));
}

/**
  * @brief    清除软件复位标志
  * @rmtoll   RSTFLAG    SOFTN_FLAG    FL_RMU_ClearFlag_SOFTN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_SOFTN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_SOFTN_FLAG_Msk);
}

/**
  * @brief    获取IWDT复位标志
  * @rmtoll   RSTFLAG    IWDTN_FLAG    FL_RMU_IsActiveFlag_IWDTN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_IWDTN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_IWDTN_FLAG_Msk) == (RMU_RSTFLAG_IWDTN_FLAG_Msk));
}

/**
  * @brief    清除IWDT复位标志
  * @rmtoll   RSTFLAG    IWDTN_FLAG    FL_RMU_ClearFlag_IWDTN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_IWDTN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_IWDTN_FLAG_Msk);
}

/**
  * @brief    获取WWDT复位标志
  * @rmtoll   RSTFLAG    WWDTN_FLAG    FL_RMU_IsActiveFlag_WWDTN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_WWDTN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_WWDTN_FLAG_Msk) == (RMU_RSTFLAG_WWDTN_FLAG_Msk));
}

/**
  * @brief    清除WWDT复位标志
  * @rmtoll   RSTFLAG    WWDTN_FLAG    FL_RMU_ClearFlag_WWDTN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_WWDTN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_WWDTN_FLAG_Msk);
}

/**
  * @brief    获取LockUp复位标志
  * @rmtoll   RSTFLAG    LKUPN_FLAG    FL_RMU_IsActiveFlag_LKUPN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_LKUPN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_LKUPN_FLAG_Msk) == (RMU_RSTFLAG_LKUPN_FLAG_Msk));
}

/**
  * @brief    清除LockUp复位标志
  * @rmtoll   RSTFLAG    LKUPN_FLAG    FL_RMU_ClearFlag_LKUPN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_LKUPN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_LKUPN_FLAG_Msk);
}

/**
  * @brief    获取NVIC复位标志
  * @rmtoll   RSTFLAG    NVICN_FLAG    FL_RMU_IsActiveFlag_NVICN
  * @param    RMUx RMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RMU_IsActiveFlag_NVICN(RMU_Type* RMUx)
{
    return (uint32_t)(READ_BIT(RMUx->RSTFLAG, RMU_RSTFLAG_NVICN_FLAG_Msk) == (RMU_RSTFLAG_NVICN_FLAG_Msk));
}

/**
  * @brief    清除NVIC复位标志
  * @rmtoll   RSTFLAG    NVICN_FLAG    FL_RMU_ClearFlag_NVICN
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_ClearFlag_NVICN(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->RSTFLAG, RMU_RSTFLAG_NVICN_FLAG_Msk);
}

/**
  * @brief    撤销复位外设
  * @rmtoll   RMU_PRSTEN        FL_RMU_DisablePeripheralReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisablePeripheralReset(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->PERHRSTEN, (~PERHRSTEN_KEY));
}

/**
  * @brief    复位外设
  * @rmtoll   RMU_PRSTEN        FL_RMU_EnablePeripheralReset
  * @param    RMUx RMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnablePeripheralReset(RMU_Type* RMUx)
{
    WRITE_REG(RMUx->PERHRSTEN, PERHRSTEN_KEY);
}

/**
  * @brief    复位AHB外设
  * @rmtoll   AHBRST        FL_RMU_EnableResetAHBPeripheral
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_RSTAHB_DMA
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableResetAHBPeripheral(RMU_Type* RMUx, uint32_t peripheral)
{
    SET_BIT(RMUx->AHBRST, ((peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    复位APB外设1
  * @rmtoll   APBRST1        FL_RMU_EnableResetAPBPeripheral1
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_UART5RST
  *           @arg @ref FL_RMU_UART4RST
  *           @arg @ref FL_RMU_UART3RST
  *           @arg @ref FL_RMU_UART2RST
  *           @arg @ref FL_RMU_TIMARST
  *           @arg @ref FL_RMU_LCDRST
  *           @arg @ref FL_RMU_U7816RST
  *           @arg @ref FL_RMU_SPI2RST
  *           @arg @ref FL_RMU_SPI1RST
  *           @arg @ref FL_RMU_SPI0RST
  *           @arg @ref FL_RMU_LPUART0RST
  *           @arg @ref FL_RMU_LPTRST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableResetAPBPeripheral1(RMU_Type* RMUx, uint32_t peripheral)
{
        SET_BIT(RMUx->APBRST1, (0x1U << peripheral));
}

/**
  * @brief    复位APB外设2
  * @rmtoll   APBRST2        FL_RMU_EnableResetAPBPeripheral2
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_UART1RST
  *           @arg @ref FL_RMU_UART0RST
  *           @arg @ref FL_RMU_UARTIRRST
  *           @arg @ref FL_RMU_AESRST
  *           @arg @ref FL_RMU_CRCRST
  *           @arg @ref FL_RMU_RNGRST
  *           @arg @ref FL_RMU_LPUART1RST
  *           @arg @ref FL_RMU_I2C0RST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableResetAPBPeripheral2(RMU_Type* RMUx, uint32_t peripheral)
{
        SET_BIT(RMUx->APBRST2, (0x1U << peripheral));
}

/**
  * @brief    复位APB外设3
  * @rmtoll   APBRST3        FL_RMU_EnableResetAPBPeripheral3
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_GT1RST
  *           @arg @ref FL_RMU_GT0RST
  *           @arg @ref FL_RMU_SADCRST
  *           @arg @ref FL_RMU_I2C1RST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_EnableResetAPBPeripheral3(RMU_Type* RMUx, uint32_t peripheral)
{
        SET_BIT(RMUx->APBRST3, (0x1U << peripheral));
}

/**
  * @brief    撤销复位AHB外设
  * @rmtoll   AHBRST        FL_RMU_DisableResetAHBPeripheral
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_RSTAHB_DMA
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableResetAHBPeripheral(RMU_Type* RMUx, uint32_t peripheral)
{
    CLEAR_BIT(RMUx->AHBRST, ((peripheral & 0xffffffff) << 0x0U));
}

/**
  * @brief    撤销复位APB1外设
  * @rmtoll   APBRST1        FL_RMU_DisableResetAPBPeripheral1
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_UART5RST
  *           @arg @ref FL_RMU_UART4RST
  *           @arg @ref FL_RMU_UART3RST
  *           @arg @ref FL_RMU_UART2RST
  *           @arg @ref FL_RMU_TIMARST
  *           @arg @ref FL_RMU_LCDRST
  *           @arg @ref FL_RMU_U7816RST
  *           @arg @ref FL_RMU_SPI2RST
  *           @arg @ref FL_RMU_SPI1RST
  *           @arg @ref FL_RMU_SPI0RST
  *           @arg @ref FL_RMU_LPUART0RST
  *           @arg @ref FL_RMU_LPTRST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableResetAPBPeripheral1(RMU_Type* RMUx, uint32_t peripheral)
{
        CLEAR_BIT(RMUx->APBRST1, (0x1U << peripheral));
}

/**
  * @brief    撤销复位APB2外设
  * @rmtoll   APBRST2        FL_RMU_DisableResetAPBPeripheral2
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_UART1RST
  *           @arg @ref FL_RMU_UART0RST
  *           @arg @ref FL_RMU_UARTIRRST
  *           @arg @ref FL_RMU_AESRST
  *           @arg @ref FL_RMU_CRCRST
  *           @arg @ref FL_RMU_RNGRST
  *           @arg @ref FL_RMU_LPUART1RST
  *           @arg @ref FL_RMU_I2C0RST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableResetAPBPeripheral2(RMU_Type* RMUx, uint32_t peripheral)
{
        CLEAR_BIT(RMUx->APBRST2, (0x1U << peripheral));
}

/**
  * @brief    撤销复位APB3外设
  * @rmtoll   APBRST3        FL_RMU_DisableResetAPBPeripheral3
  * @param    RMUx RMU instance
  * @param    peripheral This parameter can be one of the following values:
  *           @arg @ref FL_RMU_GT1RST
  *           @arg @ref FL_RMU_GT0RST
  *           @arg @ref FL_RMU_SADCRST
  *           @arg @ref FL_RMU_I2C1RST
  * @retval   None
  */
__STATIC_INLINE void FL_RMU_DisableResetAPBPeripheral3(RMU_Type* RMUx, uint32_t peripheral)
{
        CLEAR_BIT(RMUx->APBRST3, (0x1U << peripheral));
}

/**
  * @}
  */

/** @defgroup RMU_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_RMU_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
