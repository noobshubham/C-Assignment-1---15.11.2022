/*
Write a program to find if a given number is prime or not.
*/

#include <stdio.h>

int FindPrimeNumber(int n)
{
    int i;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            return 1;
            break;
        }
    }

    return 0;
}

void main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (FindPrimeNumber(n) == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}