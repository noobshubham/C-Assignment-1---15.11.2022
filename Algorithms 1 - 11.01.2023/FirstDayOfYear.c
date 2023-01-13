#include <stdio.h>

main(){
    int y;
    printf("Enter a year <Year should be greater than 1900>:\n");
    scanf("%d", &y);
    int dif = 1900-y;
    int leapYear = dif/4;
    int dys = dif*365 + leapYear;
    int j = dys % 7;
    printf("%d",j);
    printf("The first day of %d year is: %d",y);
    switch (j)
    {
    case 0:
        printf("Monday");
        break;

    case 1:
        printf("Tuesday");
        break;

    case 2:
        printf("Wednessday");
        break;

    case 3:
        printf("Thrusday"); 
        break;

    case 4:
        printf("Friday"); 
        break;

    case 5:
        printf("Saturday");
        break;

    case 6:
        printf("Sunday");
        break;

    default:
        break;
    }
}
