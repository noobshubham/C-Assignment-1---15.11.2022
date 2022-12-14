/*
Write a c program to print sum of digits.
*/
#include <stdio.h>

void main()
{
    int num, sum = 0;
    printf("Enter the Value: ");
    scanf("%d", &num);

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of Digits is %d", sum);
}