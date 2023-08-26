#include <TXLib.h>
#include "my_math.h"

enum nRoots
{
    ZeroRoots = 0,
    OneRoot   = 1,
    TwoRoots  = 2,
    InfRoots  = 3
};

nRoots solve_quadr_equation (double a, double b, double c, double* x1, double* x2);
nRoots solve_lin_equation (double b, double c, double* x);

double scan_coef (char name);

int print_answers (nRoots, double x1, double x2);

void clearBuff (void);
