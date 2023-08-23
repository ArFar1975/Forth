#include <TXLib.h>
#include "greeter.h"
#include "My_math.h"

enum AnswerVar
{
    NullSolves = 0,
    OneSolve   = 1,
    TwoSolves  = 2,
    InfSolves  = 3
};

double input_coef (char name);

AnswerVar solve_quadr_equation (double a, double b, double c, double* x1, double* x2);
AnswerVar solve_lin_equation (double b, double c, double* x);

int print_answers (AnswerVar, double* x1, double* x2);

int main()
{
    greet();

    double a = input_coef ('a');
    double b = input_coef ('b');
    double c = input_coef ('c');

    double x1 = 0, x2 = 0;

    AnswerVar answers = (solve_quadr_equation (a, b, c, &x1, &x2) );

    print_answers(answers, &x1, &x2);

    printf("\n\nAugust 2023");

    return 0;
}

double input_coef (char name)
{
    double coef = 0;

    printf ("Put \"%c\" here:", name);
    scanf ("%lg", &coef);

    return coef;
}

AnswerVar solve_quadr_equation (const double a, const double b, const double c, double* x1, double* x2)
{
    if (isZero(a))
    {
        printf ("\a" "For a = 0 , this equation is not a quadratic equation!\n");
        printf ("But we can solve it special for you, skinny leather bag ;)\n");

        return solve_lin_equation(b, c, x1);
    }

    else if (isZero(b))
    {
        double p = -c / a;

        if (isZero(p))
        {
            *x1 = *x2 = 0;

            return OneSolve;
        }
        else if (p > 0)
        {
            double sqc = sqrt(p);

            *x1 = sqc;
            *x2 = -sqc;

            return TwoSolves;
        }

        else
        {
            return NullSolves;
        }
    }

    else if (isZero(c))
    {
        *x1 = 0;
        *x2 = -b / a;

        return TwoSolves;
    }

    else
    {
        double d = power(b, 2) - 4.0 * a * c;

        if (isZero(d))
        {
            *x1 = *x2 = (-b / (2.0 * a));

            return OneSolve;
        }

        else if (d > 0)
        {
            double sqd = sqrt(d);

            *x1 = (-b + sqd) / (2.0 * a);
            *x2 = (-b - sqd) / (2.0 * a);

            return TwoSolves;
        }

        else
        {
            return NullSolves;
        }
    }
}

AnswerVar solve_lin_equation (const double b, const double c, double* x)
{
        if (isZero(b) && isZero(c))
        {
            return InfSolves;
        }

        else if (isZero(b) && !isZero(c))
        {
            return NullSolves;
        }

        else
        {
            *x = -c / b;

            return OneSolve;
        }
}

int print_answers (AnswerVar answers, double* x1, double* x2)
{
    switch (answers)
    {
        case NullSolves:
            printf ("\n" "This equation has no real roots");
            break;

        case OneSolve:
            printf ("\n"  "x = %lg\n", *x1);
            break;

        case TwoSolves:
            printf ("\n" "x1 = %lg\n", *x1);
            printf (     "x2 = %lg\n", *x2);
            break;

        case InfSolves:
            printf ("\n" "This equation has infinity roots!");
            break;

        default:
            break;
    }

    return 0;
}
