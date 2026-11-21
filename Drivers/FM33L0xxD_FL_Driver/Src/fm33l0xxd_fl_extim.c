/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_extim.c
  * @author  FMSH Application Team
  * @brief   Src file of EXTIM FL Module
  * @version  V0.0.1
  * @date     29. January 2026
  ****************************************************************************************************
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

/** @addtogroup EXTIM
  * @{
  */

#ifdef FL_EXTIM_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup EXTIM_FL_Private_Macros
  * @{
  */

#define         IS_EXTIM_ALL_INSTANCE(INTENCE)              (((INTENCE) == EXTIM1)||\
                                                            ((INTENCE) == EXTIM2)||\
                                                            ((INTENCE) == EXTIM3)||\
                                                            ((INTENCE) == EXTIM4))
                                                            
#define         IS_FL_EXTIM_GRP2SEL_SOURCE(__VALUE__)                    (((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_RCLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_UART1_RX)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_ET1_IN1)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_ET1_IN2)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_CMP1O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_CMP2O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET1_LPTO)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_UART2_RX)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_UART3_RX)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_ET2_IN1)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_ET2_IN2)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_CMP1O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_CMP2O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET2_LPTO)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET3_ET3_IN1)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET3_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET3_UART4_RX)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET3_UART5_RX)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET3_RTCSEC)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_ET4_IN1)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_UART_RX2)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_UART_RX0)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_CMP1O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_CMP2O)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_RTCSEC)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP2SEL_ET4_LPTO))                                                            
															
#define         IS_FL_EXTIM_GRP1SEL_SOURCE(__VALUE__)                    (((__VALUE__) == FL_EXTIM_GRP1SEL_ET1_APBCLK)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET1_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET1_RCLP)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET1_ET1_IN0)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET2_APBCLK)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET2_XTLF)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET2_RCLP)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET2_ET2_IN0)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET3_APBCLK)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET3_ET3_IN0)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET3_RTCSEC)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET3_RCLP)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET4_APBCLK)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET4_ET4_IN0)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET4_RTC64HZ)||\
                                                                         ((__VALUE__) == FL_EXTIM_GRP1SEL_ET4_LPTO))

#define         IS_FL_EXTIM_MODE(__VALUE__)                              (((__VALUE__) == FL_EXTIM_OPERATION_MODE_NORMAL)||\
                                                                         ((__VALUE__) == FL_EXTIM_OPERATION_MODE_CAPTURE))

#define         IS_FL_EXTIM_COUNT_CASCADE(__VALUE__)                     (((__VALUE__) == FL_EXTIM_OPERATION_MODE_NORMAL_COUNT)||\
                                                                         ((__VALUE__) == FL_EXTIM_OPERATION_MODE_CASCADE_COUNT)) 

#define         IS_FL_EXTIM_COUNT_EDGE(__VALUE__)                        (((__VALUE__) == FL_EXTIM_COUNT_EDGE_RISING)||\
                                                                         ((__VALUE__) == FL_EXTIM_COUNT_EDGE_FALLING))                                                                         

#define         IS_FL_EXTIM_CAPTURE_PULSE_MODE(__VALUE__)                (((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD)||\
                                                                         ((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH))

#define         IS_FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR(__VALUE__)          (((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT)||\
                                                                         ((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT))

#define         IS_FL_EXTIM_ONCE_CAPTURE_MODE(__VALUE__)                 (((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT)||\
                                                                         ((__VALUE__) == FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT))

#define         IS_FL_EXTIM_IC_EDGE(__VALUE__)                           (((__VALUE__) == FL_EXTIM_IC_EDGE_RISING)||\
                                                                         ((__VALUE__) == FL_EXTIM_IC_EDGE_FALLING))

#define         IS_FL_EXTIM_SIG1_CLK_SOURCE(__VALUE__)                   (((__VALUE__) == FL_EXTIM_SIG1_CLK_SOURCE_GROUP2)||\
                                                                         ((__VALUE__) == FL_EXTIM_SIG1_CLK_SOURCE_GROUP1))

#define         IS_FL_EXTIM_SIG2_CLK_SOURCE(__VALUE__)                   (((__VALUE__) == FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP2)||\
                                                                         ((__VALUE__) == FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP1))


/**
  * @}
  */

/** @addtogroup EXTIM_FL_EF_Init
  * @{
  */

/**
  * @brief  复位EXTIM模块
  * @param  EXTIMxַ外设入口地址
  * @retval 错误状态可能值
  *         -FL_PASS EXTIM CR恢复复位值
  *         -FL_FAIL EXTIM CR未恢复复位值
  */
FL_ErrorStatus FL_EXTIM_DeInit(EXTIM_Type *EXTIMx)
{
    assert_param(IS_EXTIM_ALL_INSTANCE(EXTIMx));
    if(EXTIMx == EXTIM1)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM1);
        EXTIM1->CR = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM1);
    }
    else if(EXTIMx == EXTIM2)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM2);
        EXTIM2->CR = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM2);
    } 
    else if(EXTIMx == EXTIM3)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM3);
        EXTIM3->CR = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM3);
    }
    else if(EXTIMx == EXTIM4)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM4);
        EXTIM4->CR = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM4);
    }
    else
    {
       return FL_FAIL;
    }        
    return FL_PASS;
}
/**
  * @brief  配置EXTIM工作在定时器模式
  *
  * @param  EXTIMx  外设入口地址
  * @param  initStruct 指向 @ref FL_EXTIM_InitTypeDef 结构体的指针
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_EXTIM_Init(EXTIM_Type *EXTIMx, FL_EXTIM_InitTypeDef *initStruct)
{
    FL_ErrorStatus status = FL_PASS;
    /* 检查入口参数 */
    assert_param(IS_EXTIM_ALL_INSTANCE(EXTIMx));
    assert_param(IS_FL_EXTIM_GRP2SEL_SOURCE(initStruct->gpr2Sel));
    assert_param(IS_FL_EXTIM_GRP1SEL_SOURCE(initStruct->gpr1Sel));
    assert_param(IS_FL_EXTIM_MODE(initStruct->mod));
    assert_param(IS_FL_EXTIM_COUNT_EDGE(initStruct->edgeSel));
    assert_param(IS_FL_EXTIM_SIG1_CLK_SOURCE(initStruct->sig1Sel));
    assert_param(IS_FL_EXTIM_COUNT_CASCADE(initStruct->casEn));      
   
    /* 时钟配置 */
    if(EXTIMx == EXTIM1)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM1);
    }
    else if(EXTIMx == EXTIM2)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM2);
    } 
    else if(EXTIMx == EXTIM3)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM3);
    }
    else 
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_EXTIM4);
    }
    /* 内部信号1源选择（在计数模式下计数源仅由此选择，捕捉模式下计数源） */
    FL_EXTIM_SetSIG1SEL(EXTIMx,initStruct->sig1Sel);
    /* GROUP1 信号选择控制 */
    FL_EXTIM_SetGRP1SEL(EXTIMx, initStruct->gpr1Sel);
    /* GROUP2 信号选择控制 */
    FL_EXTIM_SetGRP2SEL(EXTIMx, initStruct->gpr2Sel);
    /* ETx预分频寄存器1 */
    FL_EXTIM_WritePrescaler1(EXTIMx, initStruct->prescale1);
    /* ETx预分频寄存器2 */
    FL_EXTIM_WritePrescaler2(EXTIMx, initStruct->prescale2);                             
    /* 引脚输入数字滤波使能 */                             
    if(initStruct->exFlt == FL_ENABLE)
        FL_EXTIM_EnableDigitalFilter(EXTIMx);
    else
        FL_EXTIM_DisableDigitalFilter(EXTIMx);    
    /* 工作模式选择 */
    FL_EXTIM_SetOperationMode(EXTIMx, initStruct->mod);    
    /* 扩展定时器级联使能 */  
    FL_EXTIM_SetCascade(EXTIMx, initStruct->casEn);
    /* 计数模式采沿方式选择（计数时钟选择mcu_clk时该位无效，总是采用mcu_clk时钟上升沿计数） */
    FL_EXTIM_SetCountEdge(EXTIMx, initStruct->edgeSel);
    /* ETx初值寄存器 */
    FL_EXTIM_WriteINITVALUE(EXTIMx, initStruct->initValue);
    return status;
}
/**
  * @brief  将 @ref FL_EXTIM_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct 指向 @ref FL_EXTIM_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_EXTIM_StructInit(FL_EXTIM_InitTypeDef *initStruct)
{
    initStruct->sig1Sel = FL_EXTIM_SIG1_CLK_SOURCE_GROUP1;   /* 内部信号1源选择（在计数模式下计数源仅由此选择，捕捉模式下计数源） */
    initStruct->gpr1Sel = FL_EXTIM_GRP1SEL_ET1_APBCLK;       /* GROUP1 信号选择控制 */
    initStruct->gpr2Sel = FL_EXTIM_GRP2SEL_ET1_XTLF;         /* GROUP2 信号选择控制 */
    initStruct->prescale1 = 0;                               /* ETx预分频寄存器1 */
    initStruct->prescale2 = 0;                               /* ETx预分频寄存器2 */                  
    initStruct->exFlt = FL_ENABLE;                           /* 引脚输入数字滤波使能 */
    initStruct->mod = FL_EXTIM_OPERATION_MODE_NORMAL;        /* 工作模式选择 */
    initStruct->casEn = FL_EXTIM_OPERATION_MODE_NORMAL_COUNT;/* 扩展定时器级联使能 */
    initStruct->edgeSel = FL_EXTIM_COUNT_EDGE_RISING;        /* 计数模式采沿方式选择（计数时钟选择mcu_clk时该位无效，总是采用mcu_clk时钟上升沿计数） */
    initStruct->initValue = 0;                               /* ETx初值寄存器 */
}

/**
  * @brief  配置EXTIM工作在输入捕获模式
  *
  * @param  EXTIMx  外设入口地址
  * @param  initStruct_IC 指向 @ref FL_EXTIM_IC_InitTypeDef 结构体的指针
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_EXTIM_IC_Init(EXTIM_Type *EXTIMx, uint32_t channel, FL_EXTIM_IC_InitTypeDef *initStruct_IC)
{
    FL_ErrorStatus status = FL_PASS;
    /* 参数检查 */
    assert_param(IS_EXTIM_ALL_INSTANCE(EXTIMx));
    assert_param(IS_FL_EXTIM_SIG2_CLK_SOURCE(initStruct_IC->sig2Sel));
    assert_param(IS_FL_EXTIM_IC_EDGE(initStruct_IC->capEdge));
    assert_param(IS_FL_EXTIM_ONCE_CAPTURE_MODE(initStruct_IC->capOnce));
    assert_param(IS_FL_EXTIM_CAPTURE_PULSE_MODE(initStruct_IC->capMode));
    assert_param(IS_FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR(initStruct_IC->capClr)); 
    /* GROUP捕获源 */
    FL_EXTIM_SetSIG2SEL(EXTIMx, initStruct_IC->sig2Sel);
    /* 捕获边沿 */
    FL_EXTIM_SetCaptureEdge(EXTIMx, initStruct_IC->capEdge);
    /* 输入捕获 period or width*/
    FL_EXTIM_SetCapturePulseMode(EXTIMx, initStruct_IC->capMode);
    /* 清零捕捉使能 */
    FL_EXTIM_SetCaptureClear(EXTIMx, initStruct_IC->capClr);
    /* 输入捕获 continue or once*/
    FL_EXTIM_SetOnceCaptureMode(EXTIMx, initStruct_IC->capOnce);    
    return status;
}
/**
  * @brief  将 @ref FL_EXTIM_IC_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct_IC 指向 @ref FL_EXTIM_IC_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_EXTIM_IC_StructInit(FL_EXTIM_IC_InitTypeDef *initStruct_IC)
{
   initStruct_IC->sig2Sel = FL_EXTIM_SIG2_CAPTURE_SOURCE_GROUP1;      /* 内部信号2源选择(捕捉源) */
   initStruct_IC->capEdge = FL_EXTIM_IC_EDGE_RISING;                  /* 捕捉沿选择 */
   initStruct_IC->capMode = FL_EXTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD; /* 捕捉模式控制 */
   initStruct_IC->capClr  = FL_EXTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT;  /* 带清零捕捉模式控制 */
   initStruct_IC->capOnce = FL_EXTIM_CAPTURE_MODE_SINGLE;       /* 单次捕捉控制 */          
}

/**
  * @brief  配置EXTIM寄存器工作在输出比较模式
  *
  * @param  EXTIMx  外设入口地址
  * @param  initStruct_OC 指向 @ref FL_EXTIM_OC_InitTypeDef 结构体的指针
  * @param  EXTIM通道
  * @retval ErrorStatus枚举值
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_EXTIM_OC_Init(EXTIM_Type *EXTIMx, FL_EXTIM_OC_InitTypeDef *initStruct_OC)
{
    FL_ErrorStatus result = FL_PASS;
    /* 参数检查 */
    assert_param(IS_EXTIM_ALL_INSTANCE(EXTIMx));
  
    /* 设置比较值 */
    FL_EXTIM_WriteCompareValue(EXTIMx, initStruct_OC->cmp);
     /* PWM使能 */
    if(initStruct_OC->pwm == FL_ENABLE)
        FL_EXTIM_EnablePWMOutput(EXTIMx);
    else
        FL_EXTIM_DisablePWMOutput(EXTIMx); 
    
    return result;
}

/**
  * @brief  将 @ref FL_EXTIM_OC_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct_OC 指向 @ref FL_EXTIM_OC_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_EXTIM_OC_StructInit(FL_EXTIM_OC_InitTypeDef *initStruct_OC)
{
    initStruct_OC->cmp = 0;
    initStruct_OC->pwm = FL_ENABLE;    
}

/**
  * @}
  */

#endif /* FL_EXTIM_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
