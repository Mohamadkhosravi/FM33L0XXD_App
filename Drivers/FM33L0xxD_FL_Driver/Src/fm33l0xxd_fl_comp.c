/**
  ****************************************************************************************************
  * @file    fm33l0xxd_fl_comp.c
  * @author  FMSH Application Team
  * @brief   Src file of COMP FL Module
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

/** @addtogroup COMP
  * @{
  */

#ifdef FL_COMP_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup COMP_FL_Private_Macros
  * @{
  */

#define         IS_COMP_ALL_INSTANCE(INTENCE)              (((INTENCE) == COMP1)||\
                                                            ((INTENCE) == COMP2))

#define         IS_FL_COMP_POSITIVEINPUT(__VALUE__)        (((__VALUE__) == FL_COMP_INP_SOURCE_INP1)||\
                                                            ((__VALUE__) == FL_COMP_INP_SOURCE_INP2)||\
                                                            ((__VALUE__) == FL_COMP_INP_SOURCE_INP3)||\
                                                            ((__VALUE__) == FL_COMP_INP_SOURCE_INP4))

#define         IS_FL_COMP_NEGATIVEINPUT(__VALUE__)        (((__VALUE__) == FL_COMP_INN_SOURCE_INN1)||\
                                                             ((__VALUE__) == FL_COMP_INN_SOURCE_INN2)||\
                                                             ((__VALUE__) == FL_COMP_INN_SOURCE_VREF)||\
                                                             ((__VALUE__) == FL_COMP_INN_SOURCE_VREF_DIV2))

#define         IS_FL_COMP_EDGE(__VALUE__)                 (((__VALUE__) == FL_COMP_INTERRUPT_EDGE_BOTH)||\
                                                            ((__VALUE__) == FL_COMP_INTERRUPT_EDGE_RISING )||\
                                                            ((__VALUE__) == FL_COMP_INTERRUPT_EDGE_FALLING))

#define         IS_FL_COMP_DIGITAL_FILTER(__VALUE__)       (((__VALUE__) == FL_DISABLE)||\
                                                            ((__VALUE__) == FL_ENABLE))

/**
  * @}
  */

/** @addtogroup COMP_FL_EF_Init
  * @{
  */

/**
  * @brief  复位COMP外设
  * @param  COMPx 外设入口地址
  * @retval 错误状态，可能值：
  *         -FL_PASS 外设寄存器值恢复复位值
  *         -FL_FAIL 未成功执行
  */
FL_ErrorStatus FL_COMP_DeInit(COMP_Type *COMPx)
{
    /* 入口参数检查 */
    assert_param(IS_COMP_ALL_INSTANCE(COMPx));
    /* 恢复寄存器值为默认值 */
    if(COMPx == COMP1)
    { 
        COMP1->CR = 0x00000000U;
    }
    if(COMPx == COMP2)
    { 
        COMP2->CR = 0x00000000U;
    }
    else
    {
       return FL_FAIL;
    }
    return FL_PASS;
}

/**
  * @brief  根据 COMP_InitStruct 的配置信息初始化对应外设.
  * @param  COMPx 外设入口地址
  * @param  initStruct 指向 @ref FL_COMP_InitTypeDef 结构体的指针
  * @retval 错误状态，可能值：
  *         -FL_PASS 配置成功
  *         -FL_FAIL 配置过程发生错误
  */
FL_ErrorStatus FL_COMP_Init(COMP_Type *COMPx, FL_COMP_InitTypeDef *initStruct)
{
    /* 入口参数检查 */
    assert_param(IS_COMP_ALL_INSTANCE(COMPx));
    assert_param(IS_FL_COMP_EDGE(initStruct->edge));
    assert_param(IS_FL_COMP_POSITIVEINPUT(initStruct->positiveInput));
    assert_param(IS_FL_COMP_NEGATIVEINPUT(initStruct->negativeInput));
    assert_param(IS_FL_COMP_DIGITAL_FILTER(initStruct->digitalFilter));
    /* 使能时钟总线 */
    FL_RCC_EnableGroup1BusClock(FL_RCC_GROUP1_BUSCLK_ANAC);
    /* 比较器正向输入选择 */
    FL_COMP_SetINPSource(COMPx, initStruct->positiveInput);
    /* 比较器反向输入选择 */
    FL_COMP_SetINNSource(COMPx, initStruct->negativeInput);
    /* 比较器使用vref 打开vref_buf */
    if((initStruct->negativeInput == FL_COMP_INN_SOURCE_VREF) || (initStruct->negativeInput == FL_COMP_INN_SOURCE_VREF_DIV2))
    {
        FL_COMP_EnableVrefBuffer(COMPCOM);/* 使能 */
        FL_COMP_DisableVrefBufferBypass(COMPCOM);/* 不bypass */
    }
    else
    {
        FL_COMP_DisableVrefBuffer(COMPCOM);
    }
    if(COMPx == COMP1)
    {
        /* 比较器中断边沿选择 */
        FL_COMP_SetComparator1InterruptEdge(COMPCOM, ((initStruct->edge) << COMP_ICR_CMP1SEL_Pos));
    }
    else
    {
        /* 比较器中断边沿选择 */
        FL_COMP_SetComparator2InterruptEdge(COMPCOM, ((initStruct->edge) << COMP_ICR_CMP2SEL_Pos));
    }
    /* 滤波 */
    if(initStruct->digitalFilter)
    {
        if(COMPx == COMP1)
        { FL_COMP_EnableComparator1OutputFilter(COMPCOM); }
        else
        { FL_COMP_EnableComparator2OutputFilter(COMPCOM); }
    }
    else
    {
        if(COMPx == COMP1)
        { FL_COMP_DisableComparator1OutputFilter(COMPCOM); }
        else
        { FL_COMP_DisableComparator2OutputFilter(COMPCOM); }
    }
    return FL_PASS;
}
/**
  * @brief  将 @ref FL_COMP_InitTypeDef 结构体初始化为默认配置
  * @param  initStruct 指向 @ref FL_COMP_InitTypeDef 结构体的指针
  *
  * @retval None
  */
void FL_COMP_StructInit(FL_COMP_InitTypeDef *initStruct)
{
    /* 复位配置信息 */
    initStruct->edge             = FL_COMP_INTERRUPT_EDGE_BOTH;
    initStruct->negativeInput    = FL_COMP_INN_SOURCE_INN1;
    initStruct->positiveInput    = FL_COMP_INP_SOURCE_INP1;
    initStruct->digitalFilter    = FL_ENABLE;
}


/**
  * @}
  */

#endif /* FL_COMP_DRIVER_ENABLED */

/**
  * @}
  */

/**
  * @}
  */

/********************** (C) COPYRIGHT Fudan Microelectronics **** END OF FILE ***********************/
