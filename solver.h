#include "TXLib.h"
#include "my_math.h"

enum AnswerType
{
    ZeroRoots = 0,
    OneRoot   = 1,
    TwoRoots  = 2,
    InfRoots  = 3
};

AnswerType solve_quadr_equation (double a, double b, double c, double* x1, double* x2);
AnswerType solve_lin_equation (double b, double c, double* x);

double input_coef (char name);

int print_answers (AnswerType, double x1, double x2);
