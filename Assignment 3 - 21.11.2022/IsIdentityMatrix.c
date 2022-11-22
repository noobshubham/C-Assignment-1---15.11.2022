#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

void main(){
    int size = 0;
    printf("Enter the number of rows or columns\n");
    scanf("%d", &size);
    int matrix[size][size];
    printf("Enter the values\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("matrix[%d][%d]",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Printing the matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    bool ok = true;
    printf("Checking the matrix is Identity Matrix or not\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j){
                if(matrix[i][j]!=1){
                    ok = false;
                }
            }
            else{
                if (matrix[i][j] != 0)
                {
                    ok = false;
                }
            }
        }
    }
    if(ok ==true){
        printf("It is Identity Matrix");
    }
    else{
        printf("No it is not a Identity Matrix");
    }
}
