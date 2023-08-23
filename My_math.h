#include <TXLib.h>

const double EPS = 0.1e-36;

bool isZero (double number);

double power (double , int);

//double power(double, int);

bool isZero (double r)
{
    return fabs(r) < EPS;
}

double power (double x, int i)
{
    double s = 1;
    while (i > 0)
    {
        s = s * x;
        --i;
    }

    return s;
}
