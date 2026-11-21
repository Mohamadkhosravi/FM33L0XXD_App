/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_lcd.h
  * @author  FMSH Application Team
  * @brief   Head file of LCD FL Module
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
#ifndef __FM33L0XXD_FL_LCD_H
#define __FM33L0XXD_FL_LCD_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup LCD_FL_ES_INIT LCD Exported Init structures
  * @{
  */
typedef struct
{
    /*! 电流源大小控制 */
    uint32_t biasCurrent;
    /*! 驱动模式 */
    uint32_t mode;
    /*! 偏执电平 */
    uint32_t biasVoltage;
    /*! 偏执类型 */
    uint32_t biasMode;
    /*! 驱动波形 */
    uint32_t waveform;
    /*! COM数目 */
    uint32_t COMxNum;
    /*! 显示频率 */
    uint32_t displayFreq;
    /*! 显示闪烁点亮时间(ms) */
    uint32_t flickOnTime;
    /*! 显示闪烁熄灭时间(ms) */
    uint32_t flickOffTime;
} FL_LCD_InitTypeDef;
/**
  * @brief FL LCD Init Sturcture definition
  */

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup LCD_FL_Exported_Constants LCD Exported Constants
  * @{
  */

#define    LCD_DISPCTRL_ANTIPOLAR_Pos                             (7U)
#define    LCD_DISPCTRL_ANTIPOLAR_Msk                             (0x1U << LCD_DISPCTRL_ANTIPOLAR_Pos)
#define    LCD_DISPCTRL_ANTIPOLAR                                 LCD_DISPCTRL_ANTIPOLAR_Msk

#define    LCD_DISPCTRL_LCDEN_Pos                                 (6U)
#define    LCD_DISPCTRL_LCDEN_Msk                                 (0x1U << LCD_DISPCTRL_LCDEN_Pos)
#define    LCD_DISPCTRL_LCDEN                                     LCD_DISPCTRL_LCDEN_Msk

#define    LCD_DISPCTRL_FLICK_Pos                                 (2U)
#define    LCD_DISPCTRL_FLICK_Msk                                 (0x1U << LCD_DISPCTRL_FLICK_Pos)
#define    LCD_DISPCTRL_FLICK                                     LCD_DISPCTRL_FLICK_Msk

#define    LCD_DISPCTRL_TEST_Pos                                  (1U)
#define    LCD_DISPCTRL_TEST_Msk                                  (0x1U << LCD_DISPCTRL_TEST_Pos)
#define    LCD_DISPCTRL_TEST                                      LCD_DISPCTRL_TEST_Msk

#define    LCD_DISPCTRL_DISPMD_Pos                                (0U)
#define    LCD_DISPCTRL_DISPMD_Msk                                (0x1U << LCD_DISPCTRL_DISPMD_Pos)
#define    LCD_DISPCTRL_DISPMD                                    LCD_DISPCTRL_DISPMD_Msk

#define    LCD_LCDTEST_LCCTRL_Pos                                 (7U)
#define    LCD_LCDTEST_LCCTRL_Msk                                 (0x1U << LCD_LCDTEST_LCCTRL_Pos)
#define    LCD_LCDTEST_LCCTRL                                     LCD_LCDTEST_LCCTRL_Msk

#define    LCD_LCDTEST_TESTEN_Pos                                 (0U)
#define    LCD_LCDTEST_TESTEN_Msk                                 (0x1U << LCD_LCDTEST_TESTEN_Pos)
#define    LCD_LCDTEST_TESTEN                                     LCD_LCDTEST_TESTEN_Msk

#define    LCD_DF_DF_Pos                                          (0U)
#define    LCD_DF_DF_Msk                                          (0xffU << LCD_DF_DF_Pos)
#define    LCD_DF_DF                                              LCD_DF_DF_Msk

#define    LCD_TON_TON_Pos                                        (0U)
#define    LCD_TON_TON_Msk                                        (0xffU << LCD_TON_TON_Pos)
#define    LCD_TON_TON                                            LCD_TON_TON_Msk

#define    LCD_TOFF_TOFF_Pos                                      (0U)
#define    LCD_TOFF_TOFF_Msk                                      (0xffU << LCD_TOFF_TOFF_Pos)
#define    LCD_TOFF_TOFF                                          LCD_TOFF_TOFF_Msk

#define    LCD_DISPIE_DONIE_Pos                                   (1U)
#define    LCD_DISPIE_DONIE_Msk                                   (0x1U << LCD_DISPIE_DONIE_Pos)
#define    LCD_DISPIE_DONIE                                       LCD_DISPIE_DONIE_Msk

#define    LCD_DISPIE_DOFFIE_Pos                                  (0U)
#define    LCD_DISPIE_DOFFIE_Msk                                  (0x1U << LCD_DISPIE_DOFFIE_Pos)
#define    LCD_DISPIE_DOFFIE                                      LCD_DISPIE_DOFFIE_Msk

#define    LCD_DISPIF_DONIF_Pos                                   (1U)
#define    LCD_DISPIF_DONIF_Msk                                   (0x1U << LCD_DISPIF_DONIF_Pos)
#define    LCD_DISPIF_DONIF                                       LCD_DISPIF_DONIF_Msk

#define    LCD_DISPIF_DOFFIF_Pos                                  (0U)
#define    LCD_DISPIF_DOFFIF_Msk                                  (0x1U << LCD_DISPIF_DOFFIF_Pos)
#define    LCD_DISPIF_DOFFIF                                      LCD_DISPIF_DOFFIF_Msk

#define    LCD_LCDSET_BIASMD_Pos                                  (4U)
#define    LCD_LCDSET_BIASMD_Msk                                  (0x1U << LCD_LCDSET_BIASMD_Pos)
#define    LCD_LCDSET_BIASMD                                      LCD_LCDSET_BIASMD_Msk

#define    LCD_LCDSET_WFT_Pos                                     (2U)
#define    LCD_LCDSET_WFT_Msk                                     (0x1U << LCD_LCDSET_WFT_Pos)
#define    LCD_LCDSET_WFT                                         LCD_LCDSET_WFT_Msk

#define    LCD_LCDSET_LMUX_Pos                                    (0U)
#define    LCD_LCDSET_LMUX_Msk                                    (0x3U << LCD_LCDSET_LMUX_Pos)
#define    LCD_LCDSET_LMUX                                        LCD_LCDSET_LMUX_Msk

#define    LCD_LCDDRV_SCFSEL_Pos                                  (5U)
#define    LCD_LCDDRV_SCFSEL_Msk                                  (0x7U << LCD_LCDDRV_SCFSEL_Pos)
#define    LCD_LCDDRV_SCFSEL                                      LCD_LCDDRV_SCFSEL_Msk

#define    LCD_LCDDRV_IC_CTRL_Pos                                 (1U)
#define    LCD_LCDDRV_IC_CTRL_Msk                                 (0x3U << LCD_LCDDRV_IC_CTRL_Pos)
#define    LCD_LCDDRV_IC_CTRL                                     LCD_LCDDRV_IC_CTRL_Msk

#define    LCD_LCDDRV_ENMODE_Pos                                  (0U)
#define    LCD_LCDDRV_ENMODE_Msk                                  (0x1U << LCD_LCDDRV_ENMODE_Pos)
#define    LCD_LCDDRV_ENMODE                                      LCD_LCDDRV_ENMODE_Msk

#define    LCD_DISPDATA_DSDA_Pos                                  (0U)
#define    LCD_DISPDATA_DSDA_Msk                                  (0xffffffffU << LCD_DISPDATA_DSDA_Pos)
#define    LCD_DISPDATA_DSDA                                      LCD_DISPDATA_DSDA_Msk

#define    LCD_LCDBIAS_BIAS_Pos                                   (0U)
#define    LCD_LCDBIAS_BIAS_Msk                                   (0xfU << LCD_LCDBIAS_BIAS_Pos)
#define    LCD_LCDBIAS_BIAS                                       LCD_LCDBIAS_BIAS_Msk

#define    LCD_COM_EN_COMEN_Pos                                   (0U)
#define    LCD_COM_EN_COMEN_Msk                                   (0xfU << LCD_COM_EN_COMEN_Pos)
#define    LCD_COM_EN_COMEN                                       LCD_COM_EN_COMEN_Msk

#define    LCD_SEG_EN0_SEGEN_Pos                                  (0U)
#define    LCD_SEG_EN0_SEGEN_Msk                                  (0xffffffffU << LCD_SEG_EN0_SEGEN_Pos)
#define    LCD_SEG_EN0_SEGEN                                      LCD_SEG_EN0_SEGEN_Msk

#define    LCD_SEGEN1_SEGEN_Pos                                   (0U)
#define    LCD_SEGEN1_SEGEN_Msk                                   (0x7ffU << LCD_SEGEN1_SEGEN_Pos)
#define    LCD_SEGEN1_SEGEN                                       LCD_SEGEN1_SEGEN_Msk



#define    FL_LCD_DATA_REG0                                       (0x0U << 0U)
#define    FL_LCD_DATA_REG1                                       (0x1U << 0U)
#define    FL_LCD_DATA_REG2                                       (0x2U << 0U)
#define    FL_LCD_DATA_REG3                                       (0x3U << 0U)
#define    FL_LCD_DATA_REG4                                       (0x4U << 0U)
#define    FL_LCD_DATA_REG5                                       (0x5U << 0U)
#define    FL_LCD_DATA_REG6                                       (0x6U << 0U)
#define    FL_LCD_DATA_REG7                                       (0x7U << 0U)
#define    FL_LCD_DATA_REG8                                       (0x8U << 0U)
#define    FL_LCD_DATA_REG9                                       (0x9U << 0U)
#define    FL_LCD_COMEN_COM0                                      (0x1U << 0U)
#define    FL_LCD_COMEN_COM1                                      (0x1U << 1U)
#define    FL_LCD_COMEN_COM2                                      (0x1U << 2U)
#define    FL_LCD_COMEN_COM3                                      (0x1U << 3U)
#define    FL_LCD_COMEN_COM4                                      (0x1U << 8U)
#define    FL_LCD_COMEN_COM5                                      (0x1U << 9U)
#define    FL_LCD_COMEN_COM6                                      (0x1U << 10U)
#define    FL_LCD_COMEN_COM7                                      (0x1U << 11U)

#define    FL_LCD_SEGEN0_SEG0                                     (0x1U << 0U)
#define    FL_LCD_SEGEN0_SEG1                                     (0x1U << 1U)
#define    FL_LCD_SEGEN0_SEG2                                     (0x1U << 2U)
#define    FL_LCD_SEGEN0_SEG3                                     (0x1U << 3U)
#define    FL_LCD_SEGEN0_SEG4                                     (0x1U << 4U)
#define    FL_LCD_SEGEN0_SEG5                                     (0x1U << 5U)
#define    FL_LCD_SEGEN0_SEG6                                     (0x1U << 6U)
#define    FL_LCD_SEGEN0_SEG7                                     (0x1U << 7U)
#define    FL_LCD_SEGEN0_SEG8                                     (0x1U << 8U)
#define    FL_LCD_SEGEN0_SEG9                                     (0x1U << 9U)
#define    FL_LCD_SEGEN0_SEG10                                    (0x1U << 10U)
#define    FL_LCD_SEGEN0_SEG11                                    (0x1U << 11U)
#define    FL_LCD_SEGEN0_SEG12                                    (0x1U << 12U)
#define    FL_LCD_SEGEN0_SEG13                                    (0x1U << 13U)
#define    FL_LCD_SEGEN0_SEG14                                    (0x1U << 14U)
#define    FL_LCD_SEGEN0_SEG15                                    (0x1U << 15U)
#define    FL_LCD_SEGEN0_SEG16                                    (0x1U << 16U)
#define    FL_LCD_SEGEN0_SEG17                                    (0x1U << 17U)
#define    FL_LCD_SEGEN0_SEG18                                    (0x1U << 18U)
#define    FL_LCD_SEGEN0_SEG19                                    (0x1U << 19U)
#define    FL_LCD_SEGEN0_SEG20                                    (0x1U << 20U)
#define    FL_LCD_SEGEN0_SEG21                                    (0x1U << 21U)
#define    FL_LCD_SEGEN0_SEG22                                    (0x1U << 22U)
#define    FL_LCD_SEGEN0_SEG23                                    (0x1U << 23U)
#define    FL_LCD_SEGEN0_SEG24                                    (0x1U << 24U)
#define    FL_LCD_SEGEN0_SEG25                                    (0x1U << 25U)
#define    FL_LCD_SEGEN0_SEG26                                    (0x1U << 26U)
#define    FL_LCD_SEGEN0_SEG27                                    (0x1U << 27U)
#define    FL_LCD_SEGEN0_SEG28                                    (0x1U << 28U)
#define    FL_LCD_SEGEN0_SEG29                                    (0x1U << 29U)
#define    FL_LCD_SEGEN0_SEG30                                    (0x1U << 30U)
#define    FL_LCD_SEGEN0_SEG31                                    (0x1U << 31U)
																/*SEG32-43*/
#define    FL_LCD_SEGEN1_SEG0                                     (0x1U << 0U)
#define    FL_LCD_SEGEN1_SEG1                                     (0x1U << 1U)
#define    FL_LCD_SEGEN1_SEG2                                     (0x1U << 2U)
#define    FL_LCD_SEGEN1_SEG3                                     (0x1U << 3U)
#define    FL_LCD_SEGEN1_SEG4                                     (0x1U << 4U)
#define    FL_LCD_SEGEN1_SEG5                                     (0x1U << 5U)
#define    FL_LCD_SEGEN1_SEG6                                     (0x1U << 6U)
#define    FL_LCD_SEGEN1_SEG7                                     (0x1U << 7U)
#define    FL_LCD_SEGEN1_SEG8                                     (0x1U << 8U)
#define    FL_LCD_SEGEN1_SEG9                                     (0x1U << 9U)
#define    FL_LCD_SEGEN1_SEG10                                    (0x1U << 10U)
#define    FL_LCD_SEGEN1_SEG11                                    (0x1U << 11U)


#define    FL_LCD_ANTIPOLAR_FLOATING                              (0x0U << LCD_DISPCTRL_ANTIPOLAR_Pos)
#define    FL_LCD_ANTIPOLAR_GND                                   (0x1U << LCD_DISPCTRL_ANTIPOLAR_Pos)

#define    FL_LCD_TEST_DISPLAY_TURNOFF                            (0x0U << LCD_DISPCTRL_TEST_Pos)
#define    FL_LCD_TEST_DISPLAY_TURNON                             (0x1U << LCD_DISPCTRL_TEST_Pos)


#define    FL_LCD_MODE_NORMAL                                     (0x0U << LCD_DISPCTRL_DISPMD_Pos)
#define    FL_LCD_MODE_TEST                                       (0x1U << LCD_DISPCTRL_DISPMD_Pos)


#define    FL_LCD_TEST_BIT_LOW                                    (0x0U << LCD_LCDTEST_LCCTRL_Pos)
#define    FL_LCD_TEST_BIT_HIGH                                   (0x1U << LCD_LCDTEST_LCCTRL_Pos)


#define    FL_LCD_BIAS_MODE_4BIAS                                 (0x0U << LCD_LCDSET_BIASMD_Pos)
#define    FL_LCD_BIAS_MODE_3BIAS                                 (0x1U << LCD_LCDSET_BIASMD_Pos)


#define    FL_LCD_WAVEFORM_TYPEA                                  (0x0U << LCD_LCDSET_WFT_Pos)
#define    FL_LCD_WAVEFORM_TYPEB                                  (0x1U << LCD_LCDSET_WFT_Pos)


#define    FL_LCD_COM_NUM_4COM                                    (0x0U << LCD_LCDSET_LMUX_Pos)
#define    FL_LCD_COM_NUM_6COM                                    (0x1U << LCD_LCDSET_LMUX_Pos)
#define    FL_LCD_COM_NUM_8COM                                    (0x2U << LCD_LCDSET_LMUX_Pos)


#define    FL_LCD_SC_FREQUENCE_COM_MUL_FPS                        (0x0U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV8                       (0x1U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV16                      (0x2U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV32                      (0x3U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV64                      (0x4U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV128                     (0x5U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV256                     (0x6U << LCD_LCDDRV_SCFSEL_Pos)
#define    FL_LCD_SC_FREQUENCE_DISPCLK_DIV512                     (0x7U << LCD_LCDDRV_SCFSEL_Pos)


#define    FL_LCD_BIAS_CURRENT_VERYHIGH                           (0x0U << LCD_LCDDRV_IC_CTRL_Pos)
#define    FL_LCD_BIAS_CURRENT_HIGH                               (0x1U << LCD_LCDDRV_IC_CTRL_Pos)
#define    FL_LCD_BIAS_CURRENT_MEDIUM                             (0x2U << LCD_LCDDRV_IC_CTRL_Pos)
#define    FL_LCD_BIAS_CURRENT_LOW                                (0x3U << LCD_LCDDRV_IC_CTRL_Pos)


#define    FL_LCD_DRIVER_MODE_INNER_RESISTER                      (0x1U << LCD_LCDDRV_ENMODE_Pos)
#define    FL_LCD_DRIVER_MODE_NULL                                (0x0U << LCD_LCDDRV_ENMODE_Pos)


#define    FL_LCD_BIAS_VOLTAGE_LEVEL0                             (0x0U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL1                             (0x1U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL2                             (0x2U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL3                             (0x3U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL4                             (0x4U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL5                             (0x5U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL6                             (0x6U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL7                             (0x7U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL8                             (0x8U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL9                             (0x9U << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL10                            (0xaU << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL11                            (0xbU << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL12                            (0xcU << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL13                            (0xdU << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL14                            (0xeU << LCD_LCDBIAS_BIAS_Pos)
#define    FL_LCD_BIAS_VOLTAGE_LEVEL15                            (0xfU << LCD_LCDBIAS_BIAS_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup LCD_FL_Exported_Functions LCD Exported Functions
  * @{
  */

/**
  * @brief    Set LCD Anti-Polarization
  * @rmtoll   DISPCTRL    ANTIPOLAR    FL_LCD_SetAntiPolar
  * @param    LCDx LCD instance
  * @param    state This parameter can be one of the following values:
  *           @arg @ref FL_LCD_ANTIPOLAR_FLOATING
  *           @arg @ref FL_LCD_ANTIPOLAR_GND
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetAntiPolar(LCD_Type* LCDx, uint32_t state)
{
    MODIFY_REG(LCDx->DISPCTRL, LCD_DISPCTRL_ANTIPOLAR_Msk, state);
}

/**
  * @brief    Get LCD Anti-Polarization
  * @rmtoll   DISPCTRL    ANTIPOLAR    FL_LCD_GetAntiPolar
  * @param    LCDx LCD instance
  * @param    state This parameter can be one of the following values:
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_LCD_GetAntiPolar(LCD_Type* LCDx, uint32_t state)
{
    return (uint32_t)(READ_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_ANTIPOLAR_Msk));
}

/**
  * @brief    Enable LCD
  * @rmtoll   DISPCTRL    LCDEN    FL_LCD_Enable
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_Enable(LCD_Type* LCDx)
{
    SET_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_LCDEN_Msk);
}

/**
  * @brief    Get LCD State
  * @rmtoll   DISPCTRL    LCDEN    FL_LCD_IsEnabled
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabled(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_LCDEN_Msk) == LCD_DISPCTRL_LCDEN_Msk);
}

/**
  * @brief    Disable LCD
  * @rmtoll   DISPCTRL    LCDEN    FL_LCD_Disable
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_Disable(LCD_Type* LCDx)
{
    CLEAR_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_LCDEN_Msk);
}

/**
  * @brief    Enable LCD Blink
  * @rmtoll   DISPCTRL    FLICK    FL_LCD_EnableDisplayBlink
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableDisplayBlink(LCD_Type* LCDx)
{
    SET_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_FLICK_Msk);
}

/**
  * @brief    Disable LCD Blink
  * @rmtoll   DISPCTRL    FLICK    FL_LCD_DisableDisplayBlink
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableDisplayBlink(LCD_Type* LCDx)
{
    CLEAR_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_FLICK_Msk);
}

/**
  * @brief    Get LCD Blink State
  * @rmtoll   DISPCTRL    FLICK    FL_LCD_IsEnabledDisplayBlink
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledDisplayBlink(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_FLICK_Msk) == LCD_DISPCTRL_FLICK_Msk);
}

/**
  * @brief    Set LCD Test Display
  * @rmtoll   DISPCTRL    TEST    FL_LCD_SetTestDisplay
  * @param    LCDx LCD instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LCD_TEST_DISPLAY_TURNOFF
  *           @arg @ref FL_LCD_TEST_DISPLAY_TURNON
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetTestDisplay(LCD_Type* LCDx, uint32_t mode)
{
    MODIFY_REG(LCDx->DISPCTRL, LCD_DISPCTRL_TEST_Msk, mode);
}

/**
  * @brief    Get LCD Test Display Setting
  * @rmtoll   DISPCTRL    TEST    FL_LCD_GetTestDisplay
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_TEST_DISPLAY_TURNOFF
  *           @arg @ref FL_LCD_TEST_DISPLAY_TURNON
  */
__STATIC_INLINE uint32_t FL_LCD_GetTestDisplay(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_TEST_Msk));
}

/**
  * @brief    Set LCD Test Mode 
  * @rmtoll   DISPCTRL    DISPMD    FL_LCD_SetTestMode
  * @param    LCDx LCD instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LCD_MODE_NORMAL
  *           @arg @ref FL_LCD_MODE_TEST
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetTestMode(LCD_Type* LCDx, uint32_t mode)
{
    MODIFY_REG(LCDx->DISPCTRL, LCD_DISPCTRL_DISPMD_Msk, mode);
}

/**
  * @brief    Get LCD Test Mode  Setting
  * @rmtoll   DISPCTRL    DISPMD    FL_LCD_GetTestMode
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_MODE_NORMAL
  *           @arg @ref FL_LCD_MODE_TEST
  */
__STATIC_INLINE uint32_t FL_LCD_GetTestMode(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPCTRL, LCD_DISPCTRL_DISPMD_Msk));
}

/**
  * @brief    Enable LCD Test Mode
  * @rmtoll   LCDTEST    TESTEN    FL_LCD_EnableTestMode
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableTestMode(LCD_Type* LCDx)
{
    SET_BIT(LCDx->LCDTEST, LCD_LCDTEST_TESTEN_Msk);
}

/**
  * @brief    Disable LCD Test Mode
  * @rmtoll   LCDTEST    TESTEN    FL_LCD_DisableTestMode
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableTestMode(LCD_Type* LCDx)
{
    CLEAR_BIT(LCDx->LCDTEST, LCD_LCDTEST_TESTEN_Msk);
}

/**
  * @brief    Get LCD Test Mode Setting
  * @rmtoll   LCDTEST    TESTEN    FL_LCD_IsEnabledTestMode
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledTestMode(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDTEST, LCD_LCDTEST_TESTEN_Msk) == LCD_LCDTEST_TESTEN_Msk);
}

/**
  * @brief    Set LCD Display Frequency
  * @rmtoll   DF    DF    FL_LCD_WriteDisplayFrequency
  * @param    LCDx LCD instance
  * @param    frequency 
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_WriteDisplayFrequency(LCD_Type* LCDx, uint32_t frequency)
{
    MODIFY_REG(LCDx->DF, (0xffU << 0U), (frequency << 0U));
}

/**
  * @brief    Get LCD Display Frequency
  * @rmtoll   DF    DF    FL_LCD_ReadDisplayFrequency
  * @param    LCDx LCD instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LCD_ReadDisplayFrequency(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DF, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set LCD Display On Time
  * @rmtoll   TON    TON    FL_LCD_WriteDisplayOnTime
  * @param    LCDx LCD instance
  * @param    time 
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_WriteDisplayOnTime(LCD_Type* LCDx, uint32_t time)
{
    MODIFY_REG(LCDx->TON, (0xffU << 0U), (time << 0U));
}

/**
  * @brief    Get LCD Display On Time
  * @rmtoll   TON    TON    FL_LCD_ReadDisplayOnTime
  * @param    LCDx LCD instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LCD_ReadDisplayOnTime(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->TON, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set LCD Display Off Time
  * @rmtoll   TOFF    TOFF    FL_LCD_WriteDisplayOffTime
  * @param    LCDx LCD instance
  * @param    time 
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_WriteDisplayOffTime(LCD_Type* LCDx, uint32_t time)
{
    MODIFY_REG(LCDx->TOFF, (0xffU << 0U), (time << 0U));
}

/**
  * @brief    Get LCD Display Off Time
  * @rmtoll   TOFF    TOFF    FL_LCD_ReadDisplayOffTime
  * @param    LCDx LCD instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LCD_ReadDisplayOffTime(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->TOFF, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Enable LCD Display OFF IRQ
  * @rmtoll   DISPIE    DONIE    FL_LCD_EnableIT_DisplayOff
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableIT_DisplayOff(LCD_Type* LCDx)
{
    SET_BIT(LCDx->DISPIE, LCD_DISPIE_DONIE_Msk);
}

/**
  * @brief    Disable LCD Display OFF IRQ
  * @rmtoll   DISPIE    DONIE    FL_LCD_DisableIT_DisplayOff
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableIT_DisplayOff(LCD_Type* LCDx)
{
    CLEAR_BIT(LCDx->DISPIE, LCD_DISPIE_DONIE_Msk);
}

/**
  * @brief    Getable LCD Display OFF IRQ
  * @rmtoll   DISPIE    DONIE    FL_LCD_IsEnabledIT_DisplayOff
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledIT_DisplayOff(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPIE, LCD_DISPIE_DONIE_Msk) == LCD_DISPIE_DONIE_Msk);
}

/**
  * @brief    Enable LCD Display ON Interrupt
  * @rmtoll   DISPIE    DOFFIE    FL_LCD_EnableIT_DisplayOn
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableIT_DisplayOn(LCD_Type* LCDx)
{
    SET_BIT(LCDx->DISPIE, LCD_DISPIE_DOFFIE_Msk);
}

/**
  * @brief    Disable LCD Display ON Interrupt
  * @rmtoll   DISPIE    DOFFIE    FL_LCD_DisableIT_DisplayOn
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableIT_DisplayOn(LCD_Type* LCDx)
{
    CLEAR_BIT(LCDx->DISPIE, LCD_DISPIE_DOFFIE_Msk);
}

/**
  * @brief    Getable LCD Display ON Interrupt
  * @rmtoll   DISPIE    DOFFIE    FL_LCD_IsEnabledIT_DisplayOn
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledIT_DisplayOn(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPIE, LCD_DISPIE_DOFFIE_Msk) == LCD_DISPIE_DOFFIE_Msk);
}

/**
  * @brief    Get LCD Display OFF Flag
  * @rmtoll   DISPIF    DONIF    FL_LCD_IsActiveFlag_DisplayOff
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsActiveFlag_DisplayOff(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPIF, LCD_DISPIF_DONIF_Msk) == (LCD_DISPIF_DONIF_Msk));
}

/**
  * @brief    Clear LCD Display OFF Flag
  * @rmtoll   DISPIF    DONIF    FL_LCD_ClearFlag_DisplayOff
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_ClearFlag_DisplayOff(LCD_Type* LCDx)
{
    WRITE_REG(LCDx->DISPIF, LCD_DISPIF_DONIF_Msk);
}

/**
  * @brief    Get LCD Display On Flag
  * @rmtoll   DISPIF    DOFFIF    FL_LCD_IsActiveFlag_DisplayOn
  * @param    LCDx LCD instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsActiveFlag_DisplayOn(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->DISPIF, LCD_DISPIF_DOFFIF_Msk) == (LCD_DISPIF_DOFFIF_Msk));
}

/**
  * @brief    Clear LCD Display On Flag
  * @rmtoll   DISPIF    DOFFIF    FL_LCD_ClearFlag_DisplayOn
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_ClearFlag_DisplayOn(LCD_Type* LCDx)
{
    WRITE_REG(LCDx->DISPIF, LCD_DISPIF_DOFFIF_Msk);
}

/**
  * @brief    Set LCD Bias Mode
  * @rmtoll   LCDSET    BIASMD    FL_LCD_SetBiasMode
  * @param    LCDx LCD instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_MODE_4BIAS
  *           @arg @ref FL_LCD_BIAS_MODE_3BIAS
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetBiasMode(LCD_Type* LCDx, uint32_t mode)
{
    MODIFY_REG(LCDx->LCDSET, LCD_LCDSET_BIASMD_Msk, mode);
}

/**
  * @brief    Get LCD Bias Mode
  * @rmtoll   LCDSET    BIASMD    FL_LCD_GetBiasMode
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_MODE_4BIAS
  *           @arg @ref FL_LCD_BIAS_MODE_3BIAS
  */
__STATIC_INLINE uint32_t FL_LCD_GetBiasMode(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDSET, LCD_LCDSET_BIASMD_Msk));
}

/**
  * @brief    Set LCD Waveform Format
  * @rmtoll   LCDSET    WFT    FL_LCD_SetWaveform
  * @param    LCDx LCD instance
  * @param    state This parameter can be one of the following values:
  *           @arg @ref FL_LCD_WAVEFORM_TYPEA
  *           @arg @ref FL_LCD_WAVEFORM_TYPEB
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetWaveform(LCD_Type* LCDx, uint32_t state)
{
    MODIFY_REG(LCDx->LCDSET, LCD_LCDSET_WFT_Msk, state);
}

/**
  * @brief    Get LCD Waveform Format
  * @rmtoll   LCDSET    WFT    FL_LCD_GetWaveform
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_WAVEFORM_TYPEA
  *           @arg @ref FL_LCD_WAVEFORM_TYPEB
  */
__STATIC_INLINE uint32_t FL_LCD_GetWaveform(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDSET, LCD_LCDSET_WFT_Msk));
}

/**
  * @brief    Set LCD Segment Line Mux
  * @rmtoll   LCDSET    LMUX    FL_LCD_SetCOMNumber
  * @param    LCDx LCD instance
  * @param    number This parameter can be one of the following values:
  *           @arg @ref FL_LCD_COM_NUM_4COM
  *           @arg @ref FL_LCD_COM_NUM_6COM
  *           @arg @ref FL_LCD_COM_NUM_8COM
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetCOMNumber(LCD_Type* LCDx, uint32_t number)
{
    MODIFY_REG(LCDx->LCDSET, LCD_LCDSET_LMUX_Msk, number);
}

/**
  * @brief    Get LCD Segment Line Mux
  * @rmtoll   LCDSET    LMUX    FL_LCD_GetCOMNumber
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_COM_NUM_4COM
  *           @arg @ref FL_LCD_COM_NUM_6COM
  *           @arg @ref FL_LCD_COM_NUM_8COM
  */
__STATIC_INLINE uint32_t FL_LCD_GetCOMNumber(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDSET, LCD_LCDSET_LMUX_Msk));
}

/**
  * @brief    Set LCD SC Frequency
  * @rmtoll   LCDDRV    SCFSEL    FL_LCD_SetSCFrequency
  * @param    LCDx LCD instance
  * @param    Frequency This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SC_FREQUENCE_COM_MUL_FPS
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV8
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV16
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV32
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV64
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV128
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV256
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV512
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetSCFrequency(LCD_Type* LCDx, uint32_t Frequency)
{
    MODIFY_REG(LCDx->LCDDRV, LCD_LCDDRV_SCFSEL_Msk, Frequency);
}




/**
  * @brief    Get LCD SC Frequency
  * @rmtoll   LCDDRV    SCFSEL    FL_LCD_GetSCFrequency
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_SC_FREQUENCE_COM_MUL_FPS
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV8
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV16
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV32
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV64
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV128
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV256
  *           @arg @ref FL_LCD_SC_FREQUENCE_DISPCLK_DIV512
  */
__STATIC_INLINE uint32_t FL_LCD_GetSCFrequency(LCD_Type* LCDx)
{
		return (uint32_t)(READ_BIT(LCDx->LCDDRV, LCD_LCDDRV_SCFSEL_Msk));
}







/**
  * @brief    Set Input Bias Current 
  * @rmtoll   LCDDRV    IC_CTRL    FL_LCD_SetBiasCurrent
  * @param    LCDx LCD instance
  * @param    current This parameter can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_CURRENT_VERYHIGH
  *           @arg @ref FL_LCD_BIAS_CURRENT_HIGH
  *           @arg @ref FL_LCD_BIAS_CURRENT_MEDIUM
  *           @arg @ref FL_LCD_BIAS_CURRENT_LOW
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetBiasCurrent(LCD_Type* LCDx, uint32_t current)
{
    MODIFY_REG(LCDx->LCDDRV, LCD_LCDDRV_IC_CTRL_Msk, current);
}

/**
  * @brief    Get Input Bias Current 
  * @rmtoll   LCDDRV    IC_CTRL    FL_LCD_GetBiasCurrent
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_CURRENT_VERYHIGH
  *           @arg @ref FL_LCD_BIAS_CURRENT_HIGH
  *           @arg @ref FL_LCD_BIAS_CURRENT_MEDIUM
  *           @arg @ref FL_LCD_BIAS_CURRENT_LOW
  */
__STATIC_INLINE uint32_t FL_LCD_GetBiasCurrent(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDDRV, LCD_LCDDRV_IC_CTRL_Msk));
}

/**
  * @brief    Set LCD Enabling Mode
  * @rmtoll   LCDDRV    ENMODE    FL_LCD_SetDriverMode
  * @param    LCDx LCD instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_LCD_DRIVER_MODE_INNER_RESISTER
  *           @arg @ref FL_LCD_DRIVER_MODE_NULL
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetDriverMode(LCD_Type* LCDx, uint32_t mode)
{
    MODIFY_REG(LCDx->LCDDRV, LCD_LCDDRV_ENMODE_Msk, mode);
}

/**
  * @brief    Get LCD Enabling Mode
  * @rmtoll   LCDDRV    ENMODE    FL_LCD_GetDriverMode
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_DRIVER_MODE_INNER_RESISTER
  *           @arg @ref FL_LCD_DRIVER_MODE_NULL
  */
__STATIC_INLINE uint32_t FL_LCD_GetDriverMode(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDDRV, LCD_LCDDRV_ENMODE_Msk));
}

/**
  * @brief    Write LCD Display Data
  * @rmtoll   DISPDATA    DSDA    FL_LCD_WriteData
  * @param    LCDx LCD instance
  * @param    reg This parameter can be one of the following values:
  *           @arg @ref FL_LCD_DATA_REG0
  *           @arg @ref FL_LCD_DATA_REG1
  *           @arg @ref FL_LCD_DATA_REG2
  *           @arg @ref FL_LCD_DATA_REG3
  *           @arg @ref FL_LCD_DATA_REG4
  *           @arg @ref FL_LCD_DATA_REG5
  *           @arg @ref FL_LCD_DATA_REG6
  *           @arg @ref FL_LCD_DATA_REG7
  *           @arg @ref FL_LCD_DATA_REG8
  *           @arg @ref FL_LCD_DATA_REG9
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_WriteData(LCD_Type* LCDx, uint32_t reg, uint32_t data)
{
    volatile uint32_t *pData = &(LCDx->DISPDATA0);
    MODIFY_REG(pData[reg], LCD_DISPDATA_DSDA_Msk, data);
}

/**
  * @brief    Read LCD Display Data
  * @rmtoll   DISPDATA    DSDA    FL_LCD_ReadData
  * @param    LCDx LCD instance
  * @param    reg This parameter can be one of the following values:
  *           @arg @ref FL_LCD_DATA_REG0
  *           @arg @ref FL_LCD_DATA_REG1
  *           @arg @ref FL_LCD_DATA_REG2
  *           @arg @ref FL_LCD_DATA_REG3
  *           @arg @ref FL_LCD_DATA_REG4
  *           @arg @ref FL_LCD_DATA_REG5
  *           @arg @ref FL_LCD_DATA_REG6
  *           @arg @ref FL_LCD_DATA_REG7
  *           @arg @ref FL_LCD_DATA_REG8
  *           @arg @ref FL_LCD_DATA_REG9
  * @retval   
  */
__STATIC_INLINE uint32_t FL_LCD_ReadData(LCD_Type* LCDx, uint32_t reg)
{
    volatile uint32_t *pData = &(LCDx->DISPDATA0);
    return (uint32_t)(READ_BIT(pData[reg], LCD_DISPDATA_DSDA_Msk));
}

/**
  * @brief    Set LCD Bias Voltage Select
  * @rmtoll   LCDBIAS    BIAS    FL_LCD_SetBiasVoltage
  * @param    LCDx LCD instance
  * @param    voltage This parameter can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL0
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL1
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL2
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL3
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL4
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL5
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL6
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL7
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL8
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL9
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL10
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL11
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL12
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL13
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL14
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL15
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_SetBiasVoltage(LCD_Type* LCDx, uint32_t voltage)
{
    MODIFY_REG(LCDx->LCDBIAS, LCD_LCDBIAS_BIAS_Msk, voltage);
}

/**
  * @brief    Get LCD Bias Voltage Select
  * @rmtoll   LCDBIAS    BIAS    FL_LCD_GetBiasVoltage
  * @param    LCDx LCD instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL0
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL1
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL2
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL3
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL4
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL5
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL6
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL7
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL8
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL9
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL10
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL11
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL12
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL13
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL14
  *           @arg @ref FL_LCD_BIAS_VOLTAGE_LEVEL15
  */
__STATIC_INLINE uint32_t FL_LCD_GetBiasVoltage(LCD_Type* LCDx)
{
    return (uint32_t)(READ_BIT(LCDx->LCDBIAS, LCD_LCDBIAS_BIAS_Msk));
}

/**
  * @brief    Get LCD COMx State
  * @rmtoll   COM_EN    COMEN    FL_LCD_IsEnabledCOMEN
  * @param    LCDx LCD instance
  * @param    COM This parameter can be one of the following values:
  *           @arg @ref FL_LCD_COMEN_COM0
  *           @arg @ref FL_LCD_COMEN_COM1
  *           @arg @ref FL_LCD_COMEN_COM2
  *           @arg @ref FL_LCD_COMEN_COM3
  *           @arg @ref FL_LCD_COMEN_COM4
  *           @arg @ref FL_LCD_COMEN_COM5
  *           @arg @ref FL_LCD_COMEN_COM6
  *           @arg @ref FL_LCD_COMEN_COM7
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledCOMEN(LCD_Type* LCDx, uint32_t COM)
{
    if(COM < FL_LCD_COMEN_COM4)
    {
        return (uint32_t)(READ_BIT(LCDx->COM_EN, ((COM & 0xffffffff) << 0x0U)) == ((COM & 0xffffffff) << 0x0U));
    }
		else
		{
			if(FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_6COM)
			{
				 if(COM==FL_LCD_COMEN_COM4)
				 {
						return (uint32_t)(READ_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM6 & 0xffffffff) << 0x0U)) == ((FL_LCD_COMEN_COM6 & 0xffffffff) << 0x0U));
				 } 
				 else if(COM==FL_LCD_COMEN_COM5)
				 {
						return (uint32_t)(READ_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM7 & 0xffffffff) << 0x0U)) == ((FL_LCD_COMEN_COM7 & 0xffffffff) << 0x0U));
				 }
			
			}
			else if (FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_8COM)
			{
				 return (uint32_t)(READ_BIT(LCDx->SEG_EN1, ((COM & 0xffffffff) << 0x0U)) == ((COM & 0xffffffff) << 0x0U));
			}

		}
	 return 0;    //err
		
}

/**
  * @brief    Enable LCD COMx
  * @rmtoll   COM_EN    COMEN    FL_LCD_EnableCOMEN
  * @param    LCDx LCD instance
  * @param    COM This parameter can be one of the following values:
  *           @arg @ref FL_LCD_COMEN_COM0
  *           @arg @ref FL_LCD_COMEN_COM1
  *           @arg @ref FL_LCD_COMEN_COM2
  *           @arg @ref FL_LCD_COMEN_COM3
  *           @arg @ref FL_LCD_COMEN_COM4
  *           @arg @ref FL_LCD_COMEN_COM5
  *           @arg @ref FL_LCD_COMEN_COM6
  *           @arg @ref FL_LCD_COMEN_COM7
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableCOMEN(LCD_Type* LCDx, uint32_t COM)
{
    if(COM < FL_LCD_COMEN_COM4)
    {
        SET_BIT(LCDx->COM_EN, ((COM & 0xffffffff) << 0x0U));
    }
		else
		{
			if(FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_6COM)
			{
				 if(COM==FL_LCD_COMEN_COM4)
				 {
						SET_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM6 & 0xffffffff) << 0x0U));
				 } 
				 else if(COM==FL_LCD_COMEN_COM5)
				 {
						SET_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM7 & 0xffffffff) << 0x0U));
				 }
			
			}
			else if (FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_8COM)
			{
				  SET_BIT(LCDx->SEG_EN1, ((COM & 0xffffffff) << 0x0U));
			}
			else
			{
						//err
			}
		}
}

/**
  * @brief    Disable LCD COMx
  * @rmtoll   COM_EN    COMEN    FL_LCD_DisableCOMEN
  * @param    LCDx LCD instance
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableCOMEN(LCD_Type* LCDx,uint32_t COM)
{
    if(COM < FL_LCD_COMEN_COM4)
    {
        CLEAR_BIT(LCDx->COM_EN, ((COM & 0xffffffff) << 0x0U));
    }
		else
		{
			if(FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_6COM)
			{
				 if(COM==FL_LCD_COMEN_COM4)
				 {
						CLEAR_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM6 & 0xffffffff) << 0x0U));
				 } 
				 else if(COM==FL_LCD_COMEN_COM5)
				 {
						CLEAR_BIT(LCDx->SEG_EN1, ((FL_LCD_COMEN_COM7 & 0xffffffff) << 0x0U));
				 }
			
			}
			else if (FL_LCD_GetCOMNumber(LCD)==FL_LCD_COM_NUM_8COM)
			{
					CLEAR_BIT(LCDx->SEG_EN1, ((COM & 0xffffffff) << 0x0U));
			}
			else
			{
						//err
			}
		}
}

/**
  * @brief    Get LCD SEGx State
  * @rmtoll   SEG_EN0    SEGEN    FL_LCD_IsEnabledSEGEN0
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN0_SEG0
  *           @arg @ref FL_LCD_SEGEN0_SEG1
  *           @arg @ref FL_LCD_SEGEN0_SEG2
  *           @arg @ref FL_LCD_SEGEN0_SEG3
  *           @arg @ref FL_LCD_SEGEN0_SEG4
  *           @arg @ref FL_LCD_SEGEN0_SEG5
  *           @arg @ref FL_LCD_SEGEN0_SEG6
  *           @arg @ref FL_LCD_SEGEN0_SEG7
  *           @arg @ref FL_LCD_SEGEN0_SEG8
  *           @arg @ref FL_LCD_SEGEN0_SEG9
  *           @arg @ref FL_LCD_SEGEN0_SEG10
  *           @arg @ref FL_LCD_SEGEN0_SEG11
  *           @arg @ref FL_LCD_SEGEN0_SEG12
  *           @arg @ref FL_LCD_SEGEN0_SEG13
  *           @arg @ref FL_LCD_SEGEN0_SEG14
  *           @arg @ref FL_LCD_SEGEN0_SEG15
  *           @arg @ref FL_LCD_SEGEN0_SEG16
  *           @arg @ref FL_LCD_SEGEN0_SEG17
  *           @arg @ref FL_LCD_SEGEN0_SEG18
  *           @arg @ref FL_LCD_SEGEN0_SEG19
  *           @arg @ref FL_LCD_SEGEN0_SEG20
  *           @arg @ref FL_LCD_SEGEN0_SEG21
  *           @arg @ref FL_LCD_SEGEN0_SEG22
  *           @arg @ref FL_LCD_SEGEN0_SEG23
  *           @arg @ref FL_LCD_SEGEN0_SEG24
  *           @arg @ref FL_LCD_SEGEN0_SEG25
  *           @arg @ref FL_LCD_SEGEN0_SEG26
  *           @arg @ref FL_LCD_SEGEN0_SEG27
  *           @arg @ref FL_LCD_SEGEN0_SEG28
  *           @arg @ref FL_LCD_SEGEN0_SEG29
  *           @arg @ref FL_LCD_SEGEN0_SEG30
  *           @arg @ref FL_LCD_SEGEN0_SEG31
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_LCD_IsEnabledSEGEN0(LCD_Type* LCDx, uint32_t SEG)
{
    return (uint32_t)(READ_BIT(LCDx->SEG_EN0, ((SEG & 0xffffffff) << 0x0U)) == ((SEG & 0xffffffff) << 0x0U));
}

/**
  * @brief    Enable LCD SEGx
  * @rmtoll   SEG_EN0    SEGEN    FL_LCD_EnableSEGEN0
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN0_SEG0
  *           @arg @ref FL_LCD_SEGEN0_SEG1
  *           @arg @ref FL_LCD_SEGEN0_SEG2
  *           @arg @ref FL_LCD_SEGEN0_SEG3
  *           @arg @ref FL_LCD_SEGEN0_SEG4
  *           @arg @ref FL_LCD_SEGEN0_SEG5
  *           @arg @ref FL_LCD_SEGEN0_SEG6
  *           @arg @ref FL_LCD_SEGEN0_SEG7
  *           @arg @ref FL_LCD_SEGEN0_SEG8
  *           @arg @ref FL_LCD_SEGEN0_SEG9
  *           @arg @ref FL_LCD_SEGEN0_SEG10
  *           @arg @ref FL_LCD_SEGEN0_SEG11
  *           @arg @ref FL_LCD_SEGEN0_SEG12
  *           @arg @ref FL_LCD_SEGEN0_SEG13
  *           @arg @ref FL_LCD_SEGEN0_SEG14
  *           @arg @ref FL_LCD_SEGEN0_SEG15
  *           @arg @ref FL_LCD_SEGEN0_SEG16
  *           @arg @ref FL_LCD_SEGEN0_SEG17
  *           @arg @ref FL_LCD_SEGEN0_SEG18
  *           @arg @ref FL_LCD_SEGEN0_SEG19
  *           @arg @ref FL_LCD_SEGEN0_SEG20
  *           @arg @ref FL_LCD_SEGEN0_SEG21
  *           @arg @ref FL_LCD_SEGEN0_SEG22
  *           @arg @ref FL_LCD_SEGEN0_SEG23
  *           @arg @ref FL_LCD_SEGEN0_SEG24
  *           @arg @ref FL_LCD_SEGEN0_SEG25
  *           @arg @ref FL_LCD_SEGEN0_SEG26
  *           @arg @ref FL_LCD_SEGEN0_SEG27
  *           @arg @ref FL_LCD_SEGEN0_SEG28
  *           @arg @ref FL_LCD_SEGEN0_SEG29
  *           @arg @ref FL_LCD_SEGEN0_SEG30
  *           @arg @ref FL_LCD_SEGEN0_SEG31
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableSEGEN0(LCD_Type* LCDx, uint32_t SEG)
{
    SET_BIT(LCDx->SEG_EN0, ((SEG & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable LCD SEGx
  * @rmtoll   SEG_EN0    SEGEN    FL_LCD_DisableSEGEN0
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN0_SEG0
  *           @arg @ref FL_LCD_SEGEN0_SEG1
  *           @arg @ref FL_LCD_SEGEN0_SEG2
  *           @arg @ref FL_LCD_SEGEN0_SEG3
  *           @arg @ref FL_LCD_SEGEN0_SEG4
  *           @arg @ref FL_LCD_SEGEN0_SEG5
  *           @arg @ref FL_LCD_SEGEN0_SEG6
  *           @arg @ref FL_LCD_SEGEN0_SEG7
  *           @arg @ref FL_LCD_SEGEN0_SEG8
  *           @arg @ref FL_LCD_SEGEN0_SEG9
  *           @arg @ref FL_LCD_SEGEN0_SEG10
  *           @arg @ref FL_LCD_SEGEN0_SEG11
  *           @arg @ref FL_LCD_SEGEN0_SEG12
  *           @arg @ref FL_LCD_SEGEN0_SEG13
  *           @arg @ref FL_LCD_SEGEN0_SEG14
  *           @arg @ref FL_LCD_SEGEN0_SEG15
  *           @arg @ref FL_LCD_SEGEN0_SEG16
  *           @arg @ref FL_LCD_SEGEN0_SEG17
  *           @arg @ref FL_LCD_SEGEN0_SEG18
  *           @arg @ref FL_LCD_SEGEN0_SEG19
  *           @arg @ref FL_LCD_SEGEN0_SEG20
  *           @arg @ref FL_LCD_SEGEN0_SEG21
  *           @arg @ref FL_LCD_SEGEN0_SEG22
  *           @arg @ref FL_LCD_SEGEN0_SEG23
  *           @arg @ref FL_LCD_SEGEN0_SEG24
  *           @arg @ref FL_LCD_SEGEN0_SEG25
  *           @arg @ref FL_LCD_SEGEN0_SEG26
  *           @arg @ref FL_LCD_SEGEN0_SEG27
  *           @arg @ref FL_LCD_SEGEN0_SEG28
  *           @arg @ref FL_LCD_SEGEN0_SEG29
  *           @arg @ref FL_LCD_SEGEN0_SEG30
  *           @arg @ref FL_LCD_SEGEN0_SEG31
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableSEGEN0(LCD_Type* LCDx, uint32_t SEG)
{
    CLEAR_BIT(LCDx->SEG_EN0, ((SEG & 0xffffffff) << 0x0U));
}


/**
  * @brief    Get LCD SEGx State
  * @rmtoll   SEG_EN1        FL_LCD_IsEnabledSEGEN1
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN1_SEG0
  *           @arg @ref FL_LCD_SEGEN1_SEG1
  *           @arg @ref FL_LCD_SEGEN1_SEG2
  *           @arg @ref FL_LCD_SEGEN1_SEG3
  *           @arg @ref FL_LCD_SEGEN1_SEG4
  *           @arg @ref FL_LCD_SEGEN1_SEG5
  *           @arg @ref FL_LCD_SEGEN1_SEG6
  *           @arg @ref FL_LCD_SEGEN1_SEG7
  *           @arg @ref FL_LCD_SEGEN1_SEG8
  *           @arg @ref FL_LCD_SEGEN1_SEG9
  *           @arg @ref FL_LCD_SEGEN1_SEG10
  *           @arg @ref FL_LCD_SEGEN1_SEG11
  * @retval   State of bit (1 or 0).
  */                     
__STATIC_INLINE uint32_t FL_LCD_IsEnabledSEGEN1(LCD_Type *LCDx, uint32_t SEG)
{
    return (uint32_t)(READ_BIT(LCDx->SEG_EN1, ((SEG & 0xffffffff) << 0x0U)) == ((SEG & 0xffffffff) << 0x0U));
}

/**
  * @brief    Enable LCD SEGx
  * @rmtoll   SEG_EN1        FL_LCD_EnableSEGEN1
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN1_SEG0
  *           @arg @ref FL_LCD_SEGEN1_SEG1
  *           @arg @ref FL_LCD_SEGEN1_SEG2
  *           @arg @ref FL_LCD_SEGEN1_SEG3
  *           @arg @ref FL_LCD_SEGEN1_SEG4
  *           @arg @ref FL_LCD_SEGEN1_SEG5
  *           @arg @ref FL_LCD_SEGEN1_SEG6
  *           @arg @ref FL_LCD_SEGEN1_SEG7
  *           @arg @ref FL_LCD_SEGEN1_SEG8
  *           @arg @ref FL_LCD_SEGEN1_SEG9
  *           @arg @ref FL_LCD_SEGEN1_SEG10
  *           @arg @ref FL_LCD_SEGEN1_SEG11
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_EnableSEGEN1(LCD_Type *LCDx, uint32_t SEG)
{
    SET_BIT(LCDx->SEG_EN1, ((SEG & 0xffffffff) << 0x0U));
}

/**
  * @brief    Disable LCD SEGx
  * @rmtoll   SEG_EN1        FL_LCD_DisableSEGEN1
  * @param    LCDx LCD instance
  * @param    SEG This parameter can be one of the following values:
  *           @arg @ref FL_LCD_SEGEN1_SEG0
  *           @arg @ref FL_LCD_SEGEN1_SEG1
  *           @arg @ref FL_LCD_SEGEN1_SEG2
  *           @arg @ref FL_LCD_SEGEN1_SEG3
  *           @arg @ref FL_LCD_SEGEN1_SEG4
  *           @arg @ref FL_LCD_SEGEN1_SEG5
  *           @arg @ref FL_LCD_SEGEN1_SEG6
  *           @arg @ref FL_LCD_SEGEN1_SEG7
  *           @arg @ref FL_LCD_SEGEN1_SEG8
  *           @arg @ref FL_LCD_SEGEN1_SEG9
  *           @arg @ref FL_LCD_SEGEN1_SEG10
  *           @arg @ref FL_LCD_SEGEN1_SEG11
  * @retval   None
  */
__STATIC_INLINE void FL_LCD_DisableSEGEN1(LCD_Type *LCDx, uint32_t SEG)
{
    CLEAR_BIT(LCDx->SEG_EN1, ((SEG & 0xffffffff) << 0x0U));
}




/**
  * @}
  */

/** @defgroup LCD_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_LCD_DeInit(LCD_Type *LCDx);
FL_ErrorStatus FL_LCD_Init(LCD_Type *LCDx, FL_LCD_InitTypeDef *initStruct);
void FL_LCD_StructInit(FL_LCD_InitTypeDef *initStruct);
void FL_LCD_4COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state) ;
void FL_LCD_6COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state) ;
void FL_LCD_8COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state) ;


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_LCD_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
