#include <TXLib.h>
#define ESP 0.1e-36

enum SType{NullSolves, OneSolves, TwoSolves, InfSolves};

SType sqsolver(double a, double b, double c, double* x1, double* x2);
double agetter();
double bgetter();
double cgetter();
bool isZero(double);

int main()
{
    printf("Hello! This program can solve quadratic equations:\na*x^2 + b*x + c = 0\n");

    double x1 = 0, x2 = 0;

    switch(sqsolver(cgetter(), bgetter(), agetter(), &x1, &x2)) {
    case NullSolves:
        printf("This equation has no real roots");
        break;
    case OneSolves:
        printf("x = %g\n", x1);
        break;
    case TwoSolves:
        printf("x1 = %g\n", x1);
        printf("x2 = %g\n", x2);
        break;
    case InfSolves:
        printf("This equation has infinity roots!");
        break;
    default:
        break;
    }

    printf("\n\n(c) ArFar, August 2023");

    return 0;
}

double agetter() {
    double a = 0;
    printf("Put \"a\" here:");
    scanf("%lg", &a);

    return a;
}

double bgetter() {
    double b = 0;
    printf("Put \"b\" here:");
    scanf("%lg", &b);

    return b;
}

double cgetter()
{
    double c = 0;
    printf("Put \"c\" here:");
    scanf("%lg", &c);

    return c;
}
SType sqsolver(const double c, const double b, const double a, double* x1, double* x2) {
    if (isZero(a)) {
        printf("\aFor a = 0 , this equation is not a quadratic equation!\n");
        printf("But we can solve it special for you ;)\n");
        if (isZero(b) == 0) {
            *x1 = *x2 = -c / b;
            return OneSolves;
        }
        else if (isZero(b) && isZero(c)) {

            return InfSolves;
        }
        else {

            return NullSolves;
        }
    }
    else {
        double d;
        d = b*b - 4.0*a*c;
        if (d < 0) {

            return NullSolves;
            }
        else if (d > 0) {
            double sqd = 0;
            sqd = sqrt(d);
            *x1 = (-b + sqd) / (2.0*a);
            *x2 = (-b - sqd) / (2.0*a);

            return TwoSolves;
        }
        else {
            *x1 = *x2 = (-b/(2.0*a));

            return OneSolves;
        }
    }
}
bool isZero(double r) {
    if (fabs(r) < ESP)
        return OneSolves;
    else
        return NullSolves;
}
