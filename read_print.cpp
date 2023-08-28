#include "read_print.h"

void read_struct_coeffs (coefficients* Coeffs)
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

int print_solutions (nRoots numb_of_roots, const double x1, const double x2)
{
    switch (numb_of_roots)
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
            return 1;// TODO: are you aware of asserts? Is it a good idea to use one here?
            break;  // ArFar: 20:26 27.08.2023 I can't make asserts, but I promise I am going to " izuchit' " them!
    }

    return 0; // TODO: Why does it return int, if it's always 0?
}

void clear_input_buffer (void)
{
    while ( ( getchar() ) != '\n' );
}
