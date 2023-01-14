/*
Write a program to add first seven terms of the following series using a for loop: 1/1!+2/2!+3/3!...
*/
#include <stdio.h>

void main()
{
    float n, sum = 0, fac = 1;
    printf("enter number to find sum of series: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
        sum += i / fac;
    }
    printf("Sum of series: %.2f", (float)sum);
}