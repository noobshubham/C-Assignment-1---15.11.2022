/*
Write a c program to print Fibonacci series without using recursion and using recursion.
*/
#include <stdio.h>

int RecursiveFind(int num)
{
    if (num <= 1)
        return num;
    return RecursiveFind(num - 2) + RecursiveFind(num - 1);
}

void IterativeWay(int num)
{
    int a, b, sum = 0;
    a = 0;
    b = 1;

    printf("%d %d ", a, b);
    while (--num > 0)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
}

void main()
{
    int n;
    printf("Enter the Number to Find Fibonacci Series: ");
    scanf("%d", &n);

    // Iterative Way
    printf("Iterative Way\n");
    IterativeWay(n);

    // Recursive Way
    printf("\nRecursive Way\n");
    for (int i = 0; i <= n; i++)
        printf("%d ", RecursiveFind(i));
}