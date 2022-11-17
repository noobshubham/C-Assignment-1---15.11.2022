/*
Taking an input N from the user, print all the even numbers in descending order up to zero.
*/

#include <stdio.h>

void PrintEvenInDescOrder(int n)
{
    for (int i = n; i >= n; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

void main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    PrintEvenInDescOrder(n);
}