/**
*   @file equation_param.h
*   @breif ���� ���� �������� ���������
*   � ������������� ����������� ��������� �
*   ��������� ��� ������
*/


#ifndef EQUATION_PARAM_H

#include <TXLib.h>

#define EQUATION_PARAM_H

/**
*   @breif ��������� ���������� �������
*/

enum nRoots
{
    ZeroRoots = 0, // < ������� ���
    OneRoot   = 1, // < ���� �������
    TwoRoots  = 2, // < ��� �������
    InfRoots  = 3  // < ����������� ���������� �������
};

typedef struct
{
    double a; // < ���������� ����� ����������� �� ������ �������
    double b; // < ���������� ����� ����������� �� ������ �������
    double c; // < ����������� ����������
}
coefficients;

#endif //EQUATION_PARAM_H
