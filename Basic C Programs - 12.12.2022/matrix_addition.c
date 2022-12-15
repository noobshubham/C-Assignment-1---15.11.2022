/*
Write a c program to print multiplication of 2 matrices.
*/
#include <stdio.h>

void main()
{
    int size;
    printf("Enter The Size of Square Matrix: ");
    scanf("%d", &size);
    int matrix1[size][size], matrix2[size][size], result[size][size];
    printf("############################\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the Value for Element Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("############################\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the Value for Element Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nPlease Wait, Adding The Matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\n############################\n");
    printf("####Printing the Result.####\n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    printf("\n####Thank You for Using.####\n");
    printf("############################");
}