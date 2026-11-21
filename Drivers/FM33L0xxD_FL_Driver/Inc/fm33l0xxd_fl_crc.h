/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_crc.h
  * @author  FMSH Application Team
  * @brief   Head file of CRC FL Module
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
#ifndef __FM33L0XXD_FL_CRC_H
#define __FM33L0XXD_FL_CRC_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup CRC_FL_ES_INIT CRC Exported Init structures
  * @{
  */

/**
  * @brief FL CRC Init Sturcture definition
  */
typedef struct
{
    /** CRC初值 */
    uint32_t initVal;

    /** 计算数据宽度 */
    uint32_t dataWidth;

    /** 输入数据翻转 */
    uint32_t reflectIn;

    /** 输出数据翻转 */
    uint32_t reflectOut;

    /** 输出结果异或寄存器 */
    uint32_t xorReg;

    /** 输出结果异或使能 */
    uint32_t xorRegState;

    /** CRC多项式宽 */
    uint32_t polynomialWidth;

    /** CRC多项式 */
    uint32_t polynomial;

    /** 计算模式串行或并行 */
    uint32_t calculatMode;

} FL_CRC_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup CRC_FL_Exported_Constants CRC Exported Constants
  * @{
  */

#define    CRC_CRCCR_OPWD_Pos                                     (9U)
#define    CRC_CRCCR_OPWD_Msk                                     (0x1U << CRC_CRCCR_OPWD_Pos)
#define    CRC_CRCCR_OPWD                                         CRC_CRCCR_OPWD_Msk

#define    CRC_CRCCR_RFLTIN_Pos                                   (6U)
#define    CRC_CRCCR_RFLTIN_Msk                                   (0x3U << CRC_CRCCR_RFLTIN_Pos)
#define    CRC_CRCCR_RFLTIN                                       CRC_CRCCR_RFLTIN_Msk

#define    CRC_CRCCR_RFLTO_Pos                                    (5U)
#define    CRC_CRCCR_RFLTO_Msk                                    (0x1U << CRC_CRCCR_RFLTO_Pos)
#define    CRC_CRCCR_RFLTO                                        CRC_CRCCR_RFLTO_Msk

#define    CRC_CRCCR_RES_Pos                                      (4U)
#define    CRC_CRCCR_RES_Msk                                      (0x1U << CRC_CRCCR_RES_Pos)
#define    CRC_CRCCR_RES                                          CRC_CRCCR_RES_Msk

#define    CRC_CRCCR_BUSY_Pos                                     (3U)
#define    CRC_CRCCR_BUSY_Msk                                     (0x1U << CRC_CRCCR_BUSY_Pos)
#define    CRC_CRCCR_BUSY                                         CRC_CRCCR_BUSY_Msk

#define    CRC_CRCCR_XOR_Pos                                      (2U)
#define    CRC_CRCCR_XOR_Msk                                      (0x1U << CRC_CRCCR_XOR_Pos)
#define    CRC_CRCCR_XOR                                          CRC_CRCCR_XOR_Msk

#define    CRC_CRCCR_SEL_Pos                                      (0U)
#define    CRC_CRCCR_SEL_Msk                                      (0x3U << CRC_CRCCR_SEL_Pos)
#define    CRC_CRCCR_SEL                                          CRC_CRCCR_SEL_Msk

#define    CRC_CRCAL_LFSR_Pos                                     (0U)
#define    CRC_CRCAL_LFSR_Msk                                     (0xffffffffU << CRC_CRCAL_LFSR_Pos)
#define    CRC_CRCAL_LFSR                                         CRC_CRCAL_LFSR_Msk

#define    CRC_CRCXOR_CRC_XOR_Pos                                 (0U)
#define    CRC_CRCXOR_CRC_XOR_Msk                                 (0xffffffffU << CRC_CRCXOR_CRC_XOR_Pos)
#define    CRC_CRCXOR_CRC_XOR                                     CRC_CRCXOR_CRC_XOR_Msk

#define    CRC_CRCPOLY_CRC_POLY_Pos                               (0U)
#define    CRC_CRCPOLY_CRC_POLY_Msk                               (0xffffffffU << CRC_CRCPOLY_CRC_POLY_Pos)
#define    CRC_CRCPOLY_CRC_POLY                                   CRC_CRCPOLY_CRC_POLY_Msk






#define    FL_CRC_DATA_WIDTH_8B                                   (0x0U << CRC_CRCCR_OPWD_Pos)
#define    FL_CRC_DATA_WIDTH_32B                                  (0x1U << CRC_CRCCR_OPWD_Pos)


#define    FL_CRC_INPUT_INVERT_NONE                               (0x0U << CRC_CRCCR_RFLTIN_Pos)
#define    FL_CRC_INPUT_INVERT_BYTE                               (0x1U << CRC_CRCCR_RFLTIN_Pos)
#define    FL_CRC_INPUT_INVERT_HALF_WORD                          (0x2U << CRC_CRCCR_RFLTIN_Pos)
#define    FL_CRC_INPUT_INVERT_WORD                               (0x3U << CRC_CRCCR_RFLTIN_Pos)


#define    FL_CRC_OUPUT_INVERT_NONE                               (0x0U << CRC_CRCCR_RFLTO_Pos)
#define    FL_CRC_OUPUT_INVERT_BYTE                               (0x1U << CRC_CRCCR_RFLTO_Pos)


#define    FL_CRC_POLYNOMIAL_32B                                  (0x0U << CRC_CRCCR_SEL_Pos)
#define    FL_CRC_POLYNOMIAL_16B                                  (0x1U << CRC_CRCCR_SEL_Pos)
#define    FL_CRC_POLYNOMIAL_8B                                   (0x2U << CRC_CRCCR_SEL_Pos)
#define    FL_CRC_POLYNOMIAL_7B                                   (0x3U << CRC_CRCCR_SEL_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup CRC_FL_Exported_Functions CRC Exported Functions
  * @{
  */

/**
  * @brief    Set CRC data register
  * @rmtoll   CRCDR        FL_CRC_WriteData
  * @param    CRCx CRC instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_WriteData(CRC_Type* CRCx, uint32_t data)
{
    MODIFY_REG(CRCx->CRCDR, (0xffffffffU << 0U), (data << 0U));
}

/**
  * @brief    Get CRC data register value
  * @rmtoll   CRCDR        FL_CRC_ReadData
  * @param    CRCx CRC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_CRC_ReadData(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCDR, (0xffffffffU << 0U)) >> 0U);
}

/**
  * @brief    Set CRC calculate operation width
  * @rmtoll   CRCCR    OPWD    FL_CRC_SetDataWidth
  * @param    CRCx CRC instance
  * @param    dataWidth This parameter can be one of the following values:
  *           @arg @ref FL_CRC_DATA_WIDTH_8B
  *           @arg @ref FL_CRC_DATA_WIDTH_32B
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_SetDataWidth(CRC_Type* CRCx, uint32_t dataWidth)
{
    MODIFY_REG(CRCx->CRCCR, CRC_CRCCR_OPWD_Msk, dataWidth);
}

/**
  * @brief    Get CRC calculate operation width
  * @rmtoll   CRCCR    OPWD    FL_CRC_GetDataWidth
  * @param    CRCx CRC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_CRC_DATA_WIDTH_8B
  *           @arg @ref FL_CRC_DATA_WIDTH_32B
  */
__STATIC_INLINE uint32_t FL_CRC_GetDataWidth(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_OPWD_Msk));
}

/**
  * @brief    Set CRC reflected input
  * @rmtoll   CRCCR    RFLTIN    FL_CRC_SetInputInvertMode
  * @param    CRCx CRC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_CRC_INPUT_INVERT_NONE
  *           @arg @ref FL_CRC_INPUT_INVERT_BYTE
  *           @arg @ref FL_CRC_INPUT_INVERT_HALF_WORD
  *           @arg @ref FL_CRC_INPUT_INVERT_WORD
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_SetInputInvertMode(CRC_Type* CRCx, uint32_t mode)
{
    MODIFY_REG(CRCx->CRCCR, CRC_CRCCR_RFLTIN_Msk, mode);
}

/**
  * @brief    Get CRC reflected input status
  * @rmtoll   CRCCR    RFLTIN    FL_CRC_GetInputInvertMode
  * @param    CRCx CRC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_CRC_INPUT_INVERT_NONE
  *           @arg @ref FL_CRC_INPUT_INVERT_BYTE
  *           @arg @ref FL_CRC_INPUT_INVERT_HALF_WORD
  *           @arg @ref FL_CRC_INPUT_INVERT_WORD
  */
__STATIC_INLINE uint32_t FL_CRC_GetInputInvertMode(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_RFLTIN_Msk));
}

/**
  * @brief    Set CRC reflected output
  * @rmtoll   CRCCR    RFLTO    FL_CRC_SetOutputInvertMode
  * @param    CRCx CRC instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_CRC_OUPUT_INVERT_NONE
  *           @arg @ref FL_CRC_OUPUT_INVERT_BYTE
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_SetOutputInvertMode(CRC_Type* CRCx, uint32_t mode)
{
    MODIFY_REG(CRCx->CRCCR, CRC_CRCCR_RFLTO_Msk, mode);
}

/**
  * @brief    Get CRC feflected output status 
  * @rmtoll   CRCCR    RFLTO    FL_CRC_GetOutputInvertMode
  * @param    CRCx CRC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_CRC_OUPUT_INVERT_NONE
  *           @arg @ref FL_CRC_OUPUT_INVERT_BYTE
  */
__STATIC_INLINE uint32_t FL_CRC_GetOutputInvertMode(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_RFLTO_Msk));
}

/**
  * @brief    Get CRC result flag
  * @rmtoll   CRCCR    RES    FL_CRC_IsActiveFlag_Zero
  * @param    CRCx CRC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_CRC_IsActiveFlag_Zero(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_RES_Msk) == (CRC_CRCCR_RES_Msk));
}

/**
  * @brief    Get CRC operational flag 
  * @rmtoll   CRCCR    BUSY    FL_CRC_IsActiveFlag_Busy
  * @param    CRCx CRC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_CRC_IsActiveFlag_Busy(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_BUSY_Msk) == (CRC_CRCCR_BUSY_Msk));
}

/**
  * @brief    Output XORed with CRC_XOR register enable
  * @rmtoll   CRCCR    XOR    FL_CRC_EnableOutputXOR
  * @param    CRCx CRC instance
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_EnableOutputXOR(CRC_Type* CRCx)
{
    SET_BIT(CRCx->CRCCR, CRC_CRCCR_XOR_Msk);
}

/**
  * @brief    Get output XORed with CRC_XOR register enable status
  * @rmtoll   CRCCR    XOR    FL_CRC_IsEnabledOutputXOR
  * @param    CRCx CRC instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_CRC_IsEnabledOutputXOR(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_XOR_Msk) == CRC_CRCCR_XOR_Msk);
}

/**
  * @brief    Output XORed with CRC_XOR register disable
  * @rmtoll   CRCCR    XOR    FL_CRC_DisableOutputXOR
  * @param    CRCx CRC instance
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_DisableOutputXOR(CRC_Type* CRCx)
{
    CLEAR_BIT(CRCx->CRCCR, CRC_CRCCR_XOR_Msk);
}

/**
  * @brief    Polynomial width selection
  * @rmtoll   CRCCR    SEL    FL_CRC_SetPolynomialWidth
  * @param    CRCx CRC instance
  * @param    width This parameter can be one of the following values:
  *           @arg @ref FL_CRC_POLYNOMIAL_32B
  *           @arg @ref FL_CRC_POLYNOMIAL_16B
  *           @arg @ref FL_CRC_POLYNOMIAL_8B
  *           @arg @ref FL_CRC_POLYNOMIAL_7B
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_SetPolynomialWidth(CRC_Type* CRCx, uint32_t width)
{
    MODIFY_REG(CRCx->CRCCR, CRC_CRCCR_SEL_Msk, width);
}

/**
  * @brief    Get Polynomial width Selection status
  * @rmtoll   CRCCR    SEL    FL_CRC_GetPolynomialWidth
  * @param    CRCx CRC instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_CRC_POLYNOMIAL_32B
  *           @arg @ref FL_CRC_POLYNOMIAL_16B
  *           @arg @ref FL_CRC_POLYNOMIAL_8B
  *           @arg @ref FL_CRC_POLYNOMIAL_7B
  */
__STATIC_INLINE uint32_t FL_CRC_GetPolynomialWidth(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCR, CRC_CRCCR_SEL_Msk));
}

/**
  * @brief    Set linear feedback shift register
  * @rmtoll   CRCAL    LFSR    FL_CRC_WriteInitialValue
  * @param    CRCx CRC instance
  * @param    data 
  * @retval   None
   * @note     修改：CRCCAL/CRCXOR寄存器掩码由16位(0xFFFF)改为32位(0xFFFFFFFF)
  */
__STATIC_INLINE void FL_CRC_WriteInitialValue(CRC_Type* CRCx, uint32_t data)
{
    MODIFY_REG(CRCx->CRCCAL, (0xffffffffU << 0U), (data << 0U));
}

/**
  * @brief    Get linear feedback shift register value
  * @rmtoll   CRCAL    LFSR    FL_CRC_ReadInitialValue
  * @param    CRCx CRC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_CRC_ReadInitialValue(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCCAL, (0xffffffffU << 0U)) >> 0U);
}

/**
  * @brief    Set eXclusive XOR register
  * @rmtoll   CRCXOR    CRC_XOR    FL_CRC_WriteXORValue
  * @param    CRCx CRC instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_WriteXORValue(CRC_Type* CRCx, uint32_t data)
{
    MODIFY_REG(CRCx->CRCXOR, (0xffffffffU << 0U), (data << 0U));
}

/**
  * @brief    Get eXclusive XOR register value
  * @rmtoll   CRCXOR    CRC_XOR    FL_CRC_ReadXORValue
  * @param    CRCx CRC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_CRC_ReadXORValue(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCXOR, (0xffffffffU << 0U)) >> 0U);
}

/**
  * @brief    Set CRC Polynominals
  * @rmtoll   CRCPOLY    CRC_POLY    FL_CRC_WritePolynominalParam
  * @param    CRCx CRC instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_CRC_WritePolynominalParam(CRC_Type* CRCx, uint32_t data)
{
    MODIFY_REG(CRCx->CRCPOLY, (0xffffffffU << 0U), (data << 0U));
}

/**
  * @brief    Get CRC Polynominals
  * @rmtoll   CRCPOLY    CRC_POLY    FL_CRC_ReadPolynominalParam
  * @param    CRCx CRC instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_CRC_ReadPolynominalParam(CRC_Type* CRCx)
{
    return (uint32_t)(READ_BIT(CRCx->CRCPOLY, (0xffffffffU << 0U)) >> 0U);
}

/**
  * @}
  */

/** @defgroup CRC_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_CRC_DeInit(CRC_Type *CRCx);
void FL_CRC_StructInit(FL_CRC_InitTypeDef *CRC_InitStruct);
FL_ErrorStatus FL_CRC_Init(CRC_Type *CRCx, FL_CRC_InitTypeDef *CRC_InitStruct);
/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_CRC_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
