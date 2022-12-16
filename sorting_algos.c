#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int a[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        Swap(&a[i], &a[min_idx]);
    }
}

void Display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void main()
{
    int size = 5;
    int arr[] = {9, 2, 5, 1, 3};
    SelectionSort(arr, size);
    Display(arr, size);
}