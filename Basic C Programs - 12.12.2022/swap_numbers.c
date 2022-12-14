/*
Write a c program to swap two numbers without using third variable.
*/

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter a Value: ");
    scanf("%d", &a);
    printf("Enter b Value: ");
    scanf("%d", &b);
    a = b - a;
    b = b - a;
    a = a + b;
    printf("Swapped Value for a & b are %d & %d respectively.", a, b);
}