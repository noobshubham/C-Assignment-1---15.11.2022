/*
Write a C program to input time in seconds and convert it to hours, minutes and remaining seconds.
*/

#include <stdio.h>

void ConvertTime(int seconds)
{
    int h, m, s;

    h = seconds / 3600;
    m = (seconds % 3600) / 60;
    s = (seconds % 3600) - m * 60;

    printf("%d Hours %d Minuts %d Seconds", h, m, s);
}

void main()
{
    int sec;

    printf("Enter the Value (in seconds): ");
    scanf("%d", &sec);

    ConvertTime(sec);
}