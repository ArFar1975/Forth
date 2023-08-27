#include <TXLib.h>
#include "my_math.h"

bool isEqual (double num1, double num2)
{
    return fabs(num1 - num2) < EPS;
}

double power (double base, int exp)
{
    double power = 1;
    // TODO: this if is unnecessary, you have a while inside with same condition
    while (exp > 0)
    {
        power *= base; // TODO: slow, it's faster to use binary exponentiation
        --exp;
    }

    while (exp < 0)
    {
        power /=  base; // TODO: Try to reduce number of divisions to absolute minimum,
        ++exp;     //       because division is expensive.
    }


    return power;
}

