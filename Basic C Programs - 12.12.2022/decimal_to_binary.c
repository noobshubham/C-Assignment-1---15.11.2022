/*
Write a c program to convert decimal number to binary.
*/
#include <stdio.h>

void main()
{
    int num, i, ar[10];
    printf("Enter the Number to Convert: ");
    scanf("%d", &num);

    for (i = 0; num > 0; i++)
    {
        ar[i] = num % 2;
        num /= 2;
    }

    printf("Binary Number is ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", ar[i]);
}