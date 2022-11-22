/*
Input a number and find if it is an Armstrong number or not.
*/

#include <stdio.h>

void CheckArmstrongNumber(int n)
{
    int r, sum = 0, temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (temp == sum)
        printf("an armstrong number");
    else
        printf("not an armstrong number");
}

void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    CheckArmstrongNumber(n);
}