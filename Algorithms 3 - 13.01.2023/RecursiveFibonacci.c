#include <stdio.h>

// code by noobshubham

int RecursiveFibonacci(int n)
{
    if (n <= 1)
        return n;
    return RecursiveFibonacci(n - 2) + RecursiveFibonacci(n - 1);
}

void main()
{
    int n = 25;
    for (int i = 0; i <= n; i++)
        printf("%d ", RecursiveFibonacci(i));
}