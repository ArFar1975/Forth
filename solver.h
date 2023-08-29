/**
*   @file solver.h
*   @breif Этот файл содержит прототипы функций,
*   решающих квадратное и линейное уравнения
*/

#ifndef SOLVER_H
#define SOLVER_H


#include <TXLib.h>
#include <assert.h>

#include "my_math.h"
#include "equation_param.h"

/**
 * @brief решает квадратное уравнение
 *
 *  Решает квадратное уравнение, в случае a = 0 вызывает solve_lin_equation()
 *
 * @param a коэффицент перед переменной со второй степенью
 * @param b коэффицент перед переменной в первой степени
 * @param c свободный коэффицент
 * @param x1 указатель на адрес переменной с ответом
 * @param x2указатель на адрес переменной с ответом
 *
 * @return enum nRoots возможное количество ответов
 */

nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2);

/**
 * @brief решает линейное уравнение
 *
 *  Решает линейное уравнение, в случае a = 0 вызывает solve_lin_equation()
 *
 * @param b коэффицент перед переменной в первой степени
 * @param c свободный коэффицент
 * @param x указатель на адрес переменной для ответом
 *
 * @return enum nRoots возможное количество ответов
 */

nRoots solve_lin_equation (const double b, const double c, double* x);

#endif // SOLVER_H
