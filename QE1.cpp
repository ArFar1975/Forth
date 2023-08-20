#include <TXLib.h>
#define ESP 0.1e-36
double agetter();
double bgetter();
double cgetter();

int main()
{
    double a, b, c, d;
    printf("Hello! This program can solve quadratic equations:\na*x^2 + b*x + c = 0\n");
    a = agetter();
    b = bgetter();
    c = cgetter();
    d = b*b - 4.0*a*c;
    if (d < 0) {
        printf("This equation has no real roots");
        }
    else if (d > 0) {
        printf("x1 = %g\n", (-b + sqrt(d)) / (2.0*a));
        printf("x2 = %g\n", (-b - sqrt(d)) / (2.0*a));
        }
    else {
        printf("x = %g\n", (-b/(2.0*a)));
    }

    return 0;
}

double agetter()
{
    double a;
    a = 0;
    while (fabs(a-0) < ESP) {
        printf("Put \"a\" here:");
        scanf("%lf", &a);
        if (fabs(a-0) < ESP)
            printf("Error! For a = 0 , this equation is not a quadratic equation! Try again!\n");
    }

    return a;
}

double bgetter() {
    double b;
    printf("Put \"b\" here:");
    scanf("%lf", &b);

    return b;
}

double cgetter()
{
    double c;
    printf("Put \"c\" here:");
    scanf("%lf", &c);

    return c;
}
