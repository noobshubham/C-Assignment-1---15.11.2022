#include <stdio.h>
#include <math.h>

// code by noobshubham

int evaluate(int arr[], int n)
{
    int sum = 0, mean;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    mean = sum / n;

    sum = 0;
    for (int i = 0; i < n; i++)
        sum += pow(arr[i] - mean, 2);

    return sqrt(sum / n);
}

void main()
{
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Standard Deviation is %d", evaluate(data, n));
}