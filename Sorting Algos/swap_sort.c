#include <stdio.h>

void main()
{
    int arr[] = {2, 5, 1, 3, 1};
    int i = 0, n = 5;
    while (i < n)
    {
        if (arr[i] != arr[arr[i] - 1])
        {
            int temp = arr[i];
            arr[i] = arr[arr[i] - 1];
            arr[arr[i] - 1] = temp;
        }
        else
            i++;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            printf("Missing: %d", i + 1);
            printf("\nDuplicate: %d", arr[i]);
        }
    }
}