#include <stdio.h>

void main()
{
    int n = 123, rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("%d", rev);
}