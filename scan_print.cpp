#include "solver.h"

double input_coef (char name)
{
    double coef = 0;

    printf ("Put \"%c\" here:", name);

    scanf ("%lg", &coef);

    return coef;
}

int print_answers (AnswerType answers, const double x1, const double x2)
{
    switch (answers)
    {
        case ZeroRoots:
            printf ("\n" "This equation has no real roots");
            break;

        case OneRoot:
            printf ("\n"  "x = %lg\n", x1);
            break;

        case TwoRoots:
            printf ("\n" "x1 = %lg\n", x1);
            printf (     "x2 = %lg\n", x2);
            break;

        case InfRoots:
            printf ("\n" "This equation has infinity roots!");
            break;

        default:
            break;
    }

    return 0;
}
