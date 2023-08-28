#include <TXLib.h>

#include "solver.h"
#include "read_print.h"


int main()
{
    printf ("\n" "==========================!!!-=ахирвюа=-!!!=========================" "\n" "\n");
    printf ("Hello! This program can solve quadratic equations:"" \n" "a*x^2 + b*x + c = 0\n");

    // OK: You can create a separate struct for coefficients, and
    //       a function that will read them all at once. Look into it.
    coefficients Coeffs = {NAN, NAN, NAN};

    read_struct_coeffs (&Coeffs);

    double x1 = NAN,
           x2 = NAN;

    nRoots numb_of_roots = (solve_quadr_equation (Coeffs.a, Coeffs.b, Coeffs.c, &x1, &x2) );

    if ( print_solutions (numb_of_roots, x1, x2) == 1)
        printf("Unfortunately, we can not print answers :(");

    printf("\n\nAugust 2023");

    return 0;
}


// OK: also, I don't know where to write it, but you shouldn't commit .exe files
//       and other binary files in your repository.


// TODO: I think you can do separate compilation, can you write a makefile for it?
//                          ^
//                          (meaning compiling to object files first, and then to executable)
// So, I am doing to try it ;))))
