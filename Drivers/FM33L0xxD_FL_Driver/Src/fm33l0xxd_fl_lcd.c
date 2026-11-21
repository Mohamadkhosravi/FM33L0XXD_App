/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_lcd.c
  * @author  FMSH Application Team
  * @brief   Src file of LCD FL Module
  * @version  V0.0.3
  * @date     23. March 2026
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


/* Includes ------------------------------------------------------------------*/
#include "fm33l0xxd_fl.h"

/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @addtogroup LCD
  * @{
  */

#ifdef FL_LCD_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup Private_Macros
  * @{
  */

#define         IS_FL_LCD_INSTANCE(INTENCE)             ((INTENCE) == LCD)

#define         IS_FL_LCD_BIASCURRENT(__VALUE__)        (((__VALUE__) == (FL_LCD_BIAS_CURRENT_VERYHIGH))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_CURRENT_HIGH))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_CURRENT_MEDIUM))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_CURRENT_LOW)))

#define         IS_FL_LCD_ENMODE(__VALUE__)             (((__VALUE__) == (FL_LCD_DRIVER_MODE_INNER_RESISTER))||\
                                                        ((__VALUE__) == (FL_LCD_DRIVER_MODE_NULL)))

#define         IS_FL_LCD_BIASVOLTAGE(__VALUE__)        (((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL0))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL1))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL2))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL3))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL4))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL5))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL6))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL7))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL8))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL9))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL10))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL11))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL12))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL13))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL14))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_VOLTAGE_LEVEL15)))

#define         IS_FL_LCD_BIASMD(__VALUE__)             (((__VALUE__) == (FL_LCD_BIAS_MODE_4BIAS))||\
                                                        ((__VALUE__) == (FL_LCD_BIAS_MODE_3BIAS)))

#define         IS_FL_LCD_BWFT(__VALUE__)               (((__VALUE__) == (FL_LCD_WAVEFORM_TYPEA))||\
                                                        ((__VALUE__) == (FL_LCD_WAVEFORM_TYPEB)))

#define         IS_FL_LCD_LMUX(__VALUE__)               (((__VALUE__) == (FL_LCD_COM_NUM_4COM))||\
                                                        ((__VALUE__) == (FL_LCD_COM_NUM_6COM))||\
                                                        ((__VALUE__) == (FL_LCD_COM_NUM_8COM)))


/**
  * @}
  */
/** @addtogroup LCD_FL_EF_Init
  * @{
  */

/**
  * @brief  获取LCD工作频率寄存器值
  * @param  LCDx
  * @retval ErrorStatus枚举值:
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
static uint32_t FL_LCD_DisplayFreq(uint32_t wavetype, uint32_t freq)
{
    uint32_t displayFreq = 32u;
    uint16_t CLK=32768;
    if((freq > 0) && (freq <= 100))
    {
        if(wavetype == FL_LCD_WAVEFORM_TYPEA)
        {
            switch(FL_LCD_GetCOMNumber(LCD))
            {
                case FL_LCD_COM_NUM_4COM:
                    displayFreq = (CLK / (4 * freq * 2));
                    break;
                case FL_LCD_COM_NUM_6COM:
                    displayFreq = (CLK / (6 * freq * 2));
                    break;
                case FL_LCD_COM_NUM_8COM:
                    displayFreq = (CLK / (8 * freq * 2));
                    break;
                default:
                    displayFreq = (CLK / (4 * freq * 2));
                    break;
            }
        }
        else
        {
            switch(FL_LCD_GetCOMNumber(LCD))
            {
                case FL_LCD_COM_NUM_4COM:
                    displayFreq = (CLK / (4 * freq * 4));
                    break;
                case FL_LCD_COM_NUM_6COM:
                    displayFreq = (CLK / (6 * freq * 4));
                    break;
                case FL_LCD_COM_NUM_8COM:
                    displayFreq = (CLK / (8 * freq * 4));
                    break;
                default:
                    displayFreq = (CLK / (4 * freq * 4));
                    break;
            }
        }
    }
    displayFreq = displayFreq & 0x000000ffu;
    return displayFreq;
}

/**
  * @brief  获取LCD闪烁时间寄存器值
  * @param  LCDx
  * @retval ErrorStatus枚举值:
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
static uint32_t FL_LCD_FlickTime(uint32_t timevalue)
{
    uint32_t stepTime;
    uint32_t TimeResult = 0u;
	uint16_t CLK=32768;
    switch(FL_LCD_GetCOMNumber(LCD))
    {
        case FL_LCD_COM_NUM_4COM:
            stepTime = (4 * FL_LCD_ReadDisplayFrequency(LCD) * 2 * 16 * 1000) / CLK;
            break;
        case FL_LCD_COM_NUM_6COM:
            stepTime = (6 * FL_LCD_ReadDisplayFrequency(LCD) * 2 * 16 * 1000) / CLK;
            break;
        case FL_LCD_COM_NUM_8COM:
            stepTime = (8 * FL_LCD_ReadDisplayFrequency(LCD) * 2 * 16 * 1000) / CLK;
            break;
        default:
            stepTime = (4 * FL_LCD_ReadDisplayFrequency(LCD) * 2 * 16 * 1000) / CLK;
            break;
    }
    TimeResult = timevalue / stepTime;
    return TimeResult;
}


/**
  * @}
  */

/* Exported functions -----------------------------------------------*/
/** @addtogroup LCD_FL_EF_Init
  * @{
  */

/**
  * @brief  复位LCD
  *
  * @param  LCDx 外设入口地址
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_LCD_DeInit(LCD_Type *LCDx)
{
    assert_param(IS_FL_LCD_INSTANCE(LCDx));
    /* 使能外设复位 */
    FL_RMU_EnablePeripheralReset(RMU);
    /* 复位LCD外设寄存器 */
    FL_RMU_EnableResetAPBPeripheral1(RMU,FL_RMU_LCDRST);
    FL_RMU_DisableResetAPBPeripheral1(RMU,FL_RMU_LCDRST);
    /* 关闭外设总线始时钟和工作时钟 */
    FL_RCC_DisableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_LCD);
    /* 锁定外设复位 */
    FL_RMU_DisablePeripheralReset(RMU);
    return FL_PASS;
}

/**
  * @brief  配置LCD
  * @param  LCDx 外设入口地址
  * @param  initStruct 指向 @ref FL_LPTIM32_InitTypeDef 结构体的指针
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_LCD_Init(LCD_Type *LCDx, FL_LCD_InitTypeDef *initStruct)
{
    assert_param(IS_FL_LCD_INSTANCE(LCDx));
    assert_param(IS_FL_LCD_BIASCURRENT(initStruct->biasCurrent));
    assert_param(IS_FL_LCD_ENMODE(initStruct->mode));
    assert_param(IS_FL_LCD_BIASVOLTAGE(initStruct->biasVoltage));
    assert_param(IS_FL_LCD_BIASMD(initStruct->biasMode));
    assert_param(IS_FL_LCD_BWFT(initStruct->waveform));
    assert_param(IS_FL_LCD_LMUX(initStruct->COMxNum));
    /* 外设总线始时钟 */
    FL_RCC_EnableGroup2BusClock(FL_RCC_GROUP2_BUSCLK_LCD);
    /* 电流源电流控制 */
    FL_LCD_SetBiasCurrent(LCD, initStruct->biasCurrent);
    /* LCD驱动模式 */
    FL_LCD_SetDriverMode(LCD, initStruct->mode);
    /* 偏执电压设置 */
    FL_LCD_SetBiasVoltage(LCD, initStruct->biasVoltage);
    /* 偏执模式选择 */
    FL_LCD_SetBiasMode(LCD, initStruct->biasMode);
    /* 驱动波形设置 */
    FL_LCD_SetWaveform(LCD, initStruct->waveform);
    /* COMx口选择 */
    FL_LCD_SetCOMNumber(LCD, initStruct->COMxNum);
    /* 设置工作频率 */
     FL_LCD_WriteDisplayFrequency(LCD, FL_LCD_DisplayFreq(initStruct->waveform, initStruct->displayFreq));
    /* 设置闪烁频率 */
    FL_LCD_WriteDisplayOnTime(LCD, FL_LCD_FlickTime(initStruct->flickOnTime));
    FL_LCD_WriteDisplayOffTime(LCD, FL_LCD_FlickTime(initStruct->flickOffTime));
    /* 使能外设 */
    FL_LCD_Enable(LCD);
    return FL_PASS;
}

/**
  * @brief  设置 LCD_InitStruct 为默认配置
  * @param  LCD_InitStruct 指向需要将值设置为默认配置的结构体 @ref FL_LCD_InitTypeDef 结构体
  *
  * @retval None
  */
void FL_LCD_StructInit(FL_LCD_InitTypeDef *initStruct)
{
    if(initStruct != NULL)
    {
        initStruct->biasCurrent         =   FL_LCD_BIAS_CURRENT_HIGH;
        initStruct->mode                =   FL_LCD_DRIVER_MODE_INNER_RESISTER;
        initStruct->biasVoltage         =   FL_LCD_BIAS_VOLTAGE_LEVEL10;
        initStruct->biasMode            =   FL_LCD_BIAS_MODE_3BIAS;
        initStruct->waveform            =   FL_LCD_WAVEFORM_TYPEA;
        initStruct->COMxNum             =   FL_LCD_COM_NUM_6COM;
        initStruct->displayFreq         =   42;
        initStruct->flickOnTime         =   0;
        initStruct->flickOffTime        =   0;
    }
}


/**
  * @brief  设置 LCD 4COM显示字端
  * @param  display 指向显示信息的缓存区域，可直接指向LCD的DATAx寄存器。
  * @param  com 待显示字段所在COM。范围0-3。
  * @param  seg 待显示字段所在SEG。范围0-43。
  * @param  state 待显示字段状态。0，熄灭；否则，点亮。
  *
  * @retval None
  */
void FL_LCD_4COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state)
{
    uint32_t temp;
    if(display != NULL)
    {
        if(state != 0)
        {
            state = 1;
        }
        if(seg >= 32)
        {
            temp = (seg - 32) + com * 12;
            com = 4 + temp / 32;
            seg = temp % 32;
        }
        MODIFY_REG(display[com], 0x1 << seg, state << seg);
    }
}

/**
  * @brief  设置 LCD 6COM显示字端
  * @param  display 指向显示信息的缓存区域，可直接指向LCD的DATAx寄存器。
  * @param  com 待显示字段所在COM。范围0-5。
  * @param  seg 待显示字段所在SEG。范围0-43。
  * @param  state 待显示字段状态。0，熄灭；否则，点亮。
  *
  * @retval None
  */
void FL_LCD_6COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state)
{
    uint32_t temp;
    if(display != NULL)
    {
        if(state != 0)
        {
            state = 1;
        }
        if(seg >= 42)
        {
            temp = (seg - 14);
            seg = temp % 32;
        }
        if(seg >= 32)
        {
            temp = (seg - 32) + com * 10;
            com = 6 + temp / 32;
            seg = temp % 32;
        }
        MODIFY_REG(display[com], 0x1 << seg, state << seg);
    }
}

/**
  * @brief  设置 LCD 8COM显示字端
  * @param  display 指向显示信息的缓存区域，可直接指向LCD的DATAx寄存器。
  * @param  com 待显示字段所在COM。范围0-7。
  * @param  seg 待显示字段所在SEG。范围0-43。
  * @param  state 待显示字段状态。0，熄灭；否则，点亮。
  *
  * @retval None
  */
void FL_LCD_8COMDisplay(uint32_t *display, uint32_t mode, uint32_t com, uint32_t seg, uint32_t state)
{
    uint32_t temp;
    if(display != NULL)
    {
        if(state != 0)
        {
            state = 1;
        }
        if(seg >= 40)
        {
            temp = (seg - 12);
            seg = temp % 32;
        }
        if(seg >= 32)
        {
            temp = (seg - 32) + com * 8;
            com = 8 + temp / 32;
            seg = temp % 32;
        }
        MODIFY_REG(display[com], 0x1 << seg, state << seg);
    }
}


/**
  * @}
  */

#endif /* FL_LCD_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
