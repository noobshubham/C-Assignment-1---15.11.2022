/*
Write a c program to print Fibonacci series without using recursion and using recursion.
*/
#include <stdio.h>

void RecursiveFind(int num) {}

void IterativeWay(int num)
{
    int a, b, sum = 0;
    a = 0;
    b = 1;

    while (num-- > 0)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", sum);
}

void main()
{
    int n;
    printf("Enter the Number to Find Fibonacci: ");
    scanf("%d", &n);

    RecursiveFind(n);
    IterativeWay(n);
}