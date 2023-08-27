#include <TXLib.h>
#include "my_math.h"

bool isZero (double r) // TODO: This function can be expressed with isEqual
{
    return fabs(r) < EPS;
}

bool isEqually (double x, double y) // TODO: try to avoid one letter names
{
    return fabs(x - y) < EPS;
}

double power (double x, int i) // TODO: use better names for variables
{
    double s = 1; 
    if (i > 0) // TODO: this if is unnecessary, you have a while inside with same condition
    {
        while (i > 0)
        {
            s *= x; // TODO: slow, it's faster to use binary exponentiation
            --i;
        }
    }

    else if (i < 0)
    {
        while (i < 0)
        {
            s /=  x; // TODO: Try to reduce number of divisions to absolute minimum,
            ++i;     //       because division is expensive.
        }
    }

    return s;
}

