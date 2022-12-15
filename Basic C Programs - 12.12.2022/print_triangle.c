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
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void main()
{
    AlphaTrianlge(5);
}