#include <TXLib.h>

const double EPS = 0.1e-36;

bool isZero (double number);

bool isEqually (double x, double y);

double power (double x, int exp);

//double power(double, int);

/*bool isZero (double r)
{
    return fabs(r) < EPS;
}

double power (double x, unsigned i)
{
    double xpow = 1;
    while (i > 0)
    {
        xpow *= x;
        --i;
    }

    return xpow;
}*/
