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
    char input[len_input]= {0};
    bool flag = false;

    while (flag == false)
    {
    printf ("Put \"%c\" here:", name);

    scanf ("%254[^\n]", input);

    clear_input_buffer();

    flag = check_input (input);

    if (flag == false)
        printf("Error! Try again!\n");
    }

    coef = atof (input);

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

bool check_input (char* input)
{
    unsigned int position = 0, counter = 0;

    unsigned int len_in = strlen(input);

    bool point_flag = false;

    while (position < len_in)
    {
        if ( ! is_in_list (input[position]) )
        {
            break;
        }

        else if (input[position] == '-' && position != 0)
        {
            break;
        }

        else if (input[position] == '.')
        {
            if ( is_point_correct (point_flag, position, input[position - 1], len_in) )
            {
                ++counter;
                point_flag = true;
            }

            else
                break;
        }

        else
            ++counter;


        ++position;
    }

    return (counter == len_in);
}

bool is_in_list (char symbol)
{
    unsigned int i = 0;

    while (i < len_list)
    {
        if (symbol == legal_list[i]) return 1;

        ++i;
    }

    return 0;
}

bool is_point_correct (bool flag, unsigned int position, char previos_symbol, unsigned int last_symbol)
{
    return (flag == false && position != 0 && position != last_symbol && (previos_symbol != '-') );
}

void clear_input_buffer (void)
{
    while ( getchar() != '\n' );
}
