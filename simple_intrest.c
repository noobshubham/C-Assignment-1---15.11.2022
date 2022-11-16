/*

Write a C program to input Principal, Rate and Time and calculate Simple Interest.

Formula : S.I. = (P * R * T) / 100

P = initial principal balance
R = annual interest rate
T = time (in years)

*/

#include <stdio.h>

int SimpleIntrest(int principal, int rate, int time)
{
    return (principal * rate * time) / 100;
}

void main()
{
    int p, r, t;

    printf("Enter the Initial Principal Balance: ");
    scanf("%d", &p);

    printf("Enter the Annual Intrest Rate: ");
    scanf("%d", &r);

    printf("Enter the Time (in year): ");
    scanf("%d", &t);

    printf("\nSimple Intrest = %d", SimpleIntrest(p, r, t));
}