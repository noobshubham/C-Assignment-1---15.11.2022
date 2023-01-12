/*
A five-digit number is entered through the keyboard.
Write a program to obtain the reversed number and to determine whether the
original and reversed numbers are equal or not.
*/

#include <stdio.h>

void main()
{
    int number, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    int reversed = 0;
    temp = number;
    while (temp > 0)
    {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    if (number == reversed)
        printf("Equal!");
    else
        printf("Not Equal!");
}