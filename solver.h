#ifndef SOLVER_H
#define SOLVER_H


#include <TXLib.h>
#include <assert.h>

#include "my_math.h"
#include "equation_param.h"

nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2);
nRoots solve_lin_equation (const double b, const double c, double* x);

#endif // SOLVER_H
