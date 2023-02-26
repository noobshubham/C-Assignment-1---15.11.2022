#include <stdio.h>

void Heapify(int arr[], int n, int i)
{
    int largest, left, right;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        Heapify(arr, n, largest);
    }
}