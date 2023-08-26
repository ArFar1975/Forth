#include <TXLib.h>
#include "solver.h"


nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2)
{
    if (isZero(a))
    {
        printf ("\a" "For a = 0 , this equation is not a quadratic equation!\n");
        printf ("But we can solve it special for you, skinny leather bag ;)\n");

        return solve_lin_equation(b, c, x1);
    }

    else if (isZero(b))
    {
        double p = -c / a;

        if (isZero(p))
        {
            *x1 = *x2 = 0;

            return OneRoot;
        }
        else if (p > 0)
        {
            double sqc = sqrt(p);

            *x1 = sqc;
            *x2 = -sqc;

            return TwoRoots;
        }

        else
        {
            return ZeroRoots;
        }
    }

    else if (isZero(c))
    {
        *x1 = 0;
        *x2 = -b / a;

        return TwoRoots;
    }

    else
    {
        double d = power(b, 2) - 4.0 * a * c;

        if (isZero(d))
        {
            *x1 = *x2 = (-b / (2.0 * a));

            return OneRoot;
        }

        else if (d > 0)
        {
            double sqd = sqrt(d);

            *x1 = (-b + sqd) / (2.0 * a);
            *x2 = (-b - sqd) / (2.0 * a);

            return TwoRoots;
        }

        else
        {
            return ZeroRoots;
        }
    }
}

nRoots solve_lin_equation (const double b, const double c, double* x)
{
        if (isZero(b) && isZero(c))
        {
            return InfRoots;
        }

        else if (isZero(b) && !isZero(c))
        {
            return ZeroRoots;
        }

        else
        {
            *x = -c / b;

            return OneRoot;
        }
}
