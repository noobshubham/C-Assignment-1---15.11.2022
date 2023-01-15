#include <stdio.h>
main()
{
    int i, count_pos = 0, count_neg = 0, count_zero = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &i);
    int ar[i];
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &ar[j]);
        if (ar[j] == 0)
        {
            count_zero++;
        }
        else if (ar[j] > 0)
        {
            count_pos++;
        }
        else
        {
            count_neg++;
        }
    }
    printf("\nCount of positive numbers: %d\nCount of negative numbers: %d\nnCount of zero numbers: %d\n", count_pos, count_neg, count_zero);
}
