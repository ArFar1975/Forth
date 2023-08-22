#include <TXLib.h>
#define ESP 0.1e-36
double agetter();
double bgetter();
double cgetter();

int main()
{
    double a, b, c;
    printf("Hello! This program can solve quadratic equations:\na*x^2 + b*x + c = 0\n");
    a = agetter();
    b = bgetter();
    c = cgetter();
    double d;
    d = b*b - 4.0*a*c;
    if (d < 0) {
        printf("This equation has no real roots");
        }
    else if (d > 0) {
        double sqd = 0;
        sqd = sqrt(d);
        printf("x1 = %g\n", (-b + sqd) / (2.0*a));
        printf("x2 = %g\n", (-b - sqd) / (2.0*a));
        }
    else {
        printf("x = %g\n", (-b/(2.0*a)));
    }

    printf("\n\n(c) ArFar, August 2023");
    return 0;
}

double agetter()
{
    double a = 0;
    do {
        printf("Put \"a\" here:");
        scanf("%lg", &a);
        if (fabs(a-0) < ESP)
            printf("\aError! For a = 0 , this equation is not a quadratic equation! Try again!\n");
    } while (fabs(a-0) < ESP);

    return a;
}

double bgetter() {
    double b = 0;
    printf("Put \"b\" here:");
    scanf("%lg", &b);

    return b;
}

double cgetter()
{
    double c = 0;
    printf("Put \"c\" here:");
    scanf("%lg", &c);

    return c;
}
