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
        if (exp % 2 == 1)  // OK make comparation with one explicit
            power *= base;

        base *= base;

        exp /= 2;
    }

    return power;
}



