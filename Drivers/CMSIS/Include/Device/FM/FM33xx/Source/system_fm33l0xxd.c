/**************************************************************************/ /**
                                                                              * @file     system_fm33l0xxd.c
                                                                              * @brief    CMSIS Cortex-M0 Device Peripheral Access Layer Source File for
                                                                              *           Device FM33L0xxD
                                                                              * @version  V0.0.2
                                                                              * @date     29. March 2026
                                                                              *
                                                                              * @note
                                                                              *
                                                                              ******************************************************************************
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

#include "system_fm33l0xxd.h"
#include "fm33l0xxd_fl.h"

/* Clock Variable definitions ------------------------------------------------*/
uint32_t XTLFClock = XTLF_DEFAULT_VALUE;       /*!< External Low-freq Osc Clock Frequency (XTLF) */
uint32_t XTHFClock = XTHF_DEFAULT_VALUE;       /*!< External High-freq Osc Clock Frequency (XTHF) */
uint32_t SystemCoreClock = HCLK_DEFAULT_VALUE; /*!< System Clock Frequency (Core Clock) */

/* Clock functions -----------------------------------------------------------*/
/**
 *  @brief Retrieve the PLL clock frequency
 *
 *  @retval PLL clock frequency
 */
static uint32_t SystemPLLClockUpdate(void)
{
    uint32_t clock = 0;

    /* Acquire PLL clock source */
    switch ((RCC->PLLCON >> 1) & 0x3)
    {
    case 0:
        clock = 32768;
        break;

    case 1:
        clock = 32768;
        break;
    case 2:
        switch ((RCC->RCHFCON >> 16) & 0xFU)
        {
        case 1: /* 16MHz */
            clock = 62500;
            break;

        case 2: /* 24MHz */
            clock = 93750;
            break;

        case 3: /* 32MHz */
            clock = 125000;
            break;

        case 0: /* 8MHz */
        default:
            clock = 31250;
            break;
        }
        break;
    case 3:
        clock = 32768;
        break;
    }

    /* Acquire PLL multiplier and calculate PLL frequency */
    clock = clock * (((RCC->PLLCON >> 16) & 0x3FF) + 1);

    /* Acquire PLL output channel(PLLx1 or PLLx2) */
    if ((RCC->PLLCON >> 3) & 0x1)
    {
        clock *= 2;
    }

    return clock;
}

/**
 *  @brief Update the core clock frequency variable: SystemCoreClock
 *
 */
void SystemCoreClockUpdate(void)
{
    switch ((RCC->SYSCLKSEL >> 0) & 0x7)
    {
    case 1: /* RCLF */
        SystemCoreClock = 512000;
        break;

    case 2: /* LSCLK */
        SystemCoreClock = XTLFClock;
        break;

    case 3: /* PLL */
        SystemCoreClock = SystemPLLClockUpdate();
        break;

    case 4: /* XTHF */
        SystemCoreClock = XTHFClock;
        break;

    default:
        switch ((RCC->RCHFCON >> 16) & 0xf)
        {
        case 1: /* 16MHz */
            SystemCoreClock = 16000000;
            break;

        case 2: /* 24MHz */
            SystemCoreClock = 24000000;
            break;

        case 3: /* 32MHz */
            SystemCoreClock = 32000000;
            break;

        case 0: /* 8MHz */
        default:
            SystemCoreClock = 8000000;
            break;
        }
        break;
    }
    /* AHB Prescaler */
    switch ((RCC->SYSCLKSEL >> 8) & 0x7)
    {
    case 4: /* divide by 2 */
        SystemCoreClock /= 2;
        break;

    case 5: /* divide by 4 */
        SystemCoreClock /= 4;
        break;

    case 6: /* divide by 8 */
        SystemCoreClock /= 8;
        break;

    case 7: /* divide by 16 */
        SystemCoreClock /= 16;
        break;

    default: /* no division */
        break;
    }
}

/**
 * @brief  Setup the microcontroller system.
 *         Initialize the System.
 */
void SystemInit(void)
{
    RCC->PERCLKCON1 |= 0x20;
    IWDT->IWDTSERV = 0x12345A5AU;

    DBG->DBGCR = 0x03;

    RCC->PERCLKCON1 |= 0x80;
    GPIOGHD->PDEN &= (~(0x3 << 8));
    GPIOG->PUEN |= (0x3 << 8);

    RCC->RCLPTRIM = RCLP_LDT_TRIM;
    RCC->RCLFTRIM = RCLF_LDT_TRIM;

    RMU->PDRCFG = 0x00; // 1.5V
    RMU->BORCFG = 0x0;  // 1.7V

    RCC->FDETIE = 0;
    RCC->RCHFCON = 0x01;
    RCC->RCHFTRIM = RCHF8M_LDT_TRIM;
    RCC->SYSCLKSEL &= (~(0x7 << 0));
    RCC->PLLCON &= (~(0x1 << 0));

    SystemCoreClockUpdate();

    IWDT->IWDTSERV = 0x12345A5AU;
}
