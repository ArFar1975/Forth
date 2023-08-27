#include <TXLib.h>
#include "solver.h"


nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2)
{ // TODO:                                                                           ^~          ^~
    //                                     if you decided to use const on every local param, use it 
    //                                     on these too, be consistent!


    // TODO: Can your function correctly behave with NANs or INFs as an input?
    //       If not, assert, if yes, document.
    if (isZero(a))
    {
        printf ("\a" "For a = 0 , this equation is not a quadratic equation!\n");
        printf ("But we can solve it special for you, skinny leather bag ;)\n");

        return solve_lin_equation(b, c, x1);
    }

    else if (isZero(b)) // TODO: no need for else after return
    {                   //       (also maybe this case can be extracted too)
        double p = -c / a; // TODO: rename, you can do better than one-letter name.

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

    else // TODO: no need for else after return
    {    //       (also maybe this case can be extracted too)
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

        else if (isZero(b) && !isZero(c)) // TODO: don't double check for isZero(b), use nested ifs 
        {
            return ZeroRoots;
        }

        else
        {
            *x = -c / b;

            return OneRoot;
        }
}
