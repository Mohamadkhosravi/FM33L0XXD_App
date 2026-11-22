
/****************************************************************************************************/ /**
                                                                                                        * @file     FM33L0XXD.h
                                                                                                        *
                                                                                                        * @brief    CMSIS SC000 Peripheral Access Layer Header File for
                                                                                                        *           FM33L0XXD from .
                                                                                                        *
                                                                                                        * @version  V0.0.1
                                                                                                        * @date     29. January 2026
                                                                                                        *
                                                                                                        * @note     Generated with SVDConv V2.87e
                                                                                                        *           from CMSIS SVD File 'FM33L0XXD.svd' Version 1.0,
                                                                                                        *******************************************************************************************************/

/** @addtogroup (null)
 * @{
 */

/** @addtogroup FM33L0XXD
 * @{
 */

#ifndef FM33L0XXD_H
#define FM33L0XXD_H

#ifdef __cplusplus
extern "C"
{
#endif

  /* -------------------------  Interrupt Number Definition  ------------------------ */

  typedef enum
  {
    /* ---------------------  SC000 Processor Exceptions Numbers  --------------------- */
    Reset_IRQn = -15,          /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
    NonMaskableInt_IRQn = -14, /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
    HardFault_IRQn = -13,      /*!<   3  Hard Fault, all classes of Fault                                 */
    SVCall_IRQn = -5,          /*!<  11  System Service Call via SVC instruction                          */
    DebugMonitor_IRQn = -4,    /*!<  12  Debug Monitor                                                    */
    PendSV_IRQn = -2,          /*!<  14  Pendable request for system service                              */
    SysTick_IRQn = -1,         /*!<  15  System Tick Timer                                                */
                               /* --------------------  FM33L0XXD Specific Interrupt Numbers  -------------------- */
    WWDT_IRQn = 0,             /*!<   0  WWDT interrupt                                                   */
    SVD_IRQn = 1,              /*!<   1  SVD interrupt                                                    */
    RTC_IRQn = 2,              /*!<   2  RTC interrupt                                                    */
    FLASH_IRQn = 3,            /*!<   3  FLASH interrupt                                                  */
    FDET_IRQn = 4,             /*!<   4  FDET interrupt                                                   */
    ADC_IRQn = 5,              /*!<   5  ADC interrupt                                                    */
    SPI0_IRQn = 6,             /*!<   6  SPI0 interrupt                                                   */
    SPI1_IRQn = 7,             /*!<   7  SPI1 interrupt                                                   */
    SPI2_IRQn = 8,             /*!<   8  SPI2 interrupt                                                   */
    UART0_IRQn = 9,            /*!<   9  UART0 interrupt                                                  */
    UART1_IRQn = 10,           /*!<  10  UART1 interrupt                                                  */
    UART2_IRQn = 11,           /*!<  11  UART2 interrupt                                                  */
    UART3_IRQn = 12,           /*!<  12  UART3 interrupt                                                  */
    UART4_IRQn = 13,           /*!<  13  UART4 interrupt                                                  */
    UART5_IRQn = 14,           /*!<  14  UART5 interrupt                                                  */
    U78160_IRQn = 15,          /*!<  15  U78160 interrupt                                                 */
    U78161_IRQn = 16,          /*!<  16  U78161 interrupt                                                 */
    I2C_IRQn = 17,             /*!<  17  I2C interrupt                                                    */
    GPTIM_IRQn = 18,           /*!<  18  GPTIMER interrupt                                                */
    AES_IRQn = 19,             /*!<  19  AES interrupt                                                    */
    LPTIM16_IRQn = 20,         /*!<  20  LPTIM16 interrupt                                                */
    DMA_IRQn = 21,             /*!<  21  DMA interrupt                                                    */
    WKUPX_IRQn = 22,           /*!<  22  WKUPX interrupt                                                  */
    COMP_IRQn = 23,            /*!<  23  COMP interrupt                                                   */
    BSTIM1_IRQn = 24,          /*!<  24  BT1 interrupt                                                    */
    BSTIM2_IRQn = 25,          /*!<  25  BT2 interrupt                                                    */
    EXTIM1_IRQn = 26,          /*!<  26  ET1 interrupt                                                    */
    EXTIM2_IRQn = 27,          /*!<  27  ET2 interrupt                                                    */
    EXTIM3_IRQn = 28,          /*!<  28  ET3 interrupt                                                    */
    EXTIM4_IRQn = 29,          /*!<  29  ET4 interrupt                                                    */
    GPIO_IRQn = 30,            /*!<  30  GPIO interrupt                                                   */
    LPUART_IRQn = 31           /*!<  31  LPUART interrupt                                                 */
  } IRQn_Type;

/** @addtogroup Configuration_of_CMSIS
 * @{
 */

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the SC000 Processor and Core Peripherals---------------- */
#define __SC000_REV 0x0100       /*!< SC000 Core Revision                                                   */
#define __MPU_PRESENT 0          /*!< MPU present or not                                                    */
#define __VTOR_PRESENT 1         /*!< VTOR present or not                                                   */
#define __NVIC_PRIO_BITS 8       /*!< Number of Bits used for Priority Levels                               */
#define __Vendor_SysTickConfig 0 /*!< Set to 1 if different SysTick Config is used                          */
  /** @} */                      /* End of group Configuration_of_CMSIS */

#include "core_cm0plus.h"     /*!< SC000 processor and core peripherals                                  */
#include "system_FM33L0XXD.h" /*!< FM33L0XXD System                                                      */

/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */

/** @addtogroup Device_Peripheral_Registers
 * @{
 */

/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined(__ICCARM__)
#pragma language = extended
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning 586
#else
#warning Not supported compiler type
#endif

  /* ================================================================================ */
  /* ================                       AES                      ================ */
  /* ================================================================================ */

  /**
   * @brief AES module information (AES)
   */

  typedef struct
  {                         /*!< AES Structure                                                         */
    __IO uint32_t AES_CR;   /*!< AES_CR Register                                                       */
    __IO uint32_t AES_IER;  /*!< AES_IER Register                                                      */
    __IO uint32_t AES_ISR;  /*!< AES_ISR Register                                                      */
    __IO uint32_t AES_DIR;  /*!< AES_DIR Register                                                      */
    __IO uint32_t AES_DOR;  /*!< AES_DOR Register                                                      */
    __IO uint32_t AES_KEY0; /*!< AES_KEY0 Register                                                     */
    __IO uint32_t AES_KEY1; /*!< AES_KEY1 Register                                                     */
    __IO uint32_t AES_KEY2; /*!< AES_KEY2 Register                                                     */
    __IO uint32_t AES_KEY3; /*!< AES_KEY3 Register                                                     */
    __IO uint32_t AES_KEY4; /*!< AES_KEY4 Register                                                     */
    __IO uint32_t AES_KEY5; /*!< AES_KEY5 Register                                                     */
    __IO uint32_t AES_KEY6; /*!< AES_KEY6 Register                                                     */
    __IO uint32_t AES_KEY7; /*!< AES_KEY7 Register                                                     */
    __IO uint32_t AES_IVR0; /*!< AES_IVR0 Register                                                     */
    __IO uint32_t AES_IVR1; /*!< AES_IVR1 Register                                                     */
    __IO uint32_t AES_IVR2; /*!< AES_IVR2 Register                                                     */
    __IO uint32_t AES_IVR3; /*!< AES_IVR3 Register                                                     */
    __IO uint32_t AES_H0;   /*!< AES_H0 Register                                                       */
    __IO uint32_t AES_H1;   /*!< AES_H1 Register                                                       */
    __IO uint32_t AES_H2;   /*!< AES_H2 Register                                                       */
    __IO uint32_t AES_H3;   /*!< AES_H3 Register                                                       */
  } AES_Type;

  /* ================================================================================ */
  /* ================                      BSTIM                     ================ */
  /* ================================================================================ */

  /**
   * @brief BSTIM1 module information (BSTIM)
   */

  typedef struct
  {                       /*!< BSTIM Structure                                                       */
    __IO uint32_t CR1;    /*!< CR1 Register                                                          */
    __IO uint32_t BCR2;   /*!< BCR2 Register                                                         */
    __IO uint32_t CFG1;   /*!< CFG1 Register                                                         */
    __IO uint32_t CFG2;   /*!< CFG2 Register                                                         */
    __IO uint32_t PRES;   /*!< PRES Register                                                         */
    __IO uint32_t LOADCR; /*!< LOADCR Register                                                       */
    __IO uint32_t CNTL;   /*!< CNTL Register                                                         */
    __IO uint32_t CNTH;   /*!< CNTH Register                                                         */
    __IO uint32_t PRESET; /*!< PRESET Register                                                       */
    __IO uint32_t LOADL;  /*!< LOADL Register                                                        */
    __IO uint32_t LOADH;  /*!< LOADH Register                                                        */
    __IO uint32_t CMPL;   /*!< CMPL Register                                                         */
    __IO uint32_t CMPH;   /*!< CMPH Register                                                         */
    __IO uint32_t OUTCNT; /*!< OUTCNT Register                                                       */
    __IO uint32_t OCR;    /*!< OCR Register                                                          */
    __IO uint32_t IER;    /*!< IER Register                                                          */
    __IO uint32_t ISR;    /*!< ISR Register                                                          */
  } BSTIM_Type;

  /* ================================================================================ */
  /* ================                      COMP                      ================ */
  /* ================================================================================ */

  /**
   * @brief COMP1 module information (COMP)
   */

  typedef struct
  {                   /*!< COMP Structure                                                        */
    __IO uint32_t CR; /*!< CR Register                                                           */
  } COMP_Type;

  /* ================================================================================ */
  /* ================                     COMPCOM                    ================ */
  /* ================================================================================ */

  /**
   * @brief COMPCOM module information (COMPCOM)
   */

  typedef struct
  {                    /*!< COMPCOM Structure                                                     */
    __IO uint32_t ICR; /*!< COMP_ICR Register                                                     */
    __IO uint32_t IF;  /*!< COMPIF Register                                                       */
  } COMPCOM_Type;

  /* ================================================================================ */
  /* ================                       CRC                      ================ */
  /* ================================================================================ */

  /**
   * @brief CRC module information (CRC)
   */

  typedef struct
  {                       /*!< CRC Structure                                                         */
    __IO uint32_t CRCDR;  /*!< CRCDR Register                                                        */
    __IO uint32_t CRCCR;  /*!< CRCCR Register                                                        */
    __IO uint32_t CRCCAL; /*!< CRCCAL Register                                                       */
    __IO uint32_t CRCXOR; /*!< CRCXOR Register                                                       */
    __I uint32_t RESERVED[3];
    __IO uint32_t CRCPOLY; /*!< CRCPOLY Register                                                      */
  } CRC_Type;

  /* ================================================================================ */
  /* ================                       DBG                      ================ */
  /* ================================================================================ */

  /**
   * @brief DBG module information (DBG)
   */

  typedef struct
  { /*!< DBG Structure                                                         */
    __I uint32_t RESERVED;
    __IO uint32_t DBGCR; /*!< DBGCR Register                                                        */
  } DBG_Type;

  /* ================================================================================ */
  /* ================                      LCD                      ================ */
  /* ================================================================================ */

  /**
   * @brief LCD module information (LCD)
   */

  typedef struct
  {                          /*!< DISP Structure                                                        */
    __IO uint32_t DISPCTRL;  /*!< DISPCTRL Register                                                     */
    __IO uint32_t LCDTEST;   /*!< LCDTEST Register                                                      */
    __IO uint32_t DF;        /*!< DF Register                                                           */
    __IO uint32_t TON;       /*!< TON Register                                                          */
    __IO uint32_t TOFF;      /*!< TOFF Register                                                         */
    __IO uint32_t DISPIE;    /*!< DISPIE Register                                                       */
    __IO uint32_t DISPIF;    /*!< DISPIF Register                                                       */
    __IO uint32_t LCDSET;    /*!< LCDSET Register                                                       */
    __IO uint32_t LCDDRV;    /*!< LCDDRV Register                                                       */
    __IO uint32_t DISPDATA0; /*!< DISPDATA0 Register                                                    */
    __IO uint32_t DISPDATA1; /*!< DISPDATA1 Register                                                    */
    __IO uint32_t DISPDATA2; /*!< DISPDATA2 Register                                                    */
    __IO uint32_t DISPDATA3; /*!< DISPDATA3 Register                                                    */
    __IO uint32_t DISPDATA4; /*!< DISPDATA4 Register                                                    */
    __IO uint32_t DISPDATA5; /*!< DISPDATA5 Register                                                    */
    __IO uint32_t DISPDATA6; /*!< DISPDATA6 Register                                                    */
    __IO uint32_t DISPDATA7; /*!< DISPDATA7 Register                                                    */
    __IO uint32_t DISPDATA8; /*!< DISPDATA8 Register                                                    */
    __IO uint32_t DISPDATA9; /*!< DISPDATA9 Register                                                    */
    __IO uint32_t LCDBIAS;   /*!< LCDBIAS Register                                                      */
    __IO uint32_t COM_EN;    /*!< COM_EN Register                                                       */
    __IO uint32_t SEG_EN0;   /*!< SEG_EN0 Register                                                      */
    __IO uint32_t SEG_EN1;   /*!< SEG_EN1 Register                                                      */
  } LCD_Type;

  /* ================================================================================ */
  /* ================                      DMA                      ================ */
  /* ================================================================================ */

  /**
   * @brief DMAC module information (DMA)
   */

  typedef struct
  {                           /*!< DMAC Structure                                                        */
    __IO uint32_t GLOBALCTRL; /*!< GLOBALCTRL Register                                                   */
    __IO uint32_t CH0CTRL;    /*!< CH0CTRL Register                                                      */
    __IO uint32_t CH0RAMADDR; /*!< CH0RAMADDR Register                                                   */
    __IO uint32_t CH1CTRL;    /*!< CH1CTRL Register                                                      */
    __IO uint32_t CH1RAMADDR; /*!< CH1RAMADDR Register                                                   */
    __IO uint32_t CH2CTRL;    /*!< CH2CTRL Register                                                      */
    __IO uint32_t CH2RAMADDR; /*!< CH2RAMADDR Register                                                   */
    __IO uint32_t CH3CTRL;    /*!< CH3CTRL Register                                                      */
    __IO uint32_t CH3RAMADDR; /*!< CH3RAMADDR Register                                                   */
    __IO uint32_t CH4CTRL;    /*!< CH4CTRL Register                                                      */
    __IO uint32_t CH4RAMADDR; /*!< CH4RAMADDR Register                                                   */
    __IO uint32_t CH5CTRL;    /*!< CH5CTRL Register                                                      */
    __IO uint32_t CH5RAMADDR; /*!< CH5RAMADDR Register                                                   */
    __IO uint32_t CH6CTRL;    /*!< CH6CTRL Register                                                      */
    __IO uint32_t CH6RAMADDR; /*!< CH6RAMADDR Register                                                   */
    __IO uint32_t CH7CTRL;    /*!< CH7CTRL Register                                                      */
    __IO uint32_t CH7FLSADDR; /*!< CH7FLSADDR Register                                                   */
    __IO uint32_t CH7RAMADDR; /*!< CH7RAMADDR Register                                                   */
    __IO uint32_t CHSTATUS;   /*!< CHSTATUS Register                                                     */
  } DMA_Type;

  /* ================================================================================ */
  /* ================                      EXTIM                     ================ */
  /* ================================================================================ */

  /**
   * @brief EXTIM module information (EXTIM)
   */

  typedef struct
  {                          /*!< EXTIM Structure                                                       */
    __IO uint32_t CR;        /*!< CR Register                                                           */
    __IO uint32_t INSEL;     /*!< INSEL Register                                                        */
    __IO uint32_t PRESCALE1; /*!< PRESCALE1 Register                                                    */
    __IO uint32_t PRESCALE2; /*!< PRESCALE2 Register                                                    */
    __IO uint32_t INITVALUE; /*!< INITVALUE Register                                                    */
    __IO uint32_t CMP;       /*!< CMP Register                                                          */
    __IO uint32_t IE;        /*!< IE Register                                                           */
    __IO uint32_t IF;        /*!< IF Register                                                           */
  } EXTIM_Type;

  /* ================================================================================ */
  /* ================                     EXTIMCOM                    ================ */
  /* ================================================================================ */

  /**
   * @brief EXTIMCOM module information (EXTIMCOM)
   */

  typedef struct
  {                       /*!< EXTIMCOM Structure                                                       */
    __IO uint32_t ET1CNT; /*!< ET1CNT Register                                                          */
    __IO uint32_t ET2CNT; /*!< ET2CNT Register                                                          */
    __IO uint32_t ET3CNT; /*!< ET3CNT Register                                                          */
    __IO uint32_t ET4CNT; /*!< ET4CNT Register                                                          */
  } EXTIMCOM_Type;

  /* ================================================================================ */
  /* ================                      FLASH                     ================ */
  /* ================================================================================ */

  /**
   * @brief FLASH module information (FLASH)
   */

  typedef struct
  {                           /*!< FLASH Structure                                                       */
    __IO uint32_t FLASHRDCON; /*!< FLASHRDCON Register                                                   */
    __I uint32_t RESERVED;
    __IO uint32_t USRCFG;  /*!< USRCFG Register                                                       */
    __IO uint32_t ACLOCK1; /*!< ACLOCK1 Register                                                      */
    __I uint32_t RESERVED1;
    __IO uint32_t EPCON;  /*!< EPCON Register                                                        */
    __IO uint32_t FLSKEY; /*!< FLSKEY Register                                                       */
    __IO uint32_t FLSIE;  /*!< FLSIE Register                                                        */
    __IO uint32_t FLSIF;  /*!< FLSIF Register                                                        */
  } FLASH_Type;

  /* ================================================================================ */
  /* ================                      GPIO                      ================ */
  /* ================================================================================ */

  /**
   * @brief GPIOA module information (GPIO)
   */

  typedef struct
  {                     /*!< GPIO Structure                                                        */
    __IO uint32_t INEN; /*!< INEN Register                                                         */
    __IO uint32_t PUEN; /*!< PUEN Register                                                         */
    __IO uint32_t ODEN; /*!< ODEN Register                                                         */
    __IO uint32_t FCR;  /*!< FCR Register                                                          */
    __IO uint32_t DO;   /*!< DO Register                                                           */
    __IO uint32_t DSET; /*!< DSET Register                                                         */
    __IO uint32_t DRESET;
    __IO uint32_t DIN; /*!< DIN Register                                                          */
  } GPIO_Type;

  /* ================================================================================ */
  /* ================                     GPIOCOM                    ================ */
  /* ================================================================================ */

  /**
   * @brief GPIOCOM module information (GPIOCOM)
   */

  typedef struct
  {                          /*!< GPIOCOM Structure                                                     */
    __IO uint32_t EXTI0_SEL; /*!< EXTI0_SEL Register                                                    */
    __IO uint32_t EXTI1_SEL; /*!< EXTI1_SEL Register                                                    */
    __IO uint32_t EXTI2_SEL; /*!< EXTI2_SEL Register                                                    */
    __IO uint32_t EXTI0_IF;  /*!< EXTI0_IF Register                                                     */
    __IO uint32_t EXTI1_IF;  /*!< EXTI1_IF Register                                                     */
    __IO uint32_t EXTI2_IF;  /*!< EXTI2_IF Register                                                     */
    __IO uint32_t FOUTSEL;   /*!< FOUTSEL Register                                                      */
    __IO uint32_t HDSEL;     /*!< HDSEL Register                                                        */
    __IO uint32_t ANASELECT; /*!< ANASELECT Register                                                    */
    __IO uint32_t IODF;      /*!< IODF Register                                                         */
    __IO uint32_t PINWKEN;   /*!< PINWKEN Register                                                      */
    __IO uint32_t PF4AFSEL;  /*!< PF4AFSEL Register                                                     */
  } GPIOCOM_Type;

  /* ================================================================================ */
  /* ================                     GPIOx_HD                   ================ */
  /* ================================================================================ */
  typedef struct
  {
    __IO uint32_t DSCFG; /*!<  Px drive intensity and speed configuration register      */
    __IO uint32_t DFS;   /*!<  Px extra digit function select register                  */
    __IO uint32_t PDEN;  /*!<  Px drop-down enable register                             */
    __IO uint32_t RSV0;  /*!<  RSV    */
  } GPIOxHD_Type;

  /* ================================================================================ */
  /* ================                      GPTIM                     ================ */
  /* ================================================================================ */

  /**
   * @brief GPTIM0 module information (GPTIM)
   */

  typedef struct
  {                      /*!< GPTIM Structure                                                       */
    __IO uint32_t CR1;   /*!< CR1 Register                                                          */
    __IO uint32_t CR2;   /*!< CR2 Register                                                          */
    __IO uint32_t SMCR;  /*!< SMCR Register                                                         */
    __IO uint32_t DIER;  /*!< DIER Register                                                         */
    __IO uint32_t SR;    /*!< SR Register                                                           */
    __IO uint32_t EGR;   /*!< EGR Register                                                          */
    __IO uint32_t CCMR1; /*!< CCMR1 Register                                                        */
    __IO uint32_t CCMR2; /*!< CCMR2 Register                                                        */
    __IO uint32_t CCER;  /*!< CCER Register                                                         */
    __IO uint32_t CNT;   /*!< CNT Register                                                          */
    __IO uint32_t PSC;   /*!< PSC Register                                                          */
    __IO uint32_t ARR;   /*!< ARR Register                                                          */
    __I uint32_t RESERVED;
    __IO uint32_t CCR1; /*!< CCR1 Register                                                         */
    __IO uint32_t CCR2; /*!< CCR2 Register                                                         */
    __IO uint32_t CCR3; /*!< CCR3 Register                                                         */
    __IO uint32_t CCR4; /*!< CCR4 Register                                                         */
    __I uint32_t RESERVED1[7];
    __IO uint32_t ITRSEL; /*!< ITRSEL Register                                                       */
  } GPTIM_Type;

  /* ================================================================================ */
  /* ================                       I2C                      ================ */
  /* ================================================================================ */

  /**
   * @brief I2C0 module information (I2C)
   */

  typedef struct
  {                        /*!< I2C Structure                                                         */
    __IO uint32_t I2CCTRL; /*!< I2CCTRL Register                                                      */
    __IO uint32_t I2CSTA;  /*!< I2CSTA Register                                                       */
    __IO uint32_t I2CBRG;  /*!< I2CBRG Register                                                       */
    __IO uint32_t I2CBUF;  /*!< I2CBUF Register                                                       */
    __IO uint32_t I2CIR;   /*!< I2CIR Register                                                        */
    __I uint32_t RESERVED;
    __IO uint32_t I2CERR; /*!< I2CERR Register                                                       */
  } I2C_Type;

  /* ================================================================================ */
  /* ================                      IWDT                      ================ */
  /* ================================================================================ */

  /**
   * @brief IWDT module information (IWDT)
   */

  typedef struct
  {                         /*!< IWDT Structure                                                        */
    __IO uint32_t IWDTSERV; /*!< IWDTSERV Register                                                     */
    __IO uint32_t IWDTCFG;  /*!< IWDTCFG Register                                                      */
    __IO uint32_t IWDTCNT;  /*!< IWDTCNT Register                                                      */
  } IWDT_Type;

  /* ================================================================================ */
  /* ================                      LPTIM16                     ================ */
  /* ================================================================================ */

  /**
   * @brief LPTIM16 module information (LPTIM16)
   */

  typedef struct
  {                          /*!< LPTIM16 Structure                                                       */
    __IO uint32_t LPTCFG;    /*!< LPTCFG Register                                                       */
    __IO uint32_t LPTCNT;    /*!< LPTCNT Register                                                       */
    __IO uint32_t LPTCMP;    /*!< LPTCMP Register                                                       */
    __IO uint32_t LPTTARGET; /*!< LPTTARGET Register                                                    */
    __IO uint32_t LPTIE;     /*!< LPTIE Register                                                        */
    __IO uint32_t LPTIF;     /*!< LPTIF Register                                                        */
    __IO uint32_t LPTCTRL;   /*!< LPTCTRL Register                                                      */
  } LPTIM16_Type;

  /* ================================================================================ */
  /* ================                     LPUART                     ================ */
  /* ================================================================================ */

  /**
   * @brief LPUART0 module information (LPUART)
   */

  typedef struct
  {                        /*!< LPUART Structure                                                      */
    __IO uint32_t LPURXD;  /*!< LPURXD Register                                                       */
    __IO uint32_t LPUTXD;  /*!< LPUTXD Register                                                       */
    __IO uint32_t LPUSTA;  /*!< LPUSTA Register                                                       */
    __IO uint32_t LPUCON;  /*!< LPUCON Register                                                       */
    __IO uint32_t LPUIF;   /*!< LPUIF Register                                                        */
    __IO uint32_t LPUBAUD; /*!< LPUBAUD Register                                                      */
    __IO uint32_t LPUEN;   /*!< LPUEN Register                                                        */
    __IO uint32_t COMPARE; /*!< COMPARE Register                                                      */
    __IO uint32_t MODU;    /*!< MODU Register                                                         */
  } LPUART_Type;

  /* ================================================================================ */
  /* ================                       PMU                      ================ */
  /* ================================================================================ */

  /**
   * @brief PMU module information (PMU)
   */

  typedef struct
  {                        /*!< PMU Structure                                                         */
    __IO uint32_t LPMCFG;  /*!< LPMCFG Register                                                       */
    __IO uint32_t WKTR;    /*!< WKDLYCON Register                                                     */
    __IO uint32_t WKPFLAG; /*!< WKPFLAG Register                                                      */
    __IO uint32_t LPREIE;  /*!< LPREIE Register                                                       */
    __IO uint32_t LPREIF;  /*!< LPREIF Register                                                       */
  } PMU_Type;

  /* ================================================================================ */
  /* ================                       RCC                      ================ */
  /* ================================================================================ */

  /**
   * @brief RCC module information (RCC)
   */

  typedef struct
  {                           /*!< RCC Structure                                                         */
    __IO uint32_t SYSCLKSEL;  /*!< SYSCLKSEL Register                                                    */
    __IO uint32_t RCHFCON;    /*!< RCHFCON Register                                                      */
    __IO uint32_t RCHFTRIM;   /*!< RCHFTRIM Register                                                     */
    __IO uint32_t PLLCON;     /*!< PLLCON Register                                                       */
    __IO uint32_t RCLPCON;    /*!< RCLPCON Register                                                      */
    __IO uint32_t RCLPTRIM;   /*!< RCLPTRIM Register                                                     */
    __IO uint32_t XTLFIPW;    /*!< XTLFIPW Register                                                      */
    __IO uint32_t PERCLKCON1; /*!< PERCLKCON1 Register                                                   */
    __IO uint32_t PERCLKCON2; /*!< PERCLKCON2 Register                                                   */
    __IO uint32_t PERCLKCON3; /*!< PERCLKCON3 Register                                                   */
    __IO uint32_t PERCLKCON4; /*!< PERCLKCON4 Register                                                   */
    __IO uint32_t PERCLKCON5; /*!< PERCLKCON5 Register                                                   */
    __I uint32_t RESERVED[2];
    __IO uint32_t MPRIL;    /*!< MPRIL Register                                                        */
    __IO uint32_t RCLFCON;  /*!< RCLFCON Register                                                      */
    __IO uint32_t RCLFTRIM; /*!< RCLFTRIM Register                                                     */
    __I uint32_t RESERVED1[5];
    __IO uint32_t XTHFCR; /*!< XTHFCR Register                                                       */
    __I uint32_t RESERVED2[18798];
    __IO uint32_t FDETIE; /*!< FDETIE Register                                                       */
    __IO uint32_t FDETIF; /*!< FDETIF Register                                                       */
  } RCC_Type;

  /* ================================================================================ */
  /* ================                       RMU                      ================ */
  /* ================================================================================ */

  /**
   * @brief RMU module information (RMU)
   */

  typedef struct
  {                        /*!< RMU Structure                                                         */
    __IO uint32_t RSTCFG;  /*!< RSTCFG Register                                                       */
    __IO uint32_t SOFTRST; /*!< SOFTRST Register                                                      */
    __IO uint32_t RSTFLAG; /*!< RSTFLAG Register                                                      */
    __I uint32_t RESERVED[17];
    __IO uint32_t PERHRSTEN; /*!< PERHRSTEN Register                                                    */
    __IO uint32_t AHBRST;    /*!< AHBRST Register                                                       */
    __IO uint32_t APBRST1;   /*!< APBRST1 Register                                                      */
    __IO uint32_t APBRST2;   /*!< APBRST2 Register                                                      */
    __IO uint32_t APBRST3;   /*!< APBRST3 Register                                                      */
    __I uint32_t RESERVED1[18791];
    __IO uint32_t PDRCFG; /*!< PDRCFG Register                                                       */
    __IO uint32_t BORCFG; /*!< BORCFG Register                                                       */
  } RMU_Type;

  /* ================================================================================ */
  /* ================                       RTC                      ================ */
  /* ================================================================================ */

  /**
   * @brief RTC module information (RTC)
   */

  typedef struct
  {                            /*!< RTC Structure                                                         */
    __IO uint32_t RTCWE;       /*!< RTCWE Register                                                        */
    __IO uint32_t RTCIE;       /*!< RTCIE Register                                                        */
    __IO uint32_t RTCIF;       /*!< RTCIF Register                                                        */
    __IO uint32_t BCDSEC;      /*!< BCDSEC Register                                                       */
    __IO uint32_t BCDMIN;      /*!< BCDMIN Register                                                       */
    __IO uint32_t BCDHOUR;     /*!< BCDHOUR Register                                                      */
    __IO uint32_t BCDDATE;     /*!< BCDDATE Register                                                      */
    __IO uint32_t BCDWEEK;     /*!< BCDWEEK Register                                                      */
    __IO uint32_t BCDMONTH;    /*!< BCDMONTH Register                                                     */
    __IO uint32_t BCDYEAR;     /*!< BCDYEAR Register                                                      */
    __IO uint32_t ALARM;       /*!< ALARM Register                                                        */
    __IO uint32_t FSEL;        /*!< FSEL Register                                                         */
    __IO uint32_t ADJUST;      /*!< ADJUST Register                                                       */
    __IO uint32_t ADSIGN;      /*!< ADSIGN Register                                                       */
    __IO uint32_t PR1SEN;      /*!< PR1SEN Register                                                       */
    __IO uint32_t MSECCNT;     /*!< MSECCNT Register                                                      */
    __IO uint32_t STAMPEN;     /*!< STAMPEN Register                                                      */
    __IO uint32_t CLKSTAMP0R0; /*!< CLKSTAMP0R0 Register                                                  */
    __IO uint32_t CALSTAMP0R1; /*!< CALSTAMP0R1 Register                                                  */
    __IO uint32_t CLKSTAMP0F0; /*!< CLKSTAMP0F0 Register                                                  */
    __IO uint32_t CALSTAMP0F1; /*!< CALSTAMP0F1 Register                                                  */
    __IO uint32_t CLKSTAMP1R0; /*!< CLKSTAMP1R0 Register                                                  */
    __IO uint32_t CALSTAMP1R1; /*!< CALSTAMP1R1 Register                                                  */
    __IO uint32_t CLKSTAMP1F0; /*!< CLKSTAMP1F0 Register                                                  */
    __IO uint32_t CALSTAMP1F1; /*!< CALSTAMP1F1 Register                                                  */
    __IO uint32_t AUTOCAL;     /*!< AUTOCAL Register                                                      */
    __IO uint32_t ADOFFSET;    /*!< ADOFFSET Register                                                     */
    __IO uint32_t CALSTEP;     /*!< CALSTEP Register                                                      */
    __IO uint32_t CALBUSY;     /*!< CALBUSY Register                                                      */
    __IO uint32_t ADJCNT;      /*!< ADJCNT Register                                                       */
  } RTC_Type;

  /* ================================================================================ */
  /* ================                     SARADC                     ================ */
  /* ================================================================================ */

  /**
   * @brief SARADC module information (SARADC)
   */

  typedef struct
  {                         /*!< SARADC Structure                                                      */
    __IO uint32_t ADC_ISR;  /*!< ADC_ISR Register                                                      */
    __IO uint32_t ADC_IER;  /*!< ADC_IER Register                                                      */
    __IO uint32_t ADC_CR;   /*!< ADC_CR Register                                                       */
    __IO uint32_t ADC_CFG;  /*!< ADC_CFG Register                                                      */
    __IO uint32_t ADC_SMTR; /*!< ADC_SMTR Register                                                     */
    __IO uint32_t ADC_CHER; /*!< ADC_CHER Register                                                     */
    __IO uint32_t ADC_DR;   /*!< ADC_DR Register                                                       */
    __I uint32_t RESERVED;
    __IO uint32_t ADC_HLTR; /*!< ADC_HLTR Register                                                     */
  } SARADC_Type;

  /* ================================================================================ */
  /* ================                      SDADC                     ================ */
  /* ================================================================================ */

  /**
   * @brief SDADC module information (SDADC)
   */

  typedef struct
  {                         /*!< SDADC Structure                                                       */
    __IO uint32_t ADCINSEL; /*!< ADCINSEL Register                                                     */
    __IO uint32_t ADCCTL;   /*!< ADCCTL Register                                                       */
    __IO uint32_t ADCTRIM;  /*!< ADCTRIM Register                                                      */
    __IO uint32_t ADCDATA;  /*!< ADCDATA Register                                                      */
    __IO uint32_t ADCIF;    /*!< ADCIF Register                                                        */
  } SDADC_Type;

  /* ================================================================================ */
  /* ================                       SPI                      ================ */
  /* ================================================================================ */

  /**
   * @brief SPI1 module information (SPI)
   */

  typedef struct
  {                       /*!< SPI Structure                                                         */
    __IO uint32_t SPICR1; /*!< SPICR1 Register                                                       */
    __IO uint32_t SPICR2; /*!< SPICR2 Register                                                     */
    __IO uint32_t SPICR3; /*!< SPICR3 Register                                                       */
    __IO uint32_t SPIIE;  /*!< SPIIE Register                                                        */
    __IO uint32_t SPIIF;  /*!< SPIIF Register                                                        */
    __IO uint32_t TXBUF;  /*!< TXBUF Register                                                        */
    __IO uint32_t RXBUF;  /*!< RXBUF Register                                                        */
  } SPI_Type;

  /* ================================================================================ */
  /* ================                       SVD                      ================ */
  /* ================================================================================ */

  /**
   * @brief SVD module information (SVD)
   */

  typedef struct
  { /*!< SVD Structure                                                         */
    __I uint32_t RESERVED[5];
    __IO uint32_t SVDCFG; /*!< SVDCFG Register                                                       */
    __IO uint32_t SVDCON; /*!< SVDCON Register                                                       */
    __IO uint32_t SVDSIF; /*!< SVDSIF Register                                                       */
    __I uint32_t RESERVED1[16];
    __IO uint32_t SVDVOL;     /*!< SVDVOL Register                                                       */
    __IO uint32_t BUFFERCTRL; /*!< BUFFERCTRL Register                                                   */
  } SVD_Type;

  /* ================================================================================ */
  /* ================                      TRNG                      ================ */
  /* ================================================================================ */

  /**
   * @brief TRNG module information (TRNG)
   */

  typedef struct
  { /*!< TRNG Structure                                                        */
    __I uint32_t RESERVED;
    __IO uint32_t DOR; /*!< RNGOUT Register                                                       */
    __I uint32_t RESERVED1[2];
    __IO uint32_t SR;     /*!< RNGIF Register                                                        */
    __IO uint32_t CRCCR;  /*!< CRCCON Register                                                       */
    __IO uint32_t CRCDIR; /*!< CRCIN Register                                                        */
    __IO uint32_t CRCSR;  /*!< CRCIF Register                                                        */
  } RNG_Type;

  /* ================================================================================ */
  /* ================                     TRNGCON                    ================ */
  /* ================================================================================ */

  /**
   * @brief TRNGCON module information (TRNGCON)
   */

  typedef struct
  {                   /*!< TRNGCON Structure                                                     */
    __IO uint32_t CR; /*!< RNGCON Register                                                       */
  } RNGCTL_Type;

  /* ================================================================================ */
  /* ================                      U7816                     ================ */
  /* ================================================================================ */

  /**
   * @brief U78160 module information (U7816)
   */

  typedef struct
  {                            /*!< U7816 Structure                                                       */
    __IO uint32_t U7816CTRL;   /*!< U7816CTRL Register                                                    */
    __IO uint32_t U7816FRC;    /*!< U7816FRC Register                                                     */
    __IO uint32_t U7816EGTC;   /*!< U7816EGTC Register                                                    */
    __IO uint32_t U7816CLKDIV; /*!< U7816CLKDIV Register                                                  */
    __IO uint32_t U7816PDIV;   /*!< U7816PDIV Register                                                    */
    __IO uint32_t U7816RXBUF;  /*!< U7816RXBUF Register                                                   */
    __IO uint32_t U7816TXBUF;  /*!< U7816TXBUF Register                                                   */
    __IO uint32_t U7816IE;     /*!< U7816IE Register                                                      */
    __IO uint32_t U7816IF;     /*!< U7816IF Register                                                      */
    __IO uint32_t U7816ERR;    /*!< U7816ERR Register                                                     */
    __IO uint32_t U7816STA;    /*!< U7816STA Register                                                     */
  } U7816_Type;

  /* ================================================================================ */
  /* ================                      UART                      ================ */
  /* ================================================================================ */

  /**
   * @brief UART module information (UART)
   */

  typedef struct
  {                         /*!< UART Structure                                                        */
    __IO uint32_t RXSTA;    /*!< RXSTA Register                                                        */
    __IO uint32_t TXSTA;    /*!< TXSTA Register                                                        */
    __IO uint32_t RXREG;    /*!< RXREG Register                                                        */
    __IO uint32_t TXREG;    /*!< TXREG Register                                                        */
    __IO uint32_t SPBRG;    /*!< SPBRG Register                                                        */
    __IO uint32_t TXBUFSTA; /*!< TXBUFSTA Register                                                     */
    __IO uint32_t RXBUFSTA; /*!< RXBUFSTA Register                                                     */
    __IO uint32_t RTXCON;   /*!< RTXCON Register                                                       */
  } UART_Type;

  /* ================================================================================ */
  /* ================                     UARTCOM                    ================ */
  /* ================================================================================ */

  /**
   * @brief UARTCOM module information (UARTCOM)
   */

  typedef struct
  {                       /*!< UARTCOM Structure                                                     */
    __IO uint32_t UARTIE; /*!< UARTIE Register                                                       */
    __IO uint32_t UARTIF; /*!< UARTIF Register                                                       */
    __IO uint32_t IRCON;  /*!< IRCON Register                                                        */
  } UARTCOM_Type;

  /* ================================================================================ */
  /* ================                      WWDT                      ================ */
  /* ================================================================================ */

  /**
   * @brief WWDT module information (WWDT)
   */

  typedef struct
  {                        /*!< WWDT Structure                                                        */
    __IO uint32_t WWDTCON; /*!< WWDTCON Register                                                      */
    __IO uint32_t WWDTCFG; /*!< WWDTCFG Register                                                      */
    __IO uint32_t WWDTCNT; /*!< WWDTCNT Register                                                      */
    __IO uint32_t WWDTIE;  /*!< WWDTIE Register                                                       */
    __IO uint32_t WWDTIF;  /*!< WWDTIF Register                                                       */
    __IO uint32_t WWDTDIV; /*!< WWDTDIV Register                                                      */
  } WWDT_Type;

/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
#pragma pop
#elif defined(__ICCARM__)
/* leave anonymous unions enabled */
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning restore
#else
#warning Not supported compiler type
#endif

  /* ================================================================================ */
  /* ================              Peripheral memory map             ================ */
  /* ================================================================================ */

#define AES_BASE 0x40013800UL
#define BSTIM1_BASE 0x40013000UL
#define BSTIM2_BASE 0x40013044UL
#define COMP1_BASE 0x40012840UL
#define COMP2_BASE 0x40012844UL
#define COMPCOM_BASE 0x40012848UL
#define CRC_BASE 0x40010000UL
#define DBG_BASE 0x40000000UL
#define LCD_BASE 0x40010C00UL
#define DMA_BASE 0x40000400UL
#define EXTIM1_BASE 0x40013090UL
#define EXTIM2_BASE 0x400130B0UL
#define EXTIM3_BASE 0x400130D0UL
#define EXTIM4_BASE 0x400130F0UL
#define EXTIMCOM_BASE 0x40013110UL
#define FLASH_BASE 0x40001000UL
#define GPIOA_BASE 0x40000C00UL
#define GPIOB_BASE 0x40000C20UL
#define GPIOC_BASE 0x40000C40UL
#define GPIOD_BASE 0x40000C60UL
#define GPIOE_BASE 0x40000C80UL
#define GPIOF_BASE 0x40000CA0UL
#define GPIOG_BASE 0x40000CC0UL
#define GPIO_BASE 0x40000CE0UL
#define GPIOAHD_BASE 0x40000F00UL
#define GPIOBHD_BASE 0x40000F10UL
#define GPIOCHD_BASE 0x40000F20UL
#define GPIODHD_BASE 0x40000F30UL
#define GPIOEHD_BASE 0x40000F40UL
#define GPIOFHD_BASE 0x40000F50UL
#define GPIOGHD_BASE 0x40000F60UL
#define GPTIM0_BASE 0x40014400UL
#define GPTIM1_BASE 0x40014800UL
#define I2C0_BASE 0x40012400UL
#define I2C1_BASE 0x40014000UL
#define IWDT_BASE 0x40011400UL
#define LPTIM16_BASE 0x40013400UL
#define LPUART0_BASE 0x40010400UL
#define LPUART1_BASE 0x40010800UL
#define PMU_BASE 0x40000100UL
#define RCC_BASE 0x4000020CUL
#define RMU_BASE 0x40000200UL
#define RTC_BASE 0x40011000UL
#define SARADC_BASE 0x40015000UL
#define SDADC_BASE 0x40012828UL
#define SPI1_BASE 0x40000840UL
#define SPI2_BASE 0x40000880UL
#define SPI0_BASE 0x40000800UL
#define SVD_BASE 0x40012800UL
#define RNG_BASE 0x40013C00UL
#define RNGCTL_BASE 0x4001283CUL
#define U78160_BASE 0x40011C00UL
#define U78161_BASE 0x40011C2CUL
#define UART0_BASE 0x4001200CUL
#define UART1_BASE 0x4001202CUL
#define UART2_BASE 0x4001204CUL
#define UART3_BASE 0x4001206CUL
#define UART4_BASE 0x4001208CUL
#define UART5_BASE 0x400120ACUL
#define UARTCOM_BASE 0x40012000UL
#define WWDT_BASE 0x40011800UL

  /* ================================================================================ */
  /* ================             Peripheral declaration             ================ */
  /* ================================================================================ */

#define AES ((AES_Type *)AES_BASE)
#define BSTIM1 ((BSTIM_Type *)BSTIM1_BASE)
#define BSTIM2 ((BSTIM_Type *)BSTIM2_BASE)
#define COMP1 ((COMP_Type *)COMP1_BASE)
#define COMP2 ((COMP_Type *)COMP2_BASE)
#define COMPCOM ((COMPCOM_Type *)COMPCOM_BASE)
#define CRC ((CRC_Type *)CRC_BASE)
#define DBG ((DBG_Type *)DBG_BASE)
#define LCD ((LCD_Type *)LCD_BASE)
#define DMA ((DMA_Type *)DMA_BASE)
#define EXTIM1 ((EXTIM_Type *)EXTIM1_BASE)
#define EXTIM2 ((EXTIM_Type *)EXTIM2_BASE)
#define EXTIM3 ((EXTIM_Type *)EXTIM3_BASE)
#define EXTIM4 ((EXTIM_Type *)EXTIM4_BASE)
#define EXTIMCOM ((EXTIMCOM_Type *)EXTIMCOM_BASE)
#define FLASH ((FLASH_Type *)FLASH_BASE)
#define GPIOA ((GPIO_Type *)GPIOA_BASE)
#define GPIOB ((GPIO_Type *)GPIOB_BASE)
#define GPIOC ((GPIO_Type *)GPIOC_BASE)
#define GPIOD ((GPIO_Type *)GPIOD_BASE)
#define GPIOE ((GPIO_Type *)GPIOE_BASE)
#define GPIOF ((GPIO_Type *)GPIOF_BASE)
#define GPIOG ((GPIO_Type *)GPIOG_BASE)
#define GPIO ((GPIOCOM_Type *)GPIO_BASE)
#define GPIOAHD ((GPIOxHD_Type *)GPIOAHD_BASE)
#define GPIOBHD ((GPIOxHD_Type *)GPIOBHD_BASE)
#define GPIOCHD ((GPIOxHD_Type *)GPIOCHD_BASE)
#define GPIODHD ((GPIOxHD_Type *)GPIODHD_BASE)
#define GPIOEHD ((GPIOxHD_Type *)GPIOEHD_BASE)
#define GPIOFHD ((GPIOxHD_Type *)GPIOFHD_BASE)
#define GPIOGHD ((GPIOxHD_Type *)GPIOGHD_BASE)
#define GPTIM0 ((GPTIM_Type *)GPTIM0_BASE)
#define GPTIM1 ((GPTIM_Type *)GPTIM1_BASE)
#define I2C0 ((I2C_Type *)I2C0_BASE)
#define I2C1 ((I2C_Type *)I2C1_BASE)
#define IWDT ((IWDT_Type *)IWDT_BASE)
#define LPTIM16 ((LPTIM16_Type *)LPTIM16_BASE)
#define LPUART0 ((LPUART_Type *)LPUART0_BASE)
#define LPUART1 ((LPUART_Type *)LPUART1_BASE)
#define PMU ((PMU_Type *)PMU_BASE)
#define RCC ((RCC_Type *)RCC_BASE)
#define RMU ((RMU_Type *)RMU_BASE)
#define RTC ((RTC_Type *)RTC_BASE)
#define SARADC ((SARADC_Type *)SARADC_BASE)
#define SDADC ((SDADC_Type *)SDADC_BASE)
#define SPI1 ((SPI_Type *)SPI1_BASE)
#define SPI2 ((SPI_Type *)SPI2_BASE)
#define SPI0 ((SPI_Type *)SPI0_BASE)
#define SVD ((SVD_Type *)SVD_BASE)
#define RNG ((RNG_Type *)RNG_BASE)
#define RNGCTL ((RNGCTL_Type *)RNGCTL_BASE)
#define U78160 ((U7816_Type *)U78160_BASE)
#define U78161 ((U7816_Type *)U78161_BASE)
#define UART0 ((UART_Type *)UART0_BASE)
#define UART1 ((UART_Type *)UART1_BASE)
#define UART2 ((UART_Type *)UART2_BASE)
#define UART3 ((UART_Type *)UART3_BASE)
#define UART4 ((UART_Type *)UART4_BASE)
#define UART5 ((UART_Type *)UART5_BASE)
#define UARTCOM ((UARTCOM_Type *)UARTCOM_BASE)
#define WWDT ((WWDT_Type *)WWDT_BASE)

  /** @} */ /* End of group Device_Peripheral_Registers */
  /** @} */ /* End of group FM33L0XXD */
  /** @} */ /* End of group (null) */

#ifdef __cplusplus
}
#endif

#endif /* FM33L0XXD_H */
