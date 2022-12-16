/*
11. Write a c program to print alphabet triangle and number triangle.
    A             1
   ABA           212
  ABCBA         32123
 ABCDCBA       4321234
ABCDEDCBA     543212345
*/
#include <stdio.h>

void AlphaTrianlge(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int space = size - 1; space > i; space--)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%c", j + 65);
        for (int k = i; k >= 1; k--)
            printf("%c", k + 64);
        printf("\n");
    }
}

void NumTrianlge(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
            printf(" ");
        for (int k = i; k >= 0; k--)
            printf("%d", k + 1);
        for (int l = 1; l <= i; l++)
            printf("%d", l + 1);
        printf("\n");
    }
}

void main()
{
    printf("Printing Alphabetic Pyramid\n");
    AlphaTrianlge(5);
    printf("\nPrinting Numeric Pyramid\n");
    NumTrianlge(5);
}