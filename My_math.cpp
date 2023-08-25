#include <TXLib.h>
#include "my_math.h"

bool isZero (double r)
{
    return fabs(r) < EPS;
}

bool isEqually (double x, double y)
{
    return fabs(x - y) < EPS;
}

double power (double x, int i)
{
    double s = 1;
    if (i > 0)
    {
        while (i > 0)
        {
            s *= x;
            --i;
        }
    }

    else if (i < 0)
    {
        while (i < 0)
        {
            s /=  x;
            ++i;
        }
    }

    return s;
}

