
#include "Operacion.h"
int mcd(int a, int b)
{
	if (b == 0)
		return a;
	return mcd(b, a % b);
}

