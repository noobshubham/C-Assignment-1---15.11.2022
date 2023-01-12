/*
An Insurance company follows following rules to calculate premium.

(1) If a person’s health is excellent and the person is between 25 and 35 years of age
and lives in a city and is a male then the premium is Rs. 4 per thousand and
his policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per
thousand and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village
and is a male then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.

Write a program to output whether the person should be insured or not, his/her
premium rate and maximum amount for which he/she can be insured.
*/

#include <stdio.h>

void main()
{
    char health, sex, area;
    int age;

    printf("Enter the Health E for Excellent & P for Poor: ");
    scanf("%c", &health);

    printf("Enter the Sex M for Male & F for Female: ");
    scanf("%c", &sex);

    printf("Enter the Area C for City & V for Village: ");
    scanf("%c", &area);

    printf("Enter the Age: ");
    scanf("%d", &age);

    if (health == 'E' || health == 'e' && age <= 35 && age >= 25 && area == 'C' || area == 'c' && sex == 'M' || sex == 'm')
    {
        printf("\nInsured\n");
        printf("\nPremium rate = Rs. 4 per 1,000\n");
        printf("\nmaximum policy amount = Rs. 2,00,000");
    }
    else if (health == 'E' || health == 'e' && age <= 35 && age >= 25 && area == 'C' || area == 'c' && sex == 'F' || sex == 'f')
    {
        printf("\nInsured\n");
        printf("\nPremium rate = Rs. 3 per 1,000\n");
        printf("\nmaximum policy amount = Rs. 1,00,000");
    }
    else if (health == 'P' || health == 'p' && age <= 35 && age >= 25 && area == 'V' || area == 'v' && sex == 'M' || sex == 'm')
    {
        printf("\nInsured\n");
        printf("\nPremium rate = Rs. 6 per 1,000\n");
        printf("\nmaximum policy amount = Rs. 10,000");
    }
    else
        printf("Can not be Insured!");
}