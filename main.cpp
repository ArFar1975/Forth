#include <TXLib.h>

#include "solver.h"
#include "read_print.h"


int main()
{
    printf ("\n" "==========================!!!-=ахирвюа=-!!!=========================" "\n" "\n");
    printf ("Hello! This program can solve quadratic equations:"" \n" "a*x^2 + b*x + c = 0\n");

    // TODO: You can create a separate struct for coefficients, and
    //       a function that will read them all at once. Look into it.
    double a = read_coef ('a'),
           b = read_coef ('b'),
           c = read_coef ('c');

    double x1 = NAN,
           x2 = NAN;

    nRoots numb_of_roots = (solve_quadr_equation (a, b, c, &x1, &x2) );

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
