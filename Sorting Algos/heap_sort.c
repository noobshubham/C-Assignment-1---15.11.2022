#include <stdio.h>

// this function makes the Heap into Max-Heap
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

void HeapSort(int arr[], int n)
{
    // to make the arr into Max-Heap for the first time before sorting
    for (int i = n / 2 - 1; i >= 0; i--) Heapify(arr, n, i);

    // swap the root node with right-most leaf (i)
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        Heapify(arr, i, 0);
    }
}

void Display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void main() {
    int arr[] = {81, 89, 9, 11, 14, 76, 54, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the unsorted array first
    Display(arr, n);

    // Sort the Array using Heap Sort
    HeapSort(arr, n);

    // Display the sorted array
    Display(arr, n);
}