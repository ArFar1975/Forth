#include <TXLib.h>
#include "solver.h"
#include "greeter.h"


int main()
{
    greet();

    double a = scan_coef ('a'),
           b = scan_coef ('b'),
           c = scan_coef ('c');

    double x1 = NAN,
           x2 = NAN;

    nRoots answer = (solve_quadr_equation (a, b, c, &x1, &x2) );

    print_answers(answer, x1, x2);

    printf("\n\nAugust 2023");

    return 0;
}
