/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_u7816.h
  * @author  FMSH Application Team
  * @brief   Head file of U7816 FL Module
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
#ifndef __FM33L0XXD_FL_U7816_H
#define __FM33L0XXD_FL_U7816_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup U7816_FL_ES_INIT U7816 Exported Init structures
  * @{
  */

/**
  * @brief FL U7816 Init Sturcture definition
  */
/**
  * @brief U7816 Init Sturcture definition
  */
typedef struct
{
    /** 卡时钟频率 */
    uint32_t outputClockFreqence;

    /** 接口发送失败后自动重装使能 */
    uint32_t txAutoRetry;

    /** 自动重装次数 */
    uint32_t retryCnt;

    /** 插入BGT使能 */
    uint32_t blockGuard;

    /** 强上拉使能 */
    uint32_t strongPullUp;

    /** 帧格式奇偶校验模式 */
    uint32_t parity;

    /** 帧格式接收Guard时间 */
    uint32_t rxGuardTime;

    /** 帧格式发送Guard时间 */
    uint32_t txGuardTime;
    /** 帧格式错误Guard时间 */
    uint32_t errorGuardTime;

    /** 帧错误信号长度 */
    uint32_t errorSignalWidth;

    /** 接收校验错误自动回发error signal使能 */
    uint32_t rxAutoErrorSignal;

    /** 传输BIT顺序 */
    uint32_t transferOrder;

    /** 通讯速率 */
    uint32_t baud;

    /** 额外发送Guard时间 */
    uint32_t extraGuardTime;

} FL_U7816_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup U7816_FL_Exported_Constants U7816 Exported Constants
  * @{
  */

#define    U7816_CTRLx_TXEN_Pos                                   (5U)
#define    U7816_CTRLx_TXEN_Msk                                   (0x1U << U7816_CTRLx_TXEN_Pos)
#define    U7816_CTRLx_TXEN                                       U7816_CTRLx_TXEN_Msk

#define    U7816_CTRLx_RXEN_Pos                                   (4U)
#define    U7816_CTRLx_RXEN_Msk                                   (0x1U << U7816_CTRLx_RXEN_Pos)
#define    U7816_CTRLx_RXEN                                       U7816_CTRLx_RXEN_Msk

#define    U7816_CTRLx_CKOEN_Pos                                  (3U)
#define    U7816_CTRLx_CKOEN_Msk                                  (0x1U << U7816_CTRLx_CKOEN_Pos)
#define    U7816_CTRLx_CKOEN                                      U7816_CTRLx_CKOEN_Msk

#define    U7816_CTRLx_HPUAT_Pos                                  (2U)
#define    U7816_CTRLx_HPUAT_Msk                                  (0x1U << U7816_CTRLx_HPUAT_Pos)
#define    U7816_CTRLx_HPUAT                                      U7816_CTRLx_HPUAT_Msk

#define    U7816_CTRLx_HPUEN_Pos                                  (1U)
#define    U7816_CTRLx_HPUEN_Msk                                  (0x1U << U7816_CTRLx_HPUEN_Pos)
#define    U7816_CTRLx_HPUEN                                      U7816_CTRLx_HPUEN_Msk

#define    U7816_FRCx_ERSW_Pos                                    (9U)
#define    U7816_FRCx_ERSW_Msk                                    (0x3U << U7816_FRCx_ERSW_Pos)
#define    U7816_FRCx_ERSW                                        U7816_FRCx_ERSW_Msk

#define    U7816_FRCx_ERSGD_Pos                                   (8U)
#define    U7816_FRCx_ERSGD_Msk                                   (0x1U << U7816_FRCx_ERSGD_Pos)
#define    U7816_FRCx_ERSGD                                       U7816_FRCx_ERSGD_Msk

#define    U7816_FRCx_BGTEN_Pos                                   (7U)
#define    U7816_FRCx_BGTEN_Msk                                   (0x1U << U7816_FRCx_BGTEN_Pos)
#define    U7816_FRCx_BGTEN                                       U7816_FRCx_BGTEN_Msk

#define    U7816_FRCx_REP_T_Pos                                   (6U)
#define    U7816_FRCx_REP_T_Msk                                   (0x1U << U7816_FRCx_REP_T_Pos)
#define    U7816_FRCx_REP_T                                       U7816_FRCx_REP_T_Msk

#define    U7816_FRCx_PAR_Pos                                     (4U)
#define    U7816_FRCx_PAR_Msk                                     (0x3U << U7816_FRCx_PAR_Pos)
#define    U7816_FRCx_PAR                                         U7816_FRCx_PAR_Msk

#define    U7816_FRCx_FREN_Pos                                    (3U)
#define    U7816_FRCx_FREN_Msk                                    (0x1U << U7816_FRCx_FREN_Pos)
#define    U7816_FRCx_FREN                                        U7816_FRCx_FREN_Msk

#define    U7816_FRCx_TREPEN_Pos                                  (2U)
#define    U7816_FRCx_TREPEN_Msk                                  (0x1U << U7816_FRCx_TREPEN_Pos)
#define    U7816_FRCx_TREPEN                                      U7816_FRCx_TREPEN_Msk

#define    U7816_FRCx_RREPEN_Pos                                  (1U)
#define    U7816_FRCx_RREPEN_Msk                                  (0x1U << U7816_FRCx_RREPEN_Pos)
#define    U7816_FRCx_RREPEN                                      U7816_FRCx_RREPEN_Msk

#define    U7816_FRCx_DICONV_Pos                                  (0U)
#define    U7816_FRCx_DICONV_Msk                                  (0x1U << U7816_FRCx_DICONV_Pos)
#define    U7816_FRCx_DICONV                                      U7816_FRCx_DICONV_Msk

#define    U7816_IEx_RXIE_Pos                                     (2U)
#define    U7816_IEx_RXIE_Msk                                     (0x1U << U7816_IEx_RXIE_Pos)
#define    U7816_IEx_RXIE                                         U7816_IEx_RXIE_Msk

#define    U7816_IEx_TXIE_Pos                                     (1U)
#define    U7816_IEx_TXIE_Msk                                     (0x1U << U7816_IEx_TXIE_Pos)
#define    U7816_IEx_TXIE                                         U7816_IEx_TXIE_Msk

#define    U7816_IEx_LSIE_Pos                                     (0U)
#define    U7816_IEx_LSIE_Msk                                     (0x1U << U7816_IEx_LSIE_Pos)
#define    U7816_IEx_LSIE                                         U7816_IEx_LSIE_Msk

#define    U7816_IFx_ERRIF_Pos                                    (2U)
#define    U7816_IFx_ERRIF_Msk                                    (0x1U << U7816_IFx_ERRIF_Pos)
#define    U7816_IFx_ERRIF                                        U7816_IFx_ERRIF_Msk

#define    U7816_IFx_TXIF_Pos                                     (1U)
#define    U7816_IFx_TXIF_Msk                                     (0x1U << U7816_IFx_TXIF_Pos)
#define    U7816_IFx_TXIF                                         U7816_IFx_TXIF_Msk

#define    U7816_IFx_RXIF_Pos                                     (0U)
#define    U7816_IFx_RXIF_Msk                                     (0x1U << U7816_IFx_RXIF_Pos)
#define    U7816_IFx_RXIF                                         U7816_IFx_RXIF_Msk

#define    U7816_ERRx_TPARERR_Pos                                 (3U)
#define    U7816_ERRx_TPARERR_Msk                                 (0x1U << U7816_ERRx_TPARERR_Pos)
#define    U7816_ERRx_TPARERR                                     U7816_ERRx_TPARERR_Msk

#define    U7816_ERRx_RPARERR_Pos                                 (2U)
#define    U7816_ERRx_RPARERR_Msk                                 (0x1U << U7816_ERRx_RPARERR_Pos)
#define    U7816_ERRx_RPARERR                                     U7816_ERRx_RPARERR_Msk

#define    U7816_ERRx_FRERR_Pos                                   (1U)
#define    U7816_ERRx_FRERR_Msk                                   (0x1U << U7816_ERRx_FRERR_Pos)
#define    U7816_ERRx_FRERR                                       U7816_ERRx_FRERR_Msk

#define    U7816_ERRx_OVERR_Pos                                   (0U)
#define    U7816_ERRx_OVERR_Msk                                   (0x1U << U7816_ERRx_OVERR_Pos)
#define    U7816_ERRx_OVERR                                       U7816_ERRx_OVERR_Msk

#define    U7816_STAx_WAIT_RPT_Pos                                (2U)
#define    U7816_STAx_WAIT_RPT_Msk                                (0x1U << U7816_STAx_WAIT_RPT_Pos)
#define    U7816_STAx_WAIT_RPT                                    U7816_STAx_WAIT_RPT_Msk

#define    U7816_STAx_TXBUSY_Pos                                  (1U)
#define    U7816_STAx_TXBUSY_Msk                                  (0x1U << U7816_STAx_TXBUSY_Pos)
#define    U7816_STAx_TXBUSY                                      U7816_STAx_TXBUSY_Msk

#define    U7816_STAx_RXBUSY_Pos                                  (0U)
#define    U7816_STAx_RXBUSY_Msk                                  (0x1U << U7816_STAx_RXBUSY_Pos)
#define    U7816_STAx_RXBUSY                                      U7816_STAx_RXBUSY_Msk






#define    FL_U7816_STRONG_PULLUP_MANUAL                          (0x0U << U7816_CTRLx_HPUAT_Pos)
#define    FL_U7816_STRONG_PULLUP_AUTO                            (0x1U << U7816_CTRLx_HPUAT_Pos)


#define    FL_U7816_ERROR_SIGNAL_WIDTH_2ETU                       (0x1U << U7816_FRCx_ERSW_Pos)
#define    FL_U7816_ERROR_SIGNAL_WIDTH_1P5ETU                     (0x2U << U7816_FRCx_ERSW_Pos)
#define    FL_U7816_ERROR_SIGNAL_WIDTH_1ETU                       (0x3U << U7816_FRCx_ERSW_Pos)


#define    FL_U7816_ERROR_GUARD_TIME_2ETU                         (0x0U << U7816_FRCx_ERSGD_Pos)
#define    FL_U7816_ERROR_GUARD_TIME_1ETU                         (0x1U << U7816_FRCx_ERSGD_Pos)


#define    FL_U7816_RETRY_COUNT_1                                 (0x0U << U7816_FRCx_REP_T_Pos)
#define    FL_U7816_RETRY_COUNT_3                                 (0x1U << U7816_FRCx_REP_T_Pos)


#define    FL_U7816_PARITY_SEL_EVEN                               (0x0U << U7816_FRCx_PAR_Pos)
#define    FL_U7816_PARITY_SEL_ODD                                (0x1U << U7816_FRCx_PAR_Pos)
#define    FL_U7816_PARITY_SEL_ALWAYS_1                           (0x2U << U7816_FRCx_PAR_Pos)
#define    FL_U7816_PARITY_SEL_NONE                               (0x3U << U7816_FRCx_PAR_Pos)


#define    FL_U7816_GUARD_TIME_2ETU                               (0x0U << U7816_FRCx_FREN_Pos)
#define    FL_U7816_GUARD_TIME_1ETU                               (0x1U << U7816_FRCx_FREN_Pos)


#define    FL_U7816_BIT_ORDER_LSB_FIRST                           (0x0U << U7816_FRCx_DICONV_Pos)
#define    FL_U7816_BIT_ORDER_MSB_FIRST                           (0x1U << U7816_FRCx_DICONV_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup U7816_FL_Exported_Functions U7816 Exported Functions
  * @{
  */

/**
  * @brief    使能U7816发送
  * @rmtoll   U7816CTRL    TXEN    FL_U7816_EnableTX
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableTX(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816CTRL, U7816_CTRLx_TXEN_Msk);
}

/**
  * @brief    失能U7816发送
  * @rmtoll   U7816CTRL    TXEN    FL_U7816_DisableTX
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableTX(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816CTRL, U7816_CTRLx_TXEN_Msk);
}

/**
  * @brief    获取U7816发送使能状态
  * @rmtoll   U7816CTRL    TXEN    FL_U7816_IsEnabledTX
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledTX(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CTRL, U7816_CTRLx_TXEN_Msk) == U7816_CTRLx_TXEN_Msk);
}

/**
  * @brief    使能U7816接收
  * @rmtoll   U7816CTRL    RXEN    FL_U7816_EnableRX
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableRX(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816CTRL, U7816_CTRLx_RXEN_Msk);
}

/**
  * @brief    失能U7816接收
  * @rmtoll   U7816CTRL    RXEN    FL_U7816_DisableRX
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableRX(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816CTRL, U7816_CTRLx_RXEN_Msk);
}

/**
  * @brief    获取U7816接收使能状态
  * @rmtoll   U7816CTRL    RXEN    FL_U7816_IsEnabledRX
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledRX(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CTRL, U7816_CTRLx_RXEN_Msk) == U7816_CTRLx_RXEN_Msk);
}

/**
  * @brief    使能U7816时钟输出
  * @rmtoll   U7816CTRL    CKOEN    FL_U7816_EnableCLK
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableCLK(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816CTRL, U7816_CTRLx_CKOEN_Msk);
}

/**
  * @brief    失能U7816时钟输出
  * @rmtoll   U7816CTRL    CKOEN    FL_U7816_DisableCLK
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableCLK(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816CTRL, U7816_CTRLx_CKOEN_Msk);
}

/**
  * @brief    获取U7816时钟输出
  * @rmtoll   U7816CTRL    CKOEN    FL_U7816_IsEnabledCLK
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledCLK(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CTRL, U7816_CTRLx_CKOEN_Msk) == U7816_CTRLx_CKOEN_Msk);
}

/**
  * @brief    设置U7816强上拉自动有效控制
  * @rmtoll   U7816CTRL    HPUAT    FL_U7816_SetTxStrongPullUpAutoControl
  * @param    U7816x U7816 instance
  * @param    control This parameter can be one of the following values:
  *           @arg @ref FL_U7816_STRONG_PULLUP_MANUAL
  *           @arg @ref FL_U7816_STRONG_PULLUP_AUTO
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetTxStrongPullUpAutoControl(U7816_Type* U7816x, uint32_t control)
{
    MODIFY_REG(U7816x->U7816CTRL, U7816_CTRLx_HPUAT_Msk, control);
}

/**
  * @brief    获取U7816强上拉自动有效控制
  * @rmtoll   U7816CTRL    HPUAT    FL_U7816_GetTxStrongPullUpAutoControl
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_STRONG_PULLUP_MANUAL
  *           @arg @ref FL_U7816_STRONG_PULLUP_AUTO
  */
__STATIC_INLINE uint32_t FL_U7816_GetTxStrongPullUpAutoControl(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CTRL, U7816_CTRLx_HPUAT_Msk));
}

/**
  * @brief    使能U7816强上拉自动有效控制
  * @rmtoll   U7816CTRL    HPUEN    FL_U7816_EnableTxStrongPullUpAutoControl
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnablePullup(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816CTRL, U7816_CTRLx_HPUEN_Msk);
}

/**
  * @brief    失能U7816强上拉自动有效控制
  * @rmtoll   U7816CTRL    HPUEN    FL_U7816_DisableTxStrongPullUpAutoControl
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisablePullUp(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816CTRL, U7816_CTRLx_HPUEN_Msk);
}

/**
  * @brief    获取U7816强上拉自动有效控制
  * @rmtoll   U7816CTRL    HPUEN    FL_U7816_IsEnabledTxStrongPullUpAutoControl
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledPullUp(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CTRL, U7816_CTRLx_HPUEN_Msk) == U7816_CTRLx_HPUEN_Msk);
}

/**
  * @brief    设置U7816 Error Signal长度
  * @rmtoll   U7816FRC    ERSW    FL_U7816_SetErrorSignalWidth
  * @param    U7816x U7816 instance
  * @param    width This parameter can be one of the following values:
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_2ETU
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_1P5ETU
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_1ETU
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetErrorSignalWidth(U7816_Type* U7816x, uint32_t width)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_ERSW_Msk, width);
}

/**
  * @brief    获取U7816 Error Signal长度
  * @rmtoll   U7816FRC    ERSW    FL_U7816_GetErrorSignalWidth
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_2ETU
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_1P5ETU
  *           @arg @ref FL_U7816_ERROR_SIGNAL_WIDTH_1ETU
  */
__STATIC_INLINE uint32_t FL_U7816_GetErrorSignalWidth(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_ERSW_Msk));
}

/**
  * @brief    设置Error Signal后Guard Time宽度
  * @rmtoll   U7816FRC    ERSGD    FL_U7816_SetErrorGuardTime
  * @param    U7816x U7816 instance
  * @param    config This parameter can be one of the following values:
  *           @arg @ref FL_U7816_ERROR_GUARD_TIME_2ETU
  *           @arg @ref FL_U7816_ERROR_GUARD_TIME_1ETU
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetErrorGuardTime(U7816_Type* U7816x, uint32_t config)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_ERSGD_Msk, config);
}

/**
  * @brief    获取Error Signal后Guard Time宽度
  * @rmtoll   U7816FRC    ERSGD    FL_U7816_GetErrorGuardTime
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_ERROR_GUARD_TIME_2ETU
  *           @arg @ref FL_U7816_ERROR_GUARD_TIME_1ETU
  */
__STATIC_INLINE uint32_t FL_U7816_GetErrorGuardTime(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_ERSGD_Msk));
}

/**
  * @brief    使能U7816的Block Guard Time插入功能
  * @rmtoll   U7816FRC    BGTEN    FL_U7816_EnableBlockGuardTime
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableBlockGuardTime(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816FRC, U7816_FRCx_BGTEN_Msk);
}

/**
  * @brief    获取U7816 Block Guard Time插入使能状态
  * @rmtoll   U7816FRC    BGTEN    FL_U7816_IsEnabledBlockGuardTime
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledBlockGuardTime(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_BGTEN_Msk) == U7816_FRCx_BGTEN_Msk);
}

/**
  * @brief    失能U7816的Block Guard Time插入功能
  * @rmtoll   U7816FRC    BGTEN    FL_U7816_DisableBlockGuardTime
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableBlockGuardTime(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816FRC, U7816_FRCx_BGTEN_Msk);
}

/**
  * @brief    设置U7816校验出错时的重发次数
  * @rmtoll   U7816FRC    REP_T    FL_U7816_SetRetryCount
  * @param    U7816x U7816 instance
  * @param    cnt This parameter can be one of the following values:
  *           @arg @ref FL_U7816_RETRY_COUNT_1
  *           @arg @ref FL_U7816_RETRY_COUNT_3
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetRetryCount(U7816_Type* U7816x, uint32_t cnt)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_REP_T_Msk, cnt);
}

/**
  * @brief    获取U7816奇偶校验出错时的重发次数
  * @rmtoll   U7816FRC    REP_T    FL_U7816_GetRetryCount
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_RETRY_COUNT_1
  *           @arg @ref FL_U7816_RETRY_COUNT_3
  */
__STATIC_INLINE uint32_t FL_U7816_GetRetryCount(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_REP_T_Msk));
}

/**
  * @brief    设置U7816奇偶校验类型
  * @rmtoll   U7816FRC    PAR    FL_U7816_SetParity
  * @param    U7816x U7816 instance
  * @param    parity This parameter can be one of the following values:
  *           @arg @ref FL_U7816_PARITY_SEL_EVEN
  *           @arg @ref FL_U7816_PARITY_SEL_ODD
  *           @arg @ref FL_U7816_PARITY_SEL_ALWAYS_1
  *           @arg @ref FL_U7816_PARITY_SEL_NONE
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetParity(U7816_Type* U7816x, uint32_t parity)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_PAR_Msk, parity);
}

/**
  * @brief    获取U7816奇偶校验类型
  * @rmtoll   U7816FRC    PAR    FL_U7816_GetParity
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_PARITY_SEL_EVEN
  *           @arg @ref FL_U7816_PARITY_SEL_ODD
  *           @arg @ref FL_U7816_PARITY_SEL_ALWAYS_1
  *           @arg @ref FL_U7816_PARITY_SEL_NONE
  */
__STATIC_INLINE uint32_t FL_U7816_GetParity(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_PAR_Msk));
}

/**
  * @brief    设置U7816 Guard Time接收长度
  * @rmtoll   U7816FRC    FREN    FL_U7816_SetGuardTime
  * @param    U7816x U7816 instance
  * @param    config This parameter can be one of the following values:
  *           @arg @ref FL_U7816_GUARD_TIME_2ETU
  *           @arg @ref FL_U7816_GUARD_TIME_1ETU
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetGuardTime(U7816_Type* U7816x, uint32_t config)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_FREN_Msk, config);
}

/**
  * @brief    获取U7816 Guard Time接收长度
  * @rmtoll   U7816FRC    FREN    FL_U7816_GetGuardTime
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_GUARD_TIME_2ETU
  *           @arg @ref FL_U7816_GUARD_TIME_1ETU
  */
__STATIC_INLINE uint32_t FL_U7816_GetGuardTime(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_FREN_Msk));
}

/**
  * @brief    使能U7816发送数据奇偶校验出错自动重发
  * @rmtoll   U7816FRC    TREPEN    FL_U7816_EnableTXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableTXParityErrorAutoRetry(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816FRC, U7816_FRCx_TREPEN_Msk);
}

/**
  * @brief    失能U7816发送数据奇偶校验出错自动重发
  * @rmtoll   U7816FRC    TREPEN    FL_U7816_DisableTXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableTXParityErrorAutoRetry(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816FRC, U7816_FRCx_TREPEN_Msk);
}

/**
  * @brief    获取U7816发送数据奇偶校验出错的处理方式
  * @rmtoll   U7816FRC    TREPEN    FL_U7816_IsEnabledTXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledTXParityErrorAutoRetry(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_TREPEN_Msk) == U7816_FRCx_TREPEN_Msk);
}

/**
  * @brief    使能U7816接收数据奇偶校验出错自动重发
  * @rmtoll   U7816FRC    RREPEN    FL_U7816_EnableRXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableRXParityErrorAutoRetry(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816FRC, U7816_FRCx_RREPEN_Msk);
}

/**
  * @brief    失能U7816发送数据奇偶校验出错自动重发
  * @rmtoll   U7816FRC    RREPEN    FL_U7816_DisableRXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableRXParityErrorAutoRetry(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816FRC, U7816_FRCx_RREPEN_Msk);
}

/**
  * @brief    获取U7816接收数据奇偶校验出错的处理方式
  * @rmtoll   U7816FRC    RREPEN    FL_U7816_IsEnabledRXParityErrorAutoRetry
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledRXParityErrorAutoRetry(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_RREPEN_Msk) == U7816_FRCx_RREPEN_Msk);
}

/**
  * @brief    设置U7816传输次序
  * @rmtoll   U7816FRC    DICONV    FL_U7816_SetBitOrder
  * @param    U7816x U7816 instance
  * @param    order This parameter can be one of the following values:
  *           @arg @ref FL_U7816_BIT_ORDER_LSB_FIRST
  *           @arg @ref FL_U7816_BIT_ORDER_MSB_FIRST
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_SetBitOrder(U7816_Type* U7816x, uint32_t order)
{
    MODIFY_REG(U7816x->U7816FRC, U7816_FRCx_DICONV_Msk, order);
}

/**
  * @brief    获取U7816传输次序
  * @rmtoll   U7816FRC    DICONV    FL_U7816_GetBitOrder
  * @param    U7816x U7816 instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_U7816_BIT_ORDER_LSB_FIRST
  *           @arg @ref FL_U7816_BIT_ORDER_MSB_FIRST
  */
__STATIC_INLINE uint32_t FL_U7816_GetBitOrder(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816FRC, U7816_FRCx_DICONV_Msk));
}

/**
  * @brief    设置U7816发送时插入的额外Guard Time的长度
  * @rmtoll   U7816EGTC        FL_U7816_WriteExtraGuardTime
  * @param    U7816x U7816 instance
  * @param    config 
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_WriteExtraGuardTime(U7816_Type* U7816x, uint32_t config)
{
    MODIFY_REG(U7816x->U7816EGTC, (0xffU << 0U), (config << 0U));
}

/**
  * @brief    获取U7816发送时插入的额外Guard Time的长度
  * @rmtoll   U7816EGTC        FL_U7816_ReadExtraGuardTime
  * @param    U7816x U7816 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_U7816_ReadExtraGuardTime(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816EGTC, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    设置U7816时钟分频数
  * @rmtoll   U7816CLKDIV        FL_U7816_WriteClockDivision
  * @param    U7816x U7816 instance
  * @param    div 
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_WriteClockDivision(U7816_Type* U7816x, uint32_t div)
{
    MODIFY_REG(U7816x->U7816CLKDIV, (0x1fU << 0U), (div << 0U));
}

/**
  * @brief    获取U7816时钟分频数
  * @rmtoll   U7816CLKDIV        FL_U7816_ReadClockDivision
  * @param    U7816x U7816 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_U7816_ReadClockDivision(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816CLKDIV, (0x1fU << 0U)) >> 0U);
}

/**
  * @brief    设置U7816时钟预分频系数
  * @rmtoll   U7816PDIV        FL_U7816_WritePreClockDivision
  * @param    U7816x U7816 instance
  * @param    prediv 
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_WritePreClockDivision(U7816_Type* U7816x, uint32_t prediv)
{
    MODIFY_REG(U7816x->U7816PDIV, (0xfffU << 0U), (prediv << 0U));
}

/**
  * @brief    获取U7816时钟预分频数系数
  * @rmtoll   U7816PDIV        FL_U7816_ReadPreClockDivision
  * @param    U7816x U7816 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_U7816_ReadPreClockDivision(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816PDIV, (0xfffU << 0U)) >> 0U);
}

/**
  * @brief    UART接收数据
  * @rmtoll   U7816RXBUF        FL_U7816_ReadRXBuff
  * @param    U7816x U7816 instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_U7816_ReadRXBuff(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816RXBUF, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    UART发送数据
  * @rmtoll   U7816TXBUF        FL_U7816_WriteTXBuff
  * @param    U7816x U7816 instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_WriteTXBuff(U7816_Type* U7816x, uint32_t data)
{
    MODIFY_REG(U7816x->U7816TXBUF, (0xffU << 0U), (data << 0U));
}

/**
  * @brief    失能U7816数据接收中断
  * @rmtoll   U7816IE    RXIE    FL_U7816_DisableIT_RXBuffFull
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableIT_RXBuffFull(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816IE, U7816_IEx_RXIE_Msk);
}

/**
  * @brief    使能U7816数据接收中断
  * @rmtoll   U7816IE    RXIE    FL_U7816_EnableIT_RXBuffFull
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableIT_RXBuffFull(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816IE, U7816_IEx_RXIE_Msk);
}

/**
  * @brief    获取U7816数据接收中断使能状态
  * @rmtoll   U7816IE    RXIE    FL_U7816_IsEnabledIT_RXBuffFull
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledIT_RXBuffFull(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IE, U7816_IEx_RXIE_Msk) == U7816_IEx_RXIE_Msk);
}

/**
  * @brief    失能U7816数据发送中断
  * @rmtoll   U7816IE    TXIE    FL_U7816_DisableIT_TXBuffEmpty
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableIT_TXBuffEmpty(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816IE, U7816_IEx_TXIE_Msk);
}

/**
  * @brief    使能U7816数据发送中断
  * @rmtoll   U7816IE    TXIE    FL_U7816_EnableIT_TXBuffEmpty
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableIT_TXBuffEmpty(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816IE, U7816_IEx_TXIE_Msk);
}

/**
  * @brief    获取U7816数据发送中断使能状态
  * @rmtoll   U7816IE    TXIE    FL_U7816_IsEnabledIT_TXBuffEmpty
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledIT_TXBuffEmpty(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IE, U7816_IEx_TXIE_Msk) == U7816_IEx_TXIE_Msk);
}

/**
  * @brief    失能U7816线路状态中断
  * @rmtoll   U7816IE    LSIE    FL_U7816_DisableIT_Error
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_DisableIT_Error(U7816_Type* U7816x)
{
    CLEAR_BIT(U7816x->U7816IE, U7816_IEx_LSIE_Msk);
}

/**
  * @brief    使能U7816线路状态中断
  * @rmtoll   U7816IE    LSIE    FL_U7816_EnableIT_Error
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_EnableIT_Error(U7816_Type* U7816x)
{
    SET_BIT(U7816x->U7816IE, U7816_IEx_LSIE_Msk);
}

/**
  * @brief    获取U7816线路状态中断使能状态
  * @rmtoll   U7816IE    LSIE    FL_U7816_IsEnabledIT_Error
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsEnabledIT_Error(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IE, U7816_IEx_LSIE_Msk) == U7816_IEx_LSIE_Msk);
}

/**
  * @brief    获取U7816错误标志
  * @rmtoll   U7816IF    ERRIF    FL_U7816_IsActiveFlag_Error
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_Error(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IF, U7816_IFx_ERRIF_Msk) == (U7816_IFx_ERRIF_Msk));
}

/**
  * @brief    获取U7816发送缓冲区空标志
  * @rmtoll   U7816IF    TXIF    FL_U7816_IsActiveFlag_TXBuffEmpty
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_TXBuffEmpty(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IF, U7816_IFx_TXIF_Msk) == (U7816_IFx_TXIF_Msk));
}

/**
  * @brief    获取U7816接收完成标志
  * @rmtoll   U7816IF    RXIF    FL_U7816_IsActiveFlag_RXBuffFull
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_RXBuffFull(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816IF, U7816_IFx_RXIF_Msk) == (U7816_IFx_RXIF_Msk));
}

/**
  * @brief    获取U7816发送数据奇偶校验错误标志
  * @rmtoll   U7816ERR    TPARERR    FL_U7816_IsActiveFlag_TXParityError
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_TXParityError(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816ERR, U7816_ERRx_TPARERR_Msk) == (U7816_ERRx_TPARERR_Msk));
}

/**
  * @brief    清除U7816发送数据奇偶校验错误标志
  * @rmtoll   U7816ERR    TPARERR    FL_U7816_ClearFlag_TXParityError
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_ClearFlag_TXParityError(U7816_Type* U7816x)
{
    WRITE_REG(U7816x->U7816ERR, U7816_ERRx_TPARERR_Msk);
}

/**
  * @brief    获取U7816接收数据奇偶校验错误标志
  * @rmtoll   U7816ERR    RPARERR    FL_U7816_IsActiveFlag_RXParityError
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_RXParityError(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816ERR, U7816_ERRx_RPARERR_Msk) == (U7816_ERRx_RPARERR_Msk));
}

/**
  * @brief    清除U7816接收数据奇偶校验错误标志
  * @rmtoll   U7816ERR    RPARERR    FL_U7816_ClearFlag_RXParityError
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_ClearFlag_RXParityError(U7816_Type* U7816x)
{
    WRITE_REG(U7816x->U7816ERR, U7816_ERRx_RPARERR_Msk);
}

/**
  * @brief    获取U7816接收帧格式错误标志
  * @rmtoll   U7816ERR    FRERR    FL_U7816_IsActiveFlag_RXFrameError
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_RXFrameError(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816ERR, U7816_ERRx_FRERR_Msk) == (U7816_ERRx_FRERR_Msk));
}

/**
  * @brief    清除U7816接收帧格式错误标志
  * @rmtoll   U7816ERR    FRERR    FL_U7816_ClearFlag_RXFrameError
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_ClearFlag_RXFrameError(U7816_Type* U7816x)
{
    WRITE_REG(U7816x->U7816ERR, U7816_ERRx_FRERR_Msk);
}

/**
  * @brief    获取U7816接收溢出错误标志
  * @rmtoll   U7816ERR    OVERR    FL_U7816_IsActiveFlag_RXOverflow
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_RXOverflow(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816ERR, U7816_ERRx_OVERR_Msk) == (U7816_ERRx_OVERR_Msk));
}

/**
  * @brief    清除U7816接收溢出错误标志
  * @rmtoll   U7816ERR    OVERR    FL_U7816_ClearFlag_RXOverflow
  * @param    U7816x U7816 instance
  * @retval   None
  */
__STATIC_INLINE void FL_U7816_ClearFlag_RXOverflow(U7816_Type* U7816x)
{
    WRITE_REG(U7816x->U7816ERR, U7816_ERRx_OVERR_Msk);
}

/**
  * @brief    获取U7816等待重发标志
  * @rmtoll   U7816STA    WAIT_RPT    FL_U7816_IsActiveFlag_WaitRetry
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_WaitRetry(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816STA, U7816_STAx_WAIT_RPT_Msk) == (U7816_STAx_WAIT_RPT_Msk));
}

/**
  * @brief    获取U7816发送数据忙标志
  * @rmtoll   U7816STA    TXBUSY    FL_U7816_IsActiveFlag_TXBusy
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_TXBusy(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816STA, U7816_STAx_TXBUSY_Msk) == (U7816_STAx_TXBUSY_Msk));
}

/**
  * @brief    获取U7816接收数据忙标志
  * @rmtoll   U7816STA    RXBUSY    FL_U7816_IsActiveFlag_RXBusy
  * @param    U7816x U7816 instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_U7816_IsActiveFlag_RXBusy(U7816_Type* U7816x)
{
    return (uint32_t)(READ_BIT(U7816x->U7816STA, U7816_STAx_RXBUSY_Msk) == (U7816_STAx_RXBUSY_Msk));
}

/**
  * @}
  */

/** @defgroup U7816_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
// #warning "PLEASE ANNOUCE THE INIT AND DEINIT FUNCTIONS HERE!!!"

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_U7816_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2026-01-07*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
