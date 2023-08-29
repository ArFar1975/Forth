/**
*   @file solver.h
*   @breif ���� ���� �������� ��������� �������,
*   �������� ���������� � �������� ���������
*/

#ifndef SOLVER_H
#define SOLVER_H


#include <TXLib.h>
#include <assert.h>

#include "my_math.h"
#include "equation_param.h"

/**
 * @brief ������ ���������� ���������
 *
 *  ������ ���������� ���������, � ������ a = 0 �������� solve_lin_equation()
 *
 * @param a ���������� ����� ���������� �� ������ ��������
 * @param b ���������� ����� ���������� � ������ �������
 * @param c ��������� ����������
 * @param x1 ��������� �� ����� ���������� � �������
 * @param x2��������� �� ����� ���������� � �������
 *
 * @return enum nRoots ��������� ���������� �������
 */

nRoots solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2);

/**
 * @brief ������ �������� ���������
 *
 *  ������ �������� ���������, � ������ a = 0 �������� solve_lin_equation()
 *
 * @param b ���������� ����� ���������� � ������ �������
 * @param c ��������� ����������
 * @param x ��������� �� ����� ���������� ��� �������
 *
 * @return enum nRoots ��������� ���������� �������
 */

nRoots solve_lin_equation (const double b, const double c, double* x);

#endif // SOLVER_H
