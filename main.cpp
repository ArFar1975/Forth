#include <TXLib.h>

#include "solver.h"
#include "read_print.h"


int main()
{
    printf ("\n" "==========================!!!-=ахирвюа=-!!!=========================" "\n" "\n");
    printf ("Hello! This program can solve quadratic equations:"" \n" "a*x^2 + b*x + c = 0" "\n" "\n");

    coefficients Coeffs = {NAN, NAN, NAN};

    get_coeffs (&Coeffs);

    double x1 = NAN,
           x2 = NAN;

    nRoots numb_of_roots = (solve_quadr_equation (Coeffs.a, Coeffs.b, Coeffs.c, &x1, &x2) );

    print_solutions (numb_of_roots, x1, x2);

    printf ("\n" "============================-August 2023-===========================" "\n");

    return 0;
}

// TODO: I think you can do separate compilation, can you write a makefile for it?
//                          ^
//                          (meaning compiling to object files first, and then to executable)
// So, I am doing to try it ;))))
