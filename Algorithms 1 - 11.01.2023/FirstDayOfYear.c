#include <stdio.h>

main(){
    int y;
    printf("Enter a year :\n");
    scanf("%d", &y);
    int leapYear = y/4;
    int dys = y*365 + leapYear;
    int j = dys % 7;
    printf("The first day of %d year is:",y);
    switch (j)
    {
    case 0:
        printf("Friday");
        break;

    case 1:
        printf("Saturday");
        break;

    case 2:
        printf("Sunday");
        break;

    case 3:
        printf("Monday");
        break;

    case 4:
        printf("Tuesday");
        break;

    case 5:
        printf("Wednessday");
        break;

    case 6:
        printf("Thrusday");
        break;

    default:
        break;
    }
}
