#include <TXLib.h>
#include "My_math.h"

bool isZero (double r)
{
    return fabs(r) < EPS;
}

bool isEqually (double x, double y)
{
    return fabs(x - y) < EPS;
}

double power (double x, unsigned i)
{
    double s = 1;
    while (i > 0)
    {
        s = s * x;
        --i;
    }

    return s;
}

