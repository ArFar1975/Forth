/**
*   @file equation_param.h
*   @breif Этот файл содержит структуру
*   с коэффицентами квадратного уравнения и
*   константы для ответа
*/


#ifndef EQUATION_PARAM_H

#include <TXLib.h>

#define EQUATION_PARAM_H

/**
*   @breif возможное количество ответов
*/

enum nRoots
{
    ZeroRoots = 0, // < решений нет
    OneRoot   = 1, // < одно решение
    TwoRoots  = 2, // < два решения
    InfRoots  = 3  // < бесконечное количество решений
};

typedef struct
{
    double a; // < коэффицент перед неизвестной во второй степени
    double b; // < коэффицент перед неизвестной во первой степени
    double c; // < независимый коэффицент
}
coefficients;

#endif //EQUATION_PARAM_H
