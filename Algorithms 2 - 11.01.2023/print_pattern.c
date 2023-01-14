/*
Write a program to produce the following output:

   1
  2 3
 4 5 6
7 8 9 10

*/

#include <stdio.h>

void main()
{
    int n = 4, val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", val++);
        printf("\n");
    }
}