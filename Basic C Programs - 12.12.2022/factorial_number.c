/*
Write a c program to print factorial of a number.
*/
#include <stdio.h>

void main()
{
    int num, copy, res = 1;
    printf("Enter the Value: ");
    scanf("%d", &num);
    copy = num;
    while (copy-- > 0)
        res += res * copy;

    printf("Factorial of %d is %d.", num, res);
}