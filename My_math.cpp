#include <TXLib.h>
#include "my_math.h"

bool isEqual (double num1, double num2)
{
    return fabs(num1 - num2) < EPS;
}

double power (double base, int exp)
{
    double power = 1;

    if (exp < 0)
    {
        exp = -exp;
        power = 1.0 / power;
    }

    while (exp > 0)
    {
        power *= base; // TODO: slow, it's faster to use binary exponentiation
        --exp;         // ArFar: I promise i am going to read about it, but a little later
    }

    return power;
}

