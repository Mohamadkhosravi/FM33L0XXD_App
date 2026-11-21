/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_wwdt.h
  * @author  FMSH Application Team
  * @brief   Head file of WWDT FL Module
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
#ifndef __FM33L0XXD_FL_WWDT_H__
#define __FM33L0XXD_FL_WWDT_H__

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup _FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup WWDT_FL_ES_INIT WWDT Exported Init structures
  * @{
  */

/**
  * @brief FL WWDT Init Sturcture definition
  */
typedef struct
{
    /** 看门狗溢出周期 */
    uint32_t overflowPeriod;

} FL_WWDT_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup WWDT_FL_Exported_Constants WWDT Exported Constants
  * @{
  */

#define    WWDT_CR_CON_Pos                                        (0U)
#define    WWDT_CR_CON_Msk                                        (0xffU << WWDT_CR_CON_Pos)
#define    WWDT_CR_CON                                            WWDT_CR_CON_Msk

#define    WWDTCFG_CFGR_WWDT_CFG_Pos                              (0U)
#define    WWDTCFG_CFGR_WWDT_CFG_Msk                              (0x7U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    WWDTCFG_CFGR_WWDT_CFG                                  WWDTCFG_CFGR_WWDT_CFG_Msk

#define    WWDT_WWDTIE_WWDT_IE_Pos                                (0U)
#define    WWDT_WWDTIE_WWDT_IE_Msk                                (0x1U << WWDT_WWDTIE_WWDT_IE_Pos)
#define    WWDT_WWDTIE_WWDT_IE                                    WWDT_WWDTIE_WWDT_IE_Msk

#define    WWDT_WWDTIF_WWDT_IF_Pos                                (0U)
#define    WWDT_WWDTIF_WWDT_IF_Msk                                (0x1U << WWDT_WWDTIF_WWDT_IF_Pos)
#define    WWDT_WWDTIF_WWDT_IF                                    WWDT_WWDTIF_WWDT_IF_Msk


#define    FL_WWDT_KEY_ENABLE                                     (0x5AU << WWDT_CR_CON_Pos)

#define    FL_WWDT_RELOAD_ENABLE                                  (0xACU << WWDT_CR_CON_Pos)



#define    FL_WWDTCFG_PERIOD_1CNT                                 (0x0U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_4CNT                                 (0x1U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_16CNT                                (0x2U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_64CNT                                (0x3U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_128CNT                               (0x4U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_256CNT                               (0x5U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_512CNT                               (0x6U << WWDTCFG_CFGR_WWDT_CFG_Pos)
#define    FL_WWDTCFG_PERIOD_1024CNT                              (0x7U << WWDTCFG_CFGR_WWDT_CFG_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup WWDT_FL_Exported_Functions WWDT Exported Functions
  * @{
  */

/**
  * @brief    WWDT enable counter
  * @rmtoll   CR    CON    FL_WWDT_Enable
  * @param    WWDTx WWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_Enable(WWDT_Type *WWDTx)
{
    WRITE_REG(WWDTx->WWDTCON, FL_WWDT_KEY_ENABLE);
}

/**
  * @brief    WWDT reset counter
  * @rmtoll   CR    CON    FL_WWDT_ReloadCounter
  * @param    WWDTx WWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_ReloadCounter(WWDT_Type *WWDTx)
{
    WRITE_REG(WWDTx->WWDTCON, FL_WWDT_RELOAD_ENABLE);
}


/**
  * @brief    Set WWDT overflow period
  * @rmtoll   CFGR    WWDT_CFG    FL_WWDT_SetPeriod
  * @param    WWDTx WWDT instance
  * @param    period This parameter can be one of the following values:
  *           @arg @ref FL_WWDTCFG_PERIOD_1CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_4CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_16CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_64CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_128CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_256CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_512CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_1024CNT
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_SetPeriod(WWDT_Type* WWDTx, uint32_t period)
{
    MODIFY_REG(WWDTx->WWDTCFG, WWDTCFG_CFGR_WWDT_CFG_Msk, period);
}

/**
  * @brief    Get WWDT overflow period
  * @rmtoll   CFGR    WWDT_CFG    FL_WWDT_GetPeriod
  * @param    WWDTx WWDT instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_WWDTCFG_PERIOD_1CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_4CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_16CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_64CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_128CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_256CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_512CNT
  *           @arg @ref FL_WWDTCFG_PERIOD_1024CNT
  */
__STATIC_INLINE uint32_t FL_WWDT_GetPeriod(WWDT_Type* WWDTx)
{
    return (uint32_t)(READ_BIT(WWDTx->WWDTCFG, WWDTCFG_CFGR_WWDT_CFG_Msk));
}

/**
  * @brief    Get WWDT Counter value
  * @rmtoll   WWDT_CNT        FL_WWDT_ReadCounter
  * @param    WWDTx WWDT instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_WWDT_ReadCounter(WWDT_Type* WWDTx)
{
    return (uint32_t)(READ_BIT(WWDTx->WWDTCNT, (0x3ffU << 0U)) >> 0U);
}

/**
  * @brief    WWDT interrupt enable
  * @rmtoll   WWDTIE    WWDT_IE    FL_WWDT_EnableIT_NearOverflow
  * @param    WWDTx WWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_EnableIT_NearOverflow(WWDT_Type* WWDTx)
{
    SET_BIT(WWDTx->WWDTIE, WWDT_WWDTIE_WWDT_IE_Msk);
}

/**
  * @brief    WWDT interrupt enable status
  * @rmtoll   WWDTIE    WWDT_IE    FL_WWDT_IsEnabledIT_NearOverflow
  * @param    WWDTx WWDT instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_WWDT_IsEnabledIT_NearOverflow(WWDT_Type* WWDTx)
{
    return (uint32_t)(READ_BIT(WWDTx->WWDTIE, WWDT_WWDTIE_WWDT_IE_Msk) == WWDT_WWDTIE_WWDT_IE_Msk);
}

/**
  * @brief    WWDT interrupt disable
  * @rmtoll   WWDTIE    WWDT_IE    FL_WWDT_DisableIT_NearOverflow
  * @param    WWDTx WWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_DisableIT_NearOverflow(WWDT_Type* WWDTx)
{
    CLEAR_BIT(WWDTx->WWDTIE, WWDT_WWDTIE_WWDT_IE_Msk);
}

/**
  * @brief    Get WWDT 75% overflow flag
  * @rmtoll   WWDTIF    WWDT_IF    FL_WWDT_IsActiveFlag_NearOverflow
  * @param    WWDTx WWDT instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_WWDT_IsActiveFlag_NearOverflow(WWDT_Type* WWDTx)
{
    return (uint32_t)(READ_BIT(WWDTx->WWDTIF, WWDT_WWDTIF_WWDT_IF_Msk) == (WWDT_WWDTIF_WWDT_IF_Msk));
}

/**
  * @brief    Clear WWDT 75% overflow flag
  * @rmtoll   WWDTIF    WWDT_IF    FL_WWDT_ClearFlag_NearOverflow
  * @param    WWDTx WWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_WWDT_ClearFlag_NearOverflow(WWDT_Type* WWDTx)
{
    WRITE_REG(WWDTx->WWDTIF, WWDT_WWDTIF_WWDT_IF_Msk);
}

/**
  * @}
  */

/** @defgroup WWDT_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_WWDT_DeInit(WWDT_Type *WWDTx);
FL_ErrorStatus FL_WWDT_Init(WWDT_Type *WWDTx, FL_WWDT_InitTypeDef *WWDT_InitStruct);
void FL_WWDT_StructInit(FL_WWDT_InitTypeDef *WWDT_InitStruct);
/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* ___FL_WWDT_H*/

/***************************Py_Code_Generator Version: 0.1-0.14- @ 2026-01-08***************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
