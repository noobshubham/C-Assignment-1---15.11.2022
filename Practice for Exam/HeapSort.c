void HeapSort(int arr, int n, int i) {
    int largest, left, right;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        swap(&arr[largest], &arr[i]);
        Heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) Heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        Heapify(arr, i, 0);
    }
}