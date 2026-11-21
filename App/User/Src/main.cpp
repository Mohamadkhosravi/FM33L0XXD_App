volatile int counter = 4;
#include "main.h"
#include "FM33L0XXD.h"
#include "fm33l0xxd_fl.h"

int main(void)
{
    while (1)
    {
        counter++;
        FL_IWDT_ReloadCounter(IWDT);
    }
};
