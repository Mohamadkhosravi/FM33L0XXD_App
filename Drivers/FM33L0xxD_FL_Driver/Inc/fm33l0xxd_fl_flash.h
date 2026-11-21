/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_flash.h
  * @author  FMSH Application Team
  * @brief   Head file of FLASH FL Module
  * @version  V0.0.2
  * @date     21. May 2026
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
#ifndef __FM33L0XXD_FL_FLASH_H
#define __FM33L0XXD_FL_FLASH_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup FLASH FLASH
  * @brief FLASH FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup FLASH_FL_ES_INIT FLASH Exported Init structures
  * @{
  */

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup FLASH_FL_Exported_Constants FLASH Exported Constants
  * @{
  */

#define    FLASH_FLASHRDCON_WAIT_Pos                              (0U)
#define    FLASH_FLASHRDCON_WAIT_Msk                              (0x3U << FLASH_FLASHRDCON_WAIT_Pos)
#define    FLASH_FLASHRDCON_WAIT                                  FLASH_FLASHRDCON_WAIT_Msk

#define    FLASH_USRCFG_DBGCREN_Pos                               (31U)
#define    FLASH_USRCFG_DBGCREN_Msk                               (0x1U << FLASH_USRCFG_DBGCREN_Pos)
#define    FLASH_USRCFG_DBGCREN                                   FLASH_USRCFG_DBGCREN_Msk

#define    FLASH_USRCFG_BTSEN_Pos                                 (8U)
#define    FLASH_USRCFG_BTSEN_Msk                                 (0x3U << FLASH_USRCFG_BTSEN_Pos)
#define    FLASH_USRCFG_BTSEN                                     FLASH_USRCFG_BTSEN_Msk

#define    FLASH_USRCFG_ACLOCKEN_Pos                              (2U)
#define    FLASH_USRCFG_ACLOCKEN_Msk                              (0x3U << FLASH_USRCFG_ACLOCKEN_Pos)
#define    FLASH_USRCFG_ACLOCKEN                                  FLASH_USRCFG_ACLOCKEN_Msk

#define    FLASH_USRCFG_DBRDPEN_Pos                               (0U)
#define    FLASH_USRCFG_DBRDPEN_Msk                               (0x3U << FLASH_USRCFG_DBRDPEN_Pos)
#define    FLASH_USRCFG_DBRDPEN                                   FLASH_USRCFG_DBRDPEN_Msk

#define    FLASH_EPCON_ERTYPE_Pos                                 (8U)
#define    FLASH_EPCON_ERTYPE_Msk                                 (0x3U << FLASH_EPCON_ERTYPE_Pos)
#define    FLASH_EPCON_ERTYPE                                     FLASH_EPCON_ERTYPE_Msk

#define    FLASH_EPCON_PREQ_Pos                                   (1U)
#define    FLASH_EPCON_PREQ_Msk                                   (0x1U << FLASH_EPCON_PREQ_Pos)
#define    FLASH_EPCON_PREQ                                       FLASH_EPCON_PREQ_Msk

#define    FLASH_EPCON_EREQ_Pos                                   (0U)
#define    FLASH_EPCON_EREQ_Msk                                   (0x1U << FLASH_EPCON_EREQ_Pos)
#define    FLASH_EPCON_EREQ                                       FLASH_EPCON_EREQ_Msk

#define    FLASH_FLSIE_AUTHIE_Pos                                 (10U)
#define    FLASH_FLSIE_AUTHIE_Msk                                 (0x1U << FLASH_FLSIE_AUTHIE_Pos)
#define    FLASH_FLSIE_AUTHIE                                     FLASH_FLSIE_AUTHIE_Msk

#define    FLASH_FLSIE_KEYIE_Pos                                  (9U)
#define    FLASH_FLSIE_KEYIE_Msk                                  (0x1U << FLASH_FLSIE_KEYIE_Pos)
#define    FLASH_FLSIE_KEYIE                                      FLASH_FLSIE_KEYIE_Msk

#define    FLASH_FLSIE_CKIE_Pos                                   (8U)
#define    FLASH_FLSIE_CKIE_Msk                                   (0x1U << FLASH_FLSIE_CKIE_Pos)
#define    FLASH_FLSIE_CKIE                                       FLASH_FLSIE_CKIE_Msk

#define    FLASH_FLSIE_PRDIE_Pos                                  (1U)
#define    FLASH_FLSIE_PRDIE_Msk                                  (0x1U << FLASH_FLSIE_PRDIE_Pos)
#define    FLASH_FLSIE_PRDIE                                      FLASH_FLSIE_PRDIE_Msk

#define    FLASH_FLSIE_ERDIE_Pos                                  (0U)
#define    FLASH_FLSIE_ERDIE_Msk                                  (0x1U << FLASH_FLSIE_ERDIE_Pos)
#define    FLASH_FLSIE_ERDIE                                      FLASH_FLSIE_ERDIE_Msk

#define    FLASH_FLSIF_KEYSTA_Pos                                 (17U)
#define    FLASH_FLSIF_KEYSTA_Msk                                 (0x7U << FLASH_FLSIF_KEYSTA_Pos)
#define    FLASH_FLSIF_KEYSTA                                     FLASH_FLSIF_KEYSTA_Msk

#define    FLASH_FLSIF_AUTHERR_Pos                                (10U)
#define    FLASH_FLSIF_AUTHERR_Msk                                (0x1U << FLASH_FLSIF_AUTHERR_Pos)
#define    FLASH_FLSIF_AUTHERR                                    FLASH_FLSIF_AUTHERR_Msk

#define    FLASH_FLSIF_KEYERR_Pos                                 (9U)
#define    FLASH_FLSIF_KEYERR_Msk                                 (0x1U << FLASH_FLSIF_KEYERR_Pos)
#define    FLASH_FLSIF_KEYERR                                     FLASH_FLSIF_KEYERR_Msk

#define    FLASH_FLSIF_CKERR_Pos                                  (8U)
#define    FLASH_FLSIF_CKERR_Msk                                  (0x1U << FLASH_FLSIF_CKERR_Pos)
#define    FLASH_FLSIF_CKERR                                      FLASH_FLSIF_CKERR_Msk

#define    FLASH_FLSIF_PRD_Pos                                    (1U)
#define    FLASH_FLSIF_PRD_Msk                                    (0x1U << FLASH_FLSIF_PRD_Pos)
#define    FLASH_FLSIF_PRD                                        FLASH_FLSIF_PRD_Msk

#define    FLASH_FLSIF_ERD_Pos                                    (0U)
#define    FLASH_FLSIF_ERD_Msk                                    (0x1U << FLASH_FLSIF_ERD_Pos)
#define    FLASH_FLSIF_ERD                                        FLASH_FLSIF_ERD_Msk



#define    FL_FLASH_BLOCK_0                                       (0x1U << 0U)
#define    FL_FLASH_BLOCK_1                                       (0x1U << 1U)
#define    FL_FLASH_BLOCK_2                                       (0x1U << 2U)
#define    FL_FLASH_BLOCK_3                                       (0x1U << 3U)
#define    FL_FLASH_BLOCK_4                                       (0x1U << 4U)
#define    FL_FLASH_BLOCK_5                                       (0x1U << 5U)
#define    FL_FLASH_BLOCK_6                                       (0x1U << 6U)
#define    FL_FLASH_BLOCK_7                                       (0x1U << 7U)
#define    FL_FLASH_BLOCK_8                                       (0x1U << 8U)
#define    FL_FLASH_BLOCK_9                                       (0x1U << 9U)
#define    FL_FLASH_BLOCK_10                                      (0x1U << 10U)
#define    FL_FLASH_BLOCK_11                                      (0x1U << 11U)
#define    FL_FLASH_BLOCK_12                                      (0x1U << 12U)
#define    FL_FLASH_BLOCK_13                                      (0x1U << 13U)
#define    FL_FLASH_BLOCK_14                                      (0x1U << 14U)
#define    FL_FLASH_BLOCK_15                                      (0x1U << 15U)
#define    FL_FLASH_BLOCK_16                                      (0x1U << 16U)
#define    FL_FLASH_BLOCK_17                                      (0x1U << 17U)
#define    FL_FLASH_BLOCK_18                                      (0x1U << 18U)
#define    FL_FLASH_BLOCK_19                                      (0x1U << 19U)
#define    FL_FLASH_BLOCK_20                                      (0x1U << 20U)
#define    FL_FLASH_BLOCK_21                                      (0x1U << 21U)
#define    FL_FLASH_BLOCK_22                                      (0x1U << 22U)
#define    FL_FLASH_BLOCK_23                                      (0x1U << 23U)
#define    FL_FLASH_BLOCK_24                                      (0x1U << 24U)
#define    FL_FLASH_BLOCK_25                                      (0x1U << 25U)
#define    FL_FLASH_BLOCK_26                                      (0x1U << 26U)
#define    FL_FLASH_BLOCK_27                                      (0x1U << 27U)
#define    FL_FLASH_BLOCK_28                                      (0x1U << 28U)
#define    FL_FLASH_BLOCK_29                                      (0x1U << 29U)
#define    FL_FLASH_BLOCK_30                                      (0x1U << 30U)
#define    FL_FLASH_BLOCK_31                                      (0x1U << 31U)
#define    FL_FLASH_LOCK_NONE                                     (0x0U << 0U)
#define    FL_FLASH_LOCK_ALL                                      (0x1U << 0U)
#define    FL_FLASH_APPCODE_LOCK_ENABLE                           (0x2U << 2U)
#define    FL_FLASH_APPCODE_LOCK_DISABLE                          (0x0U << 2U)
#define    FL_FLASH_DEBUG_READ_ENABLE                             (0x2U << 0U)
#define    FL_FLASH_DEBUG_READ_DISABLE                            (0x0U << 0U)
#define    FL_FLASH_ERASE_KEY                                     0x96969696U
#define    FL_FLASH_CHIP_ERASE_KEY                                0x7D7D7D7DU
#define    FL_FLASH_PAGE_ERASE_KEY                                0xEAEAEAEAU
#define    FL_FLASH_ERASE_REQUEST                                 0x1234ABCDU
#define    FL_FLASH_PROGRAM_KEY1                                  0xA5A5A5A5U
#define    FL_FLASH_PROGRAM_KEY2                                  0xF1F1F1F1U
#define    FL_FLASH_ERASE_TIMEOUT                                 0x0000FFFFU
#define    FL_FLASH_ADDRS_ALIGN                                   0x00000004U
#define    FL_FLASH_MAX_PAGE_NUM                                  0x00000200U
#define    FL_FLASH_PAGE_SIZE_BYTE                                0x00000200U
#define    FL_FLASH_ADDR_MAXPROGRAM                               0x0003FFFFU



#define    FL_FLASH_READ_WAIT_0CYCLE                              (0x0U << FLASH_FLASHRDCON_WAIT_Pos)
#define    FL_FLASH_READ_WAIT_1CYCLE                              (0x1U << FLASH_FLASHRDCON_WAIT_Pos)
#define    FL_FLASH_READ_WAIT_2CYCLE                              (0x2U << FLASH_FLASHRDCON_WAIT_Pos)


#define    FL_FLASH_MCU_DBGCR_ENABLE                              (0x0U << FLASH_USRCFG_DBGCREN_Pos)
#define    FL_FLASH_MCU_DBGCR_DISABLE                             (0x1U << FLASH_USRCFG_DBGCREN_Pos)

#define    FL_FLASH_BOOT_SWAP_DISABLE                             (0x0U << FLASH_USRCFG_BTSEN_Pos)
#define    FL_FLASH_BOOT_SWAP_ENABLE                              (0x1U << FLASH_USRCFG_BTSEN_Pos)

#define    FL_FLASH_FLASH_LOCK_DISABLE                            (0x0U << FLASH_USRCFG_ACLOCKEN_Pos)
#define    FL_FLASH_FLASH_LOCK_ENABLE                             (0x1U << FLASH_USRCFG_ACLOCKEN_Pos)

#define    FL_FLASH_SWD_READ_PEOTECTION_DISABLE                   (0x0U << FLASH_USRCFG_DBRDPEN_Pos)
#define    FL_FLASH_SWD_READ_PEOTECTION_ENABLE                    (0x1U << FLASH_USRCFG_DBRDPEN_Pos)

#define    FL_FLASH_ERASE_TYPE_PAGE                               (0x0U << FLASH_EPCON_ERTYPE_Pos)
#define    FL_FLASH_ERASE_TYPE_SECTOR                             (0x1U << FLASH_EPCON_ERTYPE_Pos)


#define    FL_FLASH_KEY_STATUS_LOCK                               (0x0U << FLASH_FLSIF_KEYSTA_Pos)
#define    FL_FLASH_KEY_STATUS_CHIP_ERASE                         (0x1U << FLASH_FLSIF_KEYSTA_Pos)
#define    FL_FLASH_KEY_STATUS_PAGE_ERASE                         (0x2U << FLASH_FLSIF_KEYSTA_Pos)
#define    FL_FLASH_KEY_STATUS_PROGRAM                            (0x3U << FLASH_FLSIF_KEYSTA_Pos)
#define    FL_FLASH_KEY_STATUS_ERROR                              (0x4U << FLASH_FLSIF_KEYSTA_Pos)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup FLASH_FL_Exported_Functions FLASH Exported Functions
  * @{
  */

/**
  * @brief    Flash wait cycles config
  * @rmtoll   FLASHRDCON    WAIT    FL_FLASH_SetReadWait
  * @param    FLASHx FLASH instance
  * @param    wait This parameter can be one of the following values:
  *           @arg @ref FL_FLASH_READ_WAIT_0CYCLE
  *           @arg @ref FL_FLASH_READ_WAIT_1CYCLE
  *           @arg @ref FL_FLASH_READ_WAIT_2CYCLE
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_SetReadWait(FLASH_Type* FLASHx, uint32_t wait)
{
    MODIFY_REG(FLASHx->FLASHRDCON, FLASH_FLASHRDCON_WAIT_Msk, wait);
}

/**
  * @brief    Get flash wait cycles config status
  * @rmtoll   FLASHRDCON    WAIT    FL_FLASH_GetReadWait
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_READ_WAIT_0CYCLE
  *           @arg @ref FL_FLASH_READ_WAIT_1CYCLE
  *           @arg @ref FL_FLASH_READ_WAIT_2CYCLE
  */
__STATIC_INLINE uint32_t FL_FLASH_GetReadWait(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLASHRDCON, FLASH_FLASHRDCON_WAIT_Msk));
}

/**
  * @brief    Get MCU DBGCR enable status
  * @rmtoll   USRCFG    DBGCREN    FL_FLASH_GetMCUDBGCRState
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_MCU_DBGCR_ENABLE
  *           @arg @ref FL_FLASH_MCU_DBGCR_DISABLE
  */
__STATIC_INLINE uint32_t FL_FLASH_GetMCUDBGCRState(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->USRCFG, FLASH_USRCFG_DBGCREN_Msk));
}

/**
  * @brief    Get BootSwap enable status
  * @rmtoll   USRCFG    BTSEN    FL_FLASH_GetBootSwapState
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_BOOT_SWAP_DISABLE
  *           @arg @ref FL_FLASH_BOOT_SWAP_ENABLE
  */
__STATIC_INLINE uint32_t FL_FLASH_GetBootSwapState(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->USRCFG, FLASH_USRCFG_BTSEN_Msk));
}

/**
  * @brief    Get AppCode lock enable
  * @rmtoll   USRCFG    ACLOCKEN    FL_FLASH_GetFlashLockState
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_FLASH_LOCK_DISABLE
  *           @arg @ref FL_FLASH_FLASH_LOCK_ENABLE
  */
__STATIC_INLINE uint32_t FL_FLASH_GetFlashLockState(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->USRCFG, FLASH_USRCFG_ACLOCKEN_Msk));
}

/**
  * @brief    Get debug read protection enable status
  * @rmtoll   USRCFG    DBRDPEN    FL_FLASH_GetSWDReadProtectionState
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_SWD_READ_PEOTECTION_DISABLE
  *           @arg @ref FL_FLASH_SWD_READ_PEOTECTION_ENABLE
  */
__STATIC_INLINE uint32_t FL_FLASH_GetSWDReadProtectionState(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->USRCFG, FLASH_USRCFG_DBRDPEN_Msk));
}

/**
  * @brief    Set ACLOCK register  32 bit
  * @rmtoll   ACLOCK1        FL_FLASH_SetFlashRegionLock
  * @param    FLASHx FLASH instance
  * @param    region This parameter can be one of the following values:
  *           @arg @ref FL_FLASH_BLOCK_0
  *           @arg @ref FL_FLASH_BLOCK_1
  *           @arg @ref FL_FLASH_BLOCK_2
  *           @arg @ref FL_FLASH_BLOCK_3
  *           @arg @ref FL_FLASH_BLOCK_4
  *           @arg @ref FL_FLASH_BLOCK_5
  *           @arg @ref FL_FLASH_BLOCK_6
  *           @arg @ref FL_FLASH_BLOCK_7
  *           @arg @ref FL_FLASH_BLOCK_8
  *           @arg @ref FL_FLASH_BLOCK_9
  *           @arg @ref FL_FLASH_BLOCK_10
  *           @arg @ref FL_FLASH_BLOCK_11
  *           @arg @ref FL_FLASH_BLOCK_12
  *           @arg @ref FL_FLASH_BLOCK_13
  *           @arg @ref FL_FLASH_BLOCK_14
  *           @arg @ref FL_FLASH_BLOCK_15
  *           @arg @ref FL_FLASH_BLOCK_16
  *           @arg @ref FL_FLASH_BLOCK_17
  *           @arg @ref FL_FLASH_BLOCK_18
  *           @arg @ref FL_FLASH_BLOCK_19
  *           @arg @ref FL_FLASH_BLOCK_20
  *           @arg @ref FL_FLASH_BLOCK_21
  *           @arg @ref FL_FLASH_BLOCK_22
  *           @arg @ref FL_FLASH_BLOCK_23
  *           @arg @ref FL_FLASH_BLOCK_24
  *           @arg @ref FL_FLASH_BLOCK_25
  *           @arg @ref FL_FLASH_BLOCK_26
  *           @arg @ref FL_FLASH_BLOCK_27
  *           @arg @ref FL_FLASH_BLOCK_28
  *           @arg @ref FL_FLASH_BLOCK_29
  *           @arg @ref FL_FLASH_BLOCK_30
  *           @arg @ref FL_FLASH_BLOCK_31

  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_SetFlashRegionLock(FLASH_Type *FLASHx, uint32_t region)
{
    SET_BIT(FLASHx->ACLOCK1, region);
}

/**
  * @brief    Get ACLOCK register  32 bit status
  * @rmtoll   ACLOCK1        FL_FLASH_GetFlashRegionLock
  * @param    FLASHx FLASH instance
  * @param    region This parameter can be one of the following values:
  *           @arg @ref FL_FLASH_BLOCK_0
  *           @arg @ref FL_FLASH_BLOCK_1
  *           @arg @ref FL_FLASH_BLOCK_2
  *           @arg @ref FL_FLASH_BLOCK_3
  *           @arg @ref FL_FLASH_BLOCK_4
  *           @arg @ref FL_FLASH_BLOCK_5
  *           @arg @ref FL_FLASH_BLOCK_6
  *           @arg @ref FL_FLASH_BLOCK_7
  *           @arg @ref FL_FLASH_BLOCK_8
  *           @arg @ref FL_FLASH_BLOCK_9
  *           @arg @ref FL_FLASH_BLOCK_10
  *           @arg @ref FL_FLASH_BLOCK_11
  *           @arg @ref FL_FLASH_BLOCK_12
  *           @arg @ref FL_FLASH_BLOCK_13
  *           @arg @ref FL_FLASH_BLOCK_14
  *           @arg @ref FL_FLASH_BLOCK_15
  *           @arg @ref FL_FLASH_BLOCK_16
  *           @arg @ref FL_FLASH_BLOCK_17
  *           @arg @ref FL_FLASH_BLOCK_18
  *           @arg @ref FL_FLASH_BLOCK_19
  *           @arg @ref FL_FLASH_BLOCK_20
  *           @arg @ref FL_FLASH_BLOCK_21
  *           @arg @ref FL_FLASH_BLOCK_22
  *           @arg @ref FL_FLASH_BLOCK_23
  *           @arg @ref FL_FLASH_BLOCK_24
  *           @arg @ref FL_FLASH_BLOCK_25
  *           @arg @ref FL_FLASH_BLOCK_26
  *           @arg @ref FL_FLASH_BLOCK_27
  *           @arg @ref FL_FLASH_BLOCK_28
  *           @arg @ref FL_FLASH_BLOCK_29
  *           @arg @ref FL_FLASH_BLOCK_30
  *           @arg @ref FL_FLASH_BLOCK_31
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_FLASH_GetFlashRegionLock(FLASH_Type *FLASHx, uint32_t region)
{
    return (uint32_t)(READ_BIT(FLASHx->ACLOCK1, region));
}

/**
  * @brief    Set flash erase type 
  * @rmtoll   EPCON    ERTYPE    FL_FLASH_SetFlashEraseType
  * @param    FLASHx FLASH instance
  * @param    type This parameter can be one of the following values:
  *           @arg @ref FL_FLASH_ERASE_TYPE_PAGE
  *           @arg @ref FL_FLASH_ERASE_TYPE_SECTOR
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_SetFlashEraseType(FLASH_Type* FLASHx, uint32_t type)
{
    MODIFY_REG(FLASHx->EPCON, FLASH_EPCON_ERTYPE_Msk, type);
}

/**
  * @brief    Get flash erase type
  * @rmtoll   EPCON    ERTYPE    FL_FLASH_GetFlashEraseType
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_ERASE_TYPE_PAGE
  *           @arg @ref FL_FLASH_ERASE_TYPE_SECTOR
  */
__STATIC_INLINE uint32_t FL_FLASH_GetFlashEraseType(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->EPCON, FLASH_EPCON_ERTYPE_Msk));
}

/**
  * @brief    Program request enable
  * @rmtoll   EPCON    PREQ    FL_FLASH_EnableProgram
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableProgram(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->EPCON, FLASH_EPCON_EREQ_Msk);
    SET_BIT(FLASHx->EPCON, FLASH_EPCON_PREQ_Msk);
}

/**
  * @brief    Erase request enable
  * @rmtoll   EPCON    EREQ    FL_FLASH_EnableErase
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableErase(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->EPCON, FLASH_EPCON_PREQ_Msk);
    SET_BIT(FLASHx->EPCON, FLASH_EPCON_EREQ_Msk);
}

/**
  * @brief    Set flash key
  * @rmtoll   FLSKEY        FL_FLASH_UnlockFlash
  * @param    FLASHx FLASH instance
  * @param    key 
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_UnlockFlash(FLASH_Type* FLASHx, uint32_t key)
{
    WRITE_REG(FLASHx->FLSKEY, key);
}

/**
  * @brief    Reset flash key
  * @rmtoll   FLSKEY        FL_FLASH_LockFlash
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_LockFlash(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSKEY, 0xFFFFFFFF);

}

/**
  * @brief    Flash authentication error interrupt enable
  * @rmtoll   FLSIE    AUTHIE    FL_FLASH_EnableIT_AuthenticationError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableIT_AuthenticationError(FLASH_Type* FLASHx)
{
    SET_BIT(FLASHx->FLSIE, FLASH_FLSIE_AUTHIE_Msk);
}

/**
  * @brief    Flash authentication error interrupt disable
  * @rmtoll   FLSIE    AUTHIE    FL_FLASH_DisableIT_AuthenticationError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_DisableIT_AuthenticationError(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->FLSIE, FLASH_FLSIE_AUTHIE_Msk);
}

/**
  * @brief    Get flash authentication error interrupt enable status
  * @rmtoll   FLSIE    AUTHIE    FL_FLASH_IsEnabledIT_AuthenticationError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsEnabledIT_AuthenticationError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIE, FLASH_FLSIE_AUTHIE_Msk) == FLASH_FLSIE_AUTHIE_Msk);
}

/**
  * @brief    Flash key error interrupt enable
  * @rmtoll   FLSIE    KEYIE    FL_FLASH_EnableIT_KeyError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableIT_KeyError(FLASH_Type* FLASHx)
{
    SET_BIT(FLASHx->FLSIE, FLASH_FLSIE_KEYIE_Msk);
}

/**
  * @brief    Flash key error interrupt disable
  * @rmtoll   FLSIE    KEYIE    FL_FLASH_DisableIT_KeyError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_DisableIT_KeyError(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->FLSIE, FLASH_FLSIE_KEYIE_Msk);
}

/**
  * @brief    Get Flash key error interrupt enable status
  * @rmtoll   FLSIE    KEYIE    FL_FLASH_IsEnabledIT_KeyError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsEnabledIT_KeyError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIE, FLASH_FLSIE_KEYIE_Msk) == FLASH_FLSIE_KEYIE_Msk);
}

/**
  * @brief    Erase/Program clock error interrupt enable
  * @rmtoll   FLSIE    CKIE    FL_FLASH_EnableIT_ClockError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableIT_ClockError(FLASH_Type* FLASHx)
{
    SET_BIT(FLASHx->FLSIE, FLASH_FLSIE_CKIE_Msk);
}

/**
  * @brief    Erase/Program clock error interrupt disable
  * @rmtoll   FLSIE    CKIE    FL_FLASH_DisableIT_ClockError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_DisableIT_ClockError(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->FLSIE, FLASH_FLSIE_CKIE_Msk);
}

/**
  * @brief    Get Erase/Program clock error interrupt enable status
  * @rmtoll   FLSIE    CKIE    FL_FLASH_IsEnabledIT_ClockError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsEnabledIT_ClockError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIE, FLASH_FLSIE_CKIE_Msk) == FLASH_FLSIE_CKIE_Msk);
}

/**
  * @brief    Program done interrupt enable
  * @rmtoll   FLSIE    PRDIE    FL_FLASH_EnableIT_ProgramComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableIT_ProgramComplete(FLASH_Type* FLASHx)
{
    SET_BIT(FLASHx->FLSIE, FLASH_FLSIE_PRDIE_Msk);
}

/**
  * @brief    Program done interrupt disable
  * @rmtoll   FLSIE    PRDIE    FL_FLASH_DisableIT_ProgramComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_DisableIT_ProgramComplete(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->FLSIE, FLASH_FLSIE_PRDIE_Msk);
}

/**
  * @brief    Get program done interrupt enable status
  * @rmtoll   FLSIE    PRDIE    FL_FLASH_IsEnabledIT_ProgramComplete
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsEnabledIT_ProgramComplete(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIE, FLASH_FLSIE_PRDIE_Msk) == FLASH_FLSIE_PRDIE_Msk);
}

/**
  * @brief    Erase done interrupt enable
  * @rmtoll   FLSIE    ERDIE    FL_FLASH_EnableIT_EraseComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_EnableIT_EraseComplete(FLASH_Type* FLASHx)
{
    SET_BIT(FLASHx->FLSIE, FLASH_FLSIE_ERDIE_Msk);
}

/**
  * @brief    Erase done interrupt disable
  * @rmtoll   FLSIE    ERDIE    FL_FLASH_DisableIT_EraseComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_DisableIT_EraseComplete(FLASH_Type* FLASHx)
{
    CLEAR_BIT(FLASHx->FLSIE, FLASH_FLSIE_ERDIE_Msk);
}

/**
  * @brief    Get erase done interrupt enable status
  * @rmtoll   FLSIE    ERDIE    FL_FLASH_IsEnabledIT_EraseComplete
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsEnabledIT_EraseComplete(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIE, FLASH_FLSIE_ERDIE_Msk) == FLASH_FLSIE_ERDIE_Msk);
}

/**
  * @brief    Get flash key status
  * @rmtoll   FLSIF    KEYSTA    FL_FLASH_GetFlashLockStatus
  * @param    FLASHx FLASH instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_FLASH_KEY_STATUS_LOCK
  *           @arg @ref FL_FLASH_KEY_STATUS_CHIP_ERASE
  *           @arg @ref FL_FLASH_KEY_STATUS_PAGE_ERASE
  *           @arg @ref FL_FLASH_KEY_STATUS_PROGRAM
  *           @arg @ref FL_FLASH_KEY_STATUS_ERROR
  */
__STATIC_INLINE uint32_t FL_FLASH_GetFlashLockStatus(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_KEYSTA_Msk));
}

/**
  * @brief    Get Flash Authentication Error Flag
  * @rmtoll   FLSIF    AUTHERR    FL_FLASH_IsActiveFlag_AuthenticationError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsActiveFlag_AuthenticationError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_AUTHERR_Msk) == (FLASH_FLSIF_AUTHERR_Msk));
}

/**
  * @brief    ClearFlash Authentication Error Flag
  * @rmtoll   FLSIF    AUTHERR    FL_FLASH_ClearFlag_AuthenticationError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_ClearFlag_AuthenticationError(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSIF, FLASH_FLSIF_AUTHERR_Msk);
}

/**
  * @brief    Get Flash Key Error Flag
  * @rmtoll   FLSIF    KEYERR    FL_FLASH_IsActiveFlag_KeyError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsActiveFlag_KeyError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_KEYERR_Msk) == (FLASH_FLSIF_KEYERR_Msk));
}

/**
  * @brief    Clear Flash Key Error Flag
  * @rmtoll   FLSIF    KEYERR    FL_FLASH_ClearFlag_KeyError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_ClearFlag_KeyError(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSIF, FLASH_FLSIF_KEYERR_Msk);
}

/**
  * @brief    Get Erase/Program Clock Error Flag
  * @rmtoll   FLSIF    CKERR    FL_FLASH_IsActiveFlag_ClockError
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsActiveFlag_ClockError(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_CKERR_Msk) == (FLASH_FLSIF_CKERR_Msk));
}

/**
  * @brief    Clear Erase/Program Clock Error Flag
  * @rmtoll   FLSIF    CKERR    FL_FLASH_ClearFlag_ClockError
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_ClearFlag_ClockError(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSIF, FLASH_FLSIF_CKERR_Msk);
}

/**
  * @brief    Get Program Done Flag
  * @rmtoll   FLSIF    PRD    FL_FLASH_IsActiveFlag_ProgramComplete
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsActiveFlag_ProgramComplete(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_PRD_Msk) == (FLASH_FLSIF_PRD_Msk));
}

/**
  * @brief    Clear Program Done Flag
  * @rmtoll   FLSIF    PRD    FL_FLASH_ClearFlag_ProgramComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_ClearFlag_ProgramComplete(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSIF, FLASH_FLSIF_PRD_Msk);
}

/**
  * @brief    Get Erase Done Flag
  * @rmtoll   FLSIF    ERD    FL_FLASH_IsActiveFlag_EraseComplete
  * @param    FLASHx FLASH instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_FLASH_IsActiveFlag_EraseComplete(FLASH_Type* FLASHx)
{
    return (uint32_t)(READ_BIT(FLASHx->FLSIF, FLASH_FLSIF_ERD_Msk) == (FLASH_FLSIF_ERD_Msk));
}

/**
  * @brief    Clear Erase Done Flag
  * @rmtoll   FLSIF    ERD    FL_FLASH_ClearFlag_EraseComplete
  * @param    FLASHx FLASH instance
  * @retval   None
  */
__STATIC_INLINE void FL_FLASH_ClearFlag_EraseComplete(FLASH_Type* FLASHx)
{
    WRITE_REG(FLASHx->FLSIF, FLASH_FLSIF_ERD_Msk);
}

/**
  * @}
  */

/** @defgroup FLASH_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

/**
  * @}
  */

/** @defgroup FLASH_FL_EF_Operation Opeartion functions
  * @{
  */

FL_ErrorStatus FL_FLASH_PageErase(FLASH_Type *FLASHx, uint32_t address);
FL_ErrorStatus FL_FLASH_Program_Byte(FLASH_Type *FLASHx, uint32_t address, uint8_t data);
FL_ErrorStatus FL_FLASH_Program_Word(FLASH_Type *FLASHx, uint32_t address, uint32_t data);
FL_ErrorStatus FL_FLASH_Program_Page(FLASH_Type *FLASHx, uint32_t pageNum, uint32_t *data);

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

#endif /* __FM33L0XXD_FL_FLASH_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
