#include <stdint.h>

extern uint32_t _estack;
extern uint32_t _sidata, _sdata, _edata, _sbss, _ebss;

extern void SystemInit(void);
extern int main(void);

void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SVC_Handler(void) __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler(void) __attribute__((weak, alias("Default_Handler")));

typedef void (*vector_t)(void);

__attribute__((section(".isr_vector"), used))
const vector_t g_pfnVectors[16] = {
    (vector_t)(uintptr_t)&_estack, /* 0: Initial SP */
    Reset_Handler,                 /* 1: Reset */
    NMI_Handler,                   /* 2 */
    HardFault_Handler,             /* 3 */
    0,
    0,
    0,
    0,
    0,
    0,
    0,           /* 4..10 */
    SVC_Handler, /* 11 */
    0,
    0,               /* 12..13 */
    PendSV_Handler,  /* 14 */
    SysTick_Handler, /* 15 */
};

void Reset_Handler(void)
{
    uint32_t *src = &_sidata;
    uint32_t *dst = &_sdata;

    SystemInit();

    while (dst < &_edata)
    {
        *dst++ = *src++;
    }

    dst = &_sbss;
    while (dst < &_ebss)
    {
        *dst++ = 0u;
    }

    (void)main();

    while (1)
    {
    }
}

void Default_Handler(void)
{
    while (1)
    {
    }
}