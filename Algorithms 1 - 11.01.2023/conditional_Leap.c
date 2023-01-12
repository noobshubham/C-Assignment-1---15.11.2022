#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year to check if it is a leap year or not:-\n");
    scanf("%d", &year);
    int flag;
    flag = year % 4 == 0 ? 1 : 0;
    if (flag == 1)
        printf("Its a leap year!");
    else
        printf("Its not a leap year.");
}
