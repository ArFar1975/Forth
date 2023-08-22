#include <TXLib.h>

const double EPS = 0.1e-36;
const int NullSolves = 0;
const int OneSolve = 1;
const int TwoSolves = 2;
const int InfSolves = 3;

int solve_quadr_equation(double a, double b, double c, double* x1, double* x2);
double input_coef(char name);
bool isZero(double number);
//void kill_infinity();

int main()
{
    printf("Hello! This program can solve quadratic equations:\na*x^2 + b*x + c = 0\n");

    double x1 = 0, x2 = 0;

    switch(solve_quadr_equation(input_coef('c'), input_coef('b'), input_coef('a'), &x1, &x2))
    {
        case NullSolves:
            printf("This equation has no real roots");
            break;
        case OneSolve:
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

    printf("\n\nAugust 2023");

    return 0;
}

double input_coef(char name)
{
    double coef = 0;

    printf("Put \"%c\" here:", name);
    scanf("%lg", &coef);

    return coef;
}

int solve_quadr_equation(const double c, const double b, const double a, double* x1, double* x2) {
    if (isZero(a))
    {
        printf("\aFor a = 0 , this equation is not a quadratic equation!\n");
        printf("But we can solve it special for you ;)\n");

        if (isZero(b) == 0)
        {
            *x1 = *x2 = -c / b;

            return OneSolve;
        }
        else if (isZero(b) && isZero(c))
        {
            return InfSolves;
        }
        else
        {
            return NullSolves;
        }
    }
    else
    {
        double d = b * b - 4.0 * a * c;
        if (isZero(d))
        {
            return NullSolves;
            *x1 = *x2 = (-b / (2.0 * a));
        }
        else if (d > EPS)
        {
            double sqd = sqrt(d);
            *x1 = (-b + sqd) / (2.0 * a);
            *x2 = (-b - sqd) / (2.0 * a);

            return TwoSolves;
        }
        else
        {
            return NullSolves;
        }
    }
}

bool isZero(double r)
{
    return fabs(r) < EPS;
}

/*void kill_infinity()
{
    while(getchar() != '\n') {}
} */
