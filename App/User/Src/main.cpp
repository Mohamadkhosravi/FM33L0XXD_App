#include "FM33L0XXD.h"
volatile int counter = 0;
int main(void)
{
    while (1)
    {
        counter++;
        IWDT->IWDTSERV = 0x12345A5AU;
    }
}