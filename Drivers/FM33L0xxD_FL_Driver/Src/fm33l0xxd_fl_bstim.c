/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_BSTIM.c
  * @author  FMSH Application Team
  * @brief   Src file of BSTIM FL Module
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



/* Includes ------------------------------------------------------------------*/
#include "fm33l0xxd_fl.h"

/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */

/** @addtogroup BSTIM
  * @{
  */
#ifdef FL_BSTIM_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup BSTIM_FL_Private_Macros
  * @{
  */

#define         IS_BSTIM_ALL_INSTANCE(INTENCE)                          (((INTENCE) == BSTIM1)||\
                                                                         ((INTENCE) == BSTIM2))
                                                             
#define         IS_FL_BSTIM_MODE(__VALUE__)                             (((__VALUE__) == FL_BSTIM_WORK_MODE_16BIT_CAPTURE)||\
                                                                         ((__VALUE__) == FL_BSTIM_WORK_MODE_8BIT_TIMING))

#define         IS_FL_BSTIM_IC_EDGE(__VALUE__)                          (((__VALUE__) == FL_BSTIM_COUNT_CAPTURE_EDGE_RAISING)||\
                                                                         ((__VALUE__) == FL_BSTIM_COUNT_CAPTURE_EDGE_FALLING))

#define         IS_FL_BSTIM_CAPTURE_PULSE_MODE(__VALUE__)               (((__VALUE__) == FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_WIDTH)||\
                                                                         ((__VALUE__) == FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD))

#define         IS_FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR(__VALUE__)         (((__VALUE__) == FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT)||\
                                                                         ((__VALUE__) == FL_BSTIM_CAPTURE_PULSE_MODE_CONTINUE_COUNT))

#define         IS_FL_BSTIM_ONCE_CAPTURE_MODE(__VALUE__)                (((__VALUE__) == FL_BSTIM_CAPTURE_MODE_SINGLE)||\
                                                                         ((__VALUE__) == FL_BSTIM_CAPTURE_MODE_CONTINUE))

#define         IS_FL_BSTIM_SIG2_CLK_SOURCE(__VALUE__)                  (((__VALUE__) == FL_BSTIM_SIG2_CLK_SOURCE_GROUP1)||\
                                                                         ((__VALUE__) == FL_BSTIM_SIG2_CLK_SOURCE_GROUP2))

#define         IS_FL_BSTIM_SIG1_CLK_SOURCE(__VALUE__)                  (((__VALUE__) == FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP1)||\
                                                                         ((__VALUE__) == FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP2))

#define         IS_FL_BSTIM_CNTHSEL(__VALUE__)                          (((__VALUE__) == FL_BSTIM_CNTHSEL_CNTL)||\
                                                                         ((__VALUE__) == FL_BSTIM_CNTHSEL_INTER_SOURCE)||\
                                                                         ((__VALUE__) == FL_BSTIM_CNTHSEL_INTER_OR_DIR)) 

#define         IS_FL_BSTIM_SRCSEL(__VALUE__)                           (((__VALUE__) == FL_BSTIM_SRCSEL_OEN)||\
                                                                         ((__VALUE__) == FL_BSTIM_SRCSEL_STDIR_OR_EXSIG2)) 

#define         IS_FL_BSTIM_SIG2_POLARITY(__VALUE__)                    (((__VALUE__) == FL_BSTIM_SIG2_POLARITY_NORMAL)||\
                                                                         ((__VALUE__) == FL_BSTIM_SIG2_POLARITY_REVERSE)) 

#define         IS_FL_BSTIM_RTCSEL2_SOURCE(__VALUE__)                   (((__VALUE__) == FL_BSTIM_RTCSEL2_XTLF)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL2_RTCSec)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL2_RTCMin)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL2_LPTIM_OUT)) 

#define         IS_FL_BSTIM_RTCSEL1_SOURCE(__VALUE__)                   (((__VALUE__) == FL_BSTIM_RTCSEL1_XTLF)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL1_RTCSec)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL1_RTCMin)||\
                                                                         ((__VALUE__) == FL_BSTIM_RTCSEL1_LPTIM_OUT))  

#define         IS_FL_BSTIM_GRP2SEL_SOURCE(__VALUE__)                   (((__VALUE__) == FL_BSTIM_GRP2SEL_APBCLK)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP2SEL_RTCOUT2)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP2SEL_IN_SIG2)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP2SEL_EX_SIG2))  

#define         IS_FL_BSTIM_GRP1SEL_SOURCE(__VALUE__)                   (((__VALUE__) == FL_BSTIM_GRP1SEL_APBCLK)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP1SEL_RTCOUT1)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP1SEL_IN_SIG1)||\
                                                                         ((__VALUE__) == FL_BSTIM_GRP1SEL_EX_SIG1))

#define         IS_FL_BSTIM_EXSEL2_SOURCE(__VALUE__)                    (((__VALUE__) == FL_BSTIM_EXSEL2_BT_12_IN0)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL2_BT_12_IN1)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL2_BT_12_IN2)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL2_BT_12_IN3))

#define         IS_FL_BSTIM_EXSEL1_SOURCE(__VALUE__)                    (((__VALUE__) == FL_BSTIM_EXSEL1_BT_12_IN0)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL1_BT_12_IN1)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL1_BT_12_IN2)||\
                                                                         ((__VALUE__) == FL_BSTIM_EXSEL1_BT_12_IN3))

#define         IS_FL_BSTIM_INSEL2_SOURCE(__VALUE__)                    (((__VALUE__) == FL_BSTIM_INSEL2_UART_RX3)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL2_UART_RX4)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL2_UART_RX5)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL2_RCLP_BT1OUT))

#define         IS_FL_BSTIM_INSEL1_SOURCE(__VALUE__)                    (((__VALUE__) == FL_BSTIM_INSEL1_UART_RX0)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL1_UART_RX1)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL1_UART_RX2)||\
                                                                         ((__VALUE__) == FL_BSTIM_INSEL1_RCLP))

#define         IS_FL_BSTIM_OUTINV(__VALUE__)                           (((__VALUE__) == FL_BSTIM_OUTINV_NORMAL)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTINV_REVERSE))

#define         IS_FL_BSTIM_OUTMOD(__VALUE__)                           (((__VALUE__) == FL_BSTIM_OUTMOD_REVERSE_LEVEL)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTMOD_PULSE))

#define         IS_FL_BSTIM_OUTSEL(__VALUE__)                           (((__VALUE__) == FL_BSTIM_OUTSEL_COMP_H)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTSEL_COMP_L)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTSEL_GROUP1)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTSEL_GROUP2)||\
                                                                         ((__VALUE__) == FL_BSTIM_OUTSEL_PWM))                                                            
                                                             

/**
  * @}
  */

/** @addtogroup BSTIM_FL_EF_Init
  * @{
  */

/**
  * @brief  复位BSTIM外设
  * @param  BSTIMx 外设入口地址
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_BSTIM_DeInit(BSTIM_Type *BSTIMx)
{
    assert_param(IS_BSTIM_ALL_INSTANCE(BSTIMx));
    if(BSTIMx == BSTIM1)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM1);
        BSTIM1->CR1 = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM1);
    }
    else if(BSTIMx == BSTIM2)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM2);
        BSTIM2->CR1 = 0x00000000;
        FL_RCC_DisableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM2);
    } 
    else
    {
       return FL_FAIL;
    }        
    return FL_PASS;
}
/**
  * @brief  配置BSTIM工作在定时器模式
  *
  * @param  BSTIMx  外设入口地址
  * @param  initStruct 指向 @ref FL_BSTIM_InitTypeDef 结构体的指针
  *
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_BSTIM_Init(BSTIM_Type *BSTIMx, FL_BSTIM_InitTypeDef *initStruct)
{
    FL_ErrorStatus status = FL_PASS;
    /* 检查入口参数 */
    assert_param(IS_BSTIM_ALL_INSTANCE(BSTIMx));
    assert_param(IS_FL_BSTIM_MODE(initStruct->mode));
    assert_param(IS_FL_BSTIM_IC_EDGE(initStruct->edgeSel));
    assert_param(IS_FL_BSTIM_SIG2_CLK_SOURCE(initStruct->sig2Sel));
    assert_param(IS_FL_BSTIM_SIG1_CLK_SOURCE(initStruct->sig1Sel));
    assert_param(IS_FL_BSTIM_CNTHSEL(initStruct->cntHSel));
    assert_param(IS_FL_BSTIM_SRCSEL(initStruct->srcSel));
    assert_param(IS_FL_BSTIM_SIG2_POLARITY(initStruct->dirPo));
    assert_param(IS_FL_BSTIM_RTCSEL2_SOURCE(initStruct->rtcSel2));
    assert_param(IS_FL_BSTIM_RTCSEL1_SOURCE(initStruct->rtcSel1));
    assert_param(IS_FL_BSTIM_GRP2SEL_SOURCE(initStruct->grp2Sel));
	
    assert_param(IS_FL_BSTIM_GRP1SEL_SOURCE(initStruct->grp1Sel));
    assert_param(IS_FL_BSTIM_EXSEL2_SOURCE(initStruct->exSel2));
    assert_param(IS_FL_BSTIM_EXSEL1_SOURCE(initStruct->exSel1));
    assert_param(IS_FL_BSTIM_INSEL2_SOURCE(initStruct->inSel2));
    assert_param(IS_FL_BSTIM_INSEL1_SOURCE(initStruct->inSel1));
   
    /* 时钟配置 */
    if(BSTIMx == BSTIM1)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM1);
    }
    else if(BSTIMx == BSTIM2)
    {    
        FL_RCC_EnableGroup4BusClock(FL_RCC_GROUP4_BUSCLK_BSTIM2);
    } 
    /* 计数源group选择 */
    FL_BSTIM_SetSig2sel(BSTIMx, initStruct->sig2Sel);
     /* 捕捉源group选择 */
    FL_BSTIM_SetSig1sel(BSTIMx, initStruct->sig1Sel);    
    /* GROUP1信号源选择*/
    FL_BSTIM_SetGrp1sel(BSTIMx, initStruct->grp1Sel);
    /* GROUP2信号源选择*/
    FL_BSTIM_SetGrp2sel(BSTIMx, initStruct->grp2Sel);
    /* RTC信号源1选择 */               
    FL_BSTIM_SetRtcout1(BSTIMx, initStruct->rtcSel1);
    /* RTC信号源2选择 */
    FL_BSTIM_SetRtcout2(BSTIMx, initStruct->rtcSel2);
    /* 内部输入信号1选择 */
    FL_BSTIM_SetINSel1(BSTIMx, initStruct->inSel1);
    /* 内部输入信号2选择 */ 
    FL_BSTIM_SetINSel2(BSTIMx, initStruct->inSel2);
    /* 外部输入信号1选择 */
    FL_BSTIM_SetEXSel1(BSTIMx, initStruct->exSel1);
    /* 外部输入信号2选择 */
    FL_BSTIM_SetEXSel2(BSTIMx, initStruct->exSel2);
    /* 高8位计数器计数源选择 */
    FL_BSTIM_SetCntHsel(BSTIMx, initStruct->cntHSel);
    /* 低位计数器使能控制信号选择*/
    FL_BSTIM_SetSrcsel(BSTIMx, initStruct->srcSel);
     /* 预分频寄存器 */         
    FL_BSTIM_WritePrescaler(BSTIMx, initStruct->prescale);       
    /* 预置数寄存器低 */
    FL_BSTIM_WritePresetL(BSTIMx, initStruct->presetL); 
    /* 预置数寄存器高 */
    FL_BSTIM_WritePresetH(BSTIMx, initStruct->presetH); 
    /* 加载寄存器低 */ 
    FL_BSTIM_WriteLoadL(BSTIMx, initStruct->loadL);
		FL_BSTIM_EnableLLEN(BSTIMx);	
    /* 加载寄存器高 */
    FL_BSTIM_WriteLoadH(BSTIMx, initStruct->loadH); 
		FL_BSTIM_EnableLHEN(BSTIMx);
    /* 工作模式选择8位计数定时或16位捕捉*/           
    FL_BSTIM_SetWorkMode(BSTIMx, initStruct->mode);
    /* 捕捉或计数边沿选择 */
    FL_BSTIM_SetCountCapEdge(BSTIMx, initStruct->edgeSel);
    /* 外部输入DIR使能 1-使能 0-关闭  */
    if(initStruct->dirEn ==FL_ENABLE )    
       FL_BSTIM_EnableETDIR(BSTIMx);
    else
       FL_BSTIM_DisableETDIR(BSTIMx); 
    /* 输入信号2极性选择 1-反向*/
    FL_BSTIM_SetDirpo(BSTIMx, initStruct->dirPo);
    return status;
}
/**
  * @brief  将 @ref FL_BSTIM_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct 指向 @ref FL_BSTIM_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_BSTIM_StructInit(FL_BSTIM_InitTypeDef *initStruct, FL_BSTIM_OC_InitTypeDef *initOcStruct)
{
    initStruct->sig2Sel = FL_BSTIM_SIG2_CLK_SOURCE_GROUP1;            /* 计数源group选择 */
    initStruct->sig1Sel = FL_BSTIM_SIG1_CAPTURE_SOURCE_GROUP1;        /* 捕捉源group选择 */
    initStruct->grp1Sel = FL_BSTIM_GRP1SEL_APBCLK;                    /* GROUP1信号源选择*/
    initStruct->grp2Sel = FL_BSTIM_GRP2SEL_RTCOUT2;                   /* GROUP2信号源选择*/
    initStruct->rtcSel1 = FL_BSTIM_RTCSEL1_XTLF;            /* RTC信号源1选择 */
    initStruct->rtcSel2 = FL_BSTIM_RTCSEL2_XTLF;            /* RTC信号源2选择  */
    initStruct->inSel1 = FL_BSTIM_INSEL1_UART_RX0;             /* 内部输入信号1选择 */
    initStruct->inSel2 = FL_BSTIM_INSEL2_UART_RX3;             /* 内部输入信号2选择 */                                               
    initStruct->exSel1 = FL_BSTIM_EXSEL1_BT_12_IN0;             /* 外部输入信号1选择 */
    initStruct->exSel2 = FL_BSTIM_EXSEL2_BT_12_IN0;             /* 外部输入信号2选择 */

    initStruct->cntHSel = FL_BSTIM_CNTHSEL_CNTL;            /* 高8位计数器计数源选择 */      
    initStruct->srcSel = FL_BSTIM_SRCSEL_OEN;             /* 低位计数器使能控制信号选择*/
    
    initStruct->prescale = 0;           /* 预分频寄存器 */
    initStruct->presetL = 0;            /* 预置数寄存器低 */
    initStruct->presetH = 0;            /* 预置数寄存器高 */
    initStruct->loadL = 0;              /* 加载寄存器低 */ 
    initStruct->loadH = 0;              /* 加载寄存器低 */ 
    initStruct->mode = FL_BSTIM_WORK_MODE_8BIT_TIMING;               /* 工作模式选择8位计数定时或16位捕捉*/
    initStruct->edgeSel = FL_BSTIM_COUNT_CAPTURE_EDGE_FALLING;            /* 捕捉或技术边沿选择 */ 

    initStruct->dirEn = FL_DISABLE;              /* 外部输入DIR使能 1-使能 0-关闭  */
    initStruct->dirPo = FL_BSTIM_SIG2_POLARITY_NORMAL;              /* 输入信号2极性选择 1-反向*/
  
    initOcStruct->outCnt = 0;             /* SET OUTPUT PULSE WIDTH,0-FFF */                                               
    initOcStruct->outClr = FL_BSTIM_OUTCLR_CLEAR;             /* SET OUTPUT TO 0 */
    initOcStruct->outInv = FL_BSTIM_OUTINV_NORMAL;             /* SET OUTPUT SIGNAL REVERSE */
    initOcStruct->outMod = FL_BSTIM_OUTMOD_PULSE;             /* 0-PULSE 1-LEVEL */    
    initOcStruct->outSel = FL_BSTIM_OUTSEL_COMP_L;             /* SELECT OUTPUT SOUCE */     
    
}

/**
  * @brief  配置BSTIM工作在输入捕获模式
  *
  * @param  BSTIMx  外设入口地址
  * @param  initStruct_IC 指向 @ref FL_BSTIM_IC_InitTypeDef 结构体的指针
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_BSTIM_IC_Init(BSTIM_Type *BSTIMx, FL_BSTIM_IC_InitTypeDef *initStruct_IC)
{
    FL_ErrorStatus status = FL_PASS;
    /* 参数检查 */
    assert_param(IS_BSTIM_ALL_INSTANCE(BSTIMx));
    assert_param(IS_FL_BSTIM_ONCE_CAPTURE_MODE(initStruct_IC->capOnce));
    assert_param(IS_FL_BSTIM_CAPTURE_PULSE_MODE(initStruct_IC->capMod));
    assert_param(IS_FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR(initStruct_IC->capClr)); 

    /* 输入捕获 period or width*/
    FL_BSTIM_SetCapMode(BSTIMx, initStruct_IC->capMod);
    /* 清零捕捉使能 */
    FL_BSTIM_SetCapclr(BSTIMx, initStruct_IC->capClr);
    /* 输入捕获 continue or once*/
    FL_BSTIM_SetCaponce(BSTIMx, initStruct_IC->capOnce);    
    return status;
}

/**
  * @brief  将 @ref FL_BSTIM_IC_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct_IC 指向 @ref FL_BSTIM_IC_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_BSTIM_IC_StructInit(FL_BSTIM_IC_InitTypeDef *initStruct_IC)
{
    initStruct_IC->capMod  = FL_BSTIM_CAPTURE_PULSE_MODE_PULSE_PERIOD; /* 捕捉模式控制 */
    initStruct_IC->capClr  = FL_BSTIM_CAPTURE_PULSE_MODE_CLEAR_COUNT;  /* 带清零捕捉模式控制 */
    initStruct_IC->capOnce = FL_BSTIM_CAPTURE_MODE_SINGLE;             /* 单次捕捉控制 */ 
}

/**
  * @brief  配置BSTIM寄存器工作在输出比较模式
  *
  * @param  BSTIMx  外设入口地址
  * @param  initStruct_OC 指向 @ref FL_BSTIM_OC_InitTypeDef 结构体的指针
  * @param  BSTIM通道
  * @retval ErrorStatus枚举值
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_BSTIM_OC_Init(BSTIM_Type *BSTIMx, FL_BSTIM_OC_InitTypeDef *initStruct_OC)
{
    FL_ErrorStatus result = FL_PASS;
    /* 参数检查 */
    assert_param(IS_BSTIM_ALL_INSTANCE(BSTIMx));
    assert_param(IS_FL_BSTIM_OUTINV(initStruct_OC->outInv));
    assert_param(IS_FL_BSTIM_OUTMOD(initStruct_OC->outMod));
    assert_param(IS_FL_BSTIM_OUTSEL(initStruct_OC->outSel));
    
    /* SET OUTPUT PULSE WIDTH,0-FFF */           
    FL_BSTIM_WriteOutCnt(BSTIMx, initStruct_OC->outCnt);
    /* SET OUTPUT TO 0 */
    FL_BSTIM_SetOutclr(BSTIMx, initStruct_OC->outClr);
    /* SET OUTPUT SIGNAL REVERSE */
    FL_BSTIM_SetOutInv(BSTIMx, initStruct_OC->outInv);
    /* 0-PULSE 1-LEVEL */ 
    FL_BSTIM_SetOutmode(BSTIMx, initStruct_OC->outMod);
    /* SELECT OUTPUT SOUCE */
    FL_BSTIM_SetOutsel(BSTIMx, initStruct_OC->outSel);

    /* 设置比较值 */
    FL_BSTIM_WriteCMPL(BSTIMx, initStruct_OC->cmpL);
    FL_BSTIM_WriteCMPH(BSTIMx, initStruct_OC->cmpH);
    /* PWM使能 */
    if(initStruct_OC->pwm == FL_ENABLE)
        FL_BSTIM_EnablePWM(BSTIMx);
    else
        FL_BSTIM_DisablePWM(BSTIMx); 
    
    return result;
}

/**
  * @brief  将 @ref FL_BSTIM_OC_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct_OC 指向 @ref FL_BSTIM_OC_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_BSTIM_OC_StructInit(FL_BSTIM_OC_InitTypeDef *initStruct_OC)
{
    
    
    
    initStruct_OC->cmpH = 0;
    initStruct_OC->cmpL = 0;
    initStruct_OC->pwm = FL_ENABLE; 
}

/**
  * @}
  */

#endif /* FL_BSTIM_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
