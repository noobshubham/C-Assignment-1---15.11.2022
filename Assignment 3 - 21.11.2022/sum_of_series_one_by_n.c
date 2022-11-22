/*
Find sum of series 1 + 1/2 + 1/3 + ... 1/n
*/
#include <stdio.h>

void main()
{

    int n;
    double i, sum = 0.0;

    printf("enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += 1 / i;

    printf("Sum of Series is %f", sum);
}