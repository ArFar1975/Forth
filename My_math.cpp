#include <TXLib.h>
#include "my_math.h"

bool isEqual (double num1, double num2)
{
    return fabs(num1 - num2) < EPS;
}

double power (double base, int exp)
{
    double power = 1;

    bool flag = false;

    if (exp < 0)
    {
        exp *= -1;
        flag = true;
    }

    while (exp > 0)
    {
        power *= base; // TODO: slow, it's faster to use binary exponentiation
        --exp;         // ArFar: I promise i am going to read about it, but later
    }

    if (flag == true)
        power = 1 / power;

    return power;
}

