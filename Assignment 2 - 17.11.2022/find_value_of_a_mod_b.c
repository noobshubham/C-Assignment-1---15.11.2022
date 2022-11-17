/*
Find the value of a%b (taking the values of and b from the user), without using the '%' operator.
*/

#include <stdio.h>

void main()
{
    int a, b;

    printf("enter the value a: ");
    scanf("%d", &a);

    printf("enter the value b: ");
    scanf("%d", &b);

    printf("Mod of a & b is %d", a - b * (a / b));
}