/*
Find Largest and Second Largest element in an array.
*/
#include <stdio.h>

void main()
{
    int array[] = {50, 30, 10, 60, 80, 60};
    int largest = array[0];
    int second_largest = array[0];

    for (int i = 1; i < 6; i++)
    {
        if (array[i] > largest)
            largest = array[i];
        if (array[i] > second_largest && array[i] < largest)
            second_largest = array[i];
    }

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);
}