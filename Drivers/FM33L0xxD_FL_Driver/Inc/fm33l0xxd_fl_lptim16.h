/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_lptim16.h
  * @author  FMSH Application Team
  * @brief   Head file of LPTIM16 FL Module
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
#ifndef __FM33L0XXD_FL_LPTIM16_H
#define __FM33L0XXD_FL_LPTIM16_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup LPTIM16_FL_ES_INIT LPTIM16 Exported Init structures
  * @{
  */
/**
  * @brief LPTIM16 Init Sturcture Definition
  */
typedef struct
{
    /* 时钟源 */
    uint32_t clockSource;

    /* 预分频系数 */
    uint32_t prescaler;

    /* 重装值 */
    uint32_t autoReload;

    /* 定时器工作模式选择 */
    uint32_t mode;

    /* 单次计数使能 */
    uint32_t onePulseMode;

    /* ETR异步计数边沿 */
    uint32_t countEdge;

    /* ETR触发计数边沿 */
    uint32_t triggerEdge;

} FL_LPTIM16_InitTypeDef;



/**
  * @brief  LPTIM16 Output Compare Configuration Structure Definition
  */
typedef struct
{
    uint32_t compareValue;

    uint32_t OCPolarity;

    uint32_t PluseMode;

} FL_LPTIM16_OC_InitTypeDef;

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup LPTIM16_FL_Exported_Constants LPTIM16 Exported Constants
  * @{
  */

#define    LPTIM16_LPTCTRL_LPTEN_Pos                                (0U)
#define    LPTIM16_LPTCTRL_LPTEN_Msk                                (0x1U << LPTIM16_LPTCTRL_LPTEN_Pos)
#define    LPTIM16_LPTCTRL_LPTEN                                    LPTIM16_LPTCTRL_LPTEN_Msk

#define    LPTIM16_LPTCFG_FLTEN_Pos                                 (15U)
#define    LPTIM16_LPTCFG_FLTEN_Msk                                 (0x1U << LPTIM16_LPTCFG_FLTEN_Pos)
#define    LPTIM16_LPTCFG_FLTEN                                     LPTIM16_LPTCFG_FLTEN_Msk

#define    LPTIM16_LPTCFG_CLKSEL_Pos                                (8U)
#define    LPTIM16_LPTCFG_CLKSEL_Msk                                (0x3U << LPTIM16_LPTCFG_CLKSEL_Pos)
#define    LPTIM16_LPTCFG_CLKSEL                                    LPTIM16_LPTCFG_CLKSEL_Msk

#define    LPTIM16_LPTCFG_DIVSEL_Pos                                (10U)
#define    LPTIM16_LPTCFG_DIVSEL_Msk                                (0x7U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    LPTIM16_LPTCFG_DIVSEL                                    LPTIM16_LPTCFG_DIVSEL_Msk

#define    LPTIM16_LPTCFG_EDGESEL_Pos                               (7U)
#define    LPTIM16_LPTCFG_EDGESEL_Msk                               (0x1U << LPTIM16_LPTCFG_EDGESEL_Pos)
#define    LPTIM16_LPTCFG_EDGESEL                                   LPTIM16_LPTCFG_EDGESEL_Msk

#define    LPTIM16_LPTCFG_TRIGCFG_Pos                               (5U)
#define    LPTIM16_LPTCFG_TRIGCFG_Msk                               (0x3U << LPTIM16_LPTCFG_TRIGCFG_Pos)
#define    LPTIM16_LPTCFG_TRIGCFG                                   LPTIM16_LPTCFG_TRIGCFG_Msk

#define    LPTIM16_LPTCFG_POLARITY_Pos                              (4U)
#define    LPTIM16_LPTCFG_POLARITY_Msk                              (0x1U << LPTIM16_LPTCFG_POLARITY_Pos)
#define    LPTIM16_LPTCFG_POLARITY                                  LPTIM16_LPTCFG_POLARITY_Msk

#define    LPTIM16_LPTCFG_PWM_Pos                                   (3U)
#define    LPTIM16_LPTCFG_PWM_Msk                                   (0x1U << LPTIM16_LPTCFG_PWM_Pos)
#define    LPTIM16_LPTCFG_PWM                                       LPTIM16_LPTCFG_PWM_Msk

#define    LPTIM16_LPTCFG_MODE_Pos                                  (2U)
#define    LPTIM16_LPTCFG_MODE_Msk                                  (0x1U << LPTIM16_LPTCFG_MODE_Pos)
#define    LPTIM16_LPTCFG_MODE                                      LPTIM16_LPTCFG_MODE_Msk

#define    LPTIM16_LPTCFG_TMODE_Pos                                 (0U)
#define    LPTIM16_LPTCFG_TMODE_Msk                                 (0x3U << LPTIM16_LPTCFG_TMODE_Pos)
#define    LPTIM16_LPTCFG_TMODE                                     LPTIM16_LPTCFG_TMODE_Msk

#define    LPTIM16_LPTCNT_CNT16_Pos                                 (0U)
#define    LPTIM16_LPTCNT_CNT16_Msk                                 (0xffffU << LPTIM16_LPTCNT_CNT16_Pos)
#define    LPTIM16_LPTCNT_CNT16                                     LPTIM16_LPTCNT_CNT16_Msk

#define    LPTIM16_LPTCMP_COMPARE_REG_Pos                           (0U)
#define    LPTIM16_LPTCMP_COMPARE_REG_Msk                           (0xffffU << LPTIM16_LPTCMP_COMPARE_REG_Pos)
#define    LPTIM16_LPTCMP_COMPARE_REG                               LPTIM16_LPTCMP_COMPARE_REG_Msk

#define    LPTIM16_LPTIE_TRIGIE_Pos                                 (2U)
#define    LPTIM16_LPTIE_TRIGIE_Msk                                 (0x1U << LPTIM16_LPTIE_TRIGIE_Pos)
#define    LPTIM16_LPTIE_TRIGIE                                     LPTIM16_LPTIE_TRIGIE_Msk

#define    LPTIM16_LPTIE_OVIE_Pos                                   (1U)
#define    LPTIM16_LPTIE_OVIE_Msk                                   (0x1U << LPTIM16_LPTIE_OVIE_Pos)
#define    LPTIM16_LPTIE_OVIE                                       LPTIM16_LPTIE_OVIE_Msk

#define    LPTIM16_LPTIE_COMPIE_Pos                                 (0U)
#define    LPTIM16_LPTIE_COMPIE_Msk                                 (0x1U << LPTIM16_LPTIE_COMPIE_Pos)
#define    LPTIM16_LPTIE_COMPIE                                     LPTIM16_LPTIE_COMPIE_Msk

#define    LPTIM16_LPTIF_TRIGIF_Pos                                 (2U)
#define    LPTIM16_LPTIF_TRIGIF_Msk                                 (0x1U << LPTIM16_LPTIF_TRIGIF_Pos)
#define    LPTIM16_LPTIF_TRIGIF                                     LPTIM16_LPTIF_TRIGIF_Msk

#define    LPTIM16_LPTIF_OVIF_Pos                                   (1U)
#define    LPTIM16_LPTIF_OVIF_Msk                                   (0x1U << LPTIM16_LPTIF_OVIF_Pos)
#define    LPTIM16_LPTIF_OVIF                                       LPTIM16_LPTIF_OVIF_Msk

#define    LPTIM16_LPTIF_COMPIF_Pos                                 (0U)
#define    LPTIM16_LPTIF_COMPIF_Msk                                 (0x1U << LPTIM16_LPTIF_COMPIF_Pos)
#define    LPTIM16_LPTIF_COMPIF                                     LPTIM16_LPTIF_COMPIF_Msk






#define    FL_LPTIM16_CLK_SOURCE_LSCLK                              (0x0U << LPTIM16_LPTCFG_CLKSEL_Pos)
#define    FL_LPTIM16_CLK_SOURCE_RCLP                               (0x1U << LPTIM16_LPTCFG_CLKSEL_Pos)
#define    FL_LPTIM16_CLK_SOURCE_PCLK                               (0x2U << LPTIM16_LPTCFG_CLKSEL_Pos)
#define    FL_LPTIM16_CLK_SOURCE_LPTI                               (0x3U << LPTIM16_LPTCFG_CLKSEL_Pos)


#define    FL_LPTIM16_PSC_DIV1                                      (0x0U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV2                                      (0x1U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV4                                      (0x2U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV8                                      (0x3U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV16                                     (0x4U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV32                                     (0x5U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV64                                     (0x6U << LPTIM16_LPTCFG_DIVSEL_Pos)
#define    FL_LPTIM16_PSC_DIV128                                    (0x7U << LPTIM16_LPTCFG_DIVSEL_Pos)




#define    FL_LPTIM16_ETR_COUNT_EDGE_RISING                         (0x0U << LPTIM16_LPTCFG_EDGESEL_Pos)
#define    FL_LPTIM16_ETR_COUNT_EDGE_FALLING                        (0x1U << LPTIM16_LPTCFG_EDGESEL_Pos)


#define    FL_LPTIM16_ETR_TRIGGER_EDGE_RISING                       (0x0U << LPTIM16_LPTCFG_TRIGCFG_Pos)
#define    FL_LPTIM16_ETR_TRIGGER_EDGE_FALLING                      (0x1U << LPTIM16_LPTCFG_TRIGCFG_Pos)
#define    FL_LPTIM16_ETR_TRIGGER_EDGE_BOTH                         (0x2U << LPTIM16_LPTCFG_TRIGCFG_Pos)


#define    FL_LPTIM16_OC_POLARITY_NORMAL                            (0x0U << LPTIM16_LPTCFG_POLARITY_Pos)
#define    FL_LPTIM16_OC_POLARITY_INVERT                            (0x1U << LPTIM16_LPTCFG_POLARITY_Pos)


#define    FL_LPTIM16_PULSE_WIDTH_MODE_SQUARE                       (0x0U << LPTIM16_LPTCFG_PWM_Pos)
#define    FL_LPTIM16_PULSE_WIDTH_MODE_PWM                          (0x1U << LPTIM16_LPTCFG_PWM_Pos)


#define    FL_LPTIM16_ONE_PULSE_MODE_CONTINUOUS                     (0x0U << LPTIM16_LPTCFG_MODE_Pos)
#define    FL_LPTIM16_ONE_PULSE_MODE_SINGLE                         (0x1U << LPTIM16_LPTCFG_MODE_Pos)


#define    FL_LPTIM16_OPERATION_MODE_NORMAL                         (0x0U << LPTIM16_LPTCFG_TMODE_Pos)
#define    FL_LPTIM16_OPERATION_MODE_EXTERNAL_TRIGGER_CNT           (0x1U << LPTIM16_LPTCFG_TMODE_Pos)
#define    FL_LPTIM16_OPERATION_MODE_EXTERNAL_ASYNC_PULSE_CNT       (0x2U << LPTIM16_LPTCFG_TMODE_Pos)
#define    FL_LPTIM16_OPERATION_MODE_TIMEOUT                        (0x3U << LPTIM16_LPTCFG_TMODE_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup LPTIM16_FL_Exported_Functions LPTIM16 Exported Functions
  * @{
  */

/**
  * @brief    Enable LPTIM16
  * @rmtoll   LPTCTRL    LPTEN    FL_LPTIM16_Enable
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_Enable(LPTIM16_Type *LPTIM16x)
{
    SET_BIT(LPTIM16x->LPTCTRL, LPTIM16_LPTCTRL_LPTEN_Msk);
}

/**
  * @brief    Disable LPTIM16
  * @rmtoll   LPTCTRL    LPTEN    FL_LPTIM16_Disable
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_Disable(LPTIM16_Type *LPTIM16x)
{
    CLEAR_BIT(LPTIM16x->LPTCTRL, LPTIM16_LPTCTRL_LPTEN_Msk);
}

/**
  * @brief    Get LPTIM16 Enable Status
  * @rmtoll   LPTCTRL    LPTEN    FL_LPTIM16_IsEnabled
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsEnabled(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCTRL, LPTIM16_LPTCTRL_LPTEN_Msk) == LPTIM16_LPTCTRL_LPTEN_Msk);
}

/**
  * @brief    Enable External Input Analog Filter
  * @rmtoll   LPTCFG    FLTEN    FL_LPTIM16_EnableETRFilter
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_EnableETRFilter(LPTIM16_Type *LPTIM16x)
{
    SET_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_FLTEN_Msk);
}

/**
  * @brief    Disable External Input Analog Filter
  * @rmtoll   LPTCFG    FLTEN    FL_LPTIM16_DisableETRFilter
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_DisableETRFilter(LPTIM16_Type *LPTIM16x)
{
    CLEAR_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_FLTEN_Msk);
}

/**
  * @brief    Get External Input Analog Filter Enable Status
  * @rmtoll   LPTCFG    FLTEN    FL_LPTIM16_IsEnabledETRFilter
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsEnabledETRFilter(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_FLTEN_Msk) == LPTIM16_LPTCFG_FLTEN_Msk);
}

/**
  * @brief    Set Clock Source
  * @rmtoll   LPTCFG    CLKSEL    FL_LPTIM16_SetClockSource
  * @param    LPTIM16x LPTIM16 instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_LSCLK
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_RCLP
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_PCLK
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_LPTI
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetClockSource(LPTIM16_Type *LPTIM16x, uint32_t source)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_CLKSEL_Msk, source);
}

/**
  * @brief    Get Clock Source Setting
  * @rmtoll   LPTCFG    CLKSEL    FL_LPTIM16_GetClockSource
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_LSCLK
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_RCLP
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_PCLK
  *           @arg @ref FL_LPTIM16_CLK_SOURCE_LPTI
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetClockSource(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_CLKSEL_Msk));
}

/**
  * @brief    Set Counter Clock Division
  * @rmtoll   LPTCFG    DIVSEL    FL_LPTIM16_SetPrescaler
  * @param    LPTIM16x LPTIM16 instance
  * @param    psc This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_PSC_DIV1
  *           @arg @ref FL_LPTIM16_PSC_DIV2
  *           @arg @ref FL_LPTIM16_PSC_DIV4
  *           @arg @ref FL_LPTIM16_PSC_DIV8
  *           @arg @ref FL_LPTIM16_PSC_DIV16
  *           @arg @ref FL_LPTIM16_PSC_DIV32
  *           @arg @ref FL_LPTIM16_PSC_DIV64
  *           @arg @ref FL_LPTIM16_PSC_DIV128
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetPrescaler(LPTIM16_Type *LPTIM16x, uint32_t psc)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_DIVSEL_Msk, psc);
}

/**
  * @brief    Get Counter Clock Division Setting
  * @rmtoll   LPTCFG    DIVSEL    FL_LPTIM16_GetPrescaler
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_PSC_DIV1
  *           @arg @ref FL_LPTIM16_PSC_DIV2
  *           @arg @ref FL_LPTIM16_PSC_DIV4
  *           @arg @ref FL_LPTIM16_PSC_DIV8
  *           @arg @ref FL_LPTIM16_PSC_DIV16
  *           @arg @ref FL_LPTIM16_PSC_DIV32
  *           @arg @ref FL_LPTIM16_PSC_DIV64
  *           @arg @ref FL_LPTIM16_PSC_DIV128
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetPrescaler(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_DIVSEL_Msk));
}

/**
  * @brief    Set ETR Count Edge
  * @rmtoll   LPTCFG    EDGESEL    FL_LPTIM16_SetETRCountEdge
  * @param    LPTIM16x LPTIM16 instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_ETR_COUNT_EDGE_RISING
  *           @arg @ref FL_LPTIM16_ETR_COUNT_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetETRCountEdge(LPTIM16_Type *LPTIM16x, uint32_t edge)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_EDGESEL_Msk, edge);
}

/**
  * @brief    Get ETR Count Edge Setting
  * @rmtoll   LPTCFG    EDGESEL    FL_LPTIM16_GetETRCountEdge
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_ETR_COUNT_EDGE_RISING
  *           @arg @ref FL_LPTIM16_ETR_COUNT_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetETRCountEdge(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_EDGESEL_Msk));
}

/**
  * @brief    Set ETR Trigger Edge
  * @rmtoll   LPTCFG    TRIGCFG    FL_LPTIM16_SetETRTriggerEdge
  * @param    LPTIM16x LPTIM16 instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_RISING
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_BOTH
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetETRTriggerEdge(LPTIM16_Type *LPTIM16x, uint32_t edge)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_TRIGCFG_Msk, edge);
}

/**
  * @brief    Get ETR Trigger Edge Setting
  * @rmtoll   LPTCFG    TRIGCFG    FL_LPTIM16_GetETRTriggerEdge
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_RISING
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_LPTIM16_ETR_TRIGGER_EDGE_BOTH
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetETRTriggerEdge(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_TRIGCFG_Msk));
}

/**
  * @brief    Set Output Waveform Polarity
  * @rmtoll   LPTCFG    POLARITY    FL_LPTIM16_OC_SetPolarity
  * @param    LPTIM16x LPTIM16 instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_OC_POLARITY_NORMAL
  *           @arg @ref FL_LPTIM16_OC_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_OC_SetPolarity(LPTIM16_Type *LPTIM16x, uint32_t polarity)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_POLARITY_Msk, polarity);
}

/**
  * @brief    Get Output Waveform Polarity Setting
  * @rmtoll   LPTCFG    POLARITY    FL_LPTIM16_OC_GetPolarity
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_OC_POLARITY_NORMAL
  *           @arg @ref FL_LPTIM16_OC_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_LPTIM16_OC_GetPolarity(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_POLARITY_Msk));
}

/**
  * @brief    Set Pulse Width Modulation Mode
  * @rmtoll   LPTCFG    PWM    FL_LPTIM16_SetPulseWidthModulationMode
  * @param    LPTIM16x LPTIM16 instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_PULSE_WIDTH_MODE_SQUARE
  *           @arg @ref FL_LPTIM16_PULSE_WIDTH_MODE_PWM
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetPulseWidthModulationMode(LPTIM16_Type *LPTIM16x, uint32_t mode)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_PWM_Msk, mode);
}

/**
  * @brief    Get Pulse Width Modulation Mode Setting
  * @rmtoll   LPTCFG    PWM    FL_LPTIM16_GetPulseWidthModulationMode
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_PULSE_WIDTH_MODE_SQUARE
  *           @arg @ref FL_LPTIM16_PULSE_WIDTH_MODE_PWM
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetPulseWidthModulationMode(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_PWM_Msk));
}

/**
  * @brief    Set One Pulse Mode
  * @rmtoll   LPTCFG    MODE    FL_LPTIM16_SetOnePulseMode
  * @param    LPTIM16x LPTIM16 instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_ONE_PULSE_MODE_CONTINUOUS
  *           @arg @ref FL_LPTIM16_ONE_PULSE_MODE_SINGLE
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetOnePulseMode(LPTIM16_Type *LPTIM16x, uint32_t mode)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_MODE_Msk, mode);
}

/**
  * @brief    Get One Pulse Mode Setting
  * @rmtoll   LPTCFG    MODE    FL_LPTIM16_GetOnePulseMode
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_ONE_PULSE_MODE_CONTINUOUS
  *           @arg @ref FL_LPTIM16_ONE_PULSE_MODE_SINGLE
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetOnePulseMode(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_MODE_Msk));
}

/**
  * @brief    Set Operation Mode
  * @rmtoll   LPTCFG    TMODE    FL_LPTIM16_SetOperationMode
  * @param    LPTIM16x LPTIM16 instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_NORMAL
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_EXTERNAL_TRIGGER_CNT
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_EXTERNAL_ASYNC_PULSE_CNT
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_TIMEOUT
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_SetOperationMode(LPTIM16_Type *LPTIM16x, uint32_t mode)
{
    MODIFY_REG(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_TMODE_Msk, mode);
}

/**
  * @brief    Get Operation Mode Setting
  * @rmtoll   LPTCFG    TMODE    FL_LPTIM16_GetOperationMode
  * @param    LPTIM16x LPTIM16 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_NORMAL
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_EXTERNAL_TRIGGER_CNT
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_EXTERNAL_ASYNC_PULSE_CNT
  *           @arg @ref FL_LPTIM16_OPERATION_MODE_TIMEOUT
  */
__STATIC_INLINE uint32_t FL_LPTIM16_GetOperationMode(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCFG, LPTIM16_LPTCFG_TMODE_Msk));
}

/**
  * @brief    Read LPTIM16 Counter Value
  * @rmtoll   LPTCNT    CNT16    FL_LPTIM16_ReadCounter
  * @param    LPTIM16x LPTIM16 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LPTIM16_ReadCounter(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCNT, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Set Output Compare Value
  * @rmtoll   LPTCMP    COMPARE_REG    FL_LPTIM16_WriteCompare
  * @param    LPTIM16x LPTIM16 instance
  * @param    compareValue 
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_WriteCompare(LPTIM16_Type *LPTIM16x, uint32_t compareValue)
{
    MODIFY_REG(LPTIM16x->LPTCMP, (0xffffU << 0U), (compareValue << 0U));
}

/**
  * @brief    Get Output Compare Value
  * @rmtoll   LPTCMP    COMPARE_REG    FL_LPTIM16_ReadCompare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LPTIM16_ReadCompare(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTCMP, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Set Auto Reload Value
  * @rmtoll   LPTTARGET        FL_LPTIM16_WriteAutoReload
  * @param    LPTIM16x LPTIM16 instance
  * @param    autoReload 
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_WriteAutoReload(LPTIM16_Type *LPTIM16x, uint32_t autoReload)
{
    MODIFY_REG(LPTIM16x->LPTTARGET, (0xffffU << 0U), (autoReload << 0U));
}

/**
  * @brief    Get Auto Reload Value
  * @rmtoll   LPTTARGET        FL_LPTIM16_ReadAutoReload
  * @param    LPTIM16x LPTIM16 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LPTIM16_ReadAutoReload(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTTARGET, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Enable External Trigger Interrupt
  * @rmtoll   LPTIE    TRIGIE    FL_LPTIM16_EnableIT_Trigger
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_EnableIT_Trigger(LPTIM16_Type *LPTIM16x)
{
    SET_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_TRIGIE_Msk);
}

/**
  * @brief    Enable Overflow Interrupt
  * @rmtoll   LPTIE    OVIE    FL_LPTIM16_EnableIT_verflow
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_EnableIT_verflow(LPTIM16_Type *LPTIM16x)
{
    SET_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_OVIE_Msk);
}

/**
  * @brief    Enable Compare Interrupt
  * @rmtoll   LPTIE    COMPIE    FL_LPTIM16_EnableIT_Compare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_EnableIT_Compare(LPTIM16_Type *LPTIM16x)
{
    SET_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_COMPIE_Msk);
}

/**
  * @brief    Disable External Trigger Interrupt
  * @rmtoll   LPTIE    TRIGIE    FL_LPTIM16_DisableIT_Trigger
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_DisableIT_Trigger(LPTIM16_Type *LPTIM16x)
{
    CLEAR_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_TRIGIE_Msk);
}

/**
  * @brief    Disable Overflow Interrupt
  * @rmtoll   LPTIE    OVIE    FL_LPTIM16_DisableIT_verflow
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_DisableIT_verflow(LPTIM16_Type *LPTIM16x)
{
    CLEAR_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_OVIE_Msk);
}

/**
  * @brief    Disable Compare Interrupt
  * @rmtoll   LPTIE    COMPIE    FL_LPTIM16_DiableIT_Compare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_DiableIT_Compare(LPTIM16_Type *LPTIM16x)
{
    CLEAR_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_COMPIE_Msk);
}

/**
  * @brief    Get External Trigger Interrupt Enable Status
  * @rmtoll   LPTIE    TRIGIE    FL_LPTIM16_IsEnabledIT_Trigger
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsEnabledIT_Trigger(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_TRIGIE_Msk) == LPTIM16_LPTIE_TRIGIE_Msk);
}

/**
  * @brief    Get Overflow Interrupt Enable Status
  * @rmtoll   LPTIE    OVIE    FL_LPTIM16_IsEnabledIT_verflow
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsEnabledIT_verflow(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_OVIE_Msk) == LPTIM16_LPTIE_OVIE_Msk);
}

/**
  * @brief    Get Compare Interrupt Enable Status
  * @rmtoll   LPTIE    COMPIE    FL_LPTIM16_IsEnabledIT_Compare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsEnabledIT_Compare(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIE, LPTIM16_LPTIE_COMPIE_Msk) == LPTIM16_LPTIE_COMPIE_Msk);
}

/**
  * @brief    Get External Trigger Interrupt Flag
  * @rmtoll   LPTIF    TRIGIF    FL_LPTIM16_IsActiveFlag_Trigger
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsActiveFlag_Trigger(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIF, LPTIM16_LPTIF_TRIGIF_Msk) == (LPTIM16_LPTIF_TRIGIF_Msk));
}

/**
  * @brief    Get Overflow Interrupt Flag
  * @rmtoll   LPTIF    OVIF    FL_LPTIM16_IsActiveFlag_verflow
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsActiveFlag_verflow(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIF, LPTIM16_LPTIF_OVIF_Msk) == (LPTIM16_LPTIF_OVIF_Msk));
}

/**
  * @brief    Get Compare Interrupt Flag
  * @rmtoll   LPTIF    COMPIF    FL_LPTIM16_IsActiveFlag_Compare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LPTIM16_IsActiveFlag_Compare(LPTIM16_Type *LPTIM16x)
{
    return (uint32_t)(READ_BIT(LPTIM16x->LPTIF, LPTIM16_LPTIF_COMPIF_Msk) == (LPTIM16_LPTIF_COMPIF_Msk));
}

/**
  * @brief    Clear External Trigger Interrupt Flag
  * @rmtoll   LPTIF    TRIGIF    FL_LPTIM16_ClearFlag_Trigger
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_ClearFlag_Trigger(LPTIM16_Type *LPTIM16x)
{
    WRITE_REG(LPTIM16x->LPTIF, LPTIM16_LPTIF_TRIGIF_Msk);
}

/**
  * @brief    Clear Overflow Interrupt Flag
  * @rmtoll   LPTIF    OVIF    FL_LPTIM16_ClearFlag_verflow
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_ClearFlag_verflow(LPTIM16_Type *LPTIM16x)
{
    WRITE_REG(LPTIM16x->LPTIF, LPTIM16_LPTIF_OVIF_Msk);
}

/**
  * @brief    Clear Compare Interrupt Flag
  * @rmtoll   LPTIF    COMPIF    FL_LPTIM16_ClearFlag_Compare
  * @param    LPTIM16x LPTIM16 instance
  * @retval   None
  */
__STATIC_INLINE void FL_LPTIM16_ClearFlag_Compare(LPTIM16_Type *LPTIM16x)
{
    WRITE_REG(LPTIM16x->LPTIF, LPTIM16_LPTIF_COMPIF_Msk);
}

/**
  * @}
  */

/** @defgroup LPTIM16_FL_EF_Init Initialization and de-initialization functions
  * @{
  */

FL_ErrorStatus FL_LPTIM16_DeInit(LPTIM16_Type *LPTIM16x);
FL_ErrorStatus FL_LPTIM16_Init(LPTIM16_Type *LPTIM16x, FL_LPTIM16_InitTypeDef *init);
void FL_LPTIM16_StructInit(FL_LPTIM16_InitTypeDef *init);
FL_ErrorStatus FL_LPTIM16_OC_Init(LPTIM16_Type *LPTIM16x, FL_LPTIM16_OC_InitTypeDef *oc_init);
void FL_LPTIM16_OC_StructInit(FL_LPTIM16_OC_InitTypeDef *oc_init);


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_LPTIM16_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
