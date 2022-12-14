/*
Write a c program to convert number in characters.
*/
#include <stdio.h>

int Reverse(int n)
{
    int res = 0;
    while (n != 0)
    {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return res;
}

void Characters(int n)
{
    switch (n)
    {
    case 1:
        printf("One ");
        break;

    case 2:
        printf("Two ");
        break;

    case 3:
        printf("Three ");
        break;

    case 4:
        printf("Four ");
        break;

    case 5:
        printf("Five ");
        break;

    case 6:
        printf("Six ");
        break;

    case 7:
        printf("Seven ");
        break;

    case 8:
        printf("Eight ");
        break;

    case 9:
        printf("Nine ");
        break;

    default:
        printf("Zero ");
        break;
    }
}

void main()
{
    int num, res;
    printf("Enter the Value: ");
    scanf("%d", &num);

    res = Reverse(num);
    while (res > 0)
    {
        Characters(res % 10);
        res /= 10;
    }
}