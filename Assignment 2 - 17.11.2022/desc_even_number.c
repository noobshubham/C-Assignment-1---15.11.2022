/*
Taking an input N from the user, print all the even numbers in descending order up to zero.
*/

#include <stdio.h>

void PrintEvenInDescOrder(int n)
{
    while (n-- > 1)
    {
        if (n % 2 == 0)
            printf("%d ", n);
    }
}

void main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    PrintEvenInDescOrder(n);
}