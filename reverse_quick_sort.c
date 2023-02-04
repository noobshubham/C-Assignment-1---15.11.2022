/*
Code for Quick Sort
Key: v3jBfGqAyjbq
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int s, int e)
{
    int i, j, pivot;
    pivot = arr[e];
    i = s;
    j = e - 1;
    while (i <= j) {
        while (arr[i] <= pivot && i < e) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[i], &arr[e]);
    return i;
}

void quickSort(int arr[], int s, int e)
{
    if (s <= e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

void main()
{

    int arr[] = {20, 17, 33, 42, 85, 10, 22, 15};
    int n = 8;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}