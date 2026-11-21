/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_BSTIM.h
  * @author  FMSH Application Team
  * @brief   Head file of BSTIM FL Module
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
#ifndef __FM33L0XXD_FL_BSTIM_H
#define __FM33L0XXD_FL_BSTIM_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @defgroup BSTIM BSTIM
  * @brief BSTIM FL driver
  * @{
  */

/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup BSTIM_FL_ES_INIT BSTIM Exported Init structures
  * @{
  */

/**
  * @brief FL BSTIM Init Sturcture definition
  */

typedef struct
{
  uint32_t sig2Sel;            /* 计数源group选择 */
  uint32_t sig1Sel;            /* 捕捉源group选择 */
  uint32_t grp1Sel;            /* GROUP1信号源选择*/
  uint32_t grp2Sel;            /* GROUP2信号源选择*/
  uint32_t rtcSel1;            /* RTC信号源1选择 */
  uint32_t rtcSel2;            /* RTC信号源2选择  */
  uint32_t inSel1;             /* 内部输入信号1选择 */
  uint32_t inSel2;             /* 内部输入信号2选择 */                                               
  uint32_t exSel1;             /* 外部输入信号1选择 */
  uint32_t exSel2;             /* 外部输入信号2选择 */

  uint32_t cntHSel;            /* 高8位计数器计数源选择 */      
  uint32_t srcSel;             /* 低位计数器使能控制信号选择*/
    
  uint32_t prescale;           /* 预分频寄存器 */
  uint32_t presetL;            /* 预置数寄存器低 */
  uint32_t presetH;            /* 预置数寄存器高 */
  uint32_t loadL;              /* 加载寄存器低 */ 
  uint32_t loadH;              /* 加载寄存器低 */ 
  uint32_t mode;               /* 工作模式选择8位计数定时或16位捕捉*/
  uint32_t edgeSel;            /* 捕捉或技术边沿选择 */ 

  FL_FunState dirEn;              /* 外部输入DIR使能 1-使能 0-关闭  */
  uint32_t dirPo;              /* 输入信号2极性选择 1-反向*/
}
FL_BSTIM_InitTypeDef;

typedef struct
{
  //输出脉冲宽度 
  uint32_t outCnt;             /* SET OUTPUT PULSE WIDTH,0-FFF */                                               
  uint32_t outClr;             /* SET OUTPUT TO 0 */
  uint32_t outInv;             /* SET OUTPUT SIGNAL REVERSE */
  uint32_t outMod;             /* 0-PULSE 1-LEVEL */    
  uint32_t outSel;             /* SELECT OUTPUT SOUCE */  	

  FL_FunState pwm;                /* pwm开关 1-使能 0-关闭*/    
  uint32_t cmpL;               /* 比较寄存器低 */ 
  uint32_t cmpH;               /* 比较寄存器高 */ 
}
FL_BSTIM_OC_InitTypeDef;

typedef struct
{
  uint32_t capOnce;            /* 单次捕捉 0-连续 1-单次捕捉 */
  uint32_t capClr;             /* 带清0的捕捉 */
  uint32_t capMod;             /* 捕捉模式 0-脉冲周期 1-脉冲宽度 */    
}
FL_BSTIM_IC_InitTypeDef;

/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup BSTIM_FL_Exported_Constants BSTIM Exported Constants
  * @{
  */

#define    BSTIM_BTCR1_CHEN_Pos                                   (7U)
#define    BSTIM_BTCR1_CHEN_Msk                                   (0x1U << BSTIM_BTCR1_CHEN_Pos)
#define    BSTIM_BTCR1_CHEN                                       BSTIM_BTCR1_CHEN_Msk

#define    BSTIM_BTCR1_CLEN_Pos                                   (6U)
#define    BSTIM_BTCR1_CLEN_Msk                                   (0x1U << BSTIM_BTCR1_CLEN_Pos)
#define    BSTIM_BTCR1_CLEN                                       BSTIM_BTCR1_CLEN_Msk

#define    BSTIM_BTCR1_MODE_Pos                                   (5U)
#define    BSTIM_BTCR1_MODE_Msk                                   (0x1U << BSTIM_BTCR1_MODE_Pos)
#define    BSTIM_BTCR1_MODE                                       BSTIM_BTCR1_MODE_Msk

#define    BSTIM_BTCR1_EDGESEL_Pos                                (4U)
#define    BSTIM_BTCR1_EDGESEL_Msk                                (0x1U << BSTIM_BTCR1_EDGESEL_Pos)
#define    BSTIM_BTCR1_EDGESEL                                    BSTIM_BTCR1_EDGESEL_Msk

#define    BSTIM_BTCR1_CAPMOD_Pos                                 (3U)
#define    BSTIM_BTCR1_CAPMOD_Msk                                 (0x1U << BSTIM_BTCR1_CAPMOD_Pos)
#define    BSTIM_BTCR1_CAPMOD                                     BSTIM_BTCR1_CAPMOD_Msk

#define    BSTIM_BTCR1_CAPCLR_Pos                                 (2U)
#define    BSTIM_BTCR1_CAPCLR_Msk                                 (0x1U << BSTIM_BTCR1_CAPCLR_Pos)
#define    BSTIM_BTCR1_CAPCLR                                     BSTIM_BTCR1_CAPCLR_Msk

#define    BSTIM_BTCR1_CAPONCE_Pos                                (1U)
#define    BSTIM_BTCR1_CAPONCE_Msk                                (0x1U << BSTIM_BTCR1_CAPONCE_Pos)
#define    BSTIM_BTCR1_CAPONCE                                    BSTIM_BTCR1_CAPONCE_Msk

#define    BSTIM_BTCR1_PWM_Pos                                    (0U)
#define    BSTIM_BTCR1_PWM_Msk                                    (0x1U << BSTIM_BTCR1_PWM_Pos)
#define    BSTIM_BTCR1_PWM                                        BSTIM_BTCR1_PWM_Msk

#define    BSTIM_BTCR2_SIG2SEL_Pos                                (7U)
#define    BSTIM_BTCR2_SIG2SEL_Msk                                (0x1U << BSTIM_BTCR2_SIG2SEL_Pos)
#define    BSTIM_BTCR2_SIG2SEL                                    BSTIM_BTCR2_SIG2SEL_Msk

#define    BSTIM_BTCR2_SIG1SEL_Pos                                (6U)
#define    BSTIM_BTCR2_SIG1SEL_Msk                                (0x1U << BSTIM_BTCR2_SIG1SEL_Pos)
#define    BSTIM_BTCR2_SIG1SEL                                    BSTIM_BTCR2_SIG1SEL_Msk

#define    BSTIM_BTCR2_CNTHSEL_Pos                                (4U)
#define    BSTIM_BTCR2_CNTHSEL_Msk                                (0x3U << BSTIM_BTCR2_CNTHSEL_Pos)

#define    BSTIM_BTCR2_DIREN_Pos                                  (3U)
#define    BSTIM_BTCR2_DIREN_Msk                                  (0x1U << BSTIM_BTCR2_DIREN_Pos)
#define    BSTIM_BTCR2_DIREN                                      BSTIM_BTCR2_DIREN_Msk

#define    BSTIM_BTCR2_STDIR_Pos                                  (2U)
#define    BSTIM_BTCR2_STDIR_Msk                                  (0x1U << BSTIM_BTCR2_STDIR_Pos)
#define    BSTIM_BTCR2_STDIR                                      BSTIM_BTCR2_STDIR_Msk

#define    BSTIM_BTCR2_SRCSEL_Pos                                 (1U)
#define    BSTIM_BTCR2_SRCSEL_Msk                                 (0x1U << BSTIM_BTCR2_SRCSEL_Pos)
#define    BSTIM_BTCR2_SRCSEL                                     BSTIM_BTCR2_SRCSEL_Msk

#define    BSTIM_BTCR2_DIRPO_Pos                                  (0U)
#define    BSTIM_BTCR2_DIRPO_Msk                                  (0x1U << BSTIM_BTCR2_DIRPO_Pos)
#define    BSTIM_BTCR2_DIRPO                                      BSTIM_BTCR2_DIRPO_Msk

#define    BSTIM_BTCFG1_RTCSEL2_Pos                               (6U)
#define    BSTIM_BTCFG1_RTCSEL2_Msk                               (0x3U << BSTIM_BTCFG1_RTCSEL2_Pos)
#define    BSTIM_BTCFG1_RTCSEL2                                   BSTIM_BTCFG1_RTCSEL2_Msk

#define    BSTIM_BTCFG1_RTCSEL1_Pos                               (4U)
#define    BSTIM_BTCFG1_RTCSEL1_Msk                               (0x3U << BSTIM_BTCFG1_RTCSEL1_Pos)
#define    BSTIM_BTCFG1_RTCSEL1                                   BSTIM_BTCFG1_RTCSEL1_Msk

#define    BSTIM_BTCFG1_GRP2SEL_Pos                               (2U)
#define    BSTIM_BTCFG1_GRP2SEL_Msk                               (0x3U << BSTIM_BTCFG1_GRP2SEL_Pos)
#define    BSTIM_BTCFG1_GRP2SEL                                   BSTIM_BTCFG1_GRP2SEL_Msk

#define    BSTIM_BTCFG1_GRP1SEL_Pos                               (0U)
#define    BSTIM_BTCFG1_GRP1SEL_Msk                               (0x3U << BSTIM_BTCFG1_GRP1SEL_Pos)
#define    BSTIM_BTCFG1_GRP1SEL                                   BSTIM_BTCFG1_GRP1SEL_Msk

#define    BSTIM_BTCFG2_EXSEL2_Pos                                (6U)
#define    BSTIM_BTCFG2_EXSEL2_Msk                                (0x3U << BSTIM_BTCFG2_EXSEL2_Pos)
#define    BSTIM_BTCFG2_EXSEL2                                    BSTIM_BTCFG2_EXSEL2_Msk

#define    BSTIM_BTCFG2_EXSEL1_Pos                                (4U)
#define    BSTIM_BTCFG2_EXSEL1_Msk                                (0x3U << BSTIM_BTCFG2_EXSEL1_Pos)
#define    BSTIM_BTCFG2_EXSEL1                                    BSTIM_BTCFG2_EXSEL1_Msk

#define    BSTIM_BTCFG2_INSEL2_Pos                                (2U)
#define    BSTIM_BTCFG2_INSEL2_Msk                                (0x3U << BSTIM_BTCFG2_INSEL2_Pos)
#define    BSTIM_BTCFG2_INSEL2                                    BSTIM_BTCFG2_INSEL2_Msk

#define    BSTIM_BTCFG2_INSEL1_Pos                                (0U)
#define    BSTIM_BTCFG2_INSEL1_Msk                                (0x3U << BSTIM_BTCFG2_INSEL1_Pos)
#define    BSTIM_BTCFG2_INSEL1                                    BSTIM_BTCFG2_INSEL1_Msk

#define    BSTIM_BTLOADCR_LHEN_Pos                                (4U)
#define    BSTIM_BTLOADCR_LHEN_Msk                                (0x1U << BSTIM_BTLOADCR_LHEN_Pos)
#define    BSTIM_BTLOADCR_LHEN                                    BSTIM_BTLOADCR_LHEN_Msk

#define    BSTIM_BTLOADCR_LLEN_Pos                                (0U)
#define    BSTIM_BTLOADCR_LLEN_Msk                                (0x1U << BSTIM_BTLOADCR_LLEN_Pos)
#define    BSTIM_BTLOADCR_LLEN                                    BSTIM_BTLOADCR_LLEN_Msk

#define    BSTIM_BTCNTL_CNTL_Pos                                  (0U)
#define    BSTIM_BTCNTL_CNTL_Msk                                  (0xffU << BSTIM_BTCNTL_CNTL_Pos)
#define    BSTIM_BTCNTL_CNTL                                      BSTIM_BTCNTL_CNTL_Msk

#define    BSTIM_BTCNTH_CNTH_Pos                                  (0U)
#define    BSTIM_BTCNTH_CNTH_Msk                                  (0xffU << BSTIM_BTCNTH_CNTH_Pos)
#define    BSTIM_BTCNTH_CNTH                                      BSTIM_BTCNTH_CNTH_Msk

#define    BSTIM_BTPRESETH_PRESETH_Pos                            (8U)
#define    BSTIM_BTPRESETH_PRESETH_Msk                            (0xffU << BSTIM_BTPRESETH_PRESETH_Pos)
#define    BSTIM_BTPRESETH_PRESETH                                BSTIM_BTPRESETH_PRESETH_Msk

#define    BSTIM_BTPRESETL_PRESETL_Pos                            (0U)
#define    BSTIM_BTPRESETL_PRESETL_Msk                            (0xffU << BSTIM_BTPRESETL_PRESETL_Pos)
#define    BSTIM_BTPRESETL_PRESETL                                BSTIM_BTPRESETL_PRESETL_Msk

#define    BSTIM_BTLOADL_LOADL_Pos                                (0U)
#define    BSTIM_BTLOADL_LOADL_Msk                                (0xffU << BSTIM_BTLOADL_LOADL_Pos)
#define    BSTIM_BTLOADL_LOADL                                    BSTIM_BTLOADL_LOADL_Msk

#define    BSTIM_BTLOADH_LOADH_Pos                                (0U)
#define    BSTIM_BTLOADH_LOADH_Msk                                (0xffU << BSTIM_BTLOADH_LOADH_Pos)
#define    BSTIM_BTLOADH_LOADH                                    BSTIM_BTLOADH_LOADH_Msk

#define    BSTIM_BTCMPL_CMPL_Pos                                  (0U)
#define    BSTIM_BTCMPL_CMPL_Msk                                  (0xffU << BSTIM_BTCMPL_CMPL_Pos)
#define    BSTIM_BTCMPL_CMPL                                      BSTIM_BTCMPL_CMPL_Msk

#define    BSTIM_BTCMPH_CMPH_Pos                                  (0U)
#define    BSTIM_BTCMPH_CMPH_Msk                                  (0xffU << BSTIM_BTCMPH_CMPH_Pos)
#define    BSTIM_BTCMPH_CMPH                                      BSTIM_BTCMPH_CMPH_Msk

#define    BSTIM_BTOUTCNT_OUTCNT_Pos                              (0U)
#define    BSTIM_BTOUTCNT_OUTCNT_Msk                              (0xfffU << BSTIM_BTOUTCNT_OUTCNT_Pos)
#define    BSTIM_BTOUTCNT_OUTCNT                                  BSTIM_BTOUTCNT_OUTCNT_Msk

#define    BSTIM_BTOCR_OUTCLR_Pos                                 (5U)
#define    BSTIM_BTOCR_OUTCLR_Msk                                 (0x1U << BSTIM_BTOCR_OUTCLR_Pos)
#define    BSTIM_BTOCR_OUTCLR                                     BSTIM_BTOCR_OUTCLR_Msk

#define    BSTIM_BTOCR_OUTINV_Pos                                 (4U)
#define    BSTIM_BTOCR_OUTINV_Msk                                 (0x1U << BSTIM_BTOCR_OUTINV_Pos)
#define    BSTIM_BTOCR_OUTINV                                     BSTIM_BTOCR_OUTINV_Msk

#define    BSTIM_BTOCR_OUTMOD_Pos                                 (3U)
#define    BSTIM_BTOCR_OUTMOD_Msk                                 (0x1U << BSTIM_BTOCR_OUTMOD_Pos)
#define    BSTIM_BTOCR_OUTMOD                                     BSTIM_BTOCR_OUTMOD_Msk

#define    BSTIM_BTOCR_OUTSEL_Pos                                 (0U)
#define    BSTIM_BTOCR_OUTSEL_Msk                                 (0x7U << BSTIM_BTOCR_OUTSEL_Pos)
#define    BSTIM_BTOCR_OUTSEL                                     BSTIM_BTOCR_OUTSEL_Msk

#define    BSTIM_BTIE_CMPHIE_Pos                                  (4U)
#define    BSTIM_BTIE_CMPHIE_Msk                                  (0x1U << BSTIM_BTIE_CMPHIE_Pos)
#define    BSTIM_BTIE_CMPHIE                                      BSTIM_BTIE_CMPHIE_Msk

#define    BSTIM_BTIE_CMPLIE_Pos                                  (3U)
#define    BSTIM_BTIE_CMPLIE_Msk                                  (0x1U << BSTIM_BTIE_CMPLIE_Pos)
#define    BSTIM_BTIE_CMPLIE                                      BSTIM_BTIE_CMPLIE_Msk

#define    BSTIM_BTIE_OVHIE_Pos                                   (2U)
#define    BSTIM_BTIE_OVHIE_Msk                                   (0x1U << BSTIM_BTIE_OVHIE_Pos)
#define    BSTIM_BTIE_OVHIE                                       BSTIM_BTIE_OVHIE_Msk

#define    BSTIM_BTIE_OVLIE_Pos                                   (1U)
#define    BSTIM_BTIE_OVLIE_Msk                                   (0x1U << BSTIM_BTIE_OVLIE_Pos)
#define    BSTIM_BTIE_OVLIE                                       BSTIM_BTIE_OVLIE_Msk

#define    BSTIM_BTIE_CAPIE_Pos                                   (0U)
#define    BSTIM_BTIE_CAPIE_Msk                                   (0x1U << BSTIM_BTIE_CAPIE_Pos)
#define    BSTIM_BTIE_CAPIE                                       BSTIM_BTIE_CAPIE_Msk

#define    BSTIM_BTIF_EDGESTA_Pos                                 (5U)
#define    BSTIM_BTIF_EDGESTA_Msk                                 (0x1U << BSTIM_BTIF_EDGESTA_Pos)
#define    BSTIM_BTIF_EDGESTA                                     BSTIM_BTIF_EDGESTA_Msk

#define    BSTIM_BTIF_CMPHIF_Pos                                  (4U)
#define    BSTIM_BTIF_CMPHIF_Msk                                  (0x1U << BSTIM_BTIF_CMPHIF_Pos)
#define    BSTIM_BTIF_CMPHIF                                      BSTIM_BTIF_CMPHIF_Msk

#define    BSTIM_BTIF_CMPLIF_Pos                                  (3U)
#define    BSTIM_BTIF_CMPLIF_Msk                                  (0x1U << BSTIM_BTIF_CMPLIF_Pos)
#define    BSTIM_BTIF_CMPLIF                                      BSTIM_BTIF_CMPLIF_Msk

#define    BSTIM_BTIF_OVHIF_Pos                                   (2U)
#define    BSTIM_BTIF_OVHIF_Msk                                   (0x1U << BSTIM_BTIF_OVHIF_Pos)
#define    BSTIM_BTIF_OVHIF                                       BSTIM_BTIF_OVHIF_Msk

#define    BSTIM_BTIF_OVLIF_Pos                                   (1U)
#define    BSTIM_BTIF_OVLIF_Msk                                   (0x1U << BSTIM_BTIF_OVLIF_Pos)
#define    BSTIM_BTIF_OVLIF                                       BSTIM_BTIF_OVLIF_Msk

#define    BSTIM_BTIF_CAPIF_Pos                                   (0U)
#define    BSTIM_BTIF_CAPIF_Msk                                   (0x1U << BSTIM_BTIF_CAPIF_Pos)
#define    BSTIM_BTIF_CAPIF                                       BSTIM_BTIF_CAPIF_Msk






#define    FL_BSTIM_WORK_MODE_16BIT_CAPTURE                       (0x1U << BSTIM_BTCR1_MODE_Pos)
#define    FL_BSTIM_WORK_MODE_8BIT_TIMING                         (0x0U << BSTIM_BTCR1_MODE_Pos)


#define    FL_BSTIM_COUNT_CAPTURE_EDGE_RAISING                    (0x0U << BSTIM_BTCR1_EDGESEL_Pos)
#define    FL_BSTIM_COUNT_CAPTURE_EDGE_FALLING                    (0x1U << BSTIM_BTCR1_EDGESEL_Pos)


#define    FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH                (0x1U << BSTIM_BTCR1_CAPMOD_Pos)
#define    FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD               (0x0U << BSTIM_BTCR1_CAPMOD_Pos)


#define    FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT                (0x1U << BSTIM_BTCR1_CAPCLR_Pos)
#define    FL_BSTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT             (0x0U << BSTIM_BTCR1_CAPCLR_Pos)


#define    FL_BSTIM_CAPTURE_MODE_SINGLE                           (0x1U << BSTIM_BTCR1_CAPONCE_Pos)
#define    FL_BSTIM_CAPTURE_MODE_CONTINUE                         (0x0U << BSTIM_BTCR1_CAPONCE_Pos)


#define    FL_BSTIM_SIG2_CLK_SOURCE_GROUP1                        (0x0U << BSTIM_BTCR2_SIG2SEL_Pos)
#define    FL_BSTIM_SIG2_CLK_SOURCE_GROUP2                        (0x1U << BSTIM_BTCR2_SIG2SEL_Pos)


#define    FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP1                    (0x1U << BSTIM_BTCR2_SIG1SEL_Pos)
#define    FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP2                    (0x0U << BSTIM_BTCR2_SIG1SEL_Pos)


#define    FL_BSTIM_CNTHSEL_CNTL                                  (0x0U << BSTIM_BTCR2_CNTHSEL_Pos)
#define    FL_BSTIM_CNTHSEL_INTER_SOURCE                          (0x1U << BSTIM_BTCR2_CNTHSEL_Pos)
#define    FL_BSTIM_CNTHSEL_INTER_OR_DIR                          (0x2U << BSTIM_BTCR2_CNTHSEL_Pos)


#define    FL_BSTIM_SRCSEL_OEN                                    (0x1U << BSTIM_BTCR2_SRCSEL_Pos)
#define    FL_BSTIM_SRCSEL_STDIR_OR_EXSIG2                        (0x0U << BSTIM_BTCR2_SRCSEL_Pos)


#define    FL_BSTIM_SIG2_POLARITY_NORMAL                          (0x0U << BSTIM_BTCR2_DIRPO_Pos)
#define    FL_BSTIM_SIG2_POLARITY_REVERSE                         (0x1U << BSTIM_BTCR2_DIRPO_Pos)


#define    FL_BSTIM_RTCSEL2_XTLF                                  (0x0U << BSTIM_BTCFG1_RTCSEL2_Pos)
#define    FL_BSTIM_RTCSEL2_RTCSec                                (0x1U << BSTIM_BTCFG1_RTCSEL2_Pos)
#define    FL_BSTIM_RTCSEL2_RTCMin                                (0x2U << BSTIM_BTCFG1_RTCSEL2_Pos)
#define    FL_BSTIM_RTCSEL2_LPTIM_OUT                             (0x3U << BSTIM_BTCFG1_RTCSEL2_Pos)


#define    FL_BSTIM_RTCSEL1_XTLF                                  (0x0U << BSTIM_BTCFG1_RTCSEL1_Pos)
#define    FL_BSTIM_RTCSEL1_RTCSec                                (0x1U << BSTIM_BTCFG1_RTCSEL1_Pos)
#define    FL_BSTIM_RTCSEL1_RTCMin                                (0x2U << BSTIM_BTCFG1_RTCSEL1_Pos)
#define    FL_BSTIM_RTCSEL1_LPTIM_OUT                             (0x3U << BSTIM_BTCFG1_RTCSEL1_Pos)


#define    FL_BSTIM_GRP2SEL_APBCLK                                (0x0U << BSTIM_BTCFG1_GRP2SEL_Pos)
#define    FL_BSTIM_GRP2SEL_RTCOUT2                               (0x1U << BSTIM_BTCFG1_GRP2SEL_Pos)
#define    FL_BSTIM_GRP2SEL_IN_SIG2                               (0x2U << BSTIM_BTCFG1_GRP2SEL_Pos)
#define    FL_BSTIM_GRP2SEL_EX_SIG2                               (0x3U << BSTIM_BTCFG1_GRP2SEL_Pos)


#define    FL_BSTIM_GRP1SEL_APBCLK                                (0x0U << BSTIM_BTCFG1_GRP1SEL_Pos)
#define    FL_BSTIM_GRP1SEL_RTCOUT1                               (0x1U << BSTIM_BTCFG1_GRP1SEL_Pos)
#define    FL_BSTIM_GRP1SEL_IN_SIG1                               (0x2U << BSTIM_BTCFG1_GRP1SEL_Pos)
#define    FL_BSTIM_GRP1SEL_EX_SIG1                               (0x3U << BSTIM_BTCFG1_GRP1SEL_Pos)


#define    FL_BSTIM_EXSEL2_BT_12_IN0                              (0x0U << BSTIM_BTCFG2_EXSEL2_Pos)
#define    FL_BSTIM_EXSEL2_BT_12_IN1                              (0x1U << BSTIM_BTCFG2_EXSEL2_Pos)
#define    FL_BSTIM_EXSEL2_BT_12_IN2                              (0x2U << BSTIM_BTCFG2_EXSEL2_Pos)
#define    FL_BSTIM_EXSEL2_BT_12_IN3                              (0x3U << BSTIM_BTCFG2_EXSEL2_Pos)


#define    FL_BSTIM_EXSEL1_BT_12_IN0                              (0x0U << BSTIM_BTCFG2_EXSEL1_Pos)
#define    FL_BSTIM_EXSEL1_BT_12_IN1                              (0x1U << BSTIM_BTCFG2_EXSEL1_Pos)
#define    FL_BSTIM_EXSEL1_BT_12_IN2                              (0x2U << BSTIM_BTCFG2_EXSEL1_Pos)
#define    FL_BSTIM_EXSEL1_BT_12_IN3                              (0x3U << BSTIM_BTCFG2_EXSEL1_Pos)


#define    FL_BSTIM_INSEL2_UART_RX3                               (0x0U << BSTIM_BTCFG2_INSEL2_Pos)
#define    FL_BSTIM_INSEL2_UART_RX4                               (0x1U << BSTIM_BTCFG2_INSEL2_Pos)
#define    FL_BSTIM_INSEL2_UART_RX5                               (0x2U << BSTIM_BTCFG2_INSEL2_Pos)
#define    FL_BSTIM_INSEL2_RCLP_BT1OUT                            (0x3U << BSTIM_BTCFG2_INSEL2_Pos)


#define    FL_BSTIM_INSEL1_UART_RX0                               (0x0U << BSTIM_BTCFG2_INSEL1_Pos)
#define    FL_BSTIM_INSEL1_UART_RX1                               (0x1U << BSTIM_BTCFG2_INSEL1_Pos)
#define    FL_BSTIM_INSEL1_UART_RX2                               (0x2U << BSTIM_BTCFG2_INSEL1_Pos)
#define    FL_BSTIM_INSEL1_RCLP                                   (0x3U << BSTIM_BTCFG2_INSEL1_Pos)


#define    FL_BSTIM_OUTCLR_CLEAR                                  (0x1U << BSTIM_BTOCR_OUTCLR_Pos)


#define    FL_BSTIM_OUTINV_NORMAL                                 (0x0U << BSTIM_BTOCR_OUTINV_Pos)
#define    FL_BSTIM_OUTINV_REVERSE                                (0x1U << BSTIM_BTOCR_OUTINV_Pos)


#define    FL_BSTIM_OUTMOD_REVERSE_LEVEL                          (0x1U << BSTIM_BTOCR_OUTMOD_Pos)
#define    FL_BSTIM_OUTMOD_PULSE                                  (0x0U << BSTIM_BTOCR_OUTMOD_Pos)


#define    FL_BSTIM_OUTSEL_COMP_H                                 (0x0U << BSTIM_BTOCR_OUTSEL_Pos)
#define    FL_BSTIM_OUTSEL_COMP_L                                 (0x1U << BSTIM_BTOCR_OUTSEL_Pos)
#define    FL_BSTIM_OUTSEL_GROUP1                                 (0x2U << BSTIM_BTOCR_OUTSEL_Pos)
#define    FL_BSTIM_OUTSEL_GROUP2                                 (0x3U << BSTIM_BTOCR_OUTSEL_Pos)
#define    FL_BSTIM_OUTSEL_PWM                                    (0x4U << BSTIM_BTOCR_OUTSEL_Pos)


#define    FL_BSTIM_IC_CAPTURED_EDGE_STATUS_RISING                (0x0U << BSTIM_BTIF_EDGESTA_Pos)
#define    FL_BSTIM_IC_CAPTURED_EDGE_STATUS_FALLING               (0x1U << BSTIM_BTIF_EDGESTA_Pos)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup BSTIM_FL_Exported_Functions BSTIM Exported Functions
  * @{
  */

/**
  * @brief    8-bit high counter enable
  * @rmtoll   BTCR1    CHEN    FL_BSTIM_Enable8bitCH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_Enable8bitCH(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->CR1, BSTIM_BTCR1_CHEN_Msk);
}

/**
  * @brief    Get 8-bit high counter enable status
  * @rmtoll   BTCR1    CHEN    FL_BSTIM_IsEnabled8bitCH
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabled8bitCH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_CHEN_Msk) == BSTIM_BTCR1_CHEN_Msk);
}

/**
  * @brief    8-bit high counter disable
  * @rmtoll   BTCR1    CHEN    FL_BSTIM_Disable8bitCH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_Disable8bitCH(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->CR1, BSTIM_BTCR1_CHEN_Msk);
}

/**
  * @brief    8-bit low counter enable
  * @rmtoll   BTCR1    CLEN    FL_BSTIM_Enable8bitCL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_Enable8bitCL(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->CR1, BSTIM_BTCR1_CLEN_Msk);
}

/**
  * @brief    Get 8-bit low counter enable status
  * @rmtoll   BTCR1    CLEN    FL_BSTIM_IsEnabled8bitCL
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabled8bitCL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_CLEN_Msk) == BSTIM_BTCR1_CLEN_Msk);
}

/**
  * @brief    8-bit low counter disable
  * @rmtoll   BTCR1    CLEN    FL_BSTIM_Disable8bitCL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_Disable8bitCL(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->CR1, BSTIM_BTCR1_CLEN_Msk);
}

/**
  * @brief    Set work mode
  * @rmtoll   BTCR1    MODE    FL_BSTIM_SetWorkMode
  * @param    BSTIMx BSTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_WORK_MODE_16BIT_CAPTURE
  *           @arg @ref FL_BSTIM_WORK_MODE_8BIT_TIMING
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetWorkMode(BSTIM_Type* BSTIMx, uint32_t mode)
{
    MODIFY_REG(BSTIMx->CR1, BSTIM_BTCR1_MODE_Msk, mode);
}

/**
  * @brief    Get work mode
  * @rmtoll   BTCR1    MODE    FL_BSTIM_GetWorkMode
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetWorkMode(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_MODE_Msk));
}

/**
  * @brief    Count Capture edge select
  * @rmtoll   BTCR1    EDGESEL    FL_BSTIM_SetCountCapEdge
  * @param    BSTIMx BSTIM instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_COUNT_CAPTURE_EDGE_RAISING
  *           @arg @ref FL_BSTIM_COUNT_CAPTURE_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetCountCapEdge(BSTIM_Type* BSTIMx, uint32_t edge)
{
    MODIFY_REG(BSTIMx->CR1, BSTIM_BTCR1_EDGESEL_Msk, edge);
}

/**
  * @brief    Get Count Capture edge
  * @rmtoll   BTCR1    EDGESEL    FL_BSTIM_GetCountCapEdge
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCountCapEdge(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_EDGESEL_Msk));
}

/**
  * @brief    Capture Mode set
  * @rmtoll   BTCR1    CAPMOD    FL_BSTIM_SetCapMode
  * @param    BSTIMx BSTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH
  *           @arg @ref FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetCapMode(BSTIM_Type* BSTIMx, uint32_t mode)
{
    MODIFY_REG(BSTIMx->CR1, BSTIM_BTCR1_CAPMOD_Msk, mode);
}

/**
  * @brief    Get Capture Mode
  * @rmtoll   BTCR1    CAPMOD    FL_BSTIM_GetCapMode
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCapMode(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_CAPMOD_Msk));
}

/**
  * @brief    CAPCLR set
  * @rmtoll   BTCR1    CAPCLR    FL_BSTIM_SetCapclr
  * @param    BSTIMx BSTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT
  *           @arg @ref FL_BSTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetCapclr(BSTIM_Type* BSTIMx, uint32_t mode)
{
    MODIFY_REG(BSTIMx->CR1, BSTIM_BTCR1_CAPCLR_Msk, mode);
}

/**
  * @brief    Get CAPCLR
  * @rmtoll   BTCR1    CAPCLR    FL_BSTIM_GetCapclr
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCapclr(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_CAPCLR_Msk));
}

/**
  * @brief    CAPONCE set
  * @rmtoll   BTCR1    CAPONCE    FL_BSTIM_SetCaponce
  * @param    BSTIMx BSTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_CAPTURE_MODE_SINGLE
  *           @arg @ref FL_BSTIM_CAPTURE_MODE_CONTINUE
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetCaponce(BSTIM_Type* BSTIMx, uint32_t mode)
{
    MODIFY_REG(BSTIMx->CR1, BSTIM_BTCR1_CAPONCE_Msk, mode);
}

/**
  * @brief    Get CAPONCE
  * @rmtoll   BTCR1    CAPONCE    FL_BSTIM_GetCaponce
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCaponce(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_CAPONCE_Msk));
}

/**
  * @brief    Pwm Output Enable
  * @rmtoll   BTCR1    PWM    FL_BSTIM_EnablePWM
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnablePWM(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->CR1, BSTIM_BTCR1_PWM_Msk);
}

/**
  * @brief    Get Pwm Output enable status
  * @rmtoll   BTCR1    PWM    FL_BSTIM_IsEnabledPWM
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledPWM(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CR1, BSTIM_BTCR1_PWM_Msk) == BSTIM_BTCR1_PWM_Msk);
}

/**
  * @brief    Pwm Output  Disable
  * @rmtoll   BTCR1    PWM    FL_BSTIM_DisablePWM
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisablePWM(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->CR1, BSTIM_BTCR1_PWM_Msk);
}

/**
  * @brief    Internal count source signal select2 
  * @rmtoll   BTCR2    SIG2SEL    FL_BSTIM_SetSig2sel
  * @param    BSTIMx BSTIM instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_SIG2_CLK_SOURCE_GROUP1
  *           @arg @ref FL_BSTIM_SIG2_CLK_SOURCE_GROUP2
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetSig2sel(BSTIM_Type* BSTIMx, uint32_t source)
{
    MODIFY_REG(BSTIMx->BCR2, BSTIM_BTCR2_SIG2SEL_Msk, source);
}

/**
  * @brief    Get Internal count source signal2 
  * @rmtoll   BTCR2    SIG2SEL    FL_BSTIM_GetSig2sel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetSig2sel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_SIG2SEL_Msk));
}

/**
  * @brief    Internal count source signal select1 
  * @rmtoll   BTCR2    SIG1SEL    FL_BSTIM_SetSig1sel
  * @param    BSTIMx BSTIM instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP1
  *           @arg @ref FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP2
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetSig1sel(BSTIM_Type* BSTIMx, uint32_t source)
{
    MODIFY_REG(BSTIMx->BCR2, BSTIM_BTCR2_SIG1SEL_Msk, source);
}

/**
  * @brief    Get Internal count source signal1 
  * @rmtoll   BTCR2    SIG1SEL    FL_BSTIM_GetSig1sel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetSig1sel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_SIG1SEL_Msk));
}

/**
  * @brief    CNTHSEL Set
  * @rmtoll   BTCR2    SIG1SEL    FL_BSTIM_SetCntHsel
  * @param    BSTIMx BSTIM instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_CNTHSEL_CNTL
  *           @arg @ref FL_BSTIM_CNTHSEL_INTER_SOURCE
  *           @arg @ref FL_BSTIM_CNTHSEL_INTER_OR_DIR
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetCntHsel(BSTIM_Type* BSTIMx, uint32_t source)
{
    MODIFY_REG(BSTIMx->BCR2, BSTIM_BTCR2_CNTHSEL_Msk, source);
}

/**
  * @brief    Get CNTHSEL
  * @rmtoll   BTCR2    SIG1SEL    FL_BSTIM_GetCntHsel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCntHsel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_CNTHSEL_Msk));
}

/**
  * @brief    ETDIR Enable
  * @rmtoll   BTCR2    DIREN    FL_BSTIM_EnableETDIR
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableETDIR(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->BCR2, BSTIM_BTCR2_DIREN_Msk);
}

/**
  * @brief    Get ETDIR enable status
  * @rmtoll   BTCR2    DIREN    FL_BSTIM_IsEnabledETDIR
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledETDIR(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_DIREN_Msk) == BSTIM_BTCR2_DIREN_Msk);
}

/**
  * @brief    ETDIR Disable
  * @rmtoll   BTCR2    DIREN    FL_BSTIM_DisableETDIR
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableETDIR(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->BCR2, BSTIM_BTCR2_DIREN_Msk);
}

/**
  * @brief    INDIR Enable
  * @rmtoll   BTCR2    STDIR    FL_BSTIM_EnableINDIR
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableINDIR(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->BCR2, BSTIM_BTCR2_STDIR_Msk);
}

/**
  * @brief    Get INDIR enable status
  * @rmtoll   BTCR2    STDIR    FL_BSTIM_IsEnabledINDIR
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledINDIR(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_STDIR_Msk) == BSTIM_BTCR2_STDIR_Msk);
}

/**
  * @brief    INDIR Disable
  * @rmtoll   BTCR2    STDIR    FL_BSTIM_DisableINDIR
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableINDIR(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->BCR2, BSTIM_BTCR2_STDIR_Msk);
}

/**
  * @brief    SRCSEL Set
  * @rmtoll   BTCR2    SRCSEL    FL_BSTIM_SetSrcsel
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_SRCSEL_OEN
  *           @arg @ref FL_BSTIM_SRCSEL_STDIR_OR_EXSIG2
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetSrcsel(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->BCR2, BSTIM_BTCR2_SRCSEL_Msk, singal);
}

/**
  * @brief    Get SRCSEL
  * @rmtoll   BTCR2    SRCSEL    FL_BSTIM_GetSrcsel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetSrcsel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_SRCSEL_Msk));
}

/**
  * @brief    DIRPO Set
  * @rmtoll   BTCR2    DIRPO    FL_BSTIM_SetDirpo
  * @param    BSTIMx BSTIM instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_SIG2_POLARITY_NORMAL
  *           @arg @ref FL_BSTIM_SIG2_POLARITY_REVERSE
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetDirpo(BSTIM_Type* BSTIMx, uint32_t polarity)
{
    MODIFY_REG(BSTIMx->BCR2, BSTIM_BTCR2_DIRPO_Msk, polarity);
}

/**
  * @brief    Get DIRPO
  * @rmtoll   BTCR2    DIRPO    FL_BSTIM_GetDirpo
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetDirpo(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->BCR2, BSTIM_BTCR2_DIRPO_Msk));
}

/**
  * @brief    RTCOUT2 Set
  * @rmtoll   BTCFG1    RTCSEL2    FL_BSTIM_SetRtcout2
  * @param    BSTIMx BSTIM instance
  * @param    output This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_RTCSEL2_XTLF
  *           @arg @ref FL_BSTIM_RTCSEL2_RTCSec
  *           @arg @ref FL_BSTIM_RTCSEL2_RTCMin
  *           @arg @ref FL_BSTIM_RTCSEL2_LPTIM_OUT
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetRtcout2(BSTIM_Type* BSTIMx, uint32_t output)
{
    MODIFY_REG(BSTIMx->CFG1, BSTIM_BTCFG1_RTCSEL2_Msk, output);
}

/**
  * @brief    Get RTCOUT2
  * @rmtoll   BTCFG1    RTCSEL2    FL_BSTIM_GetRtcout2
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetRtcout2(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG1, BSTIM_BTCFG1_RTCSEL2_Msk));
}

/**
  * @brief    RTCOUT1 Set
  * @rmtoll   BTCFG1    RTCSEL1    FL_BSTIM_SetRtcout1
  * @param    BSTIMx BSTIM instance
  * @param    output This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_RTCSEL1_XTLF
  *           @arg @ref FL_BSTIM_RTCSEL1_RTCSec
  *           @arg @ref FL_BSTIM_RTCSEL1_RTCMin
  *           @arg @ref FL_BSTIM_RTCSEL1_LPTIM_OUT
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetRtcout1(BSTIM_Type* BSTIMx, uint32_t output)
{
    MODIFY_REG(BSTIMx->CFG1, BSTIM_BTCFG1_RTCSEL1_Msk, output);
}

/**
  * @brief    Get RTCOUT2
  * @rmtoll   BTCFG1    RTCSEL1    FL_BSTIM_GetRtcout1
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetRtcout1(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG1, BSTIM_BTCFG1_RTCSEL1_Msk));
}

/**
  * @brief    GRP2SEL Set
  * @rmtoll   BTCFG1    GRP2SEL    FL_BSTIM_SetGrp2sel
  * @param    BSTIMx BSTIM instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_GRP2SEL_APBCLK
  *           @arg @ref FL_BSTIM_GRP2SEL_RTCOUT2
  *           @arg @ref FL_BSTIM_GRP2SEL_IN_SIG2
  *           @arg @ref FL_BSTIM_GRP2SEL_EX_SIG2
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetGrp2sel(BSTIM_Type* BSTIMx, uint32_t mode)
{
    MODIFY_REG(BSTIMx->CFG1, BSTIM_BTCFG1_GRP2SEL_Msk, mode);
}

/**
  * @brief    Get GRP2SEL
  * @rmtoll   BTCFG1    GRP2SEL    FL_BSTIM_GetGrp2sel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetGrp2sel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG1, BSTIM_BTCFG1_GRP2SEL_Msk));
}

/**
  * @brief    GRP1SEL Set
  * @rmtoll   BTCFG1    GRP1SEL    FL_BSTIM_SetGrp1sel
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_GRP1SEL_APBCLK
  *           @arg @ref FL_BSTIM_GRP1SEL_RTCOUT1
  *           @arg @ref FL_BSTIM_GRP1SEL_IN_SIG1
  *           @arg @ref FL_BSTIM_GRP1SEL_EX_SIG1
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetGrp1sel(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->CFG1, BSTIM_BTCFG1_GRP1SEL_Msk, singal);
}

/**
  * @brief    Get GRP1SEL
  * @rmtoll   BTCFG1    GRP1SEL    FL_BSTIM_GetGrp1sel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetGrp1sel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG1, BSTIM_BTCFG1_GRP1SEL_Msk));
}

/**
  * @brief    EXSEL2 Set
  * @rmtoll   BTCFG2    EXSEL2    FL_BSTIM_SetEXSel2
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_EXSEL2_BT_12_IN0
  *           @arg @ref FL_BSTIM_EXSEL2_BT_12_IN1
  *           @arg @ref FL_BSTIM_EXSEL2_BT_12_IN2
  *           @arg @ref FL_BSTIM_EXSEL2_BT_12_IN3
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetEXSel2(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->CFG2, BSTIM_BTCFG2_EXSEL2_Msk, singal);
}

/**
  * @brief    Get EXSEL2
  * @rmtoll   BTCFG2    EXSEL2    FL_BSTIM_GetEXSel2
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetEXSel2(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG2, BSTIM_BTCFG2_EXSEL2_Msk));
}

/**
  * @brief    EXSEL1 Set
  * @rmtoll   BTCFG2    EXSEL1    FL_BSTIM_SetEXSel1
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_EXSEL1_BT_12_IN0
  *           @arg @ref FL_BSTIM_EXSEL1_BT_12_IN1
  *           @arg @ref FL_BSTIM_EXSEL1_BT_12_IN2
  *           @arg @ref FL_BSTIM_EXSEL1_BT_12_IN3
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetEXSel1(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->CFG2, BSTIM_BTCFG2_EXSEL1_Msk, singal);
}

/**
  * @brief    Get EXSEL1
  * @rmtoll   BTCFG2    EXSEL1    FL_BSTIM_GetEXSel1
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetEXSel1(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG2, BSTIM_BTCFG2_EXSEL1_Msk));
}

/**
  * @brief    INSEL2 Set
  * @rmtoll   BTCFG2    INSEL2    FL_BSTIM_SetINSel2
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_INSEL2_UART_RX3
  *           @arg @ref FL_BSTIM_INSEL2_UART_RX4
  *           @arg @ref FL_BSTIM_INSEL2_UART_RX5
  *           @arg @ref FL_BSTIM_INSEL2_RCLP_BT1OUT
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetINSel2(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->CFG2, BSTIM_BTCFG2_INSEL2_Msk, singal);
}

/**
  * @brief    Get INSEL2
  * @rmtoll   BTCFG2    INSEL2    FL_BSTIM_GetINSel2
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetINSel2(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG2, BSTIM_BTCFG2_INSEL2_Msk));
}

/**
  * @brief    INSEL1 Set
  * @rmtoll   BTCFG2    INSEL1    FL_BSTIM_SetINSel1
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_INSEL1_UART_RX0
  *           @arg @ref FL_BSTIM_INSEL1_UART_RX1
  *           @arg @ref FL_BSTIM_INSEL1_UART_RX2
  *           @arg @ref FL_BSTIM_INSEL1_RCLP
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetINSel1(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->CFG2, BSTIM_BTCFG2_INSEL1_Msk, singal);
}

/**
  * @brief    Get INSEL1
  * @rmtoll   BTCFG2    INSEL1    FL_BSTIM_GetINSel1
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetINSel1(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CFG2, BSTIM_BTCFG2_INSEL1_Msk));
}

/**
  * @brief    Set counter Clock prescaler value
  * @rmtoll   PRESCALE        FL_BSTIM_WritePrescaler
  * @param    BSTIMx BSTIM instance
  * @param    psc 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WritePrescaler(BSTIM_Type* BSTIMx, uint32_t psc)
{
    MODIFY_REG(BSTIMx->PRES, (0xffU << 0U), (psc << 0U));
}

/**
  * @brief    Get counter Clock prescaler value
  * @rmtoll   PRESCALE        FL_BSTIM_ReadPrescaler
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadPrescaler(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->PRES, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    LHEN Enable
  * @rmtoll   BTLOADCR    LHEN    FL_BSTIM_EnableLHEN
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableLHEN(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->LOADCR, BSTIM_BTLOADCR_LHEN_Msk);
}

/**
  * @brief    Get LHEN enable status
  * @rmtoll   BTLOADCR    LHEN    FL_BSTIM_IsEnabledLHEN
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledLHEN(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->LOADCR, BSTIM_BTLOADCR_LHEN_Msk) == BSTIM_BTLOADCR_LHEN_Msk);
}

/**
  * @brief    LLEN Enable
  * @rmtoll   BTLOADCR    LLEN    FL_BSTIM_EnableLLEN
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableLLEN(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->LOADCR, BSTIM_BTLOADCR_LLEN_Msk);
}

/**
  * @brief    Get LLEN enable status
  * @rmtoll   BTLOADCR    LLEN    FL_BSTIM_IsEnabledLLEN
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledLLEN(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->LOADCR, BSTIM_BTLOADCR_LLEN_Msk) == BSTIM_BTLOADCR_LLEN_Msk);
}

/**
  * @brief    Set Low counter value
  * @rmtoll   BTCNTL    CNTL    FL_BSTIM_WriteLowCounter
  * @param    BSTIMx BSTIM instance
  * @param    cnt 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteLowCounter(BSTIM_Type* BSTIMx, uint32_t cnt)
{
    MODIFY_REG(BSTIMx->CNTL, (0xffU << 0U), (cnt << 0U));
}

/**
  * @brief    Get Low counter value 
  * @rmtoll   BTCNTL    CNTL    FL_BSTIM_ReadLowCounter
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadLowCounter(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CNTL, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set High counter value
  * @rmtoll   BTCNTH    CNTH    FL_BSTIM_WriteHighCounter
  * @param    BSTIMx BSTIM instance
  * @param    cnt 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteHighCounter(BSTIM_Type* BSTIMx, uint32_t cnt)
{
    MODIFY_REG(BSTIMx->CNTH, (0xffU << 0U), (cnt << 0U));
}

/**
  * @brief    Get High counter value 
  * @rmtoll   BTCNTH    CNTH    FL_BSTIM_ReadHighCounter
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadHighCounter(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CNTH, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set PRESETH value 
  * @rmtoll   BTPRESETH    PRESETH    FL_BSTIM_WritePresetH
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WritePresetH(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->PRESET, (0xffU << 8U), (value << 8U));
}

/**
  * @brief    Get PRESETH value 
  * @rmtoll   BTPRESETH    PRESETH    FL_BSTIM_ReadPresetH
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadPresetH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->PRESET, (0xffU << 8U)) >> 8U);
}

/**
  * @brief    Set PRESETL value 
  * @rmtoll   BTPRESETL    PRESETL    FL_BSTIM_WritePresetL
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WritePresetL(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->PRESET, (0xffU << 0U), (value << 0U));
}

/**
  * @brief    Get PRESETL value 
  * @rmtoll   BTPRESETL    PRESETL    FL_BSTIM_ReadPresetL
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadPresetL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->PRESET, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set LOADL value 
  * @rmtoll   BTLOADL    LOADL    FL_BSTIM_WriteLoadL
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteLoadL(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->LOADL, (0xffU << 0U), (value << 0U));
}

/**
  * @brief    Get LOADL value 
  * @rmtoll   BTLOADL    LOADL    FL_BSTIM_ReadLoadL
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadLoadL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->LOADL, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set LOADH value 
  * @rmtoll   BTLOADH    LOADH    FL_BSTIM_WriteLoadH
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteLoadH(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->LOADH, (0xffU << 0U), (value << 0U));
}

/**
  * @brief    Get LOADH value 
  * @rmtoll   BTLOADH    LOADH    FL_BSTIM_ReadLoadH
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadLoadH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->LOADH, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set CMPL value 
  * @rmtoll   BTCMPL    CMPL    FL_BSTIM_WriteCMPL
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteCMPL(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->CMPL, (0xffU << 0U), (value << 0U));
}

/**
  * @brief    Get CMPL value 
  * @rmtoll   BTCMPL    CMPL    FL_BSTIM_ReadCMPL
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadCMPL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CMPL, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set CMPH value 
  * @rmtoll   BTCMPH    CMPH    FL_BSTIM_WriteCMPH
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteCMPH(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->CMPH, (0xffU << 0U), (value << 0U));
}

/**
  * @brief    Get CMPH value 
  * @rmtoll   BTCMPH    CMPH    FL_BSTIM_ReadCMPH
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadCMPH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->CMPH, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    Set OUTCNT value 
  * @rmtoll   BTOUTCNT    OUTCNT    FL_BSTIM_WriteOutCnt
  * @param    BSTIMx BSTIM instance
  * @param    value 
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_WriteOutCnt(BSTIM_Type* BSTIMx, uint32_t value)
{
    MODIFY_REG(BSTIMx->OUTCNT, (0xfffU << 0U), (value << 0U));
}

/**
  * @brief    Get OUTCNT value 
  * @rmtoll   BTOUTCNT    OUTCNT    FL_BSTIM_ReadOutCnt
  * @param    BSTIMx BSTIM instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_BSTIM_ReadOutCnt(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->OUTCNT, (0xfffU << 0U)) >> 0U);
}

/**
  * @brief    OUTCLR set
  * @rmtoll   BTOCR    OUTCLR    FL_BSTIM_SetOutclr
  * @param    BSTIMx BSTIM instance
  * @param    clear This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_OUTCLR_CLEAR
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetOutclr(BSTIM_Type* BSTIMx, uint32_t clear)
{
    MODIFY_REG(BSTIMx->OCR, BSTIM_BTOCR_OUTCLR_Msk, clear);
}

/**
  * @brief    Get OUTCLR
  * @rmtoll   BTOCR    OUTCLR    FL_BSTIM_GetOutclr
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetOutclr(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->OCR, BSTIM_BTOCR_OUTCLR_Msk));
}

/**
  * @brief    OUTINV set
  * @rmtoll   BTOCR    OUTINV    FL_BSTIM_SetOutInv
  * @param    BSTIMx BSTIM instance
  * @param    ploarity This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_OUTINV_NORMAL
  *           @arg @ref FL_BSTIM_OUTINV_REVERSE
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetOutInv(BSTIM_Type* BSTIMx, uint32_t ploarity)
{
    MODIFY_REG(BSTIMx->OCR, BSTIM_BTOCR_OUTINV_Msk, ploarity);
}

/**
  * @brief    Get OUTINV
  * @rmtoll   BTOCR    OUTINV    FL_BSTIM_GetOutInv
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetOutInv(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->OCR, BSTIM_BTOCR_OUTINV_Msk));
}

/**
  * @brief    OUTMOD set
  * @rmtoll   BTOCR    OUTMOD    FL_BSTIM_SetOutmode
  * @param    BSTIMx BSTIM instance
  * @param    outmode This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_OUTMOD_REVERSE_LEVEL
  *           @arg @ref FL_BSTIM_OUTMOD_PULSE
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetOutmode(BSTIM_Type* BSTIMx, uint32_t outmode)
{
    MODIFY_REG(BSTIMx->OCR, BSTIM_BTOCR_OUTMOD_Msk, outmode);
}

/**
  * @brief    Get OUTMOD
  * @rmtoll   BTOCR    OUTMOD    FL_BSTIM_GetOutmode
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetOutmode(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->OCR, BSTIM_BTOCR_OUTMOD_Msk));
}

/**
  * @brief    OUTSEL Set
  * @rmtoll   BTOCR    OUTSEL    FL_BSTIM_SetOutsel
  * @param    BSTIMx BSTIM instance
  * @param    singal This parameter can be one of the following values:
  *           @arg @ref FL_BSTIM_OUTSEL_COMP_H
  *           @arg @ref FL_BSTIM_OUTSEL_COMP_L
  *           @arg @ref FL_BSTIM_OUTSEL_GROUP1
  *           @arg @ref FL_BSTIM_OUTSEL_GROUP2
  *           @arg @ref FL_BSTIM_OUTSEL_PWM
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_SetOutsel(BSTIM_Type* BSTIMx, uint32_t singal)
{
    MODIFY_REG(BSTIMx->OCR, BSTIM_BTOCR_OUTSEL_Msk, singal);
}

/**
  * @brief    Get OUTSEL
  * @rmtoll   BTOCR    OUTSEL    FL_BSTIM_GetOutsel
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetOutsel(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->OCR, BSTIM_BTOCR_OUTSEL_Msk));
}

/**
  * @brief    CMPHIE disable
  * @rmtoll   BTIE    CMPHIE    FL_BSTIM_DisableIT_CompH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableIT_CompH(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->IER, BSTIM_BTIE_CMPHIE_Msk);
}

/**
  * @brief    CMPHIE enable
  * @rmtoll   BTIE    CMPHIE    FL_BSTIM_EnableIT_CompH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableIT_CompH(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->IER, BSTIM_BTIE_CMPHIE_Msk);
}

/**
  * @brief    Get CMPHIE enable status
  * @rmtoll   BTIE    CMPHIE    FL_BSTIM_IsEnabledIT_CompH
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledIT_CompH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->IER, BSTIM_BTIE_CMPHIE_Msk) == BSTIM_BTIE_CMPHIE_Msk);
}

/**
  * @brief    CMPLIE disable
  * @rmtoll   BTIE    CMPLIE    FL_BSTIM_DisableIT_CompL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableIT_CompL(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->IER, BSTIM_BTIE_CMPLIE_Msk);
}

/**
  * @brief    CMPLIE enable
  * @rmtoll   BTIE    CMPLIE    FL_BSTIM_EnableIT_CompL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableIT_CompL(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->IER, BSTIM_BTIE_CMPLIE_Msk);
}

/**
  * @brief    Get CMPLIE enable status
  * @rmtoll   BTIE    CMPLIE    FL_BSTIM_IsEnabledIT_CompL
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledIT_CompL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->IER, BSTIM_BTIE_CMPLIE_Msk) == BSTIM_BTIE_CMPLIE_Msk);
}

/**
  * @brief    OVHIE disable
  * @rmtoll   BTIE    OVHIE    FL_BSTIM_DisableIT_OvH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableIT_OvH(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->IER, BSTIM_BTIE_OVHIE_Msk);
}

/**
  * @brief    OVHIE enable
  * @rmtoll   BTIE    OVHIE    FL_BSTIM_EnableIT_OvH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableIT_OvH(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->IER, BSTIM_BTIE_OVHIE_Msk);
}

/**
  * @brief    Get OVHIE enable status
  * @rmtoll   BTIE    OVHIE    FL_BSTIM_IsEnabledIT_OvH
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledIT_OvH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->IER, BSTIM_BTIE_OVHIE_Msk) == BSTIM_BTIE_OVHIE_Msk);
}

/**
  * @brief    OVLIE disable
  * @rmtoll   BTIE    OVLIE    FL_BSTIM_DisableIT_OvL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableIT_OvL(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->IER, BSTIM_BTIE_OVLIE_Msk);
}

/**
  * @brief    OVLIE enable
  * @rmtoll   BTIE    OVLIE    FL_BSTIM_EnableIT_OvL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableIT_OvL(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->IER, BSTIM_BTIE_OVLIE_Msk);
}

/**
  * @brief    Get OVLIE enable status
  * @rmtoll   BTIE    OVLIE    FL_BSTIM_IsEnabledIT_OvL
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledIT_OvL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->IER, BSTIM_BTIE_OVLIE_Msk) == BSTIM_BTIE_OVLIE_Msk);
}

/**
  * @brief    CAPIE disable
  * @rmtoll   BTIE    CAPIE    FL_BSTIM_DisableIT_Cap
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_DisableIT_Cap(BSTIM_Type* BSTIMx)
{
    CLEAR_BIT(BSTIMx->IER, BSTIM_BTIE_CAPIE_Msk);
}

/**
  * @brief    CAPIE enable
  * @rmtoll   BTIE    CAPIE    FL_BSTIM_EnableIT_Cap
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_EnableIT_Cap(BSTIM_Type* BSTIMx)
{
    SET_BIT(BSTIMx->IER, BSTIM_BTIE_CAPIE_Msk);
}

/**
  * @brief    Get CAPIE enable status
  * @rmtoll   BTIE    CAPIE    FL_BSTIM_IsEnabledIT_Cap
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsEnabledIT_Cap(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->IER, BSTIM_BTIE_CAPIE_Msk) == BSTIM_BTIE_CAPIE_Msk);
}

/**
  * @brief    Get Captured Edge
  * @rmtoll   BTIF    EDGESTA    FL_BSTIM_GetCapturedEdge
  * @param    BSTIMx BSTIM instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_BSTIM_IC_CAPTURED_EDGE_STATUS_RISING
  *           @arg @ref FL_BSTIM_IC_CAPTURED_EDGE_STATUS_FALLING
  */
__STATIC_INLINE uint32_t FL_BSTIM_GetCapturedEdge(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_EDGESTA_Msk));
}

/**
  * @brief    Get CMPHIF flag
  * @rmtoll   BTIF    CMPHIF    FL_BSTIM_IsActiveFlag_CompH
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsActiveFlag_CompH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_CMPHIF_Msk) == (BSTIM_BTIF_CMPHIF_Msk));
}

/**
  * @brief    Clear CMPHIF flag
  * @rmtoll   BTIF    CMPHIF    FL_BSTIM_ClearFlag_CompH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_ClearFlag_CompH(BSTIM_Type* BSTIMx)
{
    WRITE_REG(BSTIMx->ISR, BSTIM_BTIF_CMPHIF_Msk);
}

/**
  * @brief    Get CMPLIF flag
  * @rmtoll   BTIF    CMPLIF    FL_BSTIM_IsActiveFlag_CompL
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsActiveFlag_CompL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_CMPLIF_Msk) == (BSTIM_BTIF_CMPLIF_Msk));
}

/**
  * @brief    Clear CMPLIF flag
  * @rmtoll   BTIF    CMPLIF    FL_BSTIM_ClearFlag_CompL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_ClearFlag_CompL(BSTIM_Type* BSTIMx)
{
    WRITE_REG(BSTIMx->ISR, BSTIM_BTIF_CMPLIF_Msk);
}

/**
  * @brief    Get OVHIF flag
  * @rmtoll   BTIF    OVHIF    FL_BSTIM_IsActiveFlag_OvH
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsActiveFlag_OvH(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_OVHIF_Msk) == (BSTIM_BTIF_OVHIF_Msk));
}

/**
  * @brief    Clear OVHIF flag
  * @rmtoll   BTIF    OVHIF    FL_BSTIM_ClearFlag_OvH
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_ClearFlag_OvH(BSTIM_Type* BSTIMx)
{
    WRITE_REG(BSTIMx->ISR, BSTIM_BTIF_OVHIF_Msk);
}

/**
  * @brief    Get OVLIF flag
  * @rmtoll   BTIF    OVLIF    FL_BSTIM_IsActiveFlag_OvL
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsActiveFlag_OvL(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_OVLIF_Msk) == (BSTIM_BTIF_OVLIF_Msk));
}

/**
  * @brief    Clear OVLIF flag
  * @rmtoll   BTIF    OVLIF    FL_BSTIM_ClearFlag_OvL
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_ClearFlag_OvL(BSTIM_Type* BSTIMx)
{
    WRITE_REG(BSTIMx->ISR, BSTIM_BTIF_OVLIF_Msk);
}

/**
  * @brief    Get CAPIF flag
  * @rmtoll   BTIF    CAPIF    FL_BSTIM_IsActiveFlag_Cap
  * @param    BSTIMx BSTIM instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_BSTIM_IsActiveFlag_Cap(BSTIM_Type* BSTIMx)
{
    return (uint32_t)(READ_BIT(BSTIMx->ISR, BSTIM_BTIF_CAPIF_Msk) == (BSTIM_BTIF_CAPIF_Msk));
}

/**
  * @brief    Clear CAPIF flag
  * @rmtoll   BTIF    CAPIF    FL_BSTIM_ClearFlag_Cap
  * @param    BSTIMx BSTIM instance
  * @retval   None
  */
__STATIC_INLINE void FL_BSTIM_ClearFlag_Cap(BSTIM_Type* BSTIMx)
{
    WRITE_REG(BSTIMx->ISR, BSTIM_BTIF_CAPIF_Msk);
}

/**
  * @}
  */

/** @defgroup BSTIM_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_BSTIM_DeInit(BSTIM_Type *BSTIMx);
FL_ErrorStatus FL_BSTIM_Init(BSTIM_Type *BSTIMx, FL_BSTIM_InitTypeDef *initStruct);
FL_ErrorStatus FL_BSTIM_OC_Init(BSTIM_Type *BSTIMx, FL_BSTIM_OC_InitTypeDef *initStruct_OC);
void FL_BSTIM_StructInit(FL_BSTIM_InitTypeDef *initStruct, FL_BSTIM_OC_InitTypeDef *initOcStruct);
FL_ErrorStatus FL_BSTIM_IC_Init(BSTIM_Type *BSTIMx, FL_BSTIM_IC_InitTypeDef *initStruct_IC);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_BSTIM_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
