/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_adc.h
  * @author  FMSH Application Team
  * @brief   Head file of ADC FL Module
  * @version  V0.0.3
  * @date     23. June 2026
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
#ifndef __FM33L0XXD_FL_ADC_H
#define __FM33L0XXD_FL_ADC_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup ADC_FL_ES_INIT ADC Exported Init structures
  * @{
  */

/**
  * @brief FL ADC Init Sturcture definition
  */
//#warning "PLEASE INPUT THE INIT OR OTHER STRUCTURES DEFINITION HERE!!!"
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup ADC_FL_Exported_Constants ADC Exported Constants
  * @{
  */

#define ADC_VREF    (*((uint16_t *)(0x1FFFFC5C)))    /*  vref0.8 定标值*/

/**
  * @brief ADC Common Init Sturcture Definition
  */
typedef  struct
{
    /*ADCCLK源选择*/
    uint32_t clockSource;
    /*ADCCLK预分频配置*/
    uint32_t clockPrescaler;

} FL_ADC_CommonInitTypeDef;

/**
  * @brief ADC Init Sturcture Definition
  */
typedef struct
{
    /*连续转换模式配置*/
    uint32_t conversionMode;

    /*单次自动转换模式配置*/
    uint32_t autoMode;

    /*通道扫描顺序配置*/
    uint32_t scanDirection;

    /*触发信号使能配置*/
    uint32_t externalTrigConv;

    /*触发源选择*/
    uint32_t triggerSource;

    /*通道采样时间配置*/
    uint32_t channelSampleTime;
    
     /*等待模式配置*/
    FL_FunState waitMode;

    /*覆盖模式配置*/
    FL_FunState overrunMode;

    /*过采样使能配置*/
    FL_FunState oversamplingMode;

    /*过采样率配置*/
    uint32_t overSampingMultiplier;

    /*过采样移位配置*/
    uint32_t oversamplingShift;

} FL_ADC_InitTypeDef;


#define    SARADC_ISR_RDY_Pos                                     (7U)
#define    SARADC_ISR_RDY_Msk                                     (0x1U << SARADC_ISR_RDY_Pos)
#define    SARADC_ISR_RDY                                         SARADC_ISR_RDY_Msk

#define    SARADC_ISR_AWD_AH_Pos                                  (6U)
#define    SARADC_ISR_AWD_AH_Msk                                  (0x1U << SARADC_ISR_AWD_AH_Pos)
#define    SARADC_ISR_AWD_AH                                      SARADC_ISR_AWD_AH_Msk

#define    SARADC_ISR_AWD_UL_Pos                                  (5U)
#define    SARADC_ISR_AWD_UL_Msk                                  (0x1U << SARADC_ISR_AWD_UL_Pos)
#define    SARADC_ISR_AWD_UL                                      SARADC_ISR_AWD_UL_Msk

#define    SARADC_ISR_BUSY_Pos                                    (3U)
#define    SARADC_ISR_BUSY_Msk                                    (0x1U << SARADC_ISR_BUSY_Pos)
#define    SARADC_ISR_BUSY                                        SARADC_ISR_BUSY_Msk

#define    SARADC_ISR_OVR_Pos                                     (2U)
#define    SARADC_ISR_OVR_Msk                                     (0x1U << SARADC_ISR_OVR_Pos)
#define    SARADC_ISR_OVR                                         SARADC_ISR_OVR_Msk

#define    SARADC_ISR_EOS_Pos                                     (1U)
#define    SARADC_ISR_EOS_Msk                                     (0x1U << SARADC_ISR_EOS_Pos)
#define    SARADC_ISR_EOS                                         SARADC_ISR_EOS_Msk

#define    SARADC_ISR_EOC_Pos                                     (0U)
#define    SARADC_ISR_EOC_Msk                                     (0x1U << SARADC_ISR_EOC_Pos)
#define    SARADC_ISR_EOC                                         SARADC_ISR_EOC_Msk

#define    SARADC_IER_AWD_AHIE_Pos                                (6U)
#define    SARADC_IER_AWD_AHIE_Msk                                (0x1U << SARADC_IER_AWD_AHIE_Pos)
#define    SARADC_IER_AWD_AHIE                                    SARADC_IER_AWD_AHIE_Msk

#define    SARADC_IER_AWD_ULIE_Pos                                (5U)
#define    SARADC_IER_AWD_ULIE_Msk                                (0x1U << SARADC_IER_AWD_ULIE_Pos)
#define    SARADC_IER_AWD_ULIE                                    SARADC_IER_AWD_ULIE_Msk

#define    SARADC_IER_OVRIE_Pos                                   (2U)
#define    SARADC_IER_OVRIE_Msk                                   (0x1U << SARADC_IER_OVRIE_Pos)
#define    SARADC_IER_OVRIE                                       SARADC_IER_OVRIE_Msk

#define    SARADC_IER_EOSIE_Pos                                   (1U)
#define    SARADC_IER_EOSIE_Msk                                   (0x1U << SARADC_IER_EOSIE_Pos)
#define    SARADC_IER_EOSIE                                       SARADC_IER_EOSIE_Msk

#define    SARADC_IER_EOCIE_Pos                                   (0U)
#define    SARADC_IER_EOCIE_Msk                                   (0x1U << SARADC_IER_EOCIE_Pos)
#define    SARADC_IER_EOCIE                                       SARADC_IER_EOCIE_Msk

#define    SARADC_CR_START_Pos                                    (1U)
#define    SARADC_CR_START_Msk                                    (0x1U << SARADC_CR_START_Pos)
#define    SARADC_CR_START                                        SARADC_CR_START_Msk

#define    SARADC_CR_PWD_Pos                                      (0U)
#define    SARADC_CR_PWD_Msk                                      (0x1U << SARADC_CR_PWD_Pos)
#define    SARADC_CR_PWD                                          SARADC_CR_PWD_Msk

#define    SARADC_CFG_AWDCH_Pos                                   (26U)
#define    SARADC_CFG_AWDCH_Msk                                   (0xfU << SARADC_CFG_AWDCH_Pos)
#define    SARADC_CFG_AWDCH                                       SARADC_CFG_AWDCH_Msk

#define    SARADC_CFG_AWDSC_Pos                                   (25U)
#define    SARADC_CFG_AWDSC_Msk                                   (0x1U << SARADC_CFG_AWDSC_Pos)
#define    SARADC_CFG_AWDSC                                       SARADC_CFG_AWDSC_Msk

#define    SARADC_CFG_AWDEN_Pos                                   (24U)
#define    SARADC_CFG_AWDEN_Msk                                   (0x1U << SARADC_CFG_AWDEN_Pos)
#define    SARADC_CFG_AWDEN                                       SARADC_CFG_AWDEN_Msk

#define    SARADC_CFG_OVSS_Pos                                    (20U)
#define    SARADC_CFG_OVSS_Msk                                    (0xfU << SARADC_CFG_OVSS_Pos)
#define    SARADC_CFG_OVSS                                        SARADC_CFG_OVSS_Msk

#define    SARADC_CFG_OVSR_Pos                                    (17U)
#define    SARADC_CFG_OVSR_Msk                                    (0x7U << SARADC_CFG_OVSR_Pos)
#define    SARADC_CFG_OVSR                                        SARADC_CFG_OVSR_Msk

#define    SARADC_CFG_OVSEN_Pos                                   (16U)
#define    SARADC_CFG_OVSEN_Msk                                   (0x1U << SARADC_CFG_OVSEN_Pos)
#define    SARADC_CFG_OVSEN                                       SARADC_CFG_OVSEN_Msk

#define    SARADC_CFG_IOTRFEN_Pos                                 (14U)
#define    SARADC_CFG_IOTRFEN_Msk                                 (0x1U << SARADC_CFG_IOTRFEN_Pos)
#define    SARADC_CFG_IOTRFEN                                     SARADC_CFG_IOTRFEN_Msk

#define    SARADC_CFG_TRGCFG_Pos                                  (12U)
#define    SARADC_CFG_TRGCFG_Msk                                  (0x3U << SARADC_CFG_TRGCFG_Pos)
#define    SARADC_CFG_TRGCFG                                      SARADC_CFG_TRGCFG_Msk

#define    SARADC_CFG_SEMI_Pos                                    (11U)
#define    SARADC_CFG_SEMI_Msk                                    (0x1U << SARADC_CFG_SEMI_Pos)
#define    SARADC_CFG_SEMI                                        SARADC_CFG_SEMI_Msk

#define    SARADC_CFG_WAIT_Pos                                    (10U)
#define    SARADC_CFG_WAIT_Msk                                    (0x1U << SARADC_CFG_WAIT_Pos)
#define    SARADC_CFG_WAIT                                        SARADC_CFG_WAIT_Msk

#define    SARADC_CFG_CONT_Pos                                    (9U)
#define    SARADC_CFG_CONT_Msk                                    (0x1U << SARADC_CFG_CONT_Pos)
#define    SARADC_CFG_CONT                                        SARADC_CFG_CONT_Msk

#define    SARADC_CFG_OVRM_Pos                                    (8U)
#define    SARADC_CFG_OVRM_Msk                                    (0x1U << SARADC_CFG_OVRM_Pos)
#define    SARADC_CFG_OVRM                                        SARADC_CFG_OVRM_Msk

#define    SARADC_CFG_EXTS_Pos                                    (4U)
#define    SARADC_CFG_EXTS_Msk                                    (0xfU << SARADC_CFG_EXTS_Pos)
#define    SARADC_CFG_EXTS                                        SARADC_CFG_EXTS_Msk

#define    SARADC_CFG_SCANDIR_Pos                                 (2U)
#define    SARADC_CFG_SCANDIR_Msk                                 (0x1U << SARADC_CFG_SCANDIR_Pos)
#define    SARADC_CFG_SCANDIR                                     SARADC_CFG_SCANDIR_Msk

#define    SARADC_CFGR_DMACFG_Pos                                 (1U)
#define    SARADC_CFGR_DMACFG_Msk                                 (0x1U << SARADC_CFGR_DMACFG_Pos)
#define    SARADC_CFGR_DMACFG                                     SARADC_CFGR_DMACFG_Msk

#define    SARADC_CFGR_DMAEN_Pos                                  (0U)
#define    SARADC_CFGR_DMAEN_Msk                                  (0x1U << SARADC_CFGR_DMAEN_Pos)
#define    SARADC_CFGR_DMAEN                                      SARADC_CFGR_DMAEN_Msk

#define    SARADC_SMTR_SMTS_Pos                                   (0U)
#define    SARADC_SMTR_SMTS_Msk                                   (0xfU << SARADC_SMTR_SMTS_Pos)
#define    SARADC_SMTR_SMTS                                       SARADC_SMTR_SMTS_Msk

#define    SARADC_HLTR_AWD_HT_Pos                                 (16U)
#define    SARADC_HLTR_AWD_HT_Msk                                 (0xfffU << SARADC_HLTR_AWD_HT_Pos)
#define    SARADC_HLTR_AWD_HT                                     SARADC_HLTR_AWD_HT_Msk

#define    SARADC_HLTR_AWD_LT_Pos                                 (0U)
#define    SARADC_HLTR_AWD_LT_Msk                                 (0xfffU << SARADC_HLTR_AWD_LT_Pos)
#define    SARADC_HLTR_AWD_LT                                     SARADC_HLTR_AWD_LT_Msk

#define    SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Pos                   (1U)
#define    SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk                   (0x1U << SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Pos)
#define    SARADC_BUFFCTRL_VREFBUFFER_OUTEN                       SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk

#define    SARADC_BUFFCTRL_VREFBUFFER_EN_Pos                      (0U)
#define    SARADC_BUFFCTRL_VREFBUFFER_EN_Msk                      (0x1U << SARADC_BUFFCTRL_VREFBUFFER_EN_Pos)
#define    SARADC_BUFFCTRL_VREFBUFFER_EN                          SARADC_BUFFCTRL_VREFBUFFER_EN_Msk



#define    FL_SARADC_EXTERNAL_CH0                                 (0x1U << 0U)
#define    FL_SARADC_EXTERNAL_CH1                                 (0x1U << 1U)
#define    FL_SARADC_EXTERNAL_CH2                                 (0x1U << 2U)
#define    FL_SARADC_EXTERNAL_CH3                                 (0x1U << 3U)
#define    FL_SARADC_EXTERNAL_CH4                                 (0x1U << 4U)
#define    FL_SARADC_EXTERNAL_CH5                                 (0x1U << 5U)
#define    FL_SARADC_EXTERNAL_CH6                                 (0x1U << 6U)
#define    FL_SARADC_EXTERNAL_CH7                                 (0x1U << 7U)
#define    FL_SARADC_EXTERNAL_CH8                                 (0x1U << 8U)
#define    FL_SARADC_EXTERNAL_CH9                                 (0x1U << 9U)
#define    FL_SARADC_EXTERNAL_CH10                                (0x1U << 10U)
#define    FL_SARADC_EXTERNAL_CH11                                (0x1U << 11U)
#define    FL_SARADC_EXTERNAL_CH12                                (0x1U << 12U)
#define    FL_SARADC_EXTERNAL_CH13                                (0x1U << 13U)
#define    FL_SARADC_EXTERNAL_CH14                                (0x1U << 14U)
#define    FL_SARADC_INTERNAL_VREF                                (0x1U << 16U)
#define    FL_SARADC_ALL_CHANNEL                                  (0xfffffU << 0U)



#define    FL_SARADC_AWDG_CH0                                     (0x0U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH1                                     (0x1U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH2                                     (0x2U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH3                                     (0x3U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH4                                     (0x4U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH5                                     (0x5U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH6                                     (0x6U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH7                                     (0x7U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH8                                     (0x8U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH9                                     (0x9U << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH10                                    (0xaU << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH11                                    (0xbU << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH12                                    (0xcU << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH13                                    (0xdU << SARADC_CFG_AWDCH_Pos)
#define    FL_SARADC_AWDG_CH14                                    (0xeU << SARADC_CFG_AWDCH_Pos)


#define    FL_SARADC_AWDG_ALL_CHANNEL                             (0x0U << SARADC_CFG_AWDSC_Pos)
#define    FL_SARADC_AWDG_SINGLE_CHANNEL                          (0x1U << SARADC_CFG_AWDSC_Pos)


#define    FL_SARADC_OVERSAMPLING_SHIFT_0B                        (0x0U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_1B                        (0x1U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_2B                        (0x2U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_3B                        (0x3U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_4B                        (0x4U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_5B                        (0x5U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_6B                        (0x6U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_7B                        (0x7U << SARADC_CFG_OVSS_Pos)
#define    FL_SARADC_OVERSAMPLING_SHIFT_8B                        (0x8U << SARADC_CFG_OVSS_Pos)


#define    FL_SARADC_OVERSAMPLING_MUL_2X                          (0x0U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_4X                          (0x1U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_8X                          (0x2U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_16X                         (0x3U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_32X                         (0x4U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_64X                         (0x5U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_128X                        (0x6U << SARADC_CFG_OVSR_Pos)
#define    FL_SARADC_OVERSAMPLING_MUL_256X                        (0x7U << SARADC_CFG_OVSR_Pos)


#define    FL_SARADC_TRIGGER_EDGE_NONE                            (0x0U << SARADC_CFG_TRGCFG_Pos)
#define    FL_SARADC_TRIGGER_EDGE_RISING                          (0x1U << SARADC_CFG_TRGCFG_Pos)
#define    FL_SARADC_TRIGGER_EDGE_FALLING                         (0x2U << SARADC_CFG_TRGCFG_Pos)
#define    FL_SARADC_TRIGGER_EDGE_BOTH                            (0x3U << SARADC_CFG_TRGCFG_Pos)


#define    FL_SARADC_SINGLE_CONV_MODE_AUTO                        (0x0U << SARADC_CFG_SEMI_Pos)
#define    FL_SARADC_SINGLE_CONV_MODE_SEMIAUTO                    (0x1U << SARADC_CFG_SEMI_Pos)


#define    FL_SARADC_CONV_MODE_SINGLE                             (0x0U << SARADC_CFG_CONT_Pos)
#define    FL_SARADC_CONV_MODE_CONTINUOUS                         (0x1U << SARADC_CFG_CONT_Pos)


#define    FL_SARADC_TRGI_PA8                                     (0x0U << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_PB9                                     (0x1U << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_GPTIM0                                  (0x4U << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_GPTIM1                                  (0x5U << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_RTC                                     (0x7U << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_COMP1                                   (0xaU << SARADC_CFG_EXTS_Pos)
#define    FL_SARADC_TRGI_COMP2                                   (0xbU << SARADC_CFG_EXTS_Pos)


#define    FL_SARADC_SEQ_SCAN_DIR_FORWARD                         (0x0U << SARADC_CFG_SCANDIR_Pos)
#define    FL_SARADC_SEQ_SCAN_DIR_BACKWARD                        (0x1U << SARADC_CFG_SCANDIR_Pos)


#define    FL_SARADC_DMA_MODE_SINGLE                              (0x0U << SARADC_CFGR_DMACFG_Pos)
#define    FL_SARADC_DMA_MODE_CIRCULAR                            (0x1U << SARADC_CFGR_DMACFG_Pos)


#define    FL_SARADC_CH_SAMPLING_TIME_4_ADCCLK                    (0x0U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_6_ADCCLK                    (0x1U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_8_ADCCLK                    (0x2U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_12_ADCCLK                   (0x3U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_16_ADCCLK                   (0x4U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_24_ADCCLK                   (0x5U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_32_ADCCLK                   (0x6U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_48_ADCCLK                   (0x7U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_96_ADCCLK                   (0x8U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_128_ADCCLK                  (0x9U << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_160_ADCCLK                  (0xaU << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_192_ADCCLK                  (0xbU << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_256_ADCCLK                  (0xcU << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_320_ADCCLK                  (0xdU << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_384_ADCCLK                  (0xeU << SARADC_SMTR_SMTS_Pos)
#define    FL_SARADC_CH_SAMPLING_TIME_512_ADCCLK                  (0xfU << SARADC_SMTR_SMTS_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup ADC_FL_Exported_Functions ADC Exported Functions
  * @{
  */

/**
  * @brief    获取ADC ready标志

  * @rmtoll   ADC_ISR    RDY    FL_ADC_IsActiveFlag_Ready
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_Ready(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_RDY_Msk) == (SARADC_ISR_RDY_Msk));
}

/**
  * @brief    清除ADC ready标志


  * @rmtoll   ADC_ISR    RDY    FL_ADC_ClearFlag_Ready
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_Ready(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_RDY_Msk);
}

/**
  * @brief    获取ADC 模拟看门狗低于上限标志

  * @rmtoll   ADC_ISR    AWD_AH    FL_ADC_IsActiveFlag_AnalogWDGAboveHigh
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_AnalogWDGAboveHigh(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_AWD_AH_Msk) == (SARADC_ISR_AWD_AH_Msk));
}

/**
  * @brief    清除ADC 模拟看门狗低于上限标志


  * @rmtoll   ADC_ISR    AWD_AH    FL_ADC_ClearFlag_AnalogWDGAboveHigh
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_AnalogWDGAboveHigh(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_AWD_AH_Msk);
}

/**
  * @brief    获取ADC 模拟看门狗低于下限标志

  * @rmtoll   ADC_ISR    AWD_UL    FL_ADC_IsActiveFlag_AnalogWDGUnderLow
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_AnalogWDGUnderLow(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_AWD_UL_Msk) == (SARADC_ISR_AWD_UL_Msk));
}

/**
  * @brief    清除ADC 模拟看门狗低于下限标志


  * @rmtoll   ADC_ISR    AWD_UL    FL_ADC_ClearFlag_AnalogWDGUnderLow
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_AnalogWDGUnderLow(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_AWD_UL_Msk);
}

/**
  * @brief    获取ADC 忙标志

  * @rmtoll   ADC_ISR    BUSY    FL_ADC_IsActiveFlag_Busy
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_Busy(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_BUSY_Msk) == (SARADC_ISR_BUSY_Msk));
}

/**
  * @brief    获取ADC 数据冲突标志

  * @rmtoll   ADC_ISR    OVR    FL_ADC_IsActiveFlag_Overrun
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_Overrun(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_OVR_Msk) == (SARADC_ISR_OVR_Msk));
}

/**
  * @brief    清除ADC 数据冲突标志

  * @rmtoll   ADC_ISR    OVR    FL_ADC_ClearFlag_Overrun
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_Overrun(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_OVR_Msk);
}

/**
  * @brief    获取ADC 转换序列结束标志

  * @rmtoll   ADC_ISR    EOS    FL_ADC_IsActiveFlag_EndOfSequence
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_EndOfSequence(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_EOS_Msk) == (SARADC_ISR_EOS_Msk));
}

/**
  * @brief    清除ADC 转换序列结束标志

  * @rmtoll   ADC_ISR    EOS    FL_ADC_ClearFlag_EndOfSequence
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_EndOfSequence(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_EOS_Msk);
}

/**
  * @brief    获取ADC 单次转换结束标志

  * @rmtoll   ADC_ISR    EOC    FL_ADC_IsActiveFlag_EndOfConversion
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsActiveFlag_EndOfConversion(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_ISR, SARADC_ISR_EOC_Msk) == (SARADC_ISR_EOC_Msk));
}

/**
  * @brief    清除ADC 单次转换结束标志

  * @rmtoll   ADC_ISR    EOC    FL_ADC_ClearFlag_EndOfConversion
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_ClearFlag_EndOfConversion(SARADC_Type *ADCx)
{
    WRITE_REG(ADCx->ADC_ISR, SARADC_ISR_EOC_Msk);
}

/**
  * @brief    使能ADC模拟看门狗高于上限中断
  * @rmtoll   ADC_IER    AWD_AHIE    FL_ADC_EnableIT_AnalogWDGAboveHigh
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableIT_AnalogWDGAboveHigh(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_IER, SARADC_IER_AWD_AHIE_Msk);
}

/**
  * @brief    失能ADC模拟看门狗高于上限中断
  * @rmtoll   ADC_IER    AWD_AHIE    FL_ADC_DisableIT_AnalogWDGAboveHigh
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableIT_AnalogWDGAboveHigh(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_IER, SARADC_IER_AWD_AHIE_Msk);
}

/**
  * @brief    获取ADC模拟看门狗高于上限中断使能状态
  * @rmtoll   ADC_IER    AWD_AHIE    FL_ADC_IsEnabledIT_AnalogWDGAboveHigh
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledIT_AnalogWDGAboveHigh(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_IER, SARADC_IER_AWD_AHIE_Msk) == SARADC_IER_AWD_AHIE_Msk);
}

/**
  * @brief    使能ADC模拟看门狗低于下限中断
  * @rmtoll   ADC_IER    AWD_ULIE    FL_ADC_EnableIT_AnalogWDGUnderLow
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableIT_AnalogWDGUnderLow(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_IER, SARADC_IER_AWD_ULIE_Msk);
}

/**
  * @brief    失能ADC模拟看门狗低于下限中断
  * @rmtoll   ADC_IER    AWD_ULIE    FL_ADC_DisableIT_AnalogWDGUnderLow
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableIT_AnalogWDGUnderLow(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_IER, SARADC_IER_AWD_ULIE_Msk);
}

/**
  * @brief    获取ADC模拟看门狗低于下限中断使能状态
  * @rmtoll   ADC_IER    AWD_ULIE    FL_ADC_IsEnabledIT_AnalogWDGUnderLow
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledIT_AnalogWDGUnderLow(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_IER, SARADC_IER_AWD_ULIE_Msk) == SARADC_IER_AWD_ULIE_Msk);
}

/**
  * @brief    使能ADC数据冲突中断
  * @rmtoll   ADC_IER    OVRIE    FL_ADC_EnableIT_Overrun
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableIT_Overrun(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_IER, SARADC_IER_OVRIE_Msk);
}

/**
  * @brief    失能ADC数据冲突中断
  * @rmtoll   ADC_IER    OVRIE    FL_ADC_DisableIT_Overrun
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableIT_Overrun(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_IER, SARADC_IER_OVRIE_Msk);
}

/**
  * @brief    获取ADC数据冲突中断使能状态
  * @rmtoll   ADC_IER    OVRIE    FL_ADC_IsEnabledIT_Overrun
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledIT_Overrun(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_IER, SARADC_IER_OVRIE_Msk) == SARADC_IER_OVRIE_Msk);
}

/**
  * @brief    使能ADC 转换序列完成中断
  * @rmtoll   ADC_IER    EOSIE    FL_ADC_EnableIT_EndOfSequence
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableIT_EndOfSequence(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_IER, SARADC_IER_EOSIE_Msk);
}

/**
  * @brief    失能ADC转换序列完成中断
  * @rmtoll   ADC_IER    EOSIE    FL_ADC_DisableIT_EndOfSequence
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableIT_EndOfSequence(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_IER, SARADC_IER_EOSIE_Msk);
}

/**
  * @brief    获取ADC转换序列完成中断使能状态
  * @rmtoll   ADC_IER    EOSIE    FL_ADC_IsEnabledIT_EndOfSequence
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledIT_EndOfSequence(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_IER, SARADC_IER_EOSIE_Msk) == SARADC_IER_EOSIE_Msk);
}

/**
  * @brief    使能ADC 单次转换完成中断
  * @rmtoll   ADC_IER    EOCIE    FL_ADC_EnableIT_EndOfConversion
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableIT_EndOfConversion(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_IER, SARADC_IER_EOCIE_Msk);
}

/**
  * @brief    失能ADC单次转换完成中断
  * @rmtoll   ADC_IER    EOCIE    FL_ADC_DisableIT_EndOfConversion
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableIT_EndOfConversion(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_IER, SARADC_IER_EOCIE_Msk);
}

/**
  * @brief    获取ADC单次转换完成中断使能状态
  * @rmtoll   ADC_IER    EOCIE    FL_ADC_IsEnabledIT_EndOfConversion
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledIT_EndOfConversion(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_IER, SARADC_IER_EOCIE_Msk) == SARADC_IER_EOCIE_Msk);
}

/**
  * @brief    使能ADC软件触发转换
  * @rmtoll   ADC_CR    START    FL_ADC_EnableSWConversion
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableSWConversion(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CR, SARADC_CR_START_Msk);
}

/**
  * @brief    使能ADC
  * @rmtoll   ADC_CR    PWD    FL_ADC_Enable
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_Enable(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CR, SARADC_CR_PWD_Msk);
}

/**
  * @brief    关闭ADC
  * @rmtoll   ADC_CR    PWD    FL_ADC_Disable
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_Disable(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CR, SARADC_CR_PWD_Msk);
}

/**
  * @brief    获取ADC使能状态
  * @rmtoll   ADC_CR    PWD    FL_ADC_IsEnabled
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabled(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CR, SARADC_CR_PWD_Msk) != SARADC_CR_PWD_Msk);
}

/**
  * @brief    设置ADC模拟看门狗监控通道
  * @rmtoll   ADC_CFG    AWDCH    FL_ADC_SetAnalogWDGMonitorChannel
  * @param    ADCx ADC instance
  * @param    monitorChannel This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_AWDG_CH0
  *           @arg @ref FL_SARADC_AWDG_CH1
  *           @arg @ref FL_SARADC_AWDG_CH2
  *           @arg @ref FL_SARADC_AWDG_CH3
  *           @arg @ref FL_SARADC_AWDG_CH4
  *           @arg @ref FL_SARADC_AWDG_CH5
  *           @arg @ref FL_SARADC_AWDG_CH6
  *           @arg @ref FL_SARADC_AWDG_CH7
  *           @arg @ref FL_SARADC_AWDG_CH8
  *           @arg @ref FL_SARADC_AWDG_CH9
  *           @arg @ref FL_SARADC_AWDG_CH10
  *           @arg @ref FL_SARADC_AWDG_CH11
  *           @arg @ref FL_SARADC_AWDG_CH12
  *           @arg @ref FL_SARADC_AWDG_CH13
  *           @arg @ref FL_SARADC_AWDG_CH14
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetAnalogWDGMonitorChannel(SARADC_Type *ADCx, uint32_t monitorChannel)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_AWDCH_Msk, monitorChannel);
}

/**
  * @brief    读取ADC模拟看门狗监控通道
  * @rmtoll   ADC_CFG    AWDCH    FL_ADC_GetAnalogWDGMonitorChannel
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_AWDG_CH0
  *           @arg @ref FL_SARADC_AWDG_CH1
  *           @arg @ref FL_SARADC_AWDG_CH2
  *           @arg @ref FL_SARADC_AWDG_CH3
  *           @arg @ref FL_SARADC_AWDG_CH4
  *           @arg @ref FL_SARADC_AWDG_CH5
  *           @arg @ref FL_SARADC_AWDG_CH6
  *           @arg @ref FL_SARADC_AWDG_CH7
  *           @arg @ref FL_SARADC_AWDG_CH8
  *           @arg @ref FL_SARADC_AWDG_CH9
  *           @arg @ref FL_SARADC_AWDG_CH10
  *           @arg @ref FL_SARADC_AWDG_CH11
  *           @arg @ref FL_SARADC_AWDG_CH12
  *           @arg @ref FL_SARADC_AWDG_CH13
  *           @arg @ref FL_SARADC_AWDG_CH14
  */
__STATIC_INLINE uint32_t FL_ADC_GetAnalogWDGMonitorChannel(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_AWDCH_Msk));
}

/**
  * @brief    设置ADC模拟看门狗监控模式
  * @rmtoll   ADC_CFG    AWDSC    FL_ADC_SetAnalogWDGMonitorMode
  * @param    ADCx ADC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_AWDG_ALL_CHANNEL
  *           @arg @ref FL_SARADC_AWDG_SINGLE_CHANNEL
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetAnalogWDGMonitorMode(SARADC_Type *ADCx, uint32_t mode)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_AWDSC_Msk, mode);
}

/**
  * @brief    读取ADC模拟看门狗监控模式
  * @rmtoll   ADC_CFG    AWDSC    FL_ADC_GetAnalogWDGMonitorMode
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_AWDG_ALL_CHANNEL
  *           @arg @ref FL_SARADC_AWDG_SINGLE_CHANNEL
  */
__STATIC_INLINE uint32_t FL_ADC_GetAnalogWDGMonitorMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_AWDSC_Msk));
}

/**
  * @brief    使能ADC 模拟看门狗
  * @rmtoll   ADC_CFG    AWDEN    FL_ADC_EnableAnalogWDG
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableAnalogWDG(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFG_AWDEN_Msk);
}

/**
  * @brief    失能ADC模拟看门狗
  * @rmtoll   ADC_CFG    AWDEN    FL_ADC_DisableAnalogWDG
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableAnalogWDG(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFG_AWDEN_Msk);
}

/**
  * @brief    获取ADC 模拟看门狗
  * @rmtoll   ADC_CFG    AWDEN    FL_ADC_IsEnabledAnalogWDG
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledAnalogWDG(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_AWDEN_Msk) == SARADC_CFG_AWDEN_Msk);
}

/**
  * @brief    设置ADC过采样移位
  * @rmtoll   ADC_CFG    OVSS    FL_ADC_SetOverSamplingShift
  * @param    ADCx ADC instance
  * @param    shift This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_0B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_1B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_2B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_3B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_4B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_5B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_6B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_7B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_8B
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetOverSamplingShift(SARADC_Type *ADCx, uint32_t shift)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_OVSS_Msk, shift);
}

/**
  * @brief    读取ADC过采样移位
  * @rmtoll   ADC_CFG    OVSS    FL_ADC_GetOverSamplingShift
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_0B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_1B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_2B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_3B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_4B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_5B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_6B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_7B
  *           @arg @ref FL_SARADC_OVERSAMPLING_SHIFT_8B
  */
__STATIC_INLINE uint32_t FL_ADC_GetOverSamplingShift(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_OVSS_Msk));
}

/**
  * @brief    设置ADC过采样倍数
  * @rmtoll   ADC_CFG    OVSR    FL_ADC_SetOverSamplingMultiplier
  * @param    ADCx ADC instance
  * @param    mul This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_2X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_4X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_8X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_16X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_32X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_64X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_128X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_256X
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetOverSamplingMultiplier(SARADC_Type *ADCx, uint32_t mul)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_OVSR_Msk, mul);
}

/**
  * @brief    读取ADC过采样倍数
  * @rmtoll   ADC_CFG    OVSR    FL_ADC_GetOverSamplingMultiplier
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_2X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_4X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_8X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_16X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_32X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_64X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_128X
  *           @arg @ref FL_SARADC_OVERSAMPLING_MUL_256X
  */
__STATIC_INLINE uint32_t FL_ADC_GetOverSamplingMultiplier(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_OVSR_Msk));
}

/**
  * @brief    使能ADC 过采样
  * @rmtoll   ADC_CFG    OVSEN    FL_ADC_EnableOverSampling
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableOverSampling(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFG_OVSEN_Msk);
}

/**
  * @brief    失能ADC 过采样
  * @rmtoll   ADC_CFG    OVSEN    FL_ADC_DisableOverSampling
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableOverSampling(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFG_OVSEN_Msk);
}

/**
  * @brief    获取ADC 过采样使能状态
  * @rmtoll   ADC_CFG    OVSEN    FL_ADC_IsEnabledOverSampling
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledOverSampling(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_OVSEN_Msk) == SARADC_CFG_OVSEN_Msk);
}

/**
  * @brief    使能ADC 引脚触发滤波
  * @rmtoll   ADC_CFG    IOTRFEN    FL_ADC_EnableTriggerFilter
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableTriggerFilter(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFG_IOTRFEN_Msk);
}

/**
  * @brief    失能ADC引脚触发滤波
  * @rmtoll   ADC_CFG    IOTRFEN    FL_ADC_DisableTriggerFilter
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableTriggerFilter(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFG_IOTRFEN_Msk);
}

/**
  * @brief    获取ADC 引脚触发滤波使能状态
  * @rmtoll   ADC_CFG    IOTRFEN    FL_ADC_IsEnabledTriggerFilter
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledTriggerFilter(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_IOTRFEN_Msk) == SARADC_CFG_IOTRFEN_Msk);
}

/**
  * @brief    设置ADC触发边沿
  * @rmtoll   ADC_CFG    TRGCFG    FL_ADC_SetTriggerEdge
  * @param    ADCx ADC instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_NONE
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_RISING
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_BOTH
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetTriggerEdge(SARADC_Type *ADCx, uint32_t edge)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_TRGCFG_Msk, edge);
}

/**
  * @brief    读取ADC触发边沿
  * @rmtoll   ADC_CFG    TRGCFG    FL_ADC_GetTriggerEdge
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_NONE
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_RISING
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_FALLING
  *           @arg @ref FL_SARADC_TRIGGER_EDGE_BOTH
  */
__STATIC_INLINE uint32_t FL_ADC_GetTriggerEdge(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_TRGCFG_Msk));
}

/**
  * @brief    设置ADC单次转换模式
  * @rmtoll   ADC_CFG    SEMI    FL_ADC_SetSingleConversionAutoMode
  * @param    ADCx ADC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_SINGLE_CONV_MODE_AUTO
  *           @arg @ref FL_SARADC_SINGLE_CONV_MODE_SEMIAUTO
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetSingleConversionAutoMode(SARADC_Type *ADCx, uint32_t mode)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_SEMI_Msk, mode);
}

/**
  * @brief    读取ADC单次转换模式
  * @rmtoll   ADC_CFG    SEMI    FL_ADC_GetSingleConversionAutoMode
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_SINGLE_CONV_MODE_AUTO
  *           @arg @ref FL_SARADC_SINGLE_CONV_MODE_SEMIAUTO
  */
__STATIC_INLINE uint32_t FL_ADC_GetSingleConversionAutoMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_SEMI_Msk));
}

/**
  * @brief    使能ADC 等待模式
  * @rmtoll   ADC_CFG    WAIT    FL_ADC_EnableWaitMode
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableWaitMode(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFG_WAIT_Msk);
}

/**
  * @brief    失能ADC 等待模式
  * @rmtoll   ADC_CFG    WAIT    FL_ADC_DisableWaitMode
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableWaitMode(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFG_WAIT_Msk);
}

/**
  * @brief    获取ADC 等待模式使能状态
  * @rmtoll   ADC_CFG    WAIT    FL_ADC_IsEnabledWaitMode
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledWaitMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_WAIT_Msk) == SARADC_CFG_WAIT_Msk);
}

/**
  * @brief    设置ADC转换模式
  * @rmtoll   ADC_CFG    CONT    FL_ADC_SetConversionMode
  * @param    ADCx ADC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_CONV_MODE_SINGLE
  *           @arg @ref FL_SARADC_CONV_MODE_CONTINUOUS
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetConversionMode(SARADC_Type *ADCx, uint32_t mode)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_CONT_Msk, mode);
}

/**
  * @brief    读取ADC转换模式
  * @rmtoll   ADC_CFG    CONT    FL_ADC_GetConversionMode
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_CONV_MODE_SINGLE
  *           @arg @ref FL_SARADC_CONV_MODE_CONTINUOUS
  */
__STATIC_INLINE uint32_t FL_ADC_GetConversionMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_CONT_Msk));
}

/**
  * @brief    使能ADC Overrun模式
  * @rmtoll   ADC_CFG    OVRM    FL_ADC_EnableOverrunMode
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableOverrunMode(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFG_OVRM_Msk);
}

/**
  * @brief    失能ADC Overrun模式
  * @rmtoll   ADC_CFG    OVRM    FL_ADC_DisableOverrunMode
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableOverrunMode(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFG_OVRM_Msk);
}

/**
  * @brief    获取ADC Overrun模式使能状态
  * @rmtoll   ADC_CFG    OVRM    FL_ADC_IsEnabledOverrunMode
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledOverrunMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_OVRM_Msk) == SARADC_CFG_OVRM_Msk);
}

/**
  * @brief    设置ADC触发源
  * @rmtoll   ADC_CFG    EXTS    FL_ADC_SetTriggerSource
  * @param    ADCx ADC instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_TRGI_PA8
  *           @arg @ref FL_SARADC_TRGI_PB9
  *           @arg @ref FL_SARADC_TRGI_GPTIM0
  *           @arg @ref FL_SARADC_TRGI_GPTIM1
  *           @arg @ref FL_SARADC_TRGI_RTC
  *           @arg @ref FL_SARADC_TRGI_BSTIM1
  *           @arg @ref FL_SARADC_TRGI_COMP1
  *           @arg @ref FL_SARADC_TRGI_COMP2
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetTriggerSource(SARADC_Type *ADCx, uint32_t source)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_EXTS_Msk, source);
}

/**
  * @brief    读取ADC触发源
  * @rmtoll   ADC_CFG    EXTS    FL_ADC_GetTriggerSource
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_TRGI_PA8
  *           @arg @ref FL_SARADC_TRGI_PB9
  *           @arg @ref FL_SARADC_TRGI_GPTIM0
  *           @arg @ref FL_SARADC_TRGI_GPTIM1
  *           @arg @ref FL_SARADC_TRGI_RTC
  *           @arg @ref FL_SARADC_TRGI_BSTIM1
  *           @arg @ref FL_SARADC_TRGI_COMP1
  *           @arg @ref FL_SARADC_TRGI_COMP2
  */
__STATIC_INLINE uint32_t FL_ADC_GetTriggerSource(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_EXTS_Msk));
}

/**
  * @brief    设置ADC通道扫描顺序
  * @rmtoll   ADC_CFG    SCANDIR    FL_ADC_SetSequenceScanDirection
  * @param    ADCx ADC instance
  * @param    dir This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_SEQ_SCAN_DIR_FORWARD
  *           @arg @ref FL_SARADC_SEQ_SCAN_DIR_BACKWARD
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetSequenceScanDirection(SARADC_Type *ADCx, uint32_t dir)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFG_SCANDIR_Msk, dir);
}

/**
  * @brief    读取ADC通道扫描顺序
  * @rmtoll   ADC_CFG    SCANDIR    FL_ADC_GetSequenceScanDirection
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_SEQ_SCAN_DIR_FORWARD
  *           @arg @ref FL_SARADC_SEQ_SCAN_DIR_BACKWARD
  */
__STATIC_INLINE uint32_t FL_ADC_GetSequenceScanDirection(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFG_SCANDIR_Msk));
}

/**
  * @brief    设置ADC DMA模式
  * @rmtoll   ADC_CFG    DMACFG    FL_ADC_SetDMAMode
  * @param    ADCx ADC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_DMA_MODE_SINGLE
  *           @arg @ref FL_SARADC_DMA_MODE_CIRCULAR
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetDMAMode(SARADC_Type *ADCx, uint32_t mode)
{
    MODIFY_REG(ADCx->ADC_CFG, SARADC_CFGR_DMACFG_Msk, mode);
}

/**
  * @brief    读取ADC DMA模式
  * @rmtoll   ADC_CFG    DMACFG    FL_ADC_GetDMAMode
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_DMA_MODE_SINGLE
  *           @arg @ref FL_SARADC_DMA_MODE_CIRCULAR
  */
__STATIC_INLINE uint32_t FL_ADC_GetDMAMode(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFGR_DMACFG_Msk));
}

/**
  * @brief    使能ADC DMA
  * @rmtoll   ADC_CFG    DMAEN    FL_ADC_EnableDMAReq
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableDMAReq(SARADC_Type *ADCx)
{
    SET_BIT(ADCx->ADC_CFG, SARADC_CFGR_DMAEN_Msk);
}

/**
  * @brief    失能ADC DMA
  * @rmtoll   ADC_CFG    DMAEN    FL_ADC_DisableDMAReq
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableDMAReq(SARADC_Type *ADCx)
{
    CLEAR_BIT(ADCx->ADC_CFG, SARADC_CFGR_DMAEN_Msk);
}

/**
  * @brief    获取ADC DMA使能状态
  * @rmtoll   ADC_CFG    DMAEN    FL_ADC_IsEnabledDMAReq
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledDMAReq(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CFG, SARADC_CFGR_DMAEN_Msk) == SARADC_CFGR_DMAEN_Msk);
}

/**
  * @brief    设置ADC通道采样时间
  * @rmtoll   ADC_SMTR    SMTS    FL_ADC_SetChannelSamplingTime
  * @param    ADCx ADC instance
  * @param    time This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_4_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_6_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_8_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_12_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_16_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_24_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_32_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_48_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_96_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_128_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_160_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_192_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_256_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_320_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_384_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_512_ADCCLK
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_SetChannelSamplingTime(SARADC_Type *ADCx, uint32_t time)
{
    MODIFY_REG(ADCx->ADC_SMTR, SARADC_SMTR_SMTS_Msk, time);
}

/**
  * @brief    读取ADC通道采样时间
  * @rmtoll   ADC_SMTR    SMTS    FL_ADC_GetChannelSamplingTime
  * @param    ADCx ADC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_4_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_6_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_8_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_12_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_16_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_24_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_32_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_48_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_96_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_128_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_160_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_192_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_256_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_320_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_384_ADCCLK
  *           @arg @ref FL_SARADC_CH_SAMPLING_TIME_512_ADCCLK
  */
__STATIC_INLINE uint32_t FL_ADC_GetChannelSamplingTime(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_SMTR, SARADC_SMTR_SMTS_Msk));
}

/**
  * @brief    使能ADC 通道
  * @rmtoll   ADC_CHER        FL_ADC_EnableSequencerChannel
  * @param    ADCx ADC instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_EXTERNAL_CH0
  *           @arg @ref FL_SARADC_EXTERNAL_CH1
  *           @arg @ref FL_SARADC_EXTERNAL_CH2
  *           @arg @ref FL_SARADC_EXTERNAL_CH3
  *           @arg @ref FL_SARADC_EXTERNAL_CH4
  *           @arg @ref FL_SARADC_EXTERNAL_CH5
  *           @arg @ref FL_SARADC_EXTERNAL_CH6
  *           @arg @ref FL_SARADC_EXTERNAL_CH7
  *           @arg @ref FL_SARADC_EXTERNAL_CH8
  *           @arg @ref FL_SARADC_EXTERNAL_CH9
  *           @arg @ref FL_SARADC_EXTERNAL_CH10
  *           @arg @ref FL_SARADC_EXTERNAL_CH11
  *           @arg @ref FL_SARADC_EXTERNAL_CH12
  *           @arg @ref FL_SARADC_EXTERNAL_CH13
  *           @arg @ref FL_SARADC_EXTERNAL_CH14
  *           @arg @ref FL_SARADC_INTERNAL_VREF
  *           @arg @ref FL_SARADC_ALL_CHANNEL
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableSequencerChannel(SARADC_Type *ADCx, uint32_t channel)
{
    SET_BIT(ADCx->ADC_CHER, ((channel & 0xffffffff) << 0x0U));
}

/**
  * @brief    失能ADC 通道
  * @rmtoll   ADC_CHER        FL_ADC_DisableSequencerChannel
  * @param    ADCx ADC instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_EXTERNAL_CH0
  *           @arg @ref FL_SARADC_EXTERNAL_CH1
  *           @arg @ref FL_SARADC_EXTERNAL_CH2
  *           @arg @ref FL_SARADC_EXTERNAL_CH3
  *           @arg @ref FL_SARADC_EXTERNAL_CH4
  *           @arg @ref FL_SARADC_EXTERNAL_CH5
  *           @arg @ref FL_SARADC_EXTERNAL_CH6
  *           @arg @ref FL_SARADC_EXTERNAL_CH7
  *           @arg @ref FL_SARADC_EXTERNAL_CH8
  *           @arg @ref FL_SARADC_EXTERNAL_CH9
  *           @arg @ref FL_SARADC_EXTERNAL_CH10
  *           @arg @ref FL_SARADC_EXTERNAL_CH11
  *           @arg @ref FL_SARADC_EXTERNAL_CH12
  *           @arg @ref FL_SARADC_EXTERNAL_CH13
  *           @arg @ref FL_SARADC_EXTERNAL_CH14
  *           @arg @ref FL_SARADC_INTERNAL_VREF
  *           @arg @ref FL_SARADC_ALL_CHANNEL
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableSequencerChannel(SARADC_Type *ADCx, uint32_t channel)
{
    CLEAR_BIT(ADCx->ADC_CHER, ((channel & 0xffffffff) << 0x0U));
}

/**
  * @brief    获取ADC 通道
  * @rmtoll   ADC_CHER        FL_ADC_IsEnabledSequencerChannel
  * @param    ADCx ADC instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_SARADC_EXTERNAL_CH0
  *           @arg @ref FL_SARADC_EXTERNAL_CH1
  *           @arg @ref FL_SARADC_EXTERNAL_CH2
  *           @arg @ref FL_SARADC_EXTERNAL_CH3
  *           @arg @ref FL_SARADC_EXTERNAL_CH4
  *           @arg @ref FL_SARADC_EXTERNAL_CH5
  *           @arg @ref FL_SARADC_EXTERNAL_CH6
  *           @arg @ref FL_SARADC_EXTERNAL_CH7
  *           @arg @ref FL_SARADC_EXTERNAL_CH8
  *           @arg @ref FL_SARADC_EXTERNAL_CH9
  *           @arg @ref FL_SARADC_EXTERNAL_CH10
  *           @arg @ref FL_SARADC_EXTERNAL_CH11
  *           @arg @ref FL_SARADC_EXTERNAL_CH12
  *           @arg @ref FL_SARADC_EXTERNAL_CH13
  *           @arg @ref FL_SARADC_EXTERNAL_CH14
  *           @arg @ref FL_SARADC_INTERNAL_VREF
  *           @arg @ref FL_SARADC_ALL_CHANNEL
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledSequencerChannel(SARADC_Type *ADCx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_CHER, ((channel & 0x7fff) << 0x0U)) == ((channel & 0x7fff) << 0x0U));
}

/**
  * @brief    获取ADC 转换数据
  * @rmtoll   ADC_DR        FL_ADC_ReadConversionData
  * @param    ADCx ADC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_ADC_ReadConversionData(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_DR, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    写入ADC模拟看门狗上限阈值
  * @rmtoll   ADC_HLTR    AWD_HT    FL_ADC_WriteAnalogWDGHighThreshold
  * @param    ADCx ADC instance
  * @param    threshold 
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_WriteAnalogWDGHighThreshold(SARADC_Type *ADCx, uint32_t threshold)
{
    MODIFY_REG(ADCx->ADC_HLTR, (0xfffU << 16U), (threshold << 16U));
}

/**
  * @brief    读取ADC模拟看门狗上限阈值
  * @rmtoll   ADC_HLTR    AWD_HT    FL_ADC_ReadAnalogWDGHighThreshold
  * @param    ADCx ADC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_ADC_ReadAnalogWDGHighThreshold(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_HLTR, (0xfffU << 16U)) >> 16U);
}

/**
  * @brief    写入ADC模拟看门狗下限阈值
  * @rmtoll   ADC_HLTR    AWD_LT    FL_ADC_WriteAnalogWDGLowThreshold
  * @param    ADCx ADC instance
  * @param    threshold 
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_WriteAnalogWDGLowThreshold(SARADC_Type *ADCx, uint32_t threshold)
{
    MODIFY_REG(ADCx->ADC_HLTR, (0xfffU << 0U), (threshold << 0U));
}

/**
  * @brief    读取ADC模拟看门狗下限阈值
  * @rmtoll   ADC_HLTR    AWD_LT    FL_ADC_ReadAnalogWDGLowThreshold
  * @param    ADCx ADC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_ADC_ReadAnalogWDGLowThreshold(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(ADCx->ADC_HLTR, (0xfffU << 0U)) >> 0U);
}

/**
  * @brief    使能VREFBuffer输出
  * @rmtoll   BUFFCTRL    VREFBUFFER_OUTEN    FL_ADC_EnableBufferOutputControl
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableBufferOutputControl(SARADC_Type *ADCx)
{
    SET_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk);
}

/**
  * @brief    失能VREFBuffer输出
  * @rmtoll   BUFFCTRL    VREFBUFFER_OUTEN    FL_ADC_DisableBufferOutputControl
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableBufferOutputControl(SARADC_Type *ADCx)
{
    CLEAR_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk);
}

/**
  * @brief    获取VREFBuffer输出状态
  * @rmtoll   BUFFCTRL    VREFBUFFER_OUTEN    FL_ADC_IsEnabledBufferOutputControl
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledBufferOutputControl(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk) == SARADC_BUFFCTRL_VREFBUFFER_OUTEN_Msk);
}

/**
  * @brief    使能VREFBuffer
  * @rmtoll   BUFFCTRL    VREFBUFFER_EN    FL_ADC_EnableBuffer
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_EnableBuffer(SARADC_Type *ADCx)
{
    SET_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_EN_Msk);
}

/**
  * @brief    失能VREFBuffer
  * @rmtoll   BUFFCTRL    VREFBUFFER_EN    FL_ADC_DisableBuffer
  * @param    ADCx ADC instance
  * @retval   None
  */
__STATIC_INLINE void FL_ADC_DisableBuffer(SARADC_Type *ADCx)
{
    CLEAR_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_EN_Msk);
}

/**
  * @brief    获取VREFBuffer使能状态
  * @rmtoll   BUFFCTRL    VREFBUFFER_EN    FL_ADC_IsEnabledBuffer
  * @param    ADCx ADC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_ADC_IsEnabledBuffer(SARADC_Type *ADCx)
{
    return (uint32_t)(READ_BIT(SVD->BUFFERCTRL, SARADC_BUFFCTRL_VREFBUFFER_EN_Msk) == SARADC_BUFFCTRL_VREFBUFFER_EN_Msk);
}

/**
  * @}
  */

/** @defgroup ADC_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_ADC_CommonDeInit(void);
FL_ErrorStatus FL_ADC_CommonInit(FL_ADC_CommonInitTypeDef *ADC_CommonInitStruct);
void FL_ADC_CommonStructInit(FL_ADC_CommonInitTypeDef *ADC_CommonInitStruct);
FL_ErrorStatus FL_ADC_DeInit(SARADC_Type *ADCx);
FL_ErrorStatus FL_ADC_Init(SARADC_Type *ADCx, FL_ADC_InitTypeDef  *ADC_InitStruct);
void FL_ADC_StructInit(FL_ADC_InitTypeDef *ADC_InitStruct);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_ADC_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-06*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
