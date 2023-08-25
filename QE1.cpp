#include <TXLib.h>
#include "solver.h"
#include "greeter.h"


int main()
{
    greet();

    double a = input_coef ('a'),
           b = input_coef ('b'),
           c = input_coef ('c');

    double x1 = NAN,
           x2 = NAN;

    AnswerType answers = (solve_quadr_equation (a, b, c, &x1, &x2) );

    print_answers(answers, x1, x2);

    printf("\n\nAugust 2023");

    return 0;
}
