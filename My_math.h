#include <TXLib.h>

const double EPS = 0.1e-36;

bool isZero (double number); //определяет, является ли число достаточно близким к нулю

bool isEqually (double x, double y);//определяет, достаточно ли число x близко к числу y

double power (double x, int exp);//возводит число типа дабл в целую степень

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
