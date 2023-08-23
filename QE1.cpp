#include <TXLib.h>
#include "greeter.h"
#include "My_math.h"

const double EPS = 0.1e-36;

void ReSHaToR3000();

enum sType {NullSolves, OneSolve, TwoSolves, InfSolves};

double input_coef (char name);

sType solve_quadr_equation (double a, double b, double c, double* x1, double* x2);
sType solve_lin_equation (double b, double c, double* x1, double* x2);

int main()
{
    greet();

    ReSHaToR3000();

    printf("\n\nAugust 2023");

    return 0;
}

void ReSHaToR3000()
{
    double x1 = 0, x2 = 0;

    sType answers = (solve_quadr_equation (input_coef('c'), input_coef('b'), input_coef('a'), &x1, &x2) );
    switch (answers)
    {
        case NullSolves:
            printf ("\n" "This equation has no real roots");
            break;

        case OneSolve:
            printf ("\n"  "x = %lg\n", x1);
            break;

        case TwoSolves:
            printf ("\n" "x1 = %lg\n", x1);
            printf (     "x2 = %lg\n", x2);
            break;

        case InfSolves:
            printf ("\n" "This equation has infinity roots!");
            break;

        default:
            break;
    }
}

double input_coef (char name)
{
    double coef = 0;

    printf ("Put \"%c\" here:", name);
    scanf ("%lg", &coef);

    return coef;
}

sType solve_quadr_equation (const double c, const double b, const double a, double* x1, double* x2)
{
    if (isZero(a))
    {
        printf ("\a" "For a = 0 , this equation is not a quadratic equation!\n");
        printf ("But we can solve it special for you, skinny wherd leather bag ;)\n");

        return solve_lin_equation(b, c, x1, x2);
    }

    else if (isZero(b) && isZero(a) == 0)
    {
        if (c > EPS)
        {
            return NullSolves;
        }

        else
        {
            double sqc = sqrt(-c);

            *x1 = sqc;
            *x2 = -sqc;

            return TwoSolves;
        }
    }

    else if (isZero(c) && isZero(b) == 0 && isZero(a) == 0)
    {
        *x1 = 0;
        *x2 = -b / a;

        return TwoSolves;
    }

    else
    {
        double d = power(b, 2) - 4.0 * a * c;

        if (isZero(d))
        {
            *x1 = *x2 = (-b / (2.0 * a));

            return OneSolve;
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

sType solve_lin_equation (const double b, const double c, double* x1, double* x2)
{
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
