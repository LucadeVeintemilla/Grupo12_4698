
#include "Operacion.h"
int MCM(int a, int b)
{
    static int comn = 1;

    if (comn % a == 0 && comn % b == 0)
        return comn;

    comn++;
    MCM(a, b);

    return comn;
}

