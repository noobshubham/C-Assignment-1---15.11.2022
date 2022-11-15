/*

Write a program to input marks of three subjects for a student.
Calculate percentage and find his result (First class/ Second class/ Third class/ Fail) using if-else statement.

We Assume Result as:

(in range)
1st Class :  > 80% (above 80%)
2nd Class : 80% - 60%
3rd Class : 60% - 30%
Fail : < 30% (less than 30%)

*/

#include <stdio.h>

int CalculatePercentage(int first, int second, int third)
{
    return (first + second + third) * 100 / 300;
}

void main()
{
    int sub_first, sub_second, sub_third;

    printf("Enter the marks of First Subject: ");
    scanf("%d", &sub_first);

    printf("Enter the marks of Second Subject: ");
    scanf("%d", &sub_second);

    printf("Enter the marks of Third Subject: ");
    scanf("%d", &sub_third);

    int result = CalculatePercentage(sub_first, sub_second, sub_third);

    if (result > 80)
        printf("\nCongratulations! You passed the exam by coming in first place.");
    else if (result < 80 && result > 60)
        printf("\nCongratulations! You passed the exam by coming in second place.");
    else if (result < 60 && result > 30)
        printf("\nCongratulations! You passed the exam by coming in third place.");
    else
        printf("\nYour exam result has been declared a failure, and your percentage is %d.", result);
}