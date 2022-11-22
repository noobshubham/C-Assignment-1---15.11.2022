/*
Find the sum of the series 1 + x + x^2+ x^3+ .. + x^n
*/

#include <stdio.h>

void main()
{
    int x, n;

    printf("enter the value of x and n\n");
    scanf("%d %d", &x, &n);

    double i, total = 1.0, multi = x;

    for (i = 1; i <= n; i++)
    {
        total += multi;
        multi *= x;
    }

    printf("Total = %.2f", total);
}