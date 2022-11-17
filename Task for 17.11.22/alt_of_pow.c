/*
Take 4 number from the user a,b,c,d and then find the value of (a^b)/(c^d). You should not use pow() function.
*/

#include <stdio.h>

long double PowerAlt(int base, int exp)
{
    long double result = 1.0;

    while (exp-- != 0)
        result *= base;

    return result;
}

void main()
{
    int a, b, c, d;

    printf("enter the value a: ");
    scanf("%d", &a);

    printf("enter the value b: ");
    scanf("%d", &b);

    printf("enter the value c: ");
    scanf("%d", &c);

    printf("enter the value d: ");
    scanf("%d", &d);

    printf("Result: %.0Lf", PowerAlt(a, b) / PowerAlt(c, d));
}