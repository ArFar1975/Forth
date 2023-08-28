#include "read_print.h"

void get_coeffs (coefficients* Coeffs)
{
    Coeffs->a = read_num ('a');
    Coeffs->b = read_num ('b');
    Coeffs->c = read_num ('c');
}

double read_num (char name)
{
    double coef = NAN;

    printf ("Put \"%c\" here:", name);

    scanf ("%lg", &coef);

    clear_input_buffer();

    return coef;
}

void print_solutions (nRoots numb_of_roots, const double x1, const double x2)
{
    switch (numb_of_roots)
    {
        case ZeroRoots:
            printf ("\n" "This equation has no real roots" "\n");
            break;

        case OneRoot:
            printf ("\n"  "x = %lg\n", x1);
            break;

        case TwoRoots:
            printf ("\n" "x1 = %lg\n", x1);
            printf (     "x2 = %lg\n", x2);
            break;

        case InfRoots:
            printf ("\n" "This equation has infinity roots!" "\n");
            break;

        default:
            printf("Unknown incredible error!!!!!");
            assert(numb_of_roots < ZeroRoots || numb_of_roots > InfRoots);
            break;
    }
}

void clear_input_buffer (void)
{
    while ( ( getchar() ) != '\n' );
}
