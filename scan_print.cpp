#include "solver.h"

double scan_coef (char name)
{
    double coef = NAN;

    printf ("Put \"%c\" here:", name);

    scanf ("%lg", &coef);

    clearBuff();

    return coef;
}

int print_answers (nRoots answer, const double x1, const double x2)
{
    switch (answer)
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

        default: // TODO: are you aware of asserts? Is it a good idea to use one here?
            break;
    }

    return 0; // TODO: Why does it return int, if it's always 0?
}

void clearBuff (void)
{
    while ( ( getchar() ) != '\n' );
}
