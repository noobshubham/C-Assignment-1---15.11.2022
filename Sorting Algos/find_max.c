#include <stdio.h>

static int max = 0;
static int min = 999;

void main()
{
    int a[] = {20, 17, 33, 42, 85, 10, 22, 15};
    findmax(&a, 8-1);
    findmin(&a, 8-1);
    printf("Max: %d", max);
    printf("\n");
    printf("Min: %d", min);
}

void findmax(int *a, int n)
{
    if (n >= 0)
    {
        if (a[n] > max)
            max = a[n];
        findmax(a, n - 1);
    }
}

void findmin(int *a, int n)
{
    if (n >= 0)
    {
        if (a[n] < min)
            min = a[n];
        findmin(a, n - 1);
    }
}