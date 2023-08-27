#include <TXLib.h>
#include "solver.h"


nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2)
{ // TODO:                                                                           ^~          ^~
    //                                     if you decided to use const on every local param, use it
    //                                     on these too, be consistent!


    // TODO: Can your function correctly behave with NANs or INFs as an input?
    //       If not, assert, if yes, document.
    if (isEqual(a, 0))
    {
        printf ("\a" "For a = 0 , this equation is not a quadratic equation!\n");
        printf ("But we can solve it special for you, skinny leather bag ;)\n");

        return solve_lin_equation(b, c, x1);
    }

    else if (isEqual(b, 0)) // OK: no need for else after return
    {                   //       (also maybe this case can be extracted too)
        double sqr_of_x = -c / a; // OK: rename, you can do better than one-letter name.

        if (isEqual(sqr_of_x, 0))
        {
            *x1 = *x2 = 0;

            return OneRoot;
        }

        else if (sqr_of_x > 0)
        {
            double sqc = sqrt(sqr_of_x);

            *x1 = sqc;
            *x2 = -sqc;

            return TwoRoots;
        }

        else
        {
            return ZeroRoots;
        }
    }

    else if (isEqual(c, 0))
    {
        *x1 = 0;
        *x2 = -b / a;

        return TwoRoots;
    }

     // OK: no need for else after return
    //       (also maybe this case can be extracted too)
    double d = power(b, 2) - 4.0 * a * c;

    if (isEqual(d, 0))
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

nRoots solve_lin_equation (const double b, const double c, double* x)
{
        if (isEqual(b, 0) && isEqual(c, 0))
        {
            if (isEqual(c, 0))
                return InfRoots;
            else
                return ZeroRoots;
        }

        *x = -c / b;

        return OneRoot;

}
