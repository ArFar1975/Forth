#include <TXLib.h>

#include "solver.h"
#include "read_print.h"


int main()
{
    greet();

    coefficients Coeffs = {NAN, NAN, NAN};

    get_coeffs (&Coeffs);

    double x1 = NAN,
           x2 = NAN;

    nRoots num_of_roots = solve_quadr_equation (Coeffs.a, Coeffs.b, Coeffs.c, &x1, &x2);

    print_solutions (num_of_roots, x1, x2);

    bye();

    return 0;
}
