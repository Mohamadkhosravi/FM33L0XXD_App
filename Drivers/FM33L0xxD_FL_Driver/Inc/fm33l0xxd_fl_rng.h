/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_rng.h
  * @author  FMSH Application Team
  * @brief   Head file of RNG FL Module
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
#ifndef __FM33L0XXD_FL_RNG_H
#define __FM33L0XXD_FL_RNG_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup RNG RNG
  * @brief RNG FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup RNG_FL_ES_INIT RNG Exported Init structures
  * @{
  */

/**
  * @brief RNG Init Sturcture definition
  */

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup RNG_FL_Exported_Constants RNG Exported Constants
  * @{
  */

#define    RNG_CR_EN_Pos                                          (0U)
#define    RNG_CR_EN_Msk                                          (0x1U << RNG_CR_EN_Pos)
#define    RNG_CR_EN                                              RNG_CR_EN_Msk

#define    RNG_SR_RBUSY_Pos                                       (1U)
#define    RNG_SR_RBUSY_Msk                                       (0x1U << RNG_SR_RBUSY_Pos)
#define    RNG_SR_RBUSY                                           RNG_SR_RBUSY_Msk

#define    RNG_SR_RNF_Pos                                         (0U)
#define    RNG_SR_RNF_Msk                                         (0x1U << RNG_SR_RNF_Pos)
#define    RNG_SR_RNF                                             RNG_SR_RNF_Msk

#define    RNG_CRCCR_CRCEN_Pos                                    (0U)
#define    RNG_CRCCR_CRCEN_Msk                                    (0x1U << RNG_CRCCR_CRCEN_Pos)
#define    RNG_CRCCR_CRCEN                                        RNG_CRCCR_CRCEN_Msk

#define    RNG_CRCSR_CRCDONE_Pos                                  (0U)
#define    RNG_CRCSR_CRCDONE_Msk                                  (0x1U << RNG_CRCSR_CRCDONE_Pos)
#define    RNG_CRCSR_CRCDONE                                      RNG_CRCSR_CRCDONE_Msk






/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup RNG_FL_Exported_Functions RNG Exported Functions
  * @{
  */

/**
  * @brief    RNG enable
  * @rmtoll   CR    EN    FL_RNG_Enable
  * @param    RNGCTLx RNGCTL instance
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_Enable(RNGCTL_Type *RNGCTLx)
{
    SET_BIT(RNGCTLx->CR, RNG_CR_EN_Msk);
}

/**
  * @brief    RNG enable status
  * @rmtoll   CR    EN    FL_RNG_IsEnabled
  * @param    RNGCTLx RNGCTL instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RNG_IsEnabled(RNGCTL_Type *RNGCTLx)
{
    return (uint32_t)(READ_BIT(RNGCTLx->CR, RNG_CR_EN_Msk) == RNG_CR_EN_Msk);
}

/**
  * @brief    RNG disable
  * @rmtoll   CR    EN    FL_RNG_Disable
  * @param    RNGCTLx RNGCTL instance
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_Disable(RNGCTL_Type *RNGCTLx)
{
    CLEAR_BIT(RNGCTLx->CR, RNG_CR_EN_Msk);
}

/**
  * @brief    Read RNG output data register
  * @rmtoll   DOR        FL_RNG_ReadData
  * @param    RNGx RNG instance
  * @retval
  */
__STATIC_INLINE uint32_t FL_RNG_ReadData(RNG_Type *RNGx)
{
    return (uint32_t)(READ_BIT(RNGx->DOR, (0xffffffffU << 0U)) >> 0U);
}

/**
  * @brief    Get LFSR Flag
  * @rmtoll   SR    RBUSY    FL_RNG_IsActiveFlag_Busy
  * @param    RNGx RNG instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RNG_IsActiveFlag_Busy(RNG_Type *RNGx)
{
    return (uint32_t)(READ_BIT(RNGx->SR, RNG_SR_RBUSY_Msk) == (RNG_SR_RBUSY_Msk));
}

/**
  * @brief    Get random number fail flag
  * @rmtoll   SR    RNF    FL_RNG_IsActiveFlag_RandomFail
  * @param    RNGx RNG instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RNG_IsActiveFlag_RandomFail(RNG_Type *RNGx)
{
    return (uint32_t)(READ_BIT(RNGx->SR, RNG_SR_RNF_Msk) == (RNG_SR_RNF_Msk));
}

/**
  * @brief    Clear random number fail flag
  * @rmtoll   SR    RNF    FL_RNG_ClearFlag_RandomFail
  * @param    RNGx RNG instance
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_ClearFlag_RandomFail(RNG_Type *RNGx)
{
    WRITE_REG(RNGx->SR, RNG_SR_RNF_Msk);
}

/**
  * @brief    CRC enable
  * @rmtoll   CRCCR    CRCEN    FL_RNG_CRC_Enable
  * @param    RNGx RNG instance
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_CRC_Enable(RNG_Type *RNGx)
{
    SET_BIT(RNGx->CRCCR, RNG_CRCCR_CRCEN_Msk);
}

/**
  * @brief    Get CRC enable status
  * @rmtoll   CRCCR    CRCEN    FL_RNG_CRC_IsEnabled
  * @param    RNGx RNG instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RNG_CRC_IsEnabled(RNG_Type *RNGx)
{
    return (uint32_t)(READ_BIT(RNGx->CRCCR, RNG_CRCCR_CRCEN_Msk) == RNG_CRCCR_CRCEN_Msk);
}

/**
  * @brief    Write CRC data input
  * @rmtoll   CRCDIR        FL_RNG_CRC_WriteData
  * @param    RNGx RNG instance
  * @param    data
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_CRC_WriteData(RNG_Type *RNGx, uint32_t data)
{
    MODIFY_REG(RNGx->CRCDIR, (0xffffffffU << 0U), (data << 0U));
}

/**
  * @brief    Get CRC calculation done Flag
  * @rmtoll   CRCSR    CRCDONE    FL_RNG_IsActiveFlag_CRCComplete
  * @param    RNGx RNG instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RNG_IsActiveFlag_CRCComplete(RNG_Type *RNGx)
{
    return (uint32_t)(READ_BIT(RNGx->CRCSR, RNG_CRCSR_CRCDONE_Msk) == (RNG_CRCSR_CRCDONE_Msk));
}

/**
  * @brief    Clear CRC calculation done Flag
  * @rmtoll   CRCSR    CRCDONE    FL_RNG_ClearFlag_CRCComplete
  * @param    RNGx RNG instance
  * @retval   None
  */
__STATIC_INLINE void FL_RNG_ClearFlag_CRCComplete(RNG_Type *RNGx)
{
    CLEAR_BIT(RNGx->CRCSR, RNG_CRCSR_CRCDONE_Msk);
}

/**
  * @}
  */

/** @defgroup RNG_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_RNG_DeInit(RNG_Type *RNGx);
FL_ErrorStatus FL_RNG_Init(RNG_Type *RNGx);

/**
  * @}
  */

/** @defgroup RNG_FL_EF_Operation Opeartion functions
  * @{
  */

uint32_t GetRandomNumber(void);
uint32_t GetCrc32(uint32_t dataIn);

/**
  * @}
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

#endif /* __FM33L0XXD_FL_RNG_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
