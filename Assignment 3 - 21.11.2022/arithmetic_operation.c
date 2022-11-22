/*
Write a menu driven program to perform different arithmetic operations.
*/

#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{
    return a + b;
}
int Subtract(int a, int b)
{
    return a - b;
}
int Multiply(int a, int b)
{
    return a * b;
}
int Divide(int a, int b)
{
    return a / b;
}

void main()
{
    int n, a = 0, b = 0;

    printf("what arithmetic operation do you want to perform?\n1. Addition\n2. Subtract\n3. Multiplication\n4. Division\n0. Exit\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("enter value of a & b to perform addition\n");
        scanf("%d %d", &a, &b);
        printf("Addition of %d and %d is %d", a, b, Add(a, b));
        break;
    case 2:
        printf("enter value of a & b to perform subtraction\n");
        scanf("%d %d", &a, &b);
        printf("Subtraction of %d and %d is %d", a, b, Subtract(a, b));
        break;
    case 3:
        printf("enter value of a & b to perform multiplication\n");
        scanf("%d %d", &a, &b);
        printf("Multiplication of %d and %d is %d", a, b, Multiply(a, b));
        break;
    case 4:
        printf("enter value of a & b to perform division\n");
        scanf("%d %d", &a, &b);
        printf("Divide of %d and %d is %d", a, b, Divide(a, b));
        break;
    default:
        printf("b-bye!");
        break;
    }
}