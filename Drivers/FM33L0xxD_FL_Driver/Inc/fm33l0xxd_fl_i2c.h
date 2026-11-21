/**
  *******************************************************************************************************
  * @file    fm33l0xxd_fl_i2c.h
  * @author  FMSH Application Team
  * @brief   Head file of I2C FL Module
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
#ifndef __FM33L0XXD_FL_I2C_H
#define __FM33L0XXD_FL_I2C_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33l0xxd_fl_def.h"
/** @addtogroup FM33L0XXD_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup I2C_FL_ES_INIT I2C Exported Init structures
  * @{
  */

  /**
  * @brief I2C Init Sturcture Definition
  */
typedef struct
{

    /** I2C通讯速率*/
    uint32_t baudRate;

} FL_I2C_MasterMode_InitTypeDef;



/**
  * @brief FL I2C Init Sturcture definition
  */
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup I2C_FL_Exported_Constants I2C Exported Constants
  * @{
  */

#define    I2C_I2CCTRL_SCLHL_Pos                                  (14U)
#define    I2C_I2CCTRL_SCLHL_Msk                                  (0x1U << I2C_I2CCTRL_SCLHL_Pos)
#define    I2C_I2CCTRL_SCLHL                                      I2C_I2CCTRL_SCLHL_Msk

#define    I2C_I2CCTRL_SDAHL_Pos                                  (13U)
#define    I2C_I2CCTRL_SDAHL_Msk                                  (0x1U << I2C_I2CCTRL_SDAHL_Pos)
#define    I2C_I2CCTRL_SDAHL                                      I2C_I2CCTRL_SDAHL_Msk

#define    I2C_I2CCTRL_ACKEN_Pos                                  (12U)
#define    I2C_I2CCTRL_ACKEN_Msk                                  (0x1U << I2C_I2CCTRL_ACKEN_Pos)
#define    I2C_I2CCTRL_ACKEN                                      I2C_I2CCTRL_ACKEN_Msk

#define    I2C_I2CCTRL_RCEN_Pos                                   (11U)
#define    I2C_I2CCTRL_RCEN_Msk                                   (0x1U << I2C_I2CCTRL_RCEN_Pos)
#define    I2C_I2CCTRL_RCEN                                       I2C_I2CCTRL_RCEN_Msk

#define    I2C_I2CCTRL_PEN_Pos                                    (10U)
#define    I2C_I2CCTRL_PEN_Msk                                    (0x1U << I2C_I2CCTRL_PEN_Pos)
#define    I2C_I2CCTRL_PEN                                        I2C_I2CCTRL_PEN_Msk

#define    I2C_I2CCTRL_RSEN_Pos                                   (9U)
#define    I2C_I2CCTRL_RSEN_Msk                                   (0x1U << I2C_I2CCTRL_RSEN_Pos)
#define    I2C_I2CCTRL_RSEN                                       I2C_I2CCTRL_RSEN_Msk

#define    I2C_I2CCTRL_SEN_Pos                                    (8U)
#define    I2C_I2CCTRL_SEN_Msk                                    (0x1U << I2C_I2CCTRL_SEN_Pos)
#define    I2C_I2CCTRL_SEN                                        I2C_I2CCTRL_SEN_Msk

#define    I2C_I2CCTRL_I2CEN_Pos                                  (0U)
#define    I2C_I2CCTRL_I2CEN_Msk                                  (0x1U << I2C_I2CCTRL_I2CEN_Pos)
#define    I2C_I2CCTRL_I2CEN                                      I2C_I2CCTRL_I2CEN_Msk

#define    I2C_I2CSTA_WCOL_Pos                                    (6U)
#define    I2C_I2CSTA_WCOL_Msk                                    (0x1U << I2C_I2CSTA_WCOL_Pos)
#define    I2C_I2CSTA_WCOL                                        I2C_I2CSTA_WCOL_Msk

#define    I2C_I2CSTA_RW_Pos                                      (5U)
#define    I2C_I2CSTA_RW_Msk                                      (0x1U << I2C_I2CSTA_RW_Pos)
#define    I2C_I2CSTA_RW                                          I2C_I2CSTA_RW_Msk

#define    I2C_I2CSTA_S_Pos                                       (3U)
#define    I2C_I2CSTA_S_Msk                                       (0x1U << I2C_I2CSTA_S_Pos)
#define    I2C_I2CSTA_S                                           I2C_I2CSTA_S_Msk

#define    I2C_I2CSTA_P_Pos                                       (4U)
#define    I2C_I2CSTA_P_Msk                                       (0x1U << I2C_I2CSTA_P_Pos)
#define    I2C_I2CSTA_P                                           I2C_I2CSTA_P_Msk

#define    I2C_I2CSTA_BF_Pos                                      (2U)
#define    I2C_I2CSTA_BF_Msk                                      (0x1U << I2C_I2CSTA_BF_Pos)
#define    I2C_I2CSTA_BF                                          I2C_I2CSTA_BF_Msk

#define    I2C_I2CSTA_ACKSTA_Pos                                  (1U)
#define    I2C_I2CSTA_ACKSTA_Msk                                  (0x1U << I2C_I2CSTA_ACKSTA_Pos)
#define    I2C_I2CSTA_ACKSTA                                      I2C_I2CSTA_ACKSTA_Msk

#define    I2C_I2CSTA_ACKDT_Pos                                   (0U)
#define    I2C_I2CSTA_ACKDT_Msk                                   (0x1U << I2C_I2CSTA_ACKDT_Pos)
#define    I2C_I2CSTA_ACKDT                                       I2C_I2CSTA_ACKDT_Msk

#define    I2C_I2CBRG_SSPBRG_Pos                                  (0U)
#define    I2C_I2CBRG_SSPBRG_Msk                                  (0x1ffU << I2C_I2CBRG_SSPBRG_Pos)
#define    I2C_I2CBRG_SSPBRG                                      I2C_I2CBRG_SSPBRG_Msk

#define    I2C_I2CBUF_SSPBUF_Pos                                  (0U)
#define    I2C_I2CBUF_SSPBUF_Msk                                  (0xffU << I2C_I2CBUF_SSPBUF_Pos)
#define    I2C_I2CBUF_SSPBUF                                      I2C_I2CBUF_SSPBUF_Msk

#define    I2C_I2CIR_I2CIE_Pos                                    (1U)
#define    I2C_I2CIR_I2CIE_Msk                                    (0x1U << I2C_I2CIR_I2CIE_Pos)
#define    I2C_I2CIR_I2CIE                                        I2C_I2CIR_I2CIE_Msk

#define    I2C_I2CIR_I2CIF_Pos                                    (0U)
#define    I2C_I2CIR_I2CIF_Msk                                    (0x1U << I2C_I2CIR_I2CIF_Pos)
#define    I2C_I2CIR_I2CIF                                        I2C_I2CIR_I2CIF_Msk

#define    I2C_I2CERR_ERRIE_Pos                                   (8U)
#define    I2C_I2CERR_ERRIE_Msk                                   (0x1U << I2C_I2CERR_ERRIE_Pos)
#define    I2C_I2CERR_ERRIE                                       I2C_I2CERR_ERRIE_Msk

#define    I2C_I2CERR_OIERR_Pos                                   (2U)
#define    I2C_I2CERR_OIERR_Msk                                   (0x1U << I2C_I2CERR_OIERR_Pos)
#define    I2C_I2CERR_OIERR                                       I2C_I2CERR_OIERR_Msk

#define    I2C_I2CERR_SDERR_Pos                                   (1U)
#define    I2C_I2CERR_SDERR_Msk                                   (0x1U << I2C_I2CERR_SDERR_Pos)
#define    I2C_I2CERR_SDERR                                       I2C_I2CERR_SDERR_Msk

#define    I2C_I2CERR_IERR_Pos                                    (0U)
#define    I2C_I2CERR_IERR_Msk                                    (0x1U << I2C_I2CERR_IERR_Pos)
#define    I2C_I2CERR_IERR                                        I2C_I2CERR_IERR_Msk






#define    FL_I2C_SCL_LEVEL_LOW                             	  (0x0U << I2C_I2CCTRL_SCLHL_Pos)
#define    FL_I2C_SCL_LEVEL_HIGH                              	(0x1U << I2C_I2CCTRL_SCLHL_Pos)


#define    FL_I2C_SDA_LEVEL_LOW                             		(0x0U << I2C_I2CCTRL_SDAHL_Pos)
#define    FL_I2C_SDA_LEVEL_HIGH                             		(0x1U << I2C_I2CCTRL_SDAHL_Pos)


#define    FL_I2C_MSP_DATA_BUFF_STATUS_FULL                       (0x1U << I2C_I2CSTA_BF_Pos)
#define    FL_I2C_MSP_DATA_BUFF_STATUS_EMPTY                      (0x0U << I2C_I2CSTA_BF_Pos)

#define    FL_I2C_MASTER_RESPOND_ACK                              (0x0U << I2C_I2CSTA_ACKDT_Pos)
#define    FL_I2C_MASTER_RESPOND_NACK                             (0x1U << I2C_I2CSTA_ACKDT_Pos)


/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup I2C_FL_Exported_Functions I2C Exported Functions
  * @{
  */

/**
  * @brief    Set SCL Pin Level When Disabled
  * @rmtoll   I2CCTRL    SCLHL    FL_I2C_Master_SetSCLPinLevelWhenDisabled
  * @param    I2Cx I2C instance
  * @param    level This parameter can be one of the following values:
  *           @arg @ref FL_I2C_SCL_LEVEL_LOW
  *           @arg @ref FL_I2C_SCL_LEVEL_HIGH
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_SetSCLPinLevelWhenDisabled(I2C_Type* I2Cx, uint32_t level)
{
    MODIFY_REG(I2Cx->I2CCTRL, I2C_I2CCTRL_SCLHL_Msk, level);
}

/**
  * @brief    Get SCL Pin Level  When Disabled Setting
  * @rmtoll   I2CCTRL    SCLHL    FL_I2C_Master_GetSCLPinLevelWhenDisabled
  * @param    I2Cx I2C instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_I2C_SCL_LEVEL_LOW
  *           @arg @ref FL_I2C_SCL_LEVEL_HIGH
  */
__STATIC_INLINE uint32_t FL_I2C_Master_GetSCLPinLevelWhenDisabled(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_SCLHL_Msk));
}

/**
  * @brief    Set SDA Pin Level When Disabled
  * @rmtoll   I2CCTRL    SDAHL    FL_I2C_Master_SetSDAPinLevelWhenDisabled
  * @param    I2Cx I2C instance
  * @param    level This parameter can be one of the following values:
  *           @arg @ref FL_I2C_SDA_LEVEL_LOW_LOW
  *           @arg @ref FL_I2C_SDA_LEVEL_LOW_HIGH
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_SetSDAPinLevelWhenDisabled(I2C_Type* I2Cx, uint32_t level)
{
    MODIFY_REG(I2Cx->I2CCTRL, I2C_I2CCTRL_SDAHL_Msk, level);
}

/**
  * @brief    Get SDA Pin Level status When Disabled Setting
  * @rmtoll   I2CCTRL    SDAHL    FL_I2C_Master_GetSDAPinLevelWhenDisabled
  * @param    I2Cx I2C instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_I2C_SDA_LEVEL_LOW
  *           @arg @ref FL_I2C_SDA_LEVEL_HIGH
  */
__STATIC_INLINE uint32_t FL_I2C_Master_GetSDAPinLevelWhenDisabled(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_SDAHL_Msk));
}

/**
  * @brief    Master Receive Respond Enable
  * @note     Reply With ACKDT Value When Enabled
  * @rmtoll   I2CCTRL    ACKEN    FL_I2C_Master_EnableRespond
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableRespond(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_ACKEN_Msk);
}

/**
  * @brief    Get Master Receive Respond status
  * @rmtoll   I2CCTRL    ACKEN    FL_I2C_Master_IsEnableRespond
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsEnableRespond(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_ACKEN_Msk) == I2C_I2CCTRL_ACKEN_Msk);
}

/**
  * @brief    Master Receive Respond disable 
  * @rmtoll   I2CCTRL    ACKEN    FL_I2C_Master_DisableRespond
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_DisableRespond(I2C_Type* I2Cx)
{
    CLEAR_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_ACKEN_Msk);
}

/**
  * @brief    Master receive enable
  * @rmtoll   I2CCTRL    RCEN    FL_I2C_Master_EnableRX
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableRX(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_RCEN_Msk);
}

/**
  * @brief    Get master receive enable status
  * @rmtoll   I2CCTRL    RCEN    FL_I2C_Master_IsEnabledRX
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsEnabledRX(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_RCEN_Msk) == I2C_I2CCTRL_RCEN_Msk);
}

/**
  * @brief    Master receive disable
  * @rmtoll   I2CCTRL    RCEN    FL_I2C_Master_DisableRX
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_DisableRX(I2C_Type* I2Cx)
{
    CLEAR_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_RCEN_Msk);
}

/**
  * @brief    Stop enable
  * @rmtoll   I2CCTRL    PEN    FL_I2C_Master_EnableI2CStop
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableI2CStop(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_PEN_Msk);
}

/**
  * @brief    Repeated START enable
  * @rmtoll   I2CCTRL    RSEN    FL_I2C_Master_EnableI2CRestart
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableI2CRestart(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_RSEN_Msk);
}

/**
  * @brief    START enable
  * @rmtoll   I2CCTRL    SEN    FL_I2C_Master_EnableI2CStart
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableI2CStart(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_SEN_Msk);
}

/**
  * @brief    Enable I2C 
  * @rmtoll   I2CCTRL    I2CEN    FL_I2C_Master_EnableI2C
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableI2C(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_I2CEN_Msk);
}

/**
  * @brief    Get I2C Enable status
  * @rmtoll   I2CCTRL    I2CEN    FL_I2C_Master_IsEnabledI2C
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsEnabledI2C(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_I2CEN_Msk) == I2C_I2CCTRL_I2CEN_Msk);
}

/**
  * @brief    Diasble I2C
  * @rmtoll   I2CCTRL    I2CEN    FL_I2C_Master_DisableI2C
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_DisableI2C(I2C_Type* I2Cx)
{
    CLEAR_BIT(I2Cx->I2CCTRL, I2C_I2CCTRL_I2CEN_Msk);
}

/**
  * @brief    Get write collision interrupt flag
  * @rmtoll   I2CSTA    WCOL    FL_I2C_Master_IsActiveFlag_WriteConflict
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_WriteConflict(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_WCOL_Msk) == (I2C_I2CSTA_WCOL_Msk));
}

/**
  * @brief    Clear write collision interrupt flag
  * @rmtoll   I2CSTA    WCOL    FL_I2C_Master_ClearFlag_WriteConflict
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_WriteConflict(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CSTA, I2C_I2CSTA_WCOL_Msk);
}

/**
  * @brief    Get I2C Transfer Direction
  * @rmtoll   I2CSTA    RW    FL_I2C_Master_IsActiveFlag_TransferDirection
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_TransferDirection(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_RW_Msk) == (I2C_I2CSTA_RW_Msk));
}

/**
  * @brief    Get start interrupt flag
  * @rmtoll   I2CSTA    S    FL_I2C_Master_IsActiveFlag_Start
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_Start(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_S_Msk) == (I2C_I2CSTA_S_Msk));
}

/**
  * @brief    Get Stop interrupt flag
  * @rmtoll   I2CSTA    P    FL_I2C_Master_IsActiveFlag_Stop
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_Stop(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_P_Msk) == (I2C_I2CSTA_P_Msk));
}

/**
  * @brief    Get buffer full status
  * @rmtoll   I2CSTA    BF    FL_I2C_Master_GetBuffStatus
  * @param    I2Cx I2C instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_I2C_MSP_DATA_BUFF_STATUS_FULL
  *           @arg @ref FL_I2C_MSP_DATA_BUFF_STATUS_EMPTY
  */
__STATIC_INLINE uint32_t FL_I2C_Master_GetBuffStatus(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_BF_Msk));
}

/**
  * @brief    Get acknowledge status flag
  * @rmtoll   I2CSTA    ACKSTA    FL_I2C_Master_IsActiveFlag_NACK
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_NACK(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_ACKSTA_Msk) == (I2C_I2CSTA_ACKSTA_Msk));
}

/**
  * @brief    Clear acknowledge status flag
  * @rmtoll   I2CSTA    ACKSTA    FL_I2C_Master_ClearFlag_NACK
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_NACK(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CSTA, I2C_I2CSTA_ACKSTA_Msk);
}

/**
  * @brief    Set ACK master output
  * @rmtoll   I2CSTA    ACKDT    FL_I2C_Master_SetRespond
  * @param    I2Cx I2C instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_I2C_MASTER_RESPOND_ACK
  *           @arg @ref FL_I2C_MASTER_RESPOND_NACK
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_SetRespond(I2C_Type* I2Cx, uint32_t mode)
{
    MODIFY_REG(I2Cx->I2CSTA, I2C_I2CSTA_ACKDT_Msk, mode);
}

/**
  * @brief    Get ACK master output
  * @rmtoll   I2CSTA    ACKDT    FL_I2C_Master_GetRespond
  * @param    I2Cx I2C instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_I2C_MASTER_RESPOND_ACK
  *           @arg @ref FL_I2C_MASTER_RESPOND_NACK
  */
__STATIC_INLINE uint32_t FL_I2C_Master_GetRespond(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CSTA, I2C_I2CSTA_ACKDT_Msk));
}

/**
  * @brief    Set SCL Baud Rate
  * @rmtoll   I2CBRG    SSPBRG    FL_I2C_Master_WriteSCLBaudRate
  * @param    I2Cx I2C instance
  * @param    BaudRate 
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_WriteSCLBaudRate(I2C_Type* I2Cx, uint32_t BaudRate)
{
    MODIFY_REG(I2Cx->I2CBRG, (0x1ffU << 0U), (BaudRate << 0U));
}

/**
  * @brief    Get master SCL high level length
  * @rmtoll   I2CBRG    SSPBRG    FL_I2C_Master_ReadSCLBaudRate
  * @param    I2Cx I2C instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_I2C_Master_ReadSCLBaudRate(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CBRG, (0x1ffU << 0U)) >> 0U);
}

/**
  * @brief    Set master data buffer
  * @rmtoll   I2CBUF    SSPBUF    FL_I2C_Master_WriteTXBuff
  * @param    I2Cx I2C instance
  * @param    data 
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_WriteTXBuff(I2C_Type* I2Cx, uint32_t data)
{
    MODIFY_REG(I2Cx->I2CBUF, (0xffU << 0U), (data << 0U));
}

/**
  * @brief    Get master data buffer
  * @rmtoll   I2CBUF    SSPBUF    FL_I2C_Master_ReadRXBuff
  * @param    I2Cx I2C instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_I2C_Master_ReadRXBuff(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CBUF, (0xffU << 0U)) >> 0U);
}

/**
  * @brief     I2C Interrupt enable
  * @rmtoll   I2CIR    I2CIE    FL_I2C_Master_EnableInterrupt
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableInterrupt(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CIR, I2C_I2CIR_I2CIE_Msk);
}

/**
  * @brief    Get I2C Interrupt enable status
  * @rmtoll   I2CIR    I2CIE    FL_I2C_Master_IsEnabledInterrupt
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsEnabledInterrupt(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CIR, I2C_I2CIR_I2CIE_Msk) == I2C_I2CIR_I2CIE_Msk);
}

/**
  * @brief    I2C Interrupt disable
  * @rmtoll   I2CIR    I2CIE    FL_I2C_Master_DisableInterrupt
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_DisableInterrupt(I2C_Type* I2Cx)
{
    CLEAR_BIT(I2Cx->I2CIR, I2C_I2CIR_I2CIE_Msk);
}

/**
  * @brief    Get I2C Interrupt Generation Flag
  * @rmtoll   I2CIR    I2CIF    FL_I2C_Master_IsActiveFlag_InterruptGeneration
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_InterruptGeneration(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CIR, I2C_I2CIR_I2CIF_Msk) == (I2C_I2CIR_I2CIF_Msk));
}

/**
  * @brief    Clear I2C Interrupt Generation Flag
  * @rmtoll   I2CIR    I2CIF    FL_I2C_Master_ClearFlag_InterruptGeneration
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_InterruptGeneration(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CIR, I2C_I2CIR_I2CIF_Msk);
}

/**
  * @brief    I2C Error Interrupt Enable
  * @rmtoll   I2CERR    ERRIE    FL_I2C_Master_EnableErrorInterrupt
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_EnableErrorInterrupt(I2C_Type* I2Cx)
{
    SET_BIT(I2Cx->I2CERR, I2C_I2CERR_ERRIE_Msk);
}

/**
  * @brief    Get I2C Error Interrupt Enable status
  * @rmtoll   I2CERR    ERRIE    FL_I2C_Master_IsEnabledErrorInterrupt
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsEnabledErrorInterrupt(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CERR, I2C_I2CERR_ERRIE_Msk) == I2C_I2CERR_ERRIE_Msk);
}

/**
  * @brief    I2C Error Interrupt disable
  * @rmtoll   I2CERR    ERRIE    FL_I2C_Master_DisableErrorInterrupt
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_DisableErrorInterrupt(I2C_Type* I2Cx)
{
    CLEAR_BIT(I2Cx->I2CERR, I2C_I2CERR_ERRIE_Msk);
}

/**
  * @brief    Get OP_IDLE Status Error Flag
  * @rmtoll   I2CERR    OIERR    FL_I2C_Master_IsActiveFlag_OP_IDLEStatusError
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_OP_IDLEStatusError(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CERR, I2C_I2CERR_OIERR_Msk) == (I2C_I2CERR_OIERR_Msk));
}

/**
  * @brief    Clear OP_IDLE Status Error Flag
  * @rmtoll   I2CERR    OIERR    FL_I2C_Master_ClearFlag_OP_IDLEStatusError
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_OP_IDLEStatusError(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CERR, I2C_I2CERR_OIERR_Msk);
}

/**
  * @brief    Get START_DONE Status Error Flag
  * @rmtoll   I2CERR    SDERR    FL_I2C_Master_IsActiveFlag_START_DONEStatusError
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_START_DONEStatusError(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CERR, I2C_I2CERR_SDERR_Msk) == (I2C_I2CERR_SDERR_Msk));
}

/**
  * @brief    Clear START_DONE Status Error Flag
  * @rmtoll   I2CERR    SDERR    FL_I2C_Master_ClearFlag_START_DONEStatusError
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_START_DONEStatusError(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CERR, I2C_I2CERR_SDERR_Msk);
}

/**
  * @brief    Get IDLE Status Error Flag
  * @rmtoll   I2CERR    IERR    FL_I2C_Master_IsActiveFlag_IDLEStatusError
  * @param    I2Cx I2C instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_I2C_Master_IsActiveFlag_IDLEStatusError(I2C_Type* I2Cx)
{
    return (uint32_t)(READ_BIT(I2Cx->I2CERR, I2C_I2CERR_IERR_Msk) == (I2C_I2CERR_IERR_Msk));
}

/**
  * @brief    Clear IDLE Status Error Flag
  * @rmtoll   I2CERR    IERR    FL_I2C_Master_ClearFlag_IDLEStatusError
  * @param    I2Cx I2C instance
  * @retval   None
  */
__STATIC_INLINE void FL_I2C_Master_ClearFlag_IDLEStatusError(I2C_Type* I2Cx)
{
    WRITE_REG(I2Cx->I2CERR, I2C_I2CERR_IERR_Msk);
}

/**
  * @}
  */


FL_ErrorStatus FL_I2C_DeInit(I2C_Type *I2Cx);
FL_ErrorStatus FL_I2C_MasterMode_Init(I2C_Type *I2Cx, FL_I2C_MasterMode_InitTypeDef *I2C_InitStruct);
void FL_I2C_MasterMode_StructInit(FL_I2C_MasterMode_InitTypeDef *I2C_InitStruct);


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33L0XXD_FL_I2C_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.2 @ 2026-01-06*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
