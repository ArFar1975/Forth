#include <TXLib.h>

const double EPS = 0.1e-36;

int solve_quadr_equation(double a, double b, double c, double* x1, double* x2);
double a_input();
double b_input();
double c_input();
bool isZero(double);

int main()
{
    printf("Hello! This program can solve quadratic equations:\na*x^2 + b*x + c = 0\n");

    double x1 = 0, x2 = 0;

    switch(solve_quadr_equation(c_input(), b_input(), a_input(), &x1, &x2)) {
    case 0:
        printf("This equation has no real roots");
        break;
    case 1:
        printf("x = %g\n", x1);
        break;
    case 2:
        printf("x1 = %g\n", x1);
        printf("x2 = %g\n", x2);
        break;
    case 3:
        printf("This equation has infinity roots!");
        break;
    default:
        break;
    }

    printf("\n\n(c) ArFar, August 2023");

    return 0;
}

double a_input() {
    double a = 0;
    printf("Put \"a\" here:");
    scanf("%lg", &a);

    return a;
}

double b_input() {
    double b = 0;
    printf("Put \"b\" here:");
    scanf("%lg", &b);

    return b;
}

double c_input()
{
    double c = 0;
    printf("Put \"c\" here:");
    scanf("%lg", &c);

    return c;
}
int solve_quadr_equation(const double c, const double b, const double a, double* x1, double* x2) {
    if (isZero(a)) {
        printf("\aFor a = 0 , this equation is not a quadratic equation!\n");
        printf("But we can solve it special for you ;)\n");
        if (isZero(b) == 0) {
            *x1 = *x2 = -c / b;
            return 1;
        }
        else if (isZero(b) && isZero(c)) {

            return 3;
        }
        else {

            return 0;
        }
    }
    else {
        double d;
        d = b*b - 4.0*a*c;
        if (d < 0) {

            return 0;
            }
        else if (d > 0) {
            double sqd = 0;
            sqd = sqrt(d);
            *x1 = (-b + sqd) / (2.0*a);
            *x2 = (-b - sqd) / (2.0*a);

            return 2;
        }
        else {
            *x1 = *x2 = (-b/(2.0*a));

            return 1;
        }
    }
}
bool isZero(double r) {
    if (fabs(r) < EPS)
        return 1;
    else
        return 0;
}
