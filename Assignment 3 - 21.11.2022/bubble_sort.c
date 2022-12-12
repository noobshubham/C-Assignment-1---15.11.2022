/*
Sort a list of N numbers using Bubble sort technique.
*/

#include <stdio.h>

void main()
{

    int array[] = {80, 10, 70, 20, 60, 30, 50, 40};
    int size = 8, temp, flag;

    for (int i = 0; i < size; i++)
    {
        flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1])
            {
                flag = 1;
                // swap the element
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        if (flag == 0)
            break;
    }
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
}