#include <TXLib.h>

// TODO: This file's naming style My_file is different
//       from naming style of every other file. Choose one!


const double EPS = 0.1e-36;

bool isZero (double number); //����������, �������� �� ����� ���������� ������� � ����

// TODO: rename, "isEqual"
bool isEqually (double x, double y);//����������, ���������� �� ����� x ������ � ����� y

double power (double x, int exp);//�������� ����� ���� ���� � ����� �������

// TODO: Try to not commit commented code, it's usually
//       not necessary, since git stores everything you need from
//       project's history anyway.

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
