/*
Write a c program to check palindrome number.
*/
#include <stdio.h>

int Reverse(int num)
{
    int res = 0;
    while (num > 0)
    {
        res = res * 10 + (num % 10);
        num /= 10;
    }
    return res;
}

void main()
{
    int num;
    printf("Enter the Value: ");
    scanf("%d", &num);
    if (num == Reverse(num))
        printf("Palindrome!");
    else
        printf("Not Palindrome!");
}