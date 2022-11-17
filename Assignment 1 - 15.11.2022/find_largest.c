/*
Write a program to find largest and second largest of 3 numbers using Nested if statement.
*/

#include <stdio.h>

void main()
{
    int a, b, c;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    printf("enter the third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("\n%d is the Largest Number\n", a);
        if (b > c)
            printf("%d is the Second Largest Number", b);
        else
            printf("%d is the Second Largest Number", c);
    }
    else if (b > a && b > c)
    {
        printf("\n%d is the Largest Number\n", b);
        if (a > c)
            printf("%d is the Second Largest Number", a);
        else
            printf("%d is the Second Largest Number", c);
    }
    else if (c > a && c > b)
    {
        printf("\n%d is the Largest Number\n", c);
        if (b > a)
            printf("%d is the Second Largest Number", b);
        else
            printf("%d is the Second Largest Number", a);
    }
    else
        printf("something went wrong!");
}