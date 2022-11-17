/*
Write a program to calculate the difference of the sum of all odd numbers upto N and all even Numbers upto N.
*/

#include <stdio.h>

void DiffOfSumOfOddEven(int n)
{
    int oddSum, evenSum;
    evenSum = 0;
    oddSum = 0;

    while (n-- > 0)
    {
        if (n % 2 != 0)
            oddSum += n;
        else
            evenSum += n;
    }

    printf("Difference of Sum of all Odd & Even is %d", oddSum - evenSum);
}

void main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    DiffOfSumOfOddEven(n);
}