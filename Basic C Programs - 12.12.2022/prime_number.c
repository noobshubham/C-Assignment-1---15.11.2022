/*
Write a c program to check prime number.
*/
#include <stdio.h>

void main()
{
    int num, flag = 0;
    printf("Enter the Value: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Not a Prime Number!");
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("Not a Prime Number!");
        else
            printf("Prime Number!");
    }
}