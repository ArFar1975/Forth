#include "read_print.h"

void get_coeffs (coefficients* Coeffs)
{   // TODO asserts NULL

    Coeffs->a = read_num ('a');
    Coeffs->b = read_num ('b');
    Coeffs->c = read_num ('c');
}

double read_num (char name)
{
    double coef = NAN;
    char input[max_len_input]= {0};
    bool inputIsCorrect = false;

    while (inputIsCorrect == false)
    {
        printf ("Put \"%c\" here:", name);

        scanf ("%254[^\n]", input);

        clear_input_buffer();

        inputIsCorrect = check_input (input);

        if (inputIsCorrect == false)
            printf("Error! Try again!\n");
    }

    coef = atof (input);

    return coef;
}

void print_solutions (nRoots numb_of_roots, const double x1, const double x2)
{

    // todo CHECK nan and inf
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
{   // TODO  check null pointer
    unsigned int position = 0, counter = 0;

    unsigned int len_in = strlen(input);

    bool point_seen = false;

    while (position < len_in)
    {
        if ( ! is_in_list (input[position]) )

            break;

        if ( input[position] == '-' && (position != 0 || len_in == 1) )

            break;

        if ( input[position] == ',' )
            {
                input[position] = '.';
            }

        if ( input[position] == '.' )
        {
            if ( is_point_correct (point_seen, position, input[position - 1], len_in) )
            {
                point_seen = true;
            }

            else
                break;
        }

        ++counter;
        ++position;
    }

    return (counter == len_in);
}

bool is_in_list (char symbol)
{
    unsigned int list_index = 0;

    while (list_index < len_list)
    {
        if (symbol == legal_list[list_index])

            return true;

        ++list_index;
    }

    return false;
}

bool is_point_correct (bool flag, unsigned int position, char previos_symbol, unsigned int last_symbol)
{
    return (flag == false && position != 0 && position != (last_symbol - 1) && (previos_symbol != '-') );
}

void clear_input_buffer (void)
{
    while ( getchar() != '\n' );
}

void greet (void)
{
    // TODO puts
    printf ("\n" "==========================!!!-=ахирвюа=-!!!=========================" "\n" "\n"
        "Hello! This program can solve quadratic equations:"" \n" "a*x^2 + b*x + c = 0" "\n" "\n");
}

void bye (void)
{
    printf ("\n" "======================-(c) ArFar, August 2023-======================" "\n");
}
