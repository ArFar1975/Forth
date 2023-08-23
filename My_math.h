#include <TXLib.h>

const double EPS = 0.1e-36;

bool isZero (double number);

double power (double pokazatel, unsigned stepen);

//double power(double, int);

bool isZero (double r)
{
    return fabs(r) < EPS;
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
