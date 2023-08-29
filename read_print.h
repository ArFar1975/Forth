#ifndef READ_PRINT_H
#define READ_PRINT_H

#include <TXLib.h>
#include <stdlib.h>
#include "equation_param.h"

void get_coeffs (coefficients*);

double read_num (char name);

void print_solutions (nRoots, double x1, double x2);

void clear_input_buffer (void);

bool check_input (char* input);

bool is_in_list (char symbol);

bool is_point_correct (bool point_flag, unsigned int position, char previos_symbol, unsigned int last_symbol);

const unsigned int len_input = 255;

const unsigned int len_list = 12;

const char legal_list[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '.'};

#endif // READ_PRINT_H
