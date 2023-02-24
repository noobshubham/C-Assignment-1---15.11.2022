#include <stdio.h>

int BinarySearch(int arr[], int n, int key)
{
    int start, end, mid;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                swap(&arr[j], &arr[j + 1]);
            }
        }
        if (flag != 1)
            break;
    }
}

void RecursiveBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    else
    {
        for (int i = 0; i < n; i++)
            if (arr[i] > arr[i + 1])
                swap(&arr[i], &arr[i + 1]);
        RecursiveBubbleSort(arr, n - 1);
    }
}

void InsertionSort(int arr[], int n)
{
    int i, j, val;
    for (i = 1; i < n; i++)
    {
        val = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = val;
    }
}

void SelectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void main()
{
    int n = 5, arr[] = {50, 20, 10, 30, 40};
    // RecursiveBubbleSort(arr, n);
    // InsertionSort(arr, n);
    SelectionSort(arr, n);
    PrintArray(arr, n);
}