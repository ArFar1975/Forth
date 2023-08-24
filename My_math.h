#include <TXLib.h>

const double EPS = 0.1e-36;

bool isZero (double number);

double power (double x, unsigned exp);

//double power(double, int);

bool isZero (double r)
{
    return fabs(r) < EPS;
}

double power (double x, unsigned i)
{
    double xpow = 1;
    while (i > 0)
    {
        s *= xpow;
        --i;
    }

    return s;
}
