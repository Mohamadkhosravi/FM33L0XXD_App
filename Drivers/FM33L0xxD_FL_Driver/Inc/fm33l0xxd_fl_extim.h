/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_extim.h
  * @author  FMSH Application Team
  * @brief   Head file of EXTIM FL Module
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
#ifndef __FM33L0XXD_FL_EXTIM_H
#define __FM33L0XXD_FL_EXTIM_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup EXTIM EXTIM
  * @brief EXTIM FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup EXTIM_FL_ES_INIT EXTIM Exported Init structures
  * @{
  */

/**
  * @brief FL EXTIM Init Sturcture definition
  */
typedef struct
{
    uint32_t    sig1Sel;       /* 内部信号1源选择（在计数模式下计数源仅由此选择，捕捉模式下计数源） */
    uint32_t    gpr1Sel;       /* GROUP1 信号选择控制 */
    uint32_t    gpr2Sel;       /* GROUP2 信号选择控制 */
    uint32_t    prescale1;     /* ETx预分频寄存器1 */
    uint32_t    prescale2;     /* ETx预分频寄存器2 */
                               
    FL_FunState exFlt;         /* 引脚输入数字滤波使能 */
    uint32_t    mod;           /* 工作模式选择 */
    uint32_t    casEn;         /* 扩展定时器级联使能 */
    uint32_t    edgeSel;       /* 计数模式采沿方式选择（计数时钟选择mcu_clk时该位无效，总是采用mcu_clk时钟上升沿计数） */

    uint32_t    initValue;     /* ETx初值寄存器 */
}
FL_EXTIM_InitTypeDef;

typedef struct
{
    FL_FunState    pwm;        /* PWM输出控制 */
    uint32_t    cmp;           /* ETx比较寄存器 */   
}
FL_EXTIM_OC_InitTypeDef;

typedef struct
{
    uint32_t    sig2Sel;       /* 内部信号2源选择(捕捉源) */
    uint32_t    capEdge;       /* 捕捉沿选择 */
    uint32_t    capMode;       /* 捕捉模式控制 */
    uint32_t    capClr;        /* Control with reset-to-zero capture mode */
    uint32_t    capOnce;       /* Single-shot control   */   
}
FL_EXTIM_IC_InitTypeDef;

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup EXTIM_FL_Exported_Constants EXTIM Exported Constants
  * @{
  */

#define    EXTIM_CR_EXFLT_Pos                                     (9U)
#define    EXTIM_CR_EXFLT_Msk                                     (0x1U << EXTIM_CR_EXFLT_Pos)
#define    EXTIM_CR_EXFLT                                         EXTIM_CR_EXFLT_Msk

#define    EXTIM_CR_PWM_Pos                                       (8U)
#define    EXTIM_CR_PWM_Msk                                       (0x1U << EXTIM_CR_PWM_Pos)
#define    EXTIM_CR_PWM                                           EXTIM_CR_PWM_Msk

#define    EXTIM_CR_EN_Pos                                        (7U)
#define    EXTIM_CR_EN_Msk                                        (0x1U << EXTIM_CR_EN_Pos)
#define    EXTIM_CR_EN                                            EXTIM_CR_EN_Msk

#define    EXTIM_CR_MOD_Pos                                       (6U)
#define    EXTIM_CR_MOD_Msk                                       (0x1U << EXTIM_CR_MOD_Pos)
#define    EXTIM_CR_MOD                                           EXTIM_CR_MOD_Msk

#define    EXTIM_CR_CASEN_Pos                                     (5U)
#define    EXTIM_CR_CASEN_Msk                                     (0x1U << EXTIM_CR_CASEN_Pos)
#define    EXTIM_CR_CASEN                                         EXTIM_CR_CASEN_Msk

#define    EXTIM_CR_EDGESEL_Pos                                   (4U)
#define    EXTIM_CR_EDGESEL_Msk                                   (0x1U << EXTIM_CR_EDGESEL_Pos)
#define    EXTIM_CR_EDGESEL                                       EXTIM_CR_EDGESEL_Msk

#define    EXTIM_CR_CAPMODE_Pos                                   (3U)
#define    EXTIM_CR_CAPMODE_Msk                                   (0x1U << EXTIM_CR_CAPMODE_Pos)
#define    EXTIM_CR_CAPMODE                                       EXTIM_CR_CAPMODE_Msk

#define    EXTIM_CR_CAPCLR_Pos                                    (2U)
#define    EXTIM_CR_CAPCLR_Msk                                    (0x1U << EXTIM_CR_CAPCLR_Pos)
#define    EXTIM_CR_CAPCLR                                        EXTIM_CR_CAPCLR_Msk

#define    EXTIM_CR_CAPONCE_Pos                                   (1U)
#define    EXTIM_CR_CAPONCE_Msk                                   (0x1U << EXTIM_CR_CAPONCE_Pos)
#define    EXTIM_CR_CAPONCE                                       EXTIM_CR_CAPONCE_Msk

#define    EXTIM_CR_CAPEDGE_Pos                                   (0U)
#define    EXTIM_CR_CAPEDGE_Msk                                   (0x1U << EXTIM_CR_CAPEDGE_Pos)
#define    EXTIM_CR_CAPEDGE                                       EXTIM_CR_CAPEDGE_Msk

#define    EXTIM_INSEL_SIG2SEL_Pos                                (7U)
#define    EXTIM_INSEL_SIG2SEL_Msk                                (0x1U << EXTIM_INSEL_SIG2SEL_Pos)
#define    EXTIM_INSEL_SIG2SEL                                    EXTIM_INSEL_SIG2SEL_Msk

#define    EXTIM_INSEL_SIG1SEL_Pos                                (6U)
#define    EXTIM_INSEL_SIG1SEL_Msk                                (0x1U << EXTIM_INSEL_SIG1SEL_Pos)
#define    EXTIM_INSEL_SIG1SEL                                    EXTIM_INSEL_SIG1SEL_Msk

#define    EXTIM_INSEL_GRP2SEL_Pos                                (2U)
#define    EXTIM_INSEL_GRP2SEL_Msk                                (0x7U << EXTIM_INSEL_GRP2SEL_Pos)
#define    EXTIM_INSEL_GRP2SEL                                    EXTIM_INSEL_GRP2SEL_Msk

#define    EXTIM_INSEL_GRP1SEL_Pos                                (0U)
#define    EXTIM_INSEL_GRP1SEL_Msk                                (0x3U << EXTIM_INSEL_GRP1SEL_Pos)
#define    EXTIM_INSEL_GRP1SEL                                    EXTIM_INSEL_GRP1SEL_Msk

#define    EXTIM_PRESCALE1_PRESCALE_Pos                           (0U)
#define    EXTIM_PRESCALE1_PRESCALE_Msk                           (0xffU << EXTIM_PRESCALE1_PRESCALE_Pos)
#define    EXTIM_PRESCALE1_PRESCALE                               EXTIM_PRESCALE1_PRESCALE_Msk

#define    EXTIM_PRESCALE2_PRESCALE_Pos                           (0U)
#define    EXTIM_PRESCALE2_PRESCALE_Msk                           (0xffU << EXTIM_PRESCALE2_PRESCALE_Pos)
#define    EXTIM_PRESCALE2_PRESCALE                               EXTIM_PRESCALE2_PRESCALE_Msk

#define    EXTIM_INITVALUE_INITVALUE_Pos                          (0U)
#define    EXTIM_INITVALUE_INITVALUE_Msk                          (0xffffU << EXTIM_INITVALUE_INITVALUE_Pos)
#define    EXTIM_INITVALUE_INITVALUE                              EXTIM_INITVALUE_INITVALUE_Msk

#define    EXTIM_CMP_CMPVALUE_Pos                                 (0U)
#define    EXTIM_CMP_CMPVALUE_Msk                                 (0xffffU << EXTIM_CMP_CMPVALUE_Pos)
#define    EXTIM_CMP_CMPVALUE                                     EXTIM_CMP_CMPVALUE_Msk

#define    EXTIM_IE_CMPIE_Pos                                     (2U)
#define    EXTIM_IE_CMPIE_Msk                                     (0x1U << EXTIM_IE_CMPIE_Pos)
#define    EXTIM_IE_CMPIE                                         EXTIM_IE_CMPIE_Msk

#define    EXTIM_IE_CAPIE_Pos                                     (1U)
#define    EXTIM_IE_CAPIE_Msk                                     (0x1U << EXTIM_IE_CAPIE_Pos)
#define    EXTIM_IE_CAPIE                                         EXTIM_IE_CAPIE_Msk

#define    EXTIM_IE_OVIE_Pos                                      (0U)
#define    EXTIM_IE_OVIE_Msk                                      (0x1U << EXTIM_IE_OVIE_Pos)
#define    EXTIM_IE_OVIE                                          EXTIM_IE_OVIE_Msk

#define    EXTIM_IF_CMPIF_Pos                                     (3U)
#define    EXTIM_IF_CMPIF_Msk                                     (0x1U << EXTIM_IF_CMPIF_Pos)
#define    EXTIM_IF_CMPIF                                         EXTIM_IF_CMPIF_Msk

#define    EXTIM_IF_CAPEDGE_Pos                                   (2U)
#define    EXTIM_IF_CAPEDGE_Msk                                   (0x1U << EXTIM_IF_CAPEDGE_Pos)
#define    EXTIM_IF_CAPEDGE                                       EXTIM_IF_CAPEDGE_Msk

#define    EXTIM_IF_CAPIF_Pos                                     (1U)
#define    EXTIM_IF_CAPIF_Msk                                     (0x1U << EXTIM_IF_CAPIF_Pos)
#define    EXTIM_IF_CAPIF                                         EXTIM_IF_CAPIF_Msk

#define    EXTIM_IF_OVIF_Pos                                      (0U)
#define    EXTIM_IF_OVIF_Msk                                      (0x1U << EXTIM_IF_OVIF_Pos)
#define    EXTIM_IF_OVIF                                          EXTIM_IF_OVIF_Msk



#define    FL_EXTIM_GRP2SEL_ET1_RCLF                              (0x0U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_UART1_RX                          (0x1U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_XTLF                              (0x2U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_ET1_IN1                           (0x3U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_ET1_IN2                           (0x4U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_CMP1O                             (0x5U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_CMP2O                             (0x6U << 2U)
#define    FL_EXTIM_GRP2SEL_ET1_LPTO                              (0x7U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_UART2_RX                          (0x0U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_UART3_RX                          (0x1U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_XTLF                              (0x2U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_ET2_IN1                           (0x3U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_ET2_IN2                           (0x4U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_CMP1O                             (0x5U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_CMP2O                             (0x6U << 2U)
#define    FL_EXTIM_GRP2SEL_ET2_LPTO                              (0x7U << 2U)
#define    FL_EXTIM_GRP2SEL_ET3_ET3_IN1                           (0x0U << 2U)
#define    FL_EXTIM_GRP2SEL_ET3_XTLF                              (0x1U << 2U)
#define    FL_EXTIM_GRP2SEL_ET3_UART4_RX                          (0x2U << 2U)
#define    FL_EXTIM_GRP2SEL_ET3_UART5_RX                          (0x3U << 2U)
#define    FL_EXTIM_GRP2SEL_ET3_RTCSEC                            (0x4U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_ET4_IN1                           (0x0U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_XTLF                              (0x1U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_UART_RX2                          (0x2U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_UART_RX0                          (0x3U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_CMP1O                             (0x4U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_CMP2O                             (0x5U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_RTCSEC                            (0x6U << 2U)
#define    FL_EXTIM_GRP2SEL_ET4_LPTO                              (0x7U << 2U)
#define    FL_EXTIM_GRP1SEL_ET1_APBCLK                            (0x0U << 0U)
#define    FL_EXTIM_GRP1SEL_ET1_XTLF                              (0x1U << 0U)
#define    FL_EXTIM_GRP1SEL_ET1_RCLP                              (0x2U << 0U)
#define    FL_EXTIM_GRP1SEL_ET1_ET1_IN0                           (0x3U << 0U)
#define    FL_EXTIM_GRP1SEL_ET2_APBCLK                            (0x0U << 0U)
#define    FL_EXTIM_GRP1SEL_ET2_XTLF                              (0x1U << 0U)
#define    FL_EXTIM_GRP1SEL_ET2_RCLP                              (0x2U << 0U)
#define    FL_EXTIM_GRP1SEL_ET2_ET2_IN0                           (0x3U << 0U)
#define    FL_EXTIM_GRP1SEL_ET3_APBCLK                            (0x0U << 0U)
#define    FL_EXTIM_GRP1SEL_ET3_ET3_IN0                           (0x1U << 0U)
#define    FL_EXTIM_GRP1SEL_ET3_RTCSEC                            (0x2U << 0U)
#define    FL_EXTIM_GRP1SEL_ET3_RCLP                              (0x3U << 0U)
#define    FL_EXTIM_GRP1SEL_ET4_APBCLK                            (0x0U << 0U)
#define    FL_EXTIM_GRP1SEL_ET4_ET4_IN0                           (0x1U << 0U)
#define    FL_EXTIM_GRP1SEL_ET4_RTC64HZ                           (0x2U << 0U)
#define    FL_EXTIM_GRP1SEL_ET4_LPTO                              (0x3U << 0U)



#define    FL_EXTIM_OPERATION_MODE_NORMAL                         (0x0U << EXTIM_CR_MOD_Pos)
#define    FL_EXTIM_OPERATION_MODE_CAPTURE                        (0x1U << EXTIM_CR_MOD_Pos)


#define    FL_EXTIM_OPERATION_MODE_NORMAL_COUNT                   (0x0U << EXTIM_CR_CASEN_Pos)
#define    FL_EXTIM_OPERATION_MODE_CASCADE_COUNT                  (0x1U << EXTIM_CR_CASEN_Pos)


#define    FL_EXTIM_COUNT_EDGE_RISING                             (0x0U << EXTIM_CR_EDGESEL_Pos)
#define    FL_EXTIM_COUNT_EDGE_FALLING                            (0x1U << EXTIM_CR_EDGESEL_Pos)


#define    FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD               (0x0U << EXTIM_CR_CAPMODE_Pos)
#define    FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH                (0x1U << EXTIM_CR_CAPMODE_Pos)


#define    FL_EXTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT             (0x0U << EXTIM_CR_CAPCLR_Pos)
#define    FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT                (0x1U << EXTIM_CR_CAPCLR_Pos)


#define    FL_EXTIM_CAPTURE_MODE_CONTINUE                         (0x0U << EXTIM_CR_CAPONCE_Pos)
#define    FL_EXTIM_CAPTURE_MODE_SINGLE                           (0x1U << EXTIM_CR_CAPONCE_Pos)


#define    FL_EXTIM_IC_EDGE_RISING                                (0x0U << EXTIM_CR_CAPEDGE_Pos)
#define    FL_EXTIM_IC_EDGE_FALLING                               (0x1U << EXTIM_CR_CAPEDGE_Pos)


#define    FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP2                    (0x0U << EXTIM_INSEL_SIG2SEL_Pos)
#define    FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP1                    (0x1U << EXTIM_INSEL_SIG2SEL_Pos)


#define    FL_EXTIM_SIG1_CLK_SOURCE_GROUP2                        (0x1U << EXTIM_INSEL_SIG1SEL_Pos)
#define    FL_EXTIM_SIG1_CLK_SOURCE_GROUP1                        (0x0U << EXTIM_INSEL_SIG1SEL_Pos)


#define    FL_EXTIM_IC_CAPTURED_EDGE_STATUS_RISING                (0x0U << EXTIM_IF_CAPEDGE_Pos)
#define    FL_EXTIM_IC_CAPTURED_EDGE_STATUS_FALLING               (0x1U << EXTIM_IF_CAPEDGE_Pos)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup EXTIM_FL_Exported_Functions EXTIM Exported Functions
  * @{
  */

/**
  * @brief    Enable exit pin input digita filter
  * @rmtoll   CR    EXFLT    FL_EXTIM_EnableDigitalFilter
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_EnableDigitalFilter(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->CR, EXTIM_CR_EXFLT_Msk);
}

/**
  * @brief    Get exit pin input digita filter
  * @rmtoll   CR    EXFLT    FL_EXTIM_IsEnabledDigitalFilter
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabledDigitalFilter(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_EXFLT_Msk) == EXTIM_CR_EXFLT_Msk);
}

/**
  * @brief    Disable exit pin input digita filter
  * @rmtoll   CR    EXFLT    FL_EXTIM_DisableDigitalFilter
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_DisableDigitalFilter(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->CR, EXTIM_CR_EXFLT_Msk);
}

/**
  * @brief    Enable PWM output
  * @rmtoll   CR    PWM    FL_EXTIM_EnablePWMOutput
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_EnablePWMOutput(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->CR, EXTIM_CR_PWM_Msk);
}

/**
  * @brief    Get PWM output status
  * @rmtoll   CR    PWM    FL_EXTIM_IsEnabledPWMOutput
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabledPWMOutput(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_PWM_Msk) == EXTIM_CR_PWM_Msk);
}

/**
  * @brief    Disable PWM output
  * @rmtoll   CR    PWM    FL_EXTIM_DisablePWMOutput
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_DisablePWMOutput(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->CR, EXTIM_CR_PWM_Msk);
}

/**
  * @brief    EXTIMx enable
  * @rmtoll   CR    EN    FL_EXTIM_Enable
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_Enable(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->CR, EXTIM_CR_EN_Msk);
}

/**
  * @brief    Get EXTIMx enable status
  * @rmtoll   CR    EN    FL_EXTIM_IsEnabled
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabled(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_EN_Msk) == EXTIM_CR_EN_Msk);
}

/**
  * @brief    EXTIMx disable
  * @rmtoll   CR    EN    FL_EXTIM_Disable
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_Disable(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->CR, EXTIM_CR_EN_Msk);
}

/**
  * @brief    Set Operation Mode
  * @rmtoll   CR    MOD    FL_EXTIM_SetOperationMode
  * @param    EXTIMx EXTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_OPERATION_MODE_NORMAL
  *           @arg @ref FL_EXTIM_OPERATION_MODE_CAPTURE
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetOperationMode(EXTIM_Type* EXTIMx, uint32_t mode)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_MOD_Msk, mode);
}

/**
  * @brief    Get Operation Mode Setting
  * @rmtoll   CR    MOD    FL_EXTIM_GetOperationMode
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_OPERATION_MODE_NORMAL
  *           @arg @ref FL_EXTIM_OPERATION_MODE_CAPTURE
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetOperationMode(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_MOD_Msk));
}

/**
  * @brief    Set Cascade Mode
  * @rmtoll   CR    CASEN    FL_EXTIM_SetCascade
  * @param    EXTIMx EXTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_OPERATION_MODE_NORMAL_COUNT
  *           @arg @ref FL_EXTIM_OPERATION_MODE_CASCADE_COUNT
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetCascade(EXTIM_Type* EXTIMx, uint32_t mode)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_CASEN_Msk, mode);
}

/**
  * @brief    Get Cascade Mode Setting
  * @rmtoll   CR    CASEN    FL_EXTIM_GetCascade
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_OPERATION_MODE_NORMAL_COUNT
  *           @arg @ref FL_EXTIM_OPERATION_MODE_CASCADE_COUNT
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCascade(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_CASEN_Msk));
}

/**
  * @brief    Set Count Edge Polarity
  * @rmtoll   CR    EDGESEL    FL_EXTIM_SetCountEdge
  * @param    EXTIMx EXTIM instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_COUNT_EDGE_RISING
  *           @arg @ref FL_EXTIM_COUNT_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetCountEdge(EXTIM_Type* EXTIMx, uint32_t edge)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_EDGESEL_Msk, edge);
}

/**
  * @brief    Get Count Edge Polarity Setting
  * @rmtoll   CR    EDGESEL    FL_EXTIM_GetCountEdge
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_COUNT_EDGE_RISING
  *           @arg @ref FL_EXTIM_COUNT_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCountEdge(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_EDGESEL_Msk));
}

/**
  * @brief    Set Caputre Pulse Mode
  * @rmtoll   CR    CAPMODE    FL_EXTIM_SetCapturePulseMode
  * @param    EXTIMx EXTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetCapturePulseMode(EXTIM_Type* EXTIMx, uint32_t mode)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_CAPMODE_Msk, mode);
}

/**
  * @brief    Get Caputre Pulse Mode
  * @rmtoll   CR    CAPMODE    FL_EXTIM_GetCapturePulseMode
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCapturePulseMode(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_CAPMODE_Msk));
}

/**
  * @brief    Set Capture Clear mode
  * @rmtoll   CR    CAPCLR    FL_EXTIM_SetCaptureClear
  * @param    EXTIMx EXTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetCaptureClear(EXTIM_Type* EXTIMx, uint32_t mode)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_CAPCLR_Msk, mode);
}

/**
  * @brief    Get Capture Clear mode
  * @rmtoll   CR    CAPCLR    FL_EXTIM_GetCaptureClear
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT
  *           @arg @ref FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCaptureClear(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_CAPCLR_Msk));
}

/**
  * @brief    Set Once capture mode
  * @rmtoll   CR    CAPONCE    FL_EXTIM_SetOnceCaptureMode
  * @param    EXTIMx EXTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_MODE_CONTINUE
  *           @arg @ref FL_EXTIM_CAPTURE_MODE_SINGLE
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetOnceCaptureMode(EXTIM_Type* EXTIMx, uint32_t mode)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_CAPONCE_Msk, mode);
}

/**
  * @brief    Get Once capture mode
  * @rmtoll   CR    CAPONCE    FL_EXTIM_GetOnceCaptureMode
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_CAPTURE_MODE_CONTINUE
  *           @arg @ref FL_EXTIM_CAPTURE_MODE_SINGLE
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetOnceCaptureMode(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_CAPONCE_Msk));
}

/**
  * @brief    Set Capture Edge
  * @rmtoll   CR    CAPEDGE    FL_EXTIM_SetCaptureEdge
  * @param    EXTIMx EXTIM instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_IC_EDGE_RISING
  *           @arg @ref FL_EXTIM_IC_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetCaptureEdge(EXTIM_Type* EXTIMx, uint32_t edge)
{
    MODIFY_REG(EXTIMx->CR, EXTIM_CR_CAPEDGE_Msk, edge);
}

/**
  * @brief    Get  Capture Edge
  * @rmtoll   CR    CAPEDGE    FL_EXTIM_GetCaptureEdge
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_IC_EDGE_RISING
  *           @arg @ref FL_EXTIM_IC_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCaptureEdge(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CR, EXTIM_CR_CAPEDGE_Msk));
}

/**
  * @brief    Set singal 2 (capture source) group
  * @rmtoll   INSEL    SIG2SEL    FL_EXTIM_SetSIG2SEL
  * @param    EXTIMx EXTIM instance
  * @param    group This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP2
  *           @arg @ref FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP1
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetSIG2SEL(EXTIM_Type* EXTIMx, uint32_t group)
{
    MODIFY_REG(EXTIMx->INSEL, EXTIM_INSEL_SIG2SEL_Msk, group);
}

/**
  * @brief    Get singal 2 (capture source) group
  * @rmtoll   INSEL    SIG2SEL    FL_EXTIM_GetSIG2SEL
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP2
  *           @arg @ref FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP1
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetSIG2SEL(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->INSEL, EXTIM_INSEL_SIG2SEL_Msk));
}

/**
  * @brief    Set singal 1 (clk source) group
  * @rmtoll   INSEL    SIG1SEL    FL_EXTIM_SetSIG1SEL
  * @param    EXTIMx EXTIM instance
  * @param    group This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_SIG1_CLK_SOURCE_GROUP2
  *           @arg @ref FL_EXTIM_SIG1_CLK_SOURCE_GROUP1
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetSIG1SEL(EXTIM_Type* EXTIMx, uint32_t group)
{
    MODIFY_REG(EXTIMx->INSEL, EXTIM_INSEL_SIG1SEL_Msk, group);
}

/**
  * @brief    Get singal 1 (clk source) group
  * @rmtoll   INSEL    SIG1SEL    FL_EXTIM_GetSIG1SEL
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_SIG1_CLK_SOURCE_GROUP2
  *           @arg @ref FL_EXTIM_SIG1_CLK_SOURCE_GROUP1
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetSIG1SEL(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->INSEL, EXTIM_INSEL_SIG1SEL_Msk));
}

/**
  * @brief    Set group2  clk source
  * @rmtoll   INSEL    GRP2SEL    FL_EXTIM_SetGRP2SEL
  * @param    EXTIMx EXTIM instance
  * @param    gpr2clk This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_RCLF
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_UART1_RX
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_XTLF
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_ET1_IN1
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_ET1_IN2
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_CMP1O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_CMP2O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET1_LPTO
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_UART2_RX
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_UART3_RX
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_XTLF
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_ET2_IN1
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_ET2_IN2
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_CMP1O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_CMP2O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET2_LPTO
  *           @arg @ref FL_EXTIM_GRP2SEL_ET3_ET3_IN1
  *           @arg @ref FL_EXTIM_GRP2SEL_ET3_XTLF
  *           @arg @ref FL_EXTIM_GRP2SEL_ET3_UART4_RX
  *           @arg @ref FL_EXTIM_GRP2SEL_ET3_UART5_RX
  *           @arg @ref FL_EXTIM_GRP2SEL_ET3_RTCSEC
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_ET4_IN1
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_XTLF
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_UART_RX2
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_UART_RX0
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_CMP1O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_CMP2O
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_RTCSEC
  *           @arg @ref FL_EXTIM_GRP2SEL_ET4_LPTO
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetGRP2SEL(EXTIM_Type* EXTIMx, uint32_t gpr2clk)
{
    MODIFY_REG(EXTIMx->INSEL, EXTIM_INSEL_GRP2SEL_Msk, gpr2clk);
}

/**
  * @brief    Get group2  clk source
  * @rmtoll   INSEL    GRP2SEL    FL_EXTIM_GetGRP2SEL
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetGRP2SEL(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->INSEL, EXTIM_INSEL_GRP2SEL_Msk));
}

/**
  * @brief    Set group1  clk source
  * @rmtoll   INSEL    GRP1SEL    FL_EXTIM_SetGRP1SEL
  * @param    EXTIMx EXTIM instance
  * @param    gpr1clk This parameter can be one of the following values:
  *           @arg @ref FL_EXTIM_GRP1SEL_ET1_APBCLK
  *           @arg @ref FL_EXTIM_GRP1SEL_ET1_XTLF
  *           @arg @ref FL_EXTIM_GRP1SEL_ET1_RCLP
  *           @arg @ref FL_EXTIM_GRP1SEL_ET1_ET1_IN0
  *           @arg @ref FL_EXTIM_GRP1SEL_ET2_APBCLK
  *           @arg @ref FL_EXTIM_GRP1SEL_ET2_XTLF
  *           @arg @ref FL_EXTIM_GRP1SEL_ET2_RCLP
  *           @arg @ref FL_EXTIM_GRP1SEL_ET2_ET2_IN0
  *           @arg @ref FL_EXTIM_GRP1SEL_ET3_APBCLK
  *           @arg @ref FL_EXTIM_GRP1SEL_ET3_ET3_IN0
  *           @arg @ref FL_EXTIM_GRP1SEL_ET3_RTCSEC
  *           @arg @ref FL_EXTIM_GRP1SEL_ET3_RCLP
  *           @arg @ref FL_EXTIM_GRP1SEL_ET4_APBCLK
  *           @arg @ref FL_EXTIM_GRP1SEL_ET4_ET4_IN0
  *           @arg @ref FL_EXTIM_GRP1SEL_ET4_RTC64HZ
  *           @arg @ref FL_EXTIM_GRP1SEL_ET4_LPTO
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_SetGRP1SEL(EXTIM_Type* EXTIMx, uint32_t gpr1clk)
{
    MODIFY_REG(EXTIMx->INSEL, EXTIM_INSEL_GRP1SEL_Msk, gpr1clk);
}

/**
  * @brief    Get group1  clk source
  * @rmtoll   INSEL    GRP1SEL    FL_EXTIM_GetGRP1SEL
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetGRP1SEL(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->INSEL, EXTIM_INSEL_GRP1SEL_Msk));
}

/**
  * @brief    Set singal 1 Clock prescaler value
  * @rmtoll   PRESCALE1    PRESCALE    FL_EXTIM_WritePrescaler1
  * @param    EXTIMx EXTIM instance
  * @param    psc 
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_WritePrescaler1(EXTIM_Type* EXTIMx, uint32_t psc)
{
    MODIFY_REG(EXTIMx->PRESCALE1, (0xffU << 0U), (psc << 0U));
}

/**
  * @brief    Get singal 1 Clock prescaler value
  * @rmtoll   PRESCALE1    PRESCALE    FL_EXTIM_ReadPrescaler1
  * @param    EXTIMx EXTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadPrescaler1(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->PRESCALE1, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set singal 2 Clock prescaler value
  * @rmtoll   PRESCALE2    PRESCALE    FL_EXTIM_WritePrescaler2
  * @param    EXTIMx EXTIM instance
  * @param    psc 
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_WritePrescaler2(EXTIM_Type* EXTIMx, uint32_t psc)
{
    MODIFY_REG(EXTIMx->PRESCALE2, (0xffU << 0U), (psc << 0U));
}

/**
  * @brief    Get singal 2 Clock prescaler value
  * @rmtoll   PRESCALE2    PRESCALE    FL_EXTIM_ReadPrescaler2
  * @param    EXTIMx EXTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadPrescaler2(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->PRESCALE2, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set init value
  * @rmtoll   INITVALUE    INITVALUE    FL_EXTIM_WriteInitValue
  * @param    EXTIMx EXTIM instance
  * @param    compareValue 
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_WriteInitValue(EXTIM_Type* EXTIMx, uint32_t compareValue)
{
    MODIFY_REG(EXTIMx->INITVALUE, (0xffffU << 0U), (compareValue << 0U));
}

/**
  * @brief    Get init value
  * @rmtoll   INITVALUE    INITVALUE    FL_EXTIM_ReadInitValue
  * @param    EXTIMx EXTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadInitValue(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->INITVALUE, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Set compare value
  * @rmtoll   CMP    CMPVALUE    FL_EXTIM_WriteCompareValue
  * @param    EXTIMx EXTIM instance
  * @param    compareValue 
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_WriteCompareValue(EXTIM_Type* EXTIMx, uint32_t compareValue)
{
    MODIFY_REG(EXTIMx->CMP, (0xffffU << 0U), (compareValue << 0U));
}

/**
  * @brief    Get compare value
  * @rmtoll   CMP    CMPVALUE    FL_EXTIM_ReadCompareValue
  * @param    EXTIMx EXTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadCompareValue(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->CMP, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    Compare event interrupt disable
  * @rmtoll   IE    CMPIE    FL_EXTIM_DisableIT_CompareIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_DisableIT_CompareIE(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->IE, EXTIM_IE_CMPIE_Msk);
}

/**
  * @brief    Compare event interrupt enable
  * @rmtoll   IE    CMPIE    FL_EXTIM_EnableIT_CompareIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_EnableIT_CompareIE(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->IE, EXTIM_IE_CMPIE_Msk);
}

/**
  * @brief    Get Compare event interrupt enable status
  * @rmtoll   IE    CMPIE    FL_EXTIM_IsEnabledIT_CompareIE
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabledIT_CompareIE(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IE, EXTIM_IE_CMPIE_Msk) == EXTIM_IE_CMPIE_Msk);
}

/**
  * @brief    Capture event interrupt disable
  * @rmtoll   IE    CAPIE    FL_EXTIM_DisableIT_CaptureIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_DisableIT_CaptureIE(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->IE, EXTIM_IE_CAPIE_Msk);
}

/**
  * @brief    Capture event interrupt enable
  * @rmtoll   IE    CAPIE    FL_EXTIM_EnableIT_CaptureIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_EnableIT_CaptureIE(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->IE, EXTIM_IE_CAPIE_Msk);
}

/**
  * @brief    Get Capture event interrupt enable status
  * @rmtoll   IE    CAPIE    FL_EXTIM_IsEnabledIT_CaptureIE
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabledIT_CaptureIE(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IE, EXTIM_IE_CAPIE_Msk) == EXTIM_IE_CAPIE_Msk);
}

/**
  * @brief    Overflow event interrupt disable
  * @rmtoll   IE    OVIE    FL_EXTIM_DisableIT_OverflowIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_DisableIT_OverflowIE(EXTIM_Type* EXTIMx)
{
    CLEAR_BIT(EXTIMx->IE, EXTIM_IE_OVIE_Msk);
}

/**
  * @brief    Overflow event interrupt enable
  * @rmtoll   IE    OVIE    FL_EXTIM_EnableIT_OverflowIE
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_EnableIT_OverflowIE(EXTIM_Type* EXTIMx)
{
    SET_BIT(EXTIMx->IE, EXTIM_IE_OVIE_Msk);
}

/**
  * @brief    Get Overflow event interrupt enable status
  * @rmtoll   IE    OVIE    FL_EXTIM_IsEnabledIT_OverflowIE
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsEnabledIT_OverflowIE(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IE, EXTIM_IE_OVIE_Msk) == EXTIM_IE_OVIE_Msk);
}

/**
  * @brief    Get Compare event interrupt flag
  * @rmtoll   IF    CMPIF    FL_EXTIM_IsActiveFlag_CompareIF
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsActiveFlag_CompareIF(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IF, EXTIM_IF_CMPIF_Msk) == (EXTIM_IF_CMPIF_Msk));
}

/**
  * @brief    Clear Compare event interrupt flag
  * @rmtoll   IF    CMPIF    FL_EXTIM_ClearFlag_CompareIF
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_ClearFlag_CompareIF(EXTIM_Type* EXTIMx)
{
    WRITE_REG(EXTIMx->IF, EXTIM_IF_CMPIF_Msk);
}

/**
  * @brief    Get Captured Edge
  * @rmtoll   IF    CAPEDGE    FL_EXTIM_GetCapturedEdge
  * @param    EXTIMx EXTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_EXTIM_IC_CAPTURED_EDGE_STATUS_RISING
  *           @arg @ref FL_EXTIM_IC_CAPTURED_EDGE_STATUS_FALLING
  */
__STATIC_INLINE uint32_t FL_EXTIM_GetCapturedEdge(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IF, EXTIM_IF_CAPEDGE_Msk));
}

/**
  * @brief    Get Capture event interrupt flag
  * @rmtoll   IF    CAPIF    FL_EXTIM_IsActiveFlag_CaptureIF
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsActiveFlag_CaptureIF(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IF, EXTIM_IF_CAPIF_Msk) == (EXTIM_IF_CAPIF_Msk));
}

/**
  * @brief    Clear Capture event interrupt flag
  * @rmtoll   IF    CAPIF    FL_EXTIM_ClearFlag_CaptureIF
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_ClearFlag_CaptureIF(EXTIM_Type* EXTIMx)
{
    WRITE_REG(EXTIMx->IF, EXTIM_IF_CAPIF_Msk);
}

/**
  * @brief    Get Overflow event interrupt flag
  * @rmtoll   IF    OVIF    FL_EXTIM_IsActiveFlag_OverflowIF
  * @param    EXTIMx EXTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_EXTIM_IsActiveFlag_OverflowIF(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_BIT(EXTIMx->IF, EXTIM_IF_OVIF_Msk) == (EXTIM_IF_OVIF_Msk));
}

/**
  * @brief    Clear Overflow event interrupt flag
  * @rmtoll   IF    OVIF    FL_EXTIM_ClearFlag_OverflowIF
  * @param    EXTIMx EXTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_ClearFlag_OverflowIF(EXTIM_Type* EXTIMx)
{
    WRITE_REG(EXTIMx->IF, EXTIM_IF_OVIF_Msk);
}

/**
  * @brief    Set INITVALUE 
  * @rmtoll   INITVALUE        FL_EXTIM_WriteINITVALUE
  * @param    EXTIMx EXTIM instance
  * @param    cnt 
  * @retval   None
  */
__STATIC_INLINE void FL_EXTIM_WriteINITVALUE(EXTIM_Type* EXTIMx, uint32_t cnt)
{

    WRITE_REG(EXTIMx->INITVALUE,cnt);
}

/**
  * @brief    Get INITVALUE 
  * @rmtoll   CNT        FL_EXTIM_ReadINITVALUE
  * @param    EXTIMx EXTIM instance
  * @param    cnt 
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadINITVALUE(EXTIM_Type* EXTIMx)
{
    return (uint32_t)(READ_REG(EXTIMx->INITVALUE));
}


/**
  * @brief    Get counter value 
  * @rmtoll   CNT        FL_EXTIM_ReadCounter
  * @param    EXTIMx EXTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_EXTIM_ReadCounter(EXTIM_Type* EXTIMx)
{
    if(EXTIMx == EXTIM1)
        return (uint32_t)(READ_BIT(EXTIMCOM->ET1CNT, (0xffffU << 0U)) >> 0U);
    else if(EXTIMx == EXTIM2)
        return (uint32_t)(READ_BIT(EXTIMCOM->ET2CNT, (0xffffU << 0U)) >> 0U);
    else if(EXTIMx == EXTIM3)
        return (uint32_t)(READ_BIT(EXTIMCOM->ET3CNT, (0xffffU << 0U)) >> 0U);
    else //if(EXTIMx == EXTIM4)
        return (uint32_t)(READ_BIT(EXTIMCOM->ET4CNT, (0xffffU << 0U)) >> 0U);   
}

/**
  * @}
  */

/** @defgroup EXTIM_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
extern FL_ErrorStatus FL_EXTIM_Init(EXTIM_Type *EXTIMx, FL_EXTIM_InitTypeDef *initStruct);
extern FL_ErrorStatus FL_EXTIM_IC_Init(EXTIM_Type *EXTIMx, uint32_t channel, FL_EXTIM_IC_InitTypeDef *initStruct_IC);
extern FL_ErrorStatus FL_EXTIM_OC_Init(EXTIM_Type *EXTIMx, FL_EXTIM_OC_InitTypeDef *initStruct_OC);
extern void FL_EXTIM_IC_StructInit(FL_EXTIM_IC_InitTypeDef *initStruct_IC);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_EXTIM_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
