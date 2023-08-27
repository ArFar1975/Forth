#include <TXLib.h>
#include "solver.h"
#include "greeter.h"


int main()
{
    greet();

    // TODO: You can create a separate struct for coefficients, and 
    //       a function that will read them all at once. Look into it.
    double a = scan_coef ('a'),
           b = scan_coef ('b'),
           c = scan_coef ('c');

    double x1 = NAN,
           x2 = NAN;

    nRoots answer = (solve_quadr_equation (a, b, c, &x1, &x2) );
    //     ^~~~~~ TODO: number of roots isn't the answer, the answer
    //                  is number of roots and roots itself, so
    //                  it's not very appropriate to name number of roots "answer". 

    print_answers(answer, x1, x2);

    printf("\n\nAugust 2023");

    return 0;
}


// TODO: also, I don't know where to write it, but you shouldn't commit .exe files
//       and other binary files in your repository.


// TODO: I think you can do separate compilation, can you write a makefile for it?
//                          ^
//                          (meaning compiling to object files first, and then to executable)
