/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_iwdt.h
  * @author  FMSH Application Team
  * @brief   Head file of IWDT FL Module
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
#ifndef __FM33L0XXD_FL_IWDT_H
#define __FM33L0XXD_FL_IWDT_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup IWDT_FL_ES_INIT IWDT Exported Init structures
  * @{
  */

/**
  * @brief FL IWDT Init Sturcture definition
  */

typedef  struct
{
    /** 看门狗溢出时间 */
    uint32_t overflowPeriod;
    /** 清狗窗口 */
    uint32_t iwdtWindows;

} FL_IWDT_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup IWDT_FL_Exported_Constants IWDT Exported Constants
  * @{
  */

#define    IWDT_IWDTCFG_IWDTOVP_Pos                               (0U)
#define    IWDT_IWDTCFG_IWDTOVP_Msk                               (0x7U << IWDT_IWDTCFG_IWDTOVP_Pos)
#define    IWDT_IWDTCFG_IWDTOVP                                   IWDT_IWDTCFG_IWDTOVP_Msk



#define    FL_IWDT_RELOAD_KEY                                     0x12345A5AU



#define    FL_IWDT_PERIOD_125MS                                   (0x0U << IWDT_IWDTCFG_IWDTOVP_Pos)
#define    FL_IWDT_PERIOD_500MS                                   (0x1U << IWDT_IWDTCFG_IWDTOVP_Pos)
#define    FL_IWDT_PERIOD_2000MS                                  (0x2U << IWDT_IWDTCFG_IWDTOVP_Pos)
#define    FL_IWDT_PERIOD_8000MS                                  (0x3U << IWDT_IWDTCFG_IWDTOVP_Pos)
#define    FL_IWDT_PERIOD_SLEEP4096S                              (0x5U << IWDT_IWDTCFG_IWDTOVP_Pos)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup IWDT_FL_Exported_Functions IWDT Exported Functions
  * @{
  */

/**
  * @brief    Set IWDT service register
  * @rmtoll   IWDTSERV        FL_IWDT_ReloadCounter
  * @param    IWDTx IWDT instance
  * @retval   None
  */
__STATIC_INLINE void FL_IWDT_ReloadCounter(IWDT_Type* IWDTx)
{
    IWDTx->IWDTSERV = FL_IWDT_RELOAD_KEY;
}

/**
  * @brief    Set IWDT overflow period
  * @rmtoll   IWDTCFG    IWDTOVP    FL_IWDT_SetPeriod
  * @param    IWDTx IWDT instance
  * @param    period This parameter can be one of the following values:
  *           @arg @ref FL_IWDT_PERIOD_125MS
  *           @arg @ref FL_IWDT_PERIOD_500MS
  *           @arg @ref FL_IWDT_PERIOD_2000MS
  *           @arg @ref FL_IWDT_PERIOD_8000MS
  *           @arg @ref FL_IWDT_PERIOD_SLEEP4096S
  * @retval   None
  */
__STATIC_INLINE void FL_IWDT_SetPeriod(IWDT_Type* IWDTx, uint32_t period)
{
    MODIFY_REG(IWDTx->IWDTCFG, IWDT_IWDTCFG_IWDTOVP_Msk, period);
}

/**
  * @brief    Get IWDT overflow period
  * @rmtoll   IWDTCFG    IWDTOVP    FL_IWDT_GetPeriod
  * @param    IWDTx IWDT instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_IWDT_PERIOD_125MS
  *           @arg @ref FL_IWDT_PERIOD_500MS
  *           @arg @ref FL_IWDT_PERIOD_2000MS
  *           @arg @ref FL_IWDT_PERIOD_8000MS
  *           @arg @ref FL_IWDT_PERIOD_SLEEP4096S
  */
__STATIC_INLINE uint32_t FL_IWDT_GetPeriod(IWDT_Type* IWDTx)
{
    return (uint32_t)(READ_BIT(IWDTx->IWDTCFG, IWDT_IWDTCFG_IWDTOVP_Msk));
}

/**
  * @brief    Get IWDT current counter value
  * @rmtoll   IWDTCNT        FL_IWDT_ReadCounter
  * @param    IWDTx IWDT instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_IWDT_ReadCounter(IWDT_Type* IWDTx)
{
    return (uint32_t)(READ_BIT(IWDTx->IWDTCNT, (0x3ffffU << 0U)) >> 0U);
}

/**
  * @}
  */

/** @defgroup IWDT_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_IWDT_DeInit(IWDT_Type *IWDTx);
void FL_IWDT_StructInit(FL_IWDT_InitTypeDef *IWDT_InitStruct);
FL_ErrorStatus FL_IWDT_Init(IWDT_Type *IWDTx, FL_IWDT_InitTypeDef *IWDT_InitStruct);
void IWDT_Clr(void);
void FL_IWDT_EnableSleep4096S(void);
void FL_IWDT_DisableSleep4096S(void);
/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_IWDT_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
