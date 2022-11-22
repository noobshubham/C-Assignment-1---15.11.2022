/*
Print the pattern

1 2 3 4
1 2 3
1 2
1

*/

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5 - i + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}