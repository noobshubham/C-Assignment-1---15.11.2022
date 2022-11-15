/*

Write a C program to input temperature in Fahrenheit and convert it to Celsius.

Formula :

Celsius = (F - 32) * 5 / 9;

*/

#include <stdio.h>

int Celsius(int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

void main()
{
    int f;

    printf("Enter the Fahrenheit Value (in degree): ");
    scanf("%d", &f);

    printf("%d Fahrenheit to Celsius is : %d", f, Celsius(f));
}