/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_pmu.h
  * @author  FMSH Application Team
  * @brief   Head file of PMU FL Module
  * @version  V0.0.2
  * @date     26. March 2026
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
#ifndef __FM33L0XXD_FL_PMU_H
#define __FM33L0XXD_FL_PMU_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup PMU PMU
  * @brief PMU FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup PMU_FL_ES_INIT PMU Exported Init structures
  * @{
  */

/**
  * @brief PMU Init Sturcture definition
  */
typedef struct
{

    /*! 低功耗模式下内核电压降低与否 */
    FL_FunState coreVoltageScaling;
    /*! 睡眠模式配置 */
    uint32_t deepSleep;
    /*! 唤醒速度配置 */
    uint32_t wakeupspeed;
    /*! 额外唤醒延迟 */
    uint32_t wakeupDelay;
} FL_PMU_SleepInitTypeDef;
/**
  * @}
  */

/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup PMU_FL_Exported_Constants PMU Exported Constants
  * @{
  */

#define    PMU_LPMCFG_XTOFF_Pos                                   (19U)
#define    PMU_LPMCFG_XTOFF_Msk                                   (0x1U << PMU_LPMCFG_XTOFF_Pos)
#define    PMU_LPMCFG_XTOFF                                        PMU_LPMCFG_XTOFF_Msk

#define    PMU_LPMCFG_XTOFF_B_Pos                                 (18U)
#define    PMU_LPMCFG_XTOFF_B_Msk                                 (0x1U << PMU_LPMCFG_XTOFF_B_Pos)
#define    PMU_LPMCFG_XTOFF_B                                      PMU_LPMCFG_XTOFF_B_Msk

#define    PMU_LPMCFG_LDO15EN_Pos                                 (17U)
#define    PMU_LPMCFG_LDO15EN_Msk                                 (0x1U << PMU_LPMCFG_LDO15EN_Pos)
#define    PMU_LPMCFG_LDO15EN                                      PMU_LPMCFG_LDO15EN_Msk

#define    PMU_LPMCFG_LDO15EN_B_Pos                               (16U)
#define    PMU_LPMCFG_LDO15EN_B_Msk                               (0x1U << PMU_LPMCFG_LDO15EN_B_Pos)
#define    PMU_LPMCFG_LDO15EN_B                                    PMU_LPMCFG_LDO15EN_B_Msk


#define    PMU_LPMCFG_SLPDP_Pos                                   (9U)
#define    PMU_LPMCFG_SLPDP_Msk                                   (0x1U << PMU_LPMCFG_SLPDP_Pos)
#define    PMU_LPMCFG_SLPDP                                        PMU_LPMCFG_SLPDP_Msk

#define    PMU_LPMCFG_CVS_Pos                                     (8U)
#define    PMU_LPMCFG_CVS_Msk                                     (0x1U << PMU_LPMCFG_CVS_Pos)
#define    PMU_LPMCFG_CVS                                          PMU_LPMCFG_CVS_Msk

#define    PMU_LPMCFG_PMOD_Pos                                    (0U)
#define    PMU_LPMCFG_PMOD_Msk                                    (0x3U << PMU_LPMCFG_PMOD_Pos)
#define    PMU_LPMCFG_PMOD                                         PMU_LPMCFG_PMOD_Msk

#define    PMU_WKTR_FWUP_Pos                                      (2U)
#define    PMU_WKTR_FWUP_Msk                                      (0x1U << PMU_WKTR_FWUP_Pos)
#define    PMU_WKTR_FWUP                                           PMU_WKTR_FWUP_Msk

#define    PMU_WKTR_T1A_Pos                                       (0U)
#define    PMU_WKTR_T1A_Msk                                       (0x3U << PMU_WKTR_T1A_Pos)
#define    PMU_WKTR_T1A                                           PMU_WKTR_T1A_Msk

#define    PMU_WKPFLAG_DBGWKF_Pos                                 (8U)
#define    PMU_WKPFLAG_DBGWKF_Msk                                 (0x1U << PMU_WKPFLAG_DBGWKF_Pos)
#define    PMU_WKPFLAG_DBGWKF                                     PMU_WKPFLAG_DBGWKF_Msk

#define    PMU_WKPFLAG_WKPXF_Pos                                  (0U)
#define    PMU_WKPFLAG_WKPXF_Msk                                  (0xffU << PMU_WKPFLAG_WKPXF_Pos)
#define    PMU_WKPFLAG_WKPXF                                      PMU_WKPFLAG_WKPXF_Msk


#define    PMU_LPREIE_SLPEIE_Pos                                  (1U)
#define    PMU_LPREIE_SLPEIE_Msk                                  (0x1U << PMU_LPREIE_SLPEIE_Pos)
#define    PMU_LPREIE_SLPTEIE                                     PMU_LPREIE_SLPEIE_Msk

#define    PMU_LPREIE_LPREIE_Pos                                  (0U)
#define    PMU_LPREIE_LPREIE_Msk                                  (0x1U << PMU_LPREIE_LPREIE_Pos)
#define    PMU_LPREIE_LPREIE                                      PMU_LPREIE_LPREIE_Msk


#define    PMU_LPREIF_SLPEIF_Pos                                  (1U)
#define    PMU_LPREIF_SLPEIF_Msk                                  (0x1U << PMU_LPREIF_SLPEIF_Pos)
#define    PMU_LPREIF_SLPEIF                                      PMU_LPREIF_SLPEIF_Msk


#define    PMU_LPREIF_LPREIE_Pos                                  (0U)
#define    PMU_LPREIF_LPREIE_Msk                                  (0x1U << PMU_LPREIF_LPREIE_Pos)
#define    PMU_LPREIF_LPREIE                                      PMU_LPREIF_LPREIE_Msk

#define    FL_PMU_WKUP0PIN                                        (0x1U << 0U)
#define    FL_PMU_WKUP1PIN                                        (0x1U << 1U)
#define    FL_PMU_WKUP2PIN                                        (0x1U << 2U)
#define    FL_PMU_WKUP3PIN                                        (0x1U << 3U)
#define    FL_PMU_WKUP4PIN                                        (0x1U << 4U)
#define    FL_PMU_WKUP5PIN                                        (0x1U << 5U)
#define    FL_PMU_WKUP6PIN                                        (0x1U << 6U)
#define    FL_PMU_WKUP7PIN                                        (0x1U << 7U)



#define    FL_PMU_SLEEP_MODE_DEEP                                 (0x1U << PMU_LPMCFG_SLPDP_Pos)
#define    FL_PMU_SLEEP_MODE_NORMAL                               (0x0U << PMU_LPMCFG_SLPDP_Pos)


#define    FL_PMU_POWER_MODE_ACTIVE                               (0x0U << PMU_LPMCFG_PMOD_Pos)
#define    FL_PMU_POWER_MODE_LPRUN_ONLY                           (0x1U << PMU_LPMCFG_PMOD_Pos)
#define    FL_PMU_POWER_MODE_SLEEP_OR_DEEPSLEEP                   (0x2U << PMU_LPMCFG_PMOD_Pos)

#define    FL_PMU_WAKEUPSPEED_FAST                                (0x1U << PMU_WKTR_FWUP_Pos)
#define    FL_PMU_WAKEUPSPEED_SLOW                                (0x0U << PMU_WKTR_FWUP_Pos)

#define    FL_PMU_WAKEUP_DELAY_GROUP0                             (0x0U << PMU_WKTR_T1A_Pos)
#define    FL_PMU_WAKEUP_DELAY_GROUP1                             (0x1U << PMU_WKTR_T1A_Pos)
#define    FL_PMU_WAKEUP_DELAY_GROUP2                             (0x2U << PMU_WKTR_T1A_Pos)
#define    FL_PMU_WAKEUP_DELAY_GROUP3                             (0x3U << PMU_WKTR_T1A_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup PMU_FL_Exported_Functions PMU Exported Functions
  * @{
  */


/**
  * @brief    Get LDO15 Enable Status
  * @rmtoll   CR    LDO15EN    FL_PMU_GetLDO15Status
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_PMU_GetLDO15Status(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPMCFG, PMU_LPMCFG_LDO15EN_Msk));
}

/**
  * @brief    Get LDO15 Inverse check bit
  * @rmtoll   CR    LDO15EN_B    FL_PMU_GetLDO15StatusInvert
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_PMU_GetLDO15StatusInvert(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPMCFG, PMU_LPMCFG_LDO15EN_B_Msk));
}

/**
  * @brief    Set Sleep Mode
  * @rmtoll   CR    SLPDP    FL_PMU_SetSleepMode
  * @param    PMUx PMU instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_PMU_SLEEP_MODE_DEEP
  *           @arg @ref FL_PMU_SLEEP_MODE_NORMAL
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_SetSleepMode(PMU_Type *PMUx, uint32_t mode)
{
    MODIFY_REG(PMUx->LPMCFG, PMU_LPMCFG_SLPDP_Msk, mode);
}

/**
  * @brief    Get Sleep Mode Setting
  * @rmtoll   CR    SLPDP    FL_PMU_GetSleepMode
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_PMU_SLEEP_MODE_DEEP
  *           @arg @ref FL_PMU_SLEEP_MODE_NORMAL
  */
__STATIC_INLINE uint32_t FL_PMU_GetSleepMode(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPMCFG, PMU_LPMCFG_SLPDP_Msk));
}

/**
  * @brief    Enable Core Voltage Scaling Under Low Power Mode
  * @rmtoll   CR    CVS    FL_PMU_EnableCoreVoltageScaling
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_EnableCoreVoltageScaling(PMU_Type *PMUx)
{
    SET_BIT(PMUx->LPMCFG, PMU_LPMCFG_CVS_Msk);
}

/**
  * @brief    Get Core Voltage Scaling Under Low Power Mode Enable Status
  * @rmtoll   CR    CVS    FL_PMU_IsEnabledCoreVoltageScaling
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsEnabledCoreVoltageScaling(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPMCFG, PMU_LPMCFG_CVS_Msk) == PMU_LPMCFG_CVS_Msk);
}

/**
  * @brief    Disable Core Voltage Scaling Under Low Power Mode
  * @rmtoll   CR    CVS    FL_PMU_DisableCoreVoltageScaling
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_DisableCoreVoltageScaling(PMU_Type *PMUx)
{
    CLEAR_BIT(PMUx->LPMCFG, PMU_LPMCFG_CVS_Msk);
}

/**
  * @brief    Set Low Power Mode
  * @rmtoll   CR    PMOD    FL_PMU_SetLowPowerMode
  * @param    PMUx PMU instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_PMU_POWER_MODE_ACTIVE
  *           @arg @ref FL_PMU_POWER_MODE_LPRUN_ONLY
  *           @arg @ref FL_PMU_POWER_MODE_SLEEP_OR_DEEPSLEEP
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_SetLowPowerMode(PMU_Type *PMUx, uint32_t mode)
{
    MODIFY_REG(PMUx->LPMCFG, PMU_LPMCFG_PMOD_Msk, mode);
}

/**
  * @brief    Get Low Power Mode Setting
  * @rmtoll   CR    PMOD    FL_PMU_GetLowPowerMode
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_PMU_GetLowPowerMode(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPMCFG, PMU_LPMCFG_PMOD_Msk));
}

/**
  * @brief    Set Flash Wkup Speed Mode
  * @rmtoll   WKTR    STPCLR    FL_PMU_SetFlashWkupSpeedMode
  * @param    PMUx PMU instance
  * @param    config This parameter can be one of the following values:
  *           @arg @ref FL_PMU_WAKEUPSPEED_FAST
  *           @arg @ref FL_PMU_WAKEUPSPEED_SLOW
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_SetFlashWkupSpeedMode(PMU_Type *PMUx, uint32_t config)
{
    MODIFY_REG(PMUx->WKTR, PMU_WKTR_FWUP_Msk, config);
}

/**
  * @brief    Get Flash Wkup Speed Mode
  * @rmtoll   WKTR    STPCLR    FL_PMU_GetFlashWkupSpeedMode
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_PMU_FLASH_STOP_CLEAR_MODE_ASYNCHRONOUS
  *           @arg @ref FL_PMU_FLASH_STOP_CLEAR_MODE_SYNCHRONOUS
  */
__STATIC_INLINE uint32_t FL_PMU_GetFlashWkupSpeedMode(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->WKTR, PMU_WKTR_FWUP_Msk));
}

/**
  * @brief    Set Extra Wakeup Delay Under Sleep/DeepSleep Mode
  * @rmtoll   WKTR    T1A    FL_PMU_SetWakeupDelay
  * @param    PMUx PMU instance
  * @param    time This parameter can be one of the following values:
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP0
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP1
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP2
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP3
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_SetWakeupDelay(PMU_Type *PMUx, uint32_t time)
{
    MODIFY_REG(PMUx->WKTR, PMU_WKTR_T1A_Msk, time);
}

/**
  * @brief    Get Extra Wakeup Delay Under Sleep/DeepSleep Mode Setting
  * @rmtoll   WKTR    T1A    FL_PMU_GetWakeupDelay
  * @param    PMUx PMU instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP0
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP1
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP2
  *           @arg @ref FL_PMU_WAKEUP_DELAY_GROUP3
  */
__STATIC_INLINE uint32_t FL_PMU_GetWakeupDelay(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->WKTR, PMU_WKTR_T1A_Msk));
}

/**
  * @brief    Get CPU Debugger wakeup flag
  * @rmtoll   WKFR    DBGWKF    FL_PMU_IsActiveFlag_WakeupDBG
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsActiveFlag_WakeupDBG(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->WKPFLAG, PMU_WKPFLAG_DBGWKF_Msk) == (PMU_WKPFLAG_DBGWKF_Msk));
}

/**
  * @brief    Clear CPU Debugger wakeup flag
  * @rmtoll   WKFR    DBGWKF    FL_PMU_ClearFlag_WakeupDBG
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_ClearFlag_WakeupDBG(PMU_Type *PMUx)
{
    WRITE_REG(PMUx->WKPFLAG, PMU_WKPFLAG_DBGWKF_Msk);
}

/**
  * @brief    Get pinx wakeup flag
  * @rmtoll   WKFR    WKPXF    FL_PMU_IsActiveFlag_WakeupPIN
  * @param    PMUx PMU instance
  * @param    Pin This parameter can be one of the following values:
  *           @arg @ref FL_PMU_WKUP0PIN
  *           @arg @ref FL_PMU_WKUP1PIN
  *           @arg @ref FL_PMU_WKUP2PIN
  *           @arg @ref FL_PMU_WKUP3PIN
  *           @arg @ref FL_PMU_WKUP4PIN
  *           @arg @ref FL_PMU_WKUP5PIN
  *           @arg @ref FL_PMU_WKUP6PIN
  *           @arg @ref FL_PMU_WKUP7PIN
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsActiveFlag_WakeupPIN(PMU_Type *PMUx, uint32_t Pin)
{
    return (uint32_t)(READ_BIT(PMUx->WKPFLAG, ((Pin & 0xff) << 0x0U)) == ((Pin & 0xff) << 0x0U));
}

/**
  * @brief    Clear pinx wakeup flag
  * @rmtoll   WKFR    WKPXF    FL_PMU_ClearFlag_WakeupPIN
  * @param    PMUx PMU instance
  * @param    Pin This parameter can be one of the following values:
  *           @arg @ref FL_PMU_WKUP0PIN
  *           @arg @ref FL_PMU_WKUP1PIN
  *           @arg @ref FL_PMU_WKUP2PIN
  *           @arg @ref FL_PMU_WKUP3PIN
  *           @arg @ref FL_PMU_WKUP4PIN
  *           @arg @ref FL_PMU_WKUP5PIN
  *           @arg @ref FL_PMU_WKUP6PIN
  *           @arg @ref FL_PMU_WKUP7PIN
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_ClearFlag_WakeupPIN(PMU_Type *PMUx, uint32_t Pin)
{
    WRITE_REG(PMUx->WKPFLAG, ((Pin & 0xff) << 0x0U));
}

/**
  * @brief    LPREIE error interrupt enable
  * @rmtoll   IER    LPRUNEIE    FL_PMU_EnableIT_LPRunError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_EnableIT_LPRunError(PMU_Type *PMUx)
{
    SET_BIT(PMUx->LPREIE, PMU_LPREIE_LPREIE_Msk);
}

/**
  * @brief    Get LPREIE error interrupt enable status
  * @rmtoll   IER    LPRUNEIE    FL_PMU_IsEnabledIT_LPRunError
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsEnabledIT_LPRunError(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPREIE, PMU_LPREIE_LPREIE_Msk) == PMU_LPREIE_LPREIE_Msk);
}

/**
  * @brief    LPREIE error interrupt disable
  * @rmtoll   IER    LPRUNEIE    FL_PMU_DisableIT_LPRunError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_DisableIT_LPRunError(PMU_Type *PMUx)
{
    CLEAR_BIT(PMUx->LPREIE, PMU_LPREIE_LPREIE_Msk);
}

/**
  * @brief    Sleep error interrupt enable
  * @rmtoll   IER    SLPEIE    FL_PMU_EnableIT_SleepError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_EnableIT_SleepError(PMU_Type *PMUx)
{
    SET_BIT(PMUx->LPREIE, PMU_LPREIE_SLPEIE_Msk);
}

/**
  * @brief    Get sleep error interrupt enable status
  * @rmtoll   IER    SLPEIE    FL_PMU_IsEnabledIT_SleepError
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsEnabledIT_SleepError(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPREIE, PMU_LPREIE_SLPEIE_Msk) == PMU_LPREIE_SLPEIE_Msk);
}

/**
  * @brief    sleep error interrupt disable
  * @rmtoll   IER    SLPEIE    FL_PMU_DisableIT_SleepError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_DisableIT_SleepError(PMU_Type *PMUx)
{
    CLEAR_BIT(PMUx->LPREIE, PMU_LPREIE_SLPEIE_Msk);
}

/**
  * @brief    Get LPRUN error interrupt flag
  * @rmtoll   ISR    SLPUNEIE    FL_PMU_IsActiveFlag_LPRunError
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsActiveFlag_LPRunError(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPREIF, PMU_LPREIF_LPREIE_Msk) == (PMU_LPREIF_LPREIE_Msk));
}

/**
  * @brief    Clear LPRUN error interrupt flag
  * @rmtoll   ISR    SLPUNEIE    FL_PMU_ClearFlag_LPRunError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_ClearFlag_LPRunError(PMU_Type *PMUx)
{
    WRITE_REG(PMUx->LPREIF, PMU_LPREIF_LPREIE_Msk);
}

/**
  * @brief    Get SLEEP error interrupt flag
  * @rmtoll   ISR    SLPEIF    FL_PMU_IsActiveFlag_SleepError
  * @param    PMUx PMU instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_PMU_IsActiveFlag_SleepError(PMU_Type *PMUx)
{
    return (uint32_t)(READ_BIT(PMUx->LPREIF, PMU_LPREIF_SLPEIF_Msk) == (PMU_LPREIF_SLPEIF_Msk));
}

/**
  * @brief    Clear SLEEP error interrupt flag
  * @rmtoll   ISR    SLPEIF    FL_PMU_ClearFlag_SleepError
  * @param    PMUx PMU instance
  * @retval   None
  */
__STATIC_INLINE void FL_PMU_ClearFlag_SleepError(PMU_Type *PMUx)
{
    WRITE_REG(PMUx->LPREIF, PMU_LPREIF_SLPEIF_Msk);
}

/**
  * @}
  */

/** @defgroup PMU_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

FL_ErrorStatus FL_PMU_Sleep_DeInit(PMU_Type *PMUx);
FL_ErrorStatus FL_PMU_Sleep_Init(PMU_Type *PMUx, FL_PMU_SleepInitTypeDef *LPM_InitStruct);
void FL_PMU_StructInit(FL_PMU_SleepInitTypeDef *LPM_InitStruct);

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

#endif /* __FM33L0XXD_FL_PMU_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
