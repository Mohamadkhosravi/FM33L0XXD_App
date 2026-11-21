/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_rtc.h
  * @author  FMSH Application Team
  * @brief   Head file of RTC FL Module
  * @version  V0.0.2
  * @date     15. May 2026
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
#ifndef __FM33L0XXD_FL_RTC_H
#define __FM33L0XXD_FL_RTC_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup RTC_FL_ES_INIT RTC Exported Init structures
  * @{
  */

/**
  * @brief FL RTC Init Sturcture definition
  */
typedef struct
{
    /** 年 */
    uint32_t year;
    /** 月 */
    uint32_t month;
    /** 日 */
    uint32_t day;
    /** 周 */
    uint32_t week;
    /** 时 */
    uint32_t hour;
    /** 分 */
    uint32_t minute;
    /** 秒 */
    uint32_t second;

} FL_RTC_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup RTC_FL_Exported_Constants RTC Exported Constants
  * @{
  */

#define    RTC_RTCIE_PB5R_IE_Pos                                  (16U)
#define    RTC_RTCIE_PB5R_IE_Msk                                  (0x1U << RTC_RTCIE_PB5R_IE_Pos)
#define    RTC_RTCIE_PB5R_IE                                      RTC_RTCIE_PB5R_IE_Msk

#define    RTC_RTCIE_PB5F_IE_Pos                                  (15U)
#define    RTC_RTCIE_PB5F_IE_Msk                                  (0x1U << RTC_RTCIE_PB5F_IE_Pos)
#define    RTC_RTCIE_PB5F_IE                                      RTC_RTCIE_PB5F_IE_Msk

#define    RTC_RTCIE_PB4R_IE_Pos                                  (14U)
#define    RTC_RTCIE_PB4R_IE_Msk                                  (0x1U << RTC_RTCIE_PB4R_IE_Pos)
#define    RTC_RTCIE_PB4R_IE                                      RTC_RTCIE_PB4R_IE_Msk

#define    RTC_RTCIE_PB4F_IE_Pos                                  (13U)
#define    RTC_RTCIE_PB4F_IE_Msk                                  (0x1U << RTC_RTCIE_PB4F_IE_Pos)
#define    RTC_RTCIE_PB4F_IE                                      RTC_RTCIE_PB4F_IE_Msk

#define    RTC_RTCIE_ADJ_IE_Pos                                   (12U)
#define    RTC_RTCIE_ADJ_IE_Msk                                   (0x1U << RTC_RTCIE_ADJ_IE_Pos)
#define    RTC_RTCIE_ADJ_IE                                       RTC_RTCIE_ADJ_IE_Msk

#define    RTC_RTCIE_ALARM_IE_Pos                                 (11U)
#define    RTC_RTCIE_ALARM_IE_Msk                                 (0x1U << RTC_RTCIE_ALARM_IE_Pos)
#define    RTC_RTCIE_ALARM_IE                                     RTC_RTCIE_ALARM_IE_Msk

#define    RTC_RTCIE_1KHZ_IE_Pos                                  (10U)
#define    RTC_RTCIE_1KHZ_IE_Msk                                  (0x1U << RTC_RTCIE_1KHZ_IE_Pos)
#define    RTC_RTCIE_1KHZ_IE                                      RTC_RTCIE_1KHZ_IE_Msk

#define    RTC_RTCIE_256HZ_IE_Pos                                 (9U)
#define    RTC_RTCIE_256HZ_IE_Msk                                 (0x1U << RTC_RTCIE_256HZ_IE_Pos)
#define    RTC_RTCIE_256HZ_IE                                     RTC_RTCIE_256HZ_IE_Msk

#define    RTC_RTCIE_64HZ_IE_Pos                                  (8U)
#define    RTC_RTCIE_64HZ_IE_Msk                                  (0x1U << RTC_RTCIE_64HZ_IE_Pos)
#define    RTC_RTCIE_64HZ_IE                                      RTC_RTCIE_64HZ_IE_Msk

#define    RTC_RTCIE_16HZ_IE_Pos                                  (7U)
#define    RTC_RTCIE_16HZ_IE_Msk                                  (0x1U << RTC_RTCIE_16HZ_IE_Pos)
#define    RTC_RTCIE_16HZ_IE                                      RTC_RTCIE_16HZ_IE_Msk

#define    RTC_RTCIE_8HZ_IE_Pos                                   (6U)
#define    RTC_RTCIE_8HZ_IE_Msk                                   (0x1U << RTC_RTCIE_8HZ_IE_Pos)
#define    RTC_RTCIE_8HZ_IE                                       RTC_RTCIE_8HZ_IE_Msk

#define    RTC_RTCIE_4HZ_IE_Pos                                   (5U)
#define    RTC_RTCIE_4HZ_IE_Msk                                   (0x1U << RTC_RTCIE_4HZ_IE_Pos)
#define    RTC_RTCIE_4HZ_IE                                       RTC_RTCIE_4HZ_IE_Msk

#define    RTC_RTCIE_2HZ_IE_Pos                                   (4U)
#define    RTC_RTCIE_2HZ_IE_Msk                                   (0x1U << RTC_RTCIE_2HZ_IE_Pos)
#define    RTC_RTCIE_2HZ_IE                                       RTC_RTCIE_2HZ_IE_Msk

#define    RTC_RTCIE_SEC_IE_Pos                                   (3U)
#define    RTC_RTCIE_SEC_IE_Msk                                   (0x1U << RTC_RTCIE_SEC_IE_Pos)
#define    RTC_RTCIE_SEC_IE                                       RTC_RTCIE_SEC_IE_Msk

#define    RTC_RTCIE_MIN_IE_Pos                                   (2U)
#define    RTC_RTCIE_MIN_IE_Msk                                   (0x1U << RTC_RTCIE_MIN_IE_Pos)
#define    RTC_RTCIE_MIN_IE                                       RTC_RTCIE_MIN_IE_Msk

#define    RTC_RTCIE_HOUR_IE_Pos                                  (1U)
#define    RTC_RTCIE_HOUR_IE_Msk                                  (0x1U << RTC_RTCIE_HOUR_IE_Pos)
#define    RTC_RTCIE_HOUR_IE                                      RTC_RTCIE_HOUR_IE_Msk

#define    RTC_RTCIE_DAY_IE_Pos                                   (0U)
#define    RTC_RTCIE_DAY_IE_Msk                                   (0x1U << RTC_RTCIE_DAY_IE_Pos)
#define    RTC_RTCIE_DAY_IE                                       RTC_RTCIE_DAY_IE_Msk

#define    RTC_RTCIF_PB5R_IF_Pos                                  (16U)
#define    RTC_RTCIF_PB5R_IF_Msk                                  (0x1U << RTC_RTCIF_PB5R_IF_Pos)
#define    RTC_RTCIF_PB5R_IF                                      RTC_RTCIF_PB5R_IF_Msk

#define    RTC_RTCIF_PB5F_IF_Pos                                  (15U)
#define    RTC_RTCIF_PB5F_IF_Msk                                  (0x1U << RTC_RTCIF_PB5F_IF_Pos)
#define    RTC_RTCIF_PB5F_IF                                      RTC_RTCIF_PB5F_IF_Msk

#define    RTC_RTCIF_PB4R_IF_Pos                                  (14U)
#define    RTC_RTCIF_PB4R_IF_Msk                                  (0x1U << RTC_RTCIF_PB4R_IF_Pos)
#define    RTC_RTCIF_PB4R_IF                                      RTC_RTCIF_PB4R_IF_Msk

#define    RTC_RTCIF_PB4F_IF_Pos                                  (13U)
#define    RTC_RTCIF_PB4F_IF_Msk                                  (0x1U << RTC_RTCIF_PB4F_IF_Pos)
#define    RTC_RTCIF_PB4F_IF                                      RTC_RTCIF_PB4F_IF_Msk

#define    RTC_ISR_ADJ_IF_Pos                                     (12U)
#define    RTC_ISR_ADJ_IF_Msk                                     (0x1U << RTC_ISR_ADJ_IF_Pos)
#define    RTC_ISR_ADJ_IF                                         RTC_ISR_ADJ_IF_Msk

#define    RTC_ISR_ALARM_IF_Pos                                   (11U)
#define    RTC_ISR_ALARM_IF_Msk                                   (0x1U << RTC_ISR_ALARM_IF_Pos)
#define    RTC_ISR_ALARM_IF                                       RTC_ISR_ALARM_IF_Msk

#define    RTC_ISR_1KHZ_IF_Pos                                    (10U)
#define    RTC_ISR_1KHZ_IF_Msk                                    (0x1U << RTC_ISR_1KHZ_IF_Pos)
#define    RTC_ISR_1KHZ_IF                                        RTC_ISR_1KHZ_IF_Msk

#define    RTC_ISR_256HZ_IF_Pos                                   (9U)
#define    RTC_ISR_256HZ_IF_Msk                                   (0x1U << RTC_ISR_256HZ_IF_Pos)
#define    RTC_ISR_256HZ_IF                                       RTC_ISR_256HZ_IF_Msk

#define    RTC_ISR_64HZ_IF_Pos                                    (8U)
#define    RTC_ISR_64HZ_IF_Msk                                    (0x1U << RTC_ISR_64HZ_IF_Pos)
#define    RTC_ISR_64HZ_IF                                        RTC_ISR_64HZ_IF_Msk

#define    RTC_ISR_16HZ_IF_Pos                                    (7U)
#define    RTC_ISR_16HZ_IF_Msk                                    (0x1U << RTC_ISR_16HZ_IF_Pos)
#define    RTC_ISR_16HZ_IF                                        RTC_ISR_16HZ_IF_Msk

#define    RTC_ISR_8HZ_IF_Pos                                     (6U)
#define    RTC_ISR_8HZ_IF_Msk                                     (0x1U << RTC_ISR_8HZ_IF_Pos)
#define    RTC_ISR_8HZ_IF                                         RTC_ISR_8HZ_IF_Msk

#define    RTC_ISR_4HZ_IF_Pos                                     (5U)
#define    RTC_ISR_4HZ_IF_Msk                                     (0x1U << RTC_ISR_4HZ_IF_Pos)
#define    RTC_ISR_4HZ_IF                                         RTC_ISR_4HZ_IF_Msk

#define    RTC_ISR_2HZ_IF_Pos                                     (4U)
#define    RTC_ISR_2HZ_IF_Msk                                     (0x1U << RTC_ISR_2HZ_IF_Pos)
#define    RTC_ISR_2HZ_IF                                         RTC_ISR_2HZ_IF_Msk

#define    RTC_ISR_SEC_IF_Pos                                     (3U)
#define    RTC_ISR_SEC_IF_Msk                                     (0x1U << RTC_ISR_SEC_IF_Pos)
#define    RTC_ISR_SEC_IF                                         RTC_ISR_SEC_IF_Msk

#define    RTC_ISR_MIN_IF_Pos                                     (2U)
#define    RTC_ISR_MIN_IF_Msk                                     (0x1U << RTC_ISR_MIN_IF_Pos)
#define    RTC_ISR_MIN_IF                                         RTC_ISR_MIN_IF_Msk

#define    RTC_ISR_HOUR_IF_Pos                                    (1U)
#define    RTC_ISR_HOUR_IF_Msk                                    (0x1U << RTC_ISR_HOUR_IF_Pos)
#define    RTC_ISR_HOUR_IF                                        RTC_ISR_HOUR_IF_Msk

#define    RTC_ISR_DAY_IF_Pos                                     (0U)
#define    RTC_ISR_DAY_IF_Msk                                     (0x1U << RTC_ISR_DAY_IF_Pos)
#define    RTC_ISR_DAY_IF                                         RTC_ISR_DAY_IF_Msk

#define    RTC_FSEL_FSEL_Pos                                      (0U)
#define    RTC_FSEL_FSEL_Msk                                      (0xfU << RTC_FSEL_FSEL_Pos)
#define    RTC_FSEL_FSEL                                          RTC_FSEL_FSEL_Msk

#define    RTC_ADSIGN_ADSIGN_Pos                                  (0U)
#define    RTC_ADSIGN_ADSIGN_Msk                                  (0x1U << RTC_ADSIGN_ADSIGN_Pos)
#define    RTC_ADSIGN_ADSIGN                                      RTC_ADSIGN_ADSIGN_Msk

#define    RTC_PR1SEN_PR1SEN_Pos                                  (0U)
#define    RTC_PR1SEN_PR1SEN_Msk                                  (0x1U << RTC_PR1SEN_PR1SEN_Pos)
#define    RTC_PR1SEN_PR1SEN                                      RTC_PR1SEN_PR1SEN_Msk

#define    RTC_MSECCNT_MSCNT_Pos                                  (0U)
#define    RTC_MSECCNT_MSCNT_Msk                                  (0xffU << RTC_MSECCNT_MSCNT_Pos)
#define    RTC_MSECCNT_MSCNT                                      RTC_MSECCNT_MSCNT_Msk

#define    RTC_STAMPEN_STAMP1EN_Pos                               (1U)
#define    RTC_STAMPEN_STAMP1EN_Msk                               (0x1U << RTC_STAMPEN_STAMP1EN_Pos)
#define    RTC_STAMPEN_STAMP1EN                                   RTC_STAMPEN_STAMP1EN_Msk

#define    RTC_STAMPEN_STAMP0EN_Pos                               (0U)
#define    RTC_STAMPEN_STAMP0EN_Msk                               (0x1U << RTC_STAMPEN_STAMP0EN_Pos)
#define    RTC_STAMPEN_STAMP0EN                                   RTC_STAMPEN_STAMP0EN_Msk

#define    RTC_CLKSTAMP0R_HRSTP0R_Pos                             (16U)
#define    RTC_CLKSTAMP0R_HRSTP0R_Msk                             (0x3fU << RTC_CLKSTAMP0R_HRSTP0R_Pos)
#define    RTC_CLKSTAMP0R_HRSTP0R                                 RTC_CLKSTAMP0R_HRSTP0R_Msk

#define    RTC_CLKSTAMP0R_MINSTP0R_Pos                            (8U)
#define    RTC_CLKSTAMP0R_MINSTP0R_Msk                            (0x7fU << RTC_CLKSTAMP0R_MINSTP0R_Pos)
#define    RTC_CLKSTAMP0R_MINSTP0R                                RTC_CLKSTAMP0R_MINSTP0R_Msk

#define    RTC_CLKSTAMP0R_SECSTP0R_Pos                            (0U)
#define    RTC_CLKSTAMP0R_SECSTP0R_Msk                            (0x7fU << RTC_CLKSTAMP0R_SECSTP0R_Pos)
#define    RTC_CLKSTAMP0R_SECSTP0R                                RTC_CLKSTAMP0R_SECSTP0R_Msk

#define    RTC_CALSTAMP0R_YRSTP0R_Pos                             (24U)
#define    RTC_CALSTAMP0R_YRSTP0R_Msk                             (0xffU << RTC_CALSTAMP0R_YRSTP0R_Pos)
#define    RTC_CALSTAMP0R_YRSTP0R                                 RTC_CALSTAMP0R_YRSTP0R_Msk

#define    RTC_CALSTAMP0R_MONSTP0R_Pos                            (16U)
#define    RTC_CALSTAMP0R_MONSTP0R_Msk                            (0x1fU << RTC_CALSTAMP0R_MONSTP0R_Pos)
#define    RTC_CALSTAMP0R_MONSTP0R                                RTC_CALSTAMP0R_MONSTP0R_Msk

#define    RTC_CALSTAMP0R_WKSTP0R_Pos                             (8U)
#define    RTC_CALSTAMP0R_WKSTP0R_Msk                             (0x7U << RTC_CALSTAMP0R_WKSTP0R_Pos)
#define    RTC_CALSTAMP0R_WKSTP0R                                 RTC_CALSTAMP0R_WKSTP0R_Msk

#define    RTC_CALSTAMP0R_DAYSTP0R_Pos                            (0U)
#define    RTC_CALSTAMP0R_DAYSTP0R_Msk                            (0x3fU << RTC_CALSTAMP0R_DAYSTP0R_Pos)
#define    RTC_CALSTAMP0R_DAYSTP0R                                RTC_CALSTAMP0R_DAYSTP0R_Msk

#define    RTC_CLKSTAMP0F_HRSTP0F_Pos                             (16U)
#define    RTC_CLKSTAMP0F_HRSTP0F_Msk                             (0x3fU << RTC_CLKSTAMP0F_HRSTP0F_Pos)
#define    RTC_CLKSTAMP0F_HRSTP0F                                 RTC_CLKSTAMP0F_HRSTP0F_Msk

#define    RTC_CLKSTAMP0F_MINSTP0F_Pos                            (8U)
#define    RTC_CLKSTAMP0F_MINSTP0F_Msk                            (0x7fU << RTC_CLKSTAMP0F_MINSTP0F_Pos)
#define    RTC_CLKSTAMP0F_MINSTP0F                                RTC_CLKSTAMP0F_MINSTP0F_Msk

#define    RTC_CLKSTAMP0F_SECSTP0F_Pos                            (0U)
#define    RTC_CLKSTAMP0F_SECSTP0F_Msk                            (0x7fU << RTC_CLKSTAMP0F_SECSTP0F_Pos)
#define    RTC_CLKSTAMP0F_SECSTP0F                                RTC_CLKSTAMP0F_SECSTP0F_Msk

#define    RTC_CALSTAMP0F_YRSTP0F_Pos                             (24U)
#define    RTC_CALSTAMP0F_YRSTP0F_Msk                             (0xffU << RTC_CALSTAMP0F_YRSTP0F_Pos)
#define    RTC_CALSTAMP0F_YRSTP0F                                 RTC_CALSTAMP0F_YRSTP0F_Msk

#define    RTC_CALSTAMP0F_MONSTP0F_Pos                            (16U)
#define    RTC_CALSTAMP0F_MONSTP0F_Msk                            (0x1fU << RTC_CALSTAMP0F_MONSTP0F_Pos)
#define    RTC_CALSTAMP0F_MONSTP0F                                RTC_CALSTAMP0F_MONSTP0F_Msk

#define    RTC_CALSTAMP0F_WKSTP0F_Pos                             (8U)
#define    RTC_CALSTAMP0F_WKSTP0F_Msk                             (0x7U << RTC_CALSTAMP0F_WKSTP0F_Pos)
#define    RTC_CALSTAMP0F_WKSTP0F                                 RTC_CALSTAMP0F_WKSTP0F_Msk

#define    RTC_CALSTAMP0F_DAYSTP0F_Pos                            (0U)
#define    RTC_CALSTAMP0F_DAYSTP0F_Msk                            (0x3fU << RTC_CALSTAMP0F_DAYSTP0F_Pos)
#define    RTC_CALSTAMP0F_DAYSTP0F                                RTC_CALSTAMP0F_DAYSTP0F_Msk

#define    RTC_CLKSTAMP1R_HRSTP1R_Pos                             (16U)
#define    RTC_CLKSTAMP1R_HRSTP1R_Msk                             (0x3fU << RTC_CLKSTAMP1R_HRSTP1R_Pos)
#define    RTC_CLKSTAMP1R_HRSTP1R                                 RTC_CLKSTAMP1R_HRSTP1R_Msk

#define    RTC_CLKSTAMP1R_MINSTP1R_Pos                            (8U)
#define    RTC_CLKSTAMP1R_MINSTP1R_Msk                            (0x7fU << RTC_CLKSTAMP1R_MINSTP1R_Pos)
#define    RTC_CLKSTAMP1R_MINSTP1R                                RTC_CLKSTAMP1R_MINSTP1R_Msk

#define    RTC_CLKSTAMP1R_SECSTP1R_Pos                            (0U)
#define    RTC_CLKSTAMP1R_SECSTP1R_Msk                            (0x7fU << RTC_CLKSTAMP1R_SECSTP1R_Pos)
#define    RTC_CLKSTAMP1R_SECSTP1R                                RTC_CLKSTAMP1R_SECSTP1R_Msk

#define    RTC_CALSTAMP1R_YRSTP1R_Pos                             (24U)
#define    RTC_CALSTAMP1R_YRSTP1R_Msk                             (0xffU << RTC_CALSTAMP1R_YRSTP1R_Pos)
#define    RTC_CALSTAMP1R_YRSTP1R                                 RTC_CALSTAMP1R_YRSTP1R_Msk

#define    RTC_CALSTAMP1R_MONSTP1R_Pos                            (16U)
#define    RTC_CALSTAMP1R_MONSTP1R_Msk                            (0x1fU << RTC_CALSTAMP1R_MONSTP1R_Pos)
#define    RTC_CALSTAMP1R_MONSTP1R                                RTC_CALSTAMP1R_MONSTP1R_Msk

#define    RTC_CALSTAMP1R_WKSTP1R_Pos                             (8U)
#define    RTC_CALSTAMP1R_WKSTP1R_Msk                             (0x7U << RTC_CALSTAMP1R_WKSTP1R_Pos)
#define    RTC_CALSTAMP1R_WKSTP1R                                 RTC_CALSTAMP1R_WKSTP1R_Msk

#define    RTC_CALSTAMP1R_DAYSTP1R_Pos                            (0U)
#define    RTC_CALSTAMP1R_DAYSTP1R_Msk                            (0x3fU << RTC_CALSTAMP1R_DAYSTP1R_Pos)
#define    RTC_CALSTAMP1R_DAYSTP1R                                RTC_CALSTAMP1R_DAYSTP1R_Msk

#define    RTC_CLKSTAMP1F_HRSTP1F_Pos                             (16U)
#define    RTC_CLKSTAMP1F_HRSTP1F_Msk                             (0x3fU << RTC_CLKSTAMP1F_HRSTP1F_Pos)
#define    RTC_CLKSTAMP1F_HRSTP1F                                 RTC_CLKSTAMP1F_HRSTP1F_Msk

#define    RTC_CLKSTAMP1F_MINSTP1F_Pos                            (8U)
#define    RTC_CLKSTAMP1F_MINSTP1F_Msk                            (0x7fU << RTC_CLKSTAMP1F_MINSTP1F_Pos)
#define    RTC_CLKSTAMP1F_MINSTP1F                                RTC_CLKSTAMP1F_MINSTP1F_Msk

#define    RTC_CLKSTAMP1F_SECSTP1F_Pos                            (0U)
#define    RTC_CLKSTAMP1F_SECSTP1F_Msk                            (0x7fU << RTC_CLKSTAMP1F_SECSTP1F_Pos)
#define    RTC_CLKSTAMP1F_SECSTP1F                                RTC_CLKSTAMP1F_SECSTP1F_Msk

#define    RTC_CALSTAMP1F_YRSTP1F_Pos                             (24U)
#define    RTC_CALSTAMP1F_YRSTP1F_Msk                             (0xffU << RTC_CALSTAMP1F_YRSTP1F_Pos)
#define    RTC_CALSTAMP1F_YRSTP1F                                 RTC_CALSTAMP1F_YRSTP1F_Msk

#define    RTC_CALSTAMP1F_MONSTP1F_Pos                            (16U)
#define    RTC_CALSTAMP1F_MONSTP1F_Msk                            (0x1fU << RTC_CALSTAMP1F_MONSTP1F_Pos)
#define    RTC_CALSTAMP1F_MONSTP1F                                RTC_CALSTAMP1F_MONSTP1F_Msk

#define    RTC_CALSTAMP1F_WKSTP1F_Pos                             (8U)
#define    RTC_CALSTAMP1F_WKSTP1F_Msk                             (0x7U << RTC_CALSTAMP1F_WKSTP1F_Pos)
#define    RTC_CALSTAMP1F_WKSTP1F                                 RTC_CALSTAMP1F_WKSTP1F_Msk

#define    RTC_CALSTAMP1F_DAYSTP1F_Pos                            (0U)
#define    RTC_CALSTAMP1F_DAYSTP1F_Msk                            (0x3fU << RTC_CALSTAMP1F_DAYSTP1F_Pos)
#define    RTC_CALSTAMP1F_DAYSTP1F                                RTC_CALSTAMP1F_DAYSTP1F_Msk

#define    RTC_CALSTEP_CALSTEP_Pos                                (0U)
#define    RTC_CALSTEP_CALSTEP_Msk                                (0x3U << RTC_CALSTEP_CALSTEP_Pos)
#define    RTC_CALSTEP_CALSTEP                                    RTC_CALSTEP_CALSTEP_Msk

#define    RTC_ADJCNT_ADJCNT_Pos                                  (0U)
#define    RTC_ADJCNT_ADJCNT_Msk                                  (0x1ffU << RTC_ADJCNT_ADJCNT_Pos)
#define    RTC_ADJCNT_ADJCNT                                      RTC_ADJCNT_ADJCNT_Msk






#define    FL_RTC_TIME_MARK_PLL_One_Second                        (0x0U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration            (0x1U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_SECOND                                (0x2U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_MINUTE                                (0x3U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_HOUR                                  (0x4U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_DAY                                   (0x5U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_ALARM                                 (0x6U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_128_SEC                               (0x7U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration_REVERSE    (0x8U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_SECOND_REVERSE                        (0x9U << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_MINUTE_REVERSE                        (0xaU << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_HOUR_REVERSE                          (0xbU << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_DAY_REVERSE                           (0xcU << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_ALARM_REVERSE                         (0xdU << RTC_FSEL_FSEL_Pos)
#define    FL_RTC_TIME_MARK_SEC                                   (0xfU << RTC_FSEL_FSEL_Pos)


#define    FL_RTC_ADJUST_DIR_INCREASE                             (0x0U << RTC_ADSIGN_ADSIGN_Pos)
#define    FL_RTC_ADJUST_DIR_DECREASE                             (0x1U << RTC_ADSIGN_ADSIGN_Pos)


#define    FL_RTC_Cal_Step_0P06ppm                             (0x0U << RTC_CALSTEP_CALSTEP_Pos)
#define    FL_RTC_Cal_Step_0P119ppm                             (0x1U << RTC_CALSTEP_CALSTEP_Pos)
#define    FL_RTC_Cal_Step_0P238ppm                             (0x2U << RTC_CALSTEP_CALSTEP_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup RTC_FL_Exported_Functions RTC Exported Functions
  * @{
  */

/**
  * @brief    使能RTC时间配置
  * @rmtoll   RTCWE        FL_RTC_WriteEnable
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteEnable(RTC_Type* RTCx)
{
    RTCx->RTCWE = 0xACACACAC;
}

/**
  * @brief    关闭RTC时间配置
  * @rmtoll   RTCWE        FL_RTC_WriteDisable
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteDisable(RTC_Type* RTCx)
{
    RTCx->RTCWE = 0x5A5A5A5A;
}

/**
  * @brief    PB5上升沿中断使能
  * @rmtoll   RTCIE    PB5R_IE    FL_RTC_EnableIT_PB5RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_PB5RisingEdge(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_PB5R_IE_Msk);
}

/**
  * @brief    获取PB5上升沿中断使能状态
  * @rmtoll   RTCIE    PB5R_IE    FL_RTC_IsEnabledIT_PB5RisingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_PB5RisingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_PB5R_IE_Msk) == RTC_RTCIE_PB5R_IE_Msk);
}

/**
  * @brief    关闭PB5上升沿中断使能
  * @rmtoll   RTCIE    PB5R_IE    FL_RTC_DisableIT_PB5RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_PB5RisingEdge(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_PB5R_IE_Msk);
}

/**
  * @brief    PB5下降沿中断使能
  * @rmtoll   RTCIE    PB5F_IE    FL_RTC_EnableIT_PB5FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_PB5FallingEdge(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_PB5F_IE_Msk);
}

/**
  * @brief    获取PB5下降沿中断使能状态
  * @rmtoll   RTCIE    PB5F_IE    FL_RTC_IsEnabledIT_PB5FallingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_PB5FallingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_PB5F_IE_Msk) == RTC_RTCIE_PB5F_IE_Msk);
}

/**
  * @brief    关闭PB5下降沿中断使能
  * @rmtoll   RTCIE    PB5F_IE    FL_RTC_DisableIT_PB5FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_PB5FallingEdge(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_PB5F_IE_Msk);
}

/**
  * @brief    PB4下降沿中断使能
  * @rmtoll   RTCIE    PB4R_IE    FL_RTC_EnableIT_PB4RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_PB4RisingEdge(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_PB4R_IE_Msk);
}

/**
  * @brief    获取PB4下降沿中断使能状态
  * @rmtoll   RTCIE    PB4R_IE    FL_RTC_IsEnabledIT_PB4RisingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_PB4RisingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_PB4R_IE_Msk) == RTC_RTCIE_PB4R_IE_Msk);
}

/**
  * @brief    关闭PB4下降沿中断使能
  * @rmtoll   RTCIE    PB4R_IE    FL_RTC_DisableIT_PB4RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_PB4RisingEdge(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_PB4R_IE_Msk);
}

/**
  * @brief    PB4下降沿中断使能
  * @rmtoll   RTCIE    PB4F_IE    FL_RTC_EnableIT_PB4FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_PB4FallingEdge(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_PB4F_IE_Msk);
}

/**
  * @brief    获取PB4下降沿中断使能状态
  * @rmtoll   RTCIE    PB4F_IE    FL_RTC_IsEnabledIT_PB4FallingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_PB4FallingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_PB4F_IE_Msk) == RTC_RTCIE_PB4F_IE_Msk);
}

/**
  * @brief    关闭PB4下降沿中断使能
  * @rmtoll   RTCIE    PB4F_IE    FL_RTC_DisableIT_PB4FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_PB4FallingEdge(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_PB4F_IE_Msk);
}

/**
  * @brief    使能RTC调校周期中断
  * @rmtoll   RTCIE    ADJ_IE    FL_RTC_EnableIT_Adjust
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Adjust(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_ADJ_IE_Msk);
}

/**
  * @brief    获取RTC调校周期中断使能状态
  * @rmtoll   RTCIE    ADJ_IE    FL_RTC_IsEnabledIT_Adjust
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Adjust(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_ADJ_IE_Msk) == RTC_RTCIE_ADJ_IE_Msk);
}

/**
  * @brief    关闭RTC调校周期中断
  * @rmtoll   RTCIE    ADJ_IE    FL_RTC_DisableIT_Adjust
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Adjust(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_ADJ_IE_Msk);
}

/**
  * @brief    使能RTC闹钟中断
  * @rmtoll   RTCIE    ALARM_IE    FL_RTC_EnableIT_Alarm
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Alarm(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_ALARM_IE_Msk);
}

/**
  * @brief    获取RTC闹钟中断使能状态
  * @rmtoll   RTCIE    ALARM_IE    FL_RTC_IsEnabledIT_Alarm
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Alarm(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_ALARM_IE_Msk) == RTC_RTCIE_ALARM_IE_Msk);
}

/**
  * @brief    关闭RTC闹钟中断
  * @rmtoll   RTCIE    ALARM_IE    FL_RTC_DisableIT_Alarm
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Alarm(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_ALARM_IE_Msk);
}

/**
  * @brief    使能RTC 1KHz中断
  * @rmtoll   RTCIE    1KHZ_IE    FL_RTC_EnableIT_1KHz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_1KHz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_1KHZ_IE_Msk);
}

/**
  * @brief    获取RTC 1KHz中断使能状态
  * @rmtoll   RTCIE    1KHZ_IE    FL_RTC_IsEnabledIT_1KHz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_1KHz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_1KHZ_IE_Msk) == RTC_RTCIE_1KHZ_IE_Msk);
}

/**
  * @brief    关闭RTC 1KHz中断
  * @rmtoll   RTCIE    1KHZ_IE    FL_RTC_DisableIT_1KHz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_1KHz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_1KHZ_IE_Msk);
}

/**
  * @brief    使能RTC 256Hz中断
  * @rmtoll   RTCIE    256HZ_IE    FL_RTC_EnableIT_256Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_256Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_256HZ_IE_Msk);
}

/**
  * @brief    获取RTC 256Hz中断使能状态
  * @rmtoll   RTCIE    256HZ_IE    FL_RTC_IsEnabledIT_256Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_256Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_256HZ_IE_Msk) == RTC_RTCIE_256HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 256Hz中断
  * @rmtoll   RTCIE    256HZ_IE    FL_RTC_DisableIT_256Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_256Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_256HZ_IE_Msk);
}

/**
  * @brief    使能RTC 64Hz中断
  * @rmtoll   RTCIE    64HZ_IE    FL_RTC_EnableIT_64Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_64Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_64HZ_IE_Msk);
}

/**
  * @brief    获取RTC 64Hz中断使能状态
  * @rmtoll   RTCIE    64HZ_IE    FL_RTC_IsEnabledIT_64Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_64Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_64HZ_IE_Msk) == RTC_RTCIE_64HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 64Hz中断
  * @rmtoll   RTCIE    64HZ_IE    FL_RTC_DisableIT_64Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_64Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_64HZ_IE_Msk);
}

/**
  * @brief    使能RTC 16Hz中断
  * @rmtoll   RTCIE    16HZ_IE    FL_RTC_EnableIT_16Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_16Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_16HZ_IE_Msk);
}

/**
  * @brief    获取RTC 16Hz中断使能状态
  * @rmtoll   RTCIE    16HZ_IE    FL_RTC_IsEnabledIT_16Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_16Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_16HZ_IE_Msk) == RTC_RTCIE_16HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 16Hz中断
  * @rmtoll   RTCIE    16HZ_IE    FL_RTC_DisableIT_16Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_16Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_16HZ_IE_Msk);
}

/**
  * @brief    使能RTC 8Hz中断
  * @rmtoll   RTCIE    8HZ_IE    FL_RTC_EnableIT_8Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_8Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_8HZ_IE_Msk);
}

/**
  * @brief    获取RTC 8Hz中断使能状态
  * @rmtoll   RTCIE    8HZ_IE    FL_RTC_IsEnabledIT_8Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_8Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_8HZ_IE_Msk) == RTC_RTCIE_8HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 8Hz中断
  * @rmtoll   RTCIE    8HZ_IE    FL_RTC_DisableIT_8Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_8Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_8HZ_IE_Msk);
}

/**
  * @brief    使能RTC 4Hz中断
  * @rmtoll   RTCIE    4HZ_IE    FL_RTC_EnableIT_4Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_4Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_4HZ_IE_Msk);
}

/**
  * @brief    获取RTC 4Hz中断使能状态
  * @rmtoll   RTCIE    4HZ_IE    FL_RTC_IsEnabledIT_4Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_4Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_4HZ_IE_Msk) == RTC_RTCIE_4HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 4Hz中断
  * @rmtoll   RTCIE    4HZ_IE    FL_RTC_DisableIT_4Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_4Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_4HZ_IE_Msk);
}

/**
  * @brief    使能RTC 2Hz中断
  * @rmtoll   RTCIE    2HZ_IE    FL_RTC_EnableIT_2Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_2Hz(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_2HZ_IE_Msk);
}

/**
  * @brief    获取RTC 2Hz中断使能状态
  * @rmtoll   RTCIE    2HZ_IE    FL_RTC_IsEnabledIT_2Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_2Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_2HZ_IE_Msk) == RTC_RTCIE_2HZ_IE_Msk);
}

/**
  * @brief    关闭RTC 2Hz中断
  * @rmtoll   RTCIE    2HZ_IE    FL_RTC_DisableIT_2Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_2Hz(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_2HZ_IE_Msk);
}

/**
  * @brief    使能RTC秒中断
  * @rmtoll   RTCIE    SEC_IE    FL_RTC_EnableIT_Second
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Second(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_SEC_IE_Msk);
}

/**
  * @brief    获取RTC秒中断使能状态
  * @rmtoll   RTCIE    SEC_IE    FL_RTC_IsEnabledIT_Second
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Second(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_SEC_IE_Msk) == RTC_RTCIE_SEC_IE_Msk);
}

/**
  * @brief    关闭RTC秒中断
  * @rmtoll   RTCIE    SEC_IE    FL_RTC_DisableIT_Second
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Second(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_SEC_IE_Msk);
}

/**
  * @brief    使能RTC分中断
  * @rmtoll   RTCIE    MIN_IE    FL_RTC_EnableIT_Minute
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Minute(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_MIN_IE_Msk);
}

/**
  * @brief    获取RTC分中断使能状态
  * @rmtoll   RTCIE    MIN_IE    FL_RTC_IsEnabledIT_Minute
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Minute(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_MIN_IE_Msk) == RTC_RTCIE_MIN_IE_Msk);
}

/**
  * @brief    关闭RTC分中断
  * @rmtoll   RTCIE    MIN_IE    FL_RTC_DisableIT_Minute
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Minute(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_MIN_IE_Msk);
}

/**
  * @brief    使能RTC小时中断
  * @rmtoll   RTCIE    HOUR_IE    FL_RTC_EnableIT_Hour
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Hour(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_HOUR_IE_Msk);
}

/**
  * @brief    获取RTC小时中断使能状态
  * @rmtoll   RTCIE    HOUR_IE    FL_RTC_IsEnabledIT_Hour
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Hour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_HOUR_IE_Msk) == RTC_RTCIE_HOUR_IE_Msk);
}

/**
  * @brief    关闭RTC小时中断
  * @rmtoll   RTCIE    HOUR_IE    FL_RTC_DisableIT_Hour
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Hour(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_HOUR_IE_Msk);
}

/**
  * @brief    使能RTC天中断
  * @rmtoll   RTCIE    DAY_IE    FL_RTC_EnableIT_Day
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableIT_Day(RTC_Type* RTCx)
{
    SET_BIT(RTCx->RTCIE, RTC_RTCIE_DAY_IE_Msk);
}

/**
  * @brief    获取RTC天中断使能状态
  * @rmtoll   RTCIE    DAY_IE    FL_RTC_IsEnabledIT_Day
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledIT_Day(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIE, RTC_RTCIE_DAY_IE_Msk) == RTC_RTCIE_DAY_IE_Msk);
}

/**
  * @brief    关闭RTC天中断
  * @rmtoll   RTCIE    DAY_IE    FL_RTC_DisableIT_Day
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableIT_Day(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->RTCIE, RTC_RTCIE_DAY_IE_Msk);
}

/**
  * @brief    清除PB5上升沿中断标志
  * @rmtoll   RTCIF    PB5R_IF    FL_RTC_ClearFlag_PB5RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_PB5RisingEdge(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_RTCIF_PB5R_IF_Msk);
}

/**
  * @brief    获取PB5上升沿中断标志
  * @rmtoll   RTCIF    PB5R_IF    FL_RTC_IsActiveFlag_PB5RisingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_PB5RisingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_RTCIF_PB5R_IF_Msk) == (RTC_RTCIF_PB5R_IF_Msk));
}

/**
  * @brief    清除PB5下降沿中断标志
  * @rmtoll   RTCIF    PB5F_IF    FL_RTC_ClearFlag_PB5FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_PB5FallingEdge(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_RTCIF_PB5F_IF_Msk);
}

/**
  * @brief    获取PB5下降沿中断标志
  * @rmtoll   RTCIF    PB5F_IF    FL_RTC_IsActiveFlag_PB5FallingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_PB5FallingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_RTCIF_PB5F_IF_Msk) == (RTC_RTCIF_PB5F_IF_Msk));
}

/**
  * @brief    清除PB4上升沿中断标志
  * @rmtoll   RTCIF    PB4R_IF    FL_RTC_ClearFlag_PB4RisingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_PB4RisingEdge(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_RTCIF_PB4R_IF_Msk);
}

/**
  * @brief    获取PB4上升沿中断标志
  * @rmtoll   RTCIF    PB4R_IF    FL_RTC_IsActiveFlag_PB4RisingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_PB4RisingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_RTCIF_PB4R_IF_Msk) == (RTC_RTCIF_PB4R_IF_Msk));
}

/**
  * @brief    清除PB4下降沿中断标志
  * @rmtoll   RTCIF    PB4F_IF    FL_RTC_ClearFlag_PB4FallingEdge
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_PB4FallingEdge(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_RTCIF_PB4F_IF_Msk);
}

/**
  * @brief    获取PB4下降沿中断标志
  * @rmtoll   RTCIF    PB4F_IF    FL_RTC_IsActiveFlag_PB4FallingEdge
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_PB4FallingEdge(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_RTCIF_PB4F_IF_Msk) == (RTC_RTCIF_PB4F_IF_Msk));
}

/**
  * @brief    清除RTC调校周期中断标志
  * @rmtoll   RTCIF    ADJ_IF    FL_RTC_ClearFlag_Adjust
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Adjust(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_ADJ_IF_Msk);
}

/**
  * @brief    获取RTC调校周期中断标志
  * @rmtoll   RTCIF    ADJ_IF    FL_RTC_IsActiveFlag_Adjust
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Adjust(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_ADJ_IF_Msk) == (RTC_ISR_ADJ_IF_Msk));
}

/**
  * @brief    清除RTC闹钟中断标志
  * @rmtoll   RTCIF    ALARM_IF    FL_RTC_ClearFlag_Alarm
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Alarm(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_ALARM_IF_Msk);
}

/**
  * @brief    获取RTC闹钟中断标志
  * @rmtoll   RTCIF    ALARM_IF    FL_RTC_IsActiveFlag_Alarm
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Alarm(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_ALARM_IF_Msk) == (RTC_ISR_ALARM_IF_Msk));
}

/**
  * @brief    清除RTC 1KHz中断标志
  * @rmtoll   RTCIF    1KHZ_IF    FL_RTC_ClearFlag_1KHz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_1KHz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_1KHZ_IF_Msk);
}

/**
  * @brief    获取RTC 1KHz中断标志
  * @rmtoll   RTCIF    1KHZ_IF    FL_RTC_IsActiveFlag_1KHz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_1KHz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_1KHZ_IF_Msk) == (RTC_ISR_1KHZ_IF_Msk));
}

/**
  * @brief    清除RTC 256Hz中断标志
  * @rmtoll   RTCIF    256HZ_IF    FL_RTC_ClearFlag_256Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_256Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_256HZ_IF_Msk);
}

/**
  * @brief    获取RTC 256Hz中断标志
  * @rmtoll   RTCIF    256HZ_IF    FL_RTC_IsActiveFlag_256Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_256Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_256HZ_IF_Msk) == (RTC_ISR_256HZ_IF_Msk));
}

/**
  * @brief    清除RTC 64Hz中断标志
  * @rmtoll   RTCIF    64HZ_IF    FL_RTC_ClearFlag_64Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_64Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_64HZ_IF_Msk);
}

/**
  * @brief    获取RTC 64Hz中断标志
  * @rmtoll   RTCIF    64HZ_IF    FL_RTC_IsActiveFlag_64Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_64Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_64HZ_IF_Msk) == (RTC_ISR_64HZ_IF_Msk));
}

/**
  * @brief    清除RTC 16Hz中断标志
  * @rmtoll   RTCIF    16HZ_IF    FL_RTC_ClearFlag_16Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_16Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_16HZ_IF_Msk);
}

/**
  * @brief    获取RTC 16Hz中断标志
  * @rmtoll   RTCIF    16HZ_IF    FL_RTC_IsActiveFlag_16Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_16Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_16HZ_IF_Msk) == (RTC_ISR_16HZ_IF_Msk));
}

/**
  * @brief    清除RTC 8Hz中断标志
  * @rmtoll   RTCIF    8HZ_IF    FL_RTC_ClearFlag_8Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_8Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_8HZ_IF_Msk);
}

/**
  * @brief    获取RTC 8Hz中断标志
  * @rmtoll   RTCIF    8HZ_IF    FL_RTC_IsActiveFlag_8Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_8Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_8HZ_IF_Msk) == (RTC_ISR_8HZ_IF_Msk));
}

/**
  * @brief    清除RTC 4Hz中断标志
  * @rmtoll   RTCIF    4HZ_IF    FL_RTC_ClearFlag_4Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_4Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_4HZ_IF_Msk);
}

/**
  * @brief    获取RTC 4Hz中断标志
  * @rmtoll   RTCIF    4HZ_IF    FL_RTC_IsActiveFlag_4Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_4Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_4HZ_IF_Msk) == (RTC_ISR_4HZ_IF_Msk));
}

/**
  * @brief    清除RTC 2Hz中断标志
  * @rmtoll   RTCIF    2HZ_IF    FL_RTC_ClearFlag_2Hz
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_2Hz(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_2HZ_IF_Msk);
}

/**
  * @brief    获取RTC 2Hz中断标志
  * @rmtoll   RTCIF    2HZ_IF    FL_RTC_IsActiveFlag_2Hz
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_2Hz(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_2HZ_IF_Msk) == (RTC_ISR_2HZ_IF_Msk));
}

/**
  * @brief    清除RTC秒中断标志
  * @rmtoll   RTCIF    SEC_IF    FL_RTC_ClearFlag_Second
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Second(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_SEC_IF_Msk);
}

/**
  * @brief    获取RTC秒中断标志
  * @rmtoll   RTCIF    SEC_IF    FL_RTC_IsActiveFlag_Second
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Second(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_SEC_IF_Msk) == (RTC_ISR_SEC_IF_Msk));
}

/**
  * @brief    清除RTC分中断标志
  * @rmtoll   RTCIF    MIN_IF    FL_RTC_ClearFlag_Minute
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Minute(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_MIN_IF_Msk);
}

/**
  * @brief    获取RTC分中断标志
  * @rmtoll   RTCIF    MIN_IF    FL_RTC_IsActiveFlag_Minute
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Minute(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_MIN_IF_Msk) == (RTC_ISR_MIN_IF_Msk));
}

/**
  * @brief    清除RTC小时中断标志
  * @rmtoll   RTCIF    HOUR_IF    FL_RTC_ClearFlag_Hour
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Hour(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_HOUR_IF_Msk);
}

/**
  * @brief    获取RTC小时中断标志
  * @rmtoll   RTCIF    HOUR_IF    FL_RTC_IsActiveFlag_Hour
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Hour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_HOUR_IF_Msk) == (RTC_ISR_HOUR_IF_Msk));
}

/**
  * @brief    清除RTC天中断标志
  * @rmtoll   RTCIF    DAY_IF    FL_RTC_ClearFlag_Day
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_ClearFlag_Day(RTC_Type* RTCx)
{
    WRITE_REG(RTCx->RTCIF, RTC_ISR_DAY_IF_Msk);
}

/**
  * @brief    获取RTC天中断标志
  * @rmtoll   RTCIF    DAY_IF    FL_RTC_IsActiveFlag_Day
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsActiveFlag_Day(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->RTCIF, RTC_ISR_DAY_IF_Msk) == (RTC_ISR_DAY_IF_Msk));
}

/**
  * @brief    获取RTC秒寄存器值
  * @rmtoll   BCDSEC        FL_RTC_ReadSecond
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadSecond(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDSEC, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC秒寄存器值
  * @rmtoll   BCDSEC        FL_RTC_WriteSecond
  * @param    RTCx RTC instance
  * @param    second 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteSecond(RTC_Type* RTCx, uint32_t second)
{
    MODIFY_REG(RTCx->BCDSEC, (0x7fU << 0U), (second << 0U));
}

/**
  * @brief    获取RTC分钟寄存器值
  * @rmtoll   BCDMIN        FL_RTC_ReadMinute
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadMinute(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDMIN, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC分钟寄存器值
  * @rmtoll   BCDMIN        FL_RTC_WriteMinute
  * @param    RTCx RTC instance
  * @param    minute 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteMinute(RTC_Type* RTCx, uint32_t minute)
{
    MODIFY_REG(RTCx->BCDMIN, (0x7fU << 0U), (minute << 0U));
}

/**
  * @brief    获取RTC小时寄存器值
  * @rmtoll   BCDHOUR        FL_RTC_ReadHour
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadHour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDHOUR, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC小时寄存器值
  * @rmtoll   BCDHOUR        FL_RTC_WriteHour
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteHour(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->BCDHOUR, (0x3fU << 0U), (hour << 0U));
}

/**
  * @brief    获取RTC天寄存器值
  * @rmtoll   BCDDATE        FL_RTC_ReadDay
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadDay(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDDATE, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC天寄存器值
  * @rmtoll   BCDDATE        FL_RTC_WriteDay
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteDay(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->BCDDATE, (0x3fU << 0U), (day << 0U));
}

/**
  * @brief    获取RTC星期寄存器值
  * @rmtoll   BCDWEEK        FL_RTC_ReadWeek
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadWeek(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDWEEK, (0x7U << 0U)) >> 0U);
}

/**
  * @brief    设置RTC星期寄存器值
  * @rmtoll   BCDWEEK        FL_RTC_WriteWeek
  * @param    RTCx RTC instance
  * @param    week 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteWeek(RTC_Type* RTCx, uint32_t week)
{
    MODIFY_REG(RTCx->BCDWEEK, (0x7U << 0U), (week << 0U));
}

/**
  * @brief    获取RTC月寄存器值
  * @rmtoll   BCDMONTH        FL_RTC_ReadMonth
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadMonth(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDMONTH, (0x1fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC月寄存器值
  * @rmtoll   BCDMONTH        FL_RTC_WriteMonth
  * @param    RTCx RTC instance
  * @param    month 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteMonth(RTC_Type* RTCx, uint32_t month)
{
    MODIFY_REG(RTCx->BCDMONTH, (0x1fU << 0U), (month << 0U));
}

/**
  * @brief    获取RTC年寄存器值
  * @rmtoll   BCDYEAR        FL_RTC_ReadYear
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadYear(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->BCDYEAR, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC年寄存器值
  * @rmtoll   BCDYEAR        FL_RTC_WriteYear
  * @param    RTCx RTC instance
  * @param    year 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteYear(RTC_Type* RTCx, uint32_t year)
{
    MODIFY_REG(RTCx->BCDYEAR, (0xffU << 0U), (year << 0U));
}

/**
  * @brief    获取RTC闹钟的小时数值
  * @rmtoll   ALARM        FL_RTC_ReadHourAlarm
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadHourAlarm(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ALARM, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    设置RTC闹钟的小时数值
  * @rmtoll   ALARM        FL_RTC_WriteHourAlarm
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteHourAlarm(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->ALARM, (0x3fU << 16U), (hour << 16U));
}

/**
  * @brief    获取RTC闹钟的分钟数值
  * @rmtoll   ALARM        FL_RTC_ReadMinuteAlarm
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadMinuteAlarm(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ALARM, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    设置RTC闹钟的分钟数值
  * @rmtoll   ALARM        FL_RTC_WriteMinuteAlarm
  * @param    RTCx RTC instance
  * @param    minute 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteMinuteAlarm(RTC_Type* RTCx, uint32_t minute)
{
    MODIFY_REG(RTCx->ALARM, (0x7fU << 8U), (minute << 8U));
}

/**
  * @brief    获取RTC闹钟的秒数值
  * @rmtoll   ALARM        FL_RTC_ReadSecondAlarm
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadSecondAlarm(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ALARM, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC闹钟的秒数值
  * @rmtoll   ALARM        FL_RTC_WriteSecondAlarm
  * @param    RTCx RTC instance
  * @param    second 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteSecondAlarm(RTC_Type* RTCx, uint32_t second)
{
    MODIFY_REG(RTCx->ALARM, (0x7fU << 0U), (second << 0U));
}

/**
  * @brief    设置RTC频率输出信号
  * @rmtoll   FSEL    FSEL    FL_RTC_SetTimeMarkOutput
  * @param    RTCx RTC instance
  * @param    markSelect This parameter can be one of the following values:
  *           @arg @ref FL_RTC_TIME_MARK_PLL_One_Second
  *           @arg @ref FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration
  *           @arg @ref FL_RTC_TIME_MARK_SECOND
  *           @arg @ref FL_RTC_TIME_MARK_MINUTE
  *           @arg @ref FL_RTC_TIME_MARK_HOUR
  *           @arg @ref FL_RTC_TIME_MARK_DAY
  *           @arg @ref FL_RTC_TIME_MARK_ALARM
  *           @arg @ref FL_RTC_TIME_MARK_128_SEC
  *           @arg @ref FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_SECOND_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_MINUTE_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_HOUR_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_DAY_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_ALARM_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_SEC
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_SetTimeMarkOutput(RTC_Type* RTCx, uint32_t markSelect)
{
    MODIFY_REG(RTCx->FSEL, RTC_FSEL_FSEL_Msk, markSelect);
}

/**
  * @brief    获取RTC频率输出信号设置
  * @rmtoll   FSEL    FSEL    FL_RTC_GetTimeMarkOutput
  * @param    RTCx RTC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RTC_TIME_MARK_PLL_One_Second
  *           @arg @ref FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration
  *           @arg @ref FL_RTC_TIME_MARK_SECOND
  *           @arg @ref FL_RTC_TIME_MARK_MINUTE
  *           @arg @ref FL_RTC_TIME_MARK_HOUR
  *           @arg @ref FL_RTC_TIME_MARK_DAY
  *           @arg @ref FL_RTC_TIME_MARK_ALARM
  *           @arg @ref FL_RTC_TIME_MARK_128_SEC
  *           @arg @ref FL_RTC_TIME_MARK_PLL_80Ms_HighLevelDuration_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_SECOND_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_MINUTE_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_HOUR_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_DAY_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_ALARM_REVERSE
  *           @arg @ref FL_RTC_TIME_MARK_SEC
  */
__STATIC_INLINE uint32_t FL_RTC_GetTimeMarkOutput(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->FSEL, RTC_FSEL_FSEL_Msk));
}

/**
  * @brief    获取RTC LTBC补偿调整数值
  * @rmtoll   ADJUST        FL_RTC_ReadAdjustValue
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadAdjustValue(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ADJUST, (0x1fffU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC LTBC补偿调整数值
  * @rmtoll   ADJUST        FL_RTC_WriteAdjustValue
  * @param    RTCx RTC instance
  * @param    adjustValue 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteAdjustValue(RTC_Type* RTCx, uint32_t adjustValue)
{
    MODIFY_REG(RTCx->ADJUST, (0x1fffU << 0U), (adjustValue << 0U));
}

/**
  * @brief    设置RTC LTBC补偿方向
  * @rmtoll   ADSIGN    ADSIGN    FL_RTC_SetAdjustDirection
  * @param    RTCx RTC instance
  * @param    adjustDir This parameter can be one of the following values:
  *           @arg @ref FL_RTC_ADJUST_DIR_INCREASE
  *           @arg @ref FL_RTC_ADJUST_DIR_DECREASE
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_SetAdjustDirection(RTC_Type* RTCx, uint32_t adjustDir)
{
    MODIFY_REG(RTCx->ADSIGN, RTC_ADSIGN_ADSIGN_Msk, adjustDir);
}

/**
  * @brief    获取RTC LTBC补偿方向
  * @rmtoll   ADSIGN    ADSIGN    FL_RTC_GetAdjustDirection
  * @param    RTCx RTC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_RTC_ADJUST_DIR_INCREASE
  *           @arg @ref FL_RTC_ADJUST_DIR_DECREASE
  */
__STATIC_INLINE uint32_t FL_RTC_GetAdjustDirection(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ADSIGN, RTC_ADSIGN_ADSIGN_Msk));
}

/**
  * @brief    使能RTC虚拟调校信号
  * @rmtoll   PR1SEN    PR1SEN    FL_RTC_EnableVirtualTuning
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnableVirtualTuning(RTC_Type* RTCx)
{
    SET_BIT(RTCx->PR1SEN, RTC_PR1SEN_PR1SEN_Msk);
}

/**
  * @brief    获取RTC虚拟调校信号使能状态
  * @rmtoll   PR1SEN    PR1SEN    FL_RTC_IsEnabledVirtualTuning
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledVirtualTuning(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->PR1SEN, RTC_PR1SEN_PR1SEN_Msk) == RTC_PR1SEN_PR1SEN_Msk);
}

/**
  * @brief    关闭RTC虚拟调校信号使能
  * @rmtoll   PR1SEN    PR1SEN    FL_RTC_DisableVirtualTuning
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisableVirtualTuning(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->PR1SEN, RTC_PR1SEN_PR1SEN_Msk);
}

/**
  * @brief    获取RTC毫秒计数值
  * @rmtoll   MSECCNT    MSCNT    FL_RTC_ReadMilliSecondCounter
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadMilliSecondCounter(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->MSECCNT, (0xffU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC毫秒计数值
  * @rmtoll   MSECCNT    MSCNT    FL_RTC_WriteMilliSecondCounter
  * @param    RTCx RTC instance
  * @param    milliSecondCount 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteMilliSecondCounter(RTC_Type* RTCx, uint32_t milliSecondCount)
{
    MODIFY_REG(RTCx->MSECCNT, (0xffU << 0U), (milliSecondCount << 0U));
}

/**
  * @brief    RTC PB5触发的时间戳功能使能
  * @rmtoll   STAMPEN    STAMP1EN    FL_RTC_EnablePB5TimeStamp
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnablePB5TimeStamp(RTC_Type* RTCx)
{
    SET_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP1EN_Msk);
}

/**
  * @brief    获取RTC PB5触发的时间戳功能使能状态
  * @rmtoll   STAMPEN    STAMP1EN    FL_RTC_IsEnabledPB5TimeStamp
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledPB5TimeStamp(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP1EN_Msk) == RTC_STAMPEN_STAMP1EN_Msk);
}

/**
  * @brief    关闭RTC PB5触发的时间戳功能使能
  * @rmtoll   STAMPEN    STAMP1EN    FL_RTC_DisablePB5TimeStamp
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisablePB5TimeStamp(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP1EN_Msk);
}

/**
  * @brief    RTC PB4触发的时间戳功能使能
  * @rmtoll   STAMPEN    STAMP0EN    FL_RTC_EnablePB4TimeStamp
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_EnablePB4TimeStamp(RTC_Type* RTCx)
{
    SET_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP0EN_Msk);
}

/**
  * @brief    获取RTC PB4触发的时间戳功能使能状态
  * @rmtoll   STAMPEN    STAMP0EN    FL_RTC_IsEnabledPB4TimeStamp
  * @param    RTCx RTC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_RTC_IsEnabledPB4TimeStamp(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP0EN_Msk) == RTC_STAMPEN_STAMP0EN_Msk);
}

/**
  * @brief    关闭RTC PB4触发的时间戳功能使能
  * @rmtoll   STAMPEN    STAMP0EN    FL_RTC_DisablePB4TimeStamp
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_DisablePB4TimeStamp(RTC_Type* RTCx)
{
    CLEAR_BIT(RTCx->STAMPEN, RTC_STAMPEN_STAMP0EN_Msk);
}

/**
  * @brief    获取检测PB4上升沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP0R0    HRSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDHour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0R0, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP0R0    HRSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDHour(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->CLKSTAMP0R0, (0x3fU << 16U), (hour << 16U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP0R0    MINSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDMin(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0R0, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP0R0    MINSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @param    min 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDMin(RTC_Type* RTCx, uint32_t min)
{
    MODIFY_REG(RTCx->CLKSTAMP0R0, (0x7fU << 8U), (min << 8U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP0R0    SECSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDSec(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0R0, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP0R0    SECSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @param    sec 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDSec(RTC_Type* RTCx, uint32_t sec)
{
    MODIFY_REG(RTCx->CLKSTAMP0R0, (0x7fU << 0U), (sec << 0U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP0R1    YRSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDYear(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0R1, (0xffU << 24U)) >> 24U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP0R1    YRSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @param    year 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDYear(RTC_Type* RTCx, uint32_t year)
{
    MODIFY_REG(RTCx->CALSTAMP0R1, (0xffU << 24U), (year << 24U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP0R1    MONSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDMonth(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0R1, (0x1fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP0R1    MONSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @param    month 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDMonth(RTC_Type* RTCx, uint32_t month)
{
    MODIFY_REG(RTCx->CALSTAMP0R1, (0x1fU << 16U), (month << 16U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP0R1    WKSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDWeek(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0R1, (0x7U << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP0R1    WKSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @param    week 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDWeek(RTC_Type* RTCx, uint32_t week)
{
    MODIFY_REG(RTCx->CALSTAMP0R1, (0x7U << 8U), (week << 8U));
}

/**
  * @brief    获取检测PB4上升沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP0R1    DAYSTP0R    FL_RTC_ReadPB4RisingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4RisingEdgeStoreBCDDay(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0R1, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB4上升沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP0R1    DAYSTP0R    FL_RTC_WritePB4RisingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4RisingEdgeStoreBCDDay(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->CALSTAMP0R1, (0x3fU << 0U), (day << 0U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP0F0    HRSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDHour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0F0, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP0F0    HRSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDHour(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->CLKSTAMP0F0, (0x3fU << 16U), (hour << 16U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP0F0    MINSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDMin(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0F0, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP0F0    MINSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @param    min 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDMin(RTC_Type* RTCx, uint32_t min)
{
    MODIFY_REG(RTCx->CLKSTAMP0F0, (0x7fU << 8U), (min << 8U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP0F0    SECSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDSec(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP0F0, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP0F0    SECSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @param    sec 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDSec(RTC_Type* RTCx, uint32_t sec)
{
    MODIFY_REG(RTCx->CLKSTAMP0F0, (0x7fU << 0U), (sec << 0U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP0F1    YRSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDYear(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0F1, (0xffU << 24U)) >> 24U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP0F1    YRSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @param    year 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDYear(RTC_Type* RTCx, uint32_t year)
{
    MODIFY_REG(RTCx->CALSTAMP0F1, (0xffU << 24U), (year << 24U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP0F1    MONSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDMonth(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0F1, (0x1fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP0F1    MONSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @param    month 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDMonth(RTC_Type* RTCx, uint32_t month)
{
    MODIFY_REG(RTCx->CALSTAMP0F1, (0x1fU << 16U), (month << 16U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP0F1    WKSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDWeek(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0F1, (0x7U << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP0F1    WKSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @param    week 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDWeek(RTC_Type* RTCx, uint32_t week)
{
    MODIFY_REG(RTCx->CALSTAMP0F1, (0x7U << 8U), (week << 8U));
}

/**
  * @brief    获取检测PB4下降沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP0F1    DAYSTP0F    FL_RTC_ReadPB4FallingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB4FallingEdgeStoreBCDDay(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP0F1, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB4下降沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP0F1    DAYSTP0F    FL_RTC_WritePB4FallingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB4FallingEdgeStoreBCDDay(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->CALSTAMP0F1, (0x3fU << 0U), (day << 0U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP1R0    HRSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDHour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1R0, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP1R0    HRSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDHour(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->CLKSTAMP1R0, (0x3fU << 16U), (hour << 16U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP1R0    MINSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDMin(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1R0, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP1R0    MINSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @param    min 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDMin(RTC_Type* RTCx, uint32_t min)
{
    MODIFY_REG(RTCx->CLKSTAMP1R0, (0x7fU << 8U), (min << 8U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP1R0    SECSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDSec(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1R0, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP1R0    SECSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @param    sec 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDSec(RTC_Type* RTCx, uint32_t sec)
{
    MODIFY_REG(RTCx->CLKSTAMP1R0, (0x7fU << 0U), (sec << 0U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP1R1    YRSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDYear(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1R1, (0xffU << 24U)) >> 24U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP1R1    YRSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @param    year 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDYear(RTC_Type* RTCx, uint32_t year)
{
    MODIFY_REG(RTCx->CALSTAMP1R1, (0xffU << 24U), (year << 24U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP1R1    MONSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDMonth(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1R1, (0x1fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP1R1    MONSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @param    month 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDMonth(RTC_Type* RTCx, uint32_t month)
{
    MODIFY_REG(RTCx->CALSTAMP1R1, (0x1fU << 16U), (month << 16U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP1R1    WKSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDWeek(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1R1, (0x7U << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP1R1    WKSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @param    week 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDWeek(RTC_Type* RTCx, uint32_t week)
{
    MODIFY_REG(RTCx->CALSTAMP1R1, (0x7U << 8U), (week << 8U));
}

/**
  * @brief    获取检测PB5上升沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP1R1    DAYSTP1R    FL_RTC_ReadPB5RisingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5RisingEdgeStoreBCDDay(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1R1, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB5上升沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP1R1    DAYSTP1R    FL_RTC_WritePB5RisingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5RisingEdgeStoreBCDDay(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->CALSTAMP1R1, (0x3fU << 0U), (day << 0U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP1F0    HRSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDHour(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1F0, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD小时寄存器的值
  * @rmtoll   CLKSTAMP1F0    HRSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDHour
  * @param    RTCx RTC instance
  * @param    hour 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDHour(RTC_Type* RTCx, uint32_t hour)
{
    MODIFY_REG(RTCx->CLKSTAMP1F0, (0x3fU << 16U), (hour << 16U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP1F0    MINSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDMin(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1F0, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD分钟寄存器的值
  * @rmtoll   CLKSTAMP1F0    MINSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDMin
  * @param    RTCx RTC instance
  * @param    min 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDMin(RTC_Type* RTCx, uint32_t min)
{
    MODIFY_REG(RTCx->CLKSTAMP1F0, (0x7fU << 8U), (min << 8U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP1F0    SECSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDSec(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CLKSTAMP1F0, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD秒钟寄存器的值
  * @rmtoll   CLKSTAMP1F0    SECSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDSec
  * @param    RTCx RTC instance
  * @param    sec 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDSec(RTC_Type* RTCx, uint32_t sec)
{
    MODIFY_REG(RTCx->CLKSTAMP1F0, (0x7fU << 0U), (sec << 0U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP1F1    YRSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDYear(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1F1, (0xffU << 24U)) >> 24U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD年寄存器的值
  * @rmtoll   CALSTAMP1F1    YRSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDYear
  * @param    RTCx RTC instance
  * @param    year 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDYear(RTC_Type* RTCx, uint32_t year)
{
    MODIFY_REG(RTCx->CALSTAMP1F1, (0xffU << 24U), (year << 24U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP1F1    MONSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDMonth(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1F1, (0x1fU << 16U)) >> 16U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD月寄存器的值
  * @rmtoll   CALSTAMP1F1    MONSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDMonth
  * @param    RTCx RTC instance
  * @param    month 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDMonth(RTC_Type* RTCx, uint32_t month)
{
    MODIFY_REG(RTCx->CALSTAMP1F1, (0x1fU << 16U), (month << 16U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP1F1    WKSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDWeek(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1F1, (0x7U << 8U)) >> 8U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD周寄存器的值
  * @rmtoll   CALSTAMP1F1    WKSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDWeek
  * @param    RTCx RTC instance
  * @param    week 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDWeek(RTC_Type* RTCx, uint32_t week)
{
    MODIFY_REG(RTCx->CALSTAMP1F1, (0x7U << 8U), (week << 8U));
}

/**
  * @brief    获取检测PB5下降沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP1F1    DAYSTP1F    FL_RTC_ReadPB5FallingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadPB5FallingEdgeStoreBCDDay(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTAMP1F1, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    设置检测PB5下降沿后存储BCD天寄存器的值
  * @rmtoll   CALSTAMP1F1    DAYSTP1F    FL_RTC_WritePB5FallingEdgeStoreBCDDay
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WritePB5FallingEdgeStoreBCDDay(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->CALSTAMP1F1, (0x3fU << 0U), (day << 0U));
}

/**
  * @brief    设置LTBC最小调校步长选择
  * @rmtoll   CALSTEP    CALSTEP    FL_RTC_SetLTBCMinTrimStep
  * @param    RTCx RTC instance
  * @param    select This parameter can be one of the following values:
  *           @arg @ref FL_RTC_Cal_Step_0P06PPM
  *           @arg @ref FL_RTC_Cal_Step_0P119ppm
  *           @arg @ref FL_RTC_Cal_Step_0P238ppm
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_SetLTBCMinTrimStep(RTC_Type* RTCx, uint32_t select)
{
    MODIFY_REG(RTCx->CALSTEP, RTC_CALSTEP_CALSTEP_Msk, select);
}

/**
  * @brief    设置LTBC最小调校步长选择
  * @rmtoll   CALSTEP    CALSTEP    FL_RTC_GetLTBCMinTrimStep
  * @param    RTCx RTC instance
  * @retval   None
  */
__STATIC_INLINE uint32_t FL_RTC_GetLTBCMinTrimStep(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->CALSTEP, RTC_CALSTEP_CALSTEP_Msk));
}

/**
  * @brief    获取RTC补偿周期计数器值
  * @rmtoll   ADJCNT    ADJCNT    FL_RTC_ReadCompensationPeriodCounter
  * @param    RTCx RTC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_RTC_ReadCompensationPeriodCounter(RTC_Type* RTCx)
{
    return (uint32_t)(READ_BIT(RTCx->ADJCNT, (0x1ffU << 0U)) >> 0U);
}

/**
  * @brief    设置RTC补偿周期计数器值
  * @rmtoll   ADJCNT    ADJCNT    FL_RTC_WriteCompensationPeriodCounter
  * @param    RTCx RTC instance
  * @param    day 
  * @retval   None
  */
__STATIC_INLINE void FL_RTC_WriteCompensationPeriodCounter(RTC_Type* RTCx, uint32_t day)
{
    MODIFY_REG(RTCx->ADJCNT, (0x1ffU << 0U), (day << 0U));
}

/**
  * @}
  */

/** @defgroup RTC_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_RTC_Init(RTC_Type *RTCx, FL_RTC_InitTypeDef *initStruct);

FL_ErrorStatus FL_RTC_ConfigTime(RTC_Type *RTCx, FL_RTC_InitTypeDef *initStruct);

FL_ErrorStatus FL_RTC_GetTime(RTC_Type *RTCx, FL_RTC_InitTypeDef *initStruct);

void FL_RTC_StructInit(FL_RTC_InitTypeDef *initStruct);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_RTC_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-06*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
