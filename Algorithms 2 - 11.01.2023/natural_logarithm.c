/*
The natural logarithm can be approximated by the following series. ((x-1)/x) + 1/2((x-1)/x)^2 + 1/2((x-1)/x)^3 + 1/2((x-1)/x)^4 + ... If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/
#include <stdio.h>
#include <math.h>

void main()
{
    float x, sum;
    printf("enter the value x: ");
    scanf("%f", &x);
    sum = (x - 1) / x;
    for (int i = 2; i < 8; i++)
        sum += (pow((x - 1) / x, i)) / 2;

    printf("Sum of first seven terms is %.2f", sum);
}