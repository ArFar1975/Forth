#ifndef READ_PRINT_H
#define READ_PRINT_H

#include <TXLib.h>
#include "equation_param.h"

double read_coef (char name);

int print_solutions (nRoots, double x1, double x2);

void clear_input_buffer (void);

#endif // READ_PRINT_H
