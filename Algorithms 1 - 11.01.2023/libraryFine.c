#include <stdio.h>
void main()
{
    int lateDay;
    printf("Enter the number of days you are late for returning the book.:-\n");
    scanf("%d", &lateDay);
    if (lateDay <= 5)
    {
        printf("You have to pay 50 paise as fine.\n");
    }
    else if (lateDay > 5 && lateDay <= 10)
    {
        printf("You have to pay 1 rupee as fine.\n");
    }
    else if (lateDay > 10 && lateDay <= 30)
    {
        printf("You have to pay 5 rupee as fine.\n");
    }
    else
    {
        printf("Your subscription is cancelled!!!\n");
    }
}
