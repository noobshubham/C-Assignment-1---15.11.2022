/*
According to a study, the approximate level of intelligence of a person can be calculated using the following formula: ```i = 2 + ( y + 0.5 x )```. Write a program, which will produce a table of values of i, y and x, where y varies from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.
*/
#include <stdio.h>

void main()
{
    int y;
    float i, x;

    printf("i\ty\tx\n");

    // loop for y ranges from 1 - 6
    for (y = 1; y <= 6; y++)
    {
        // loop for every value y range (5.5 to 12.5 step 0.5)
        for (x = 5.5; x <= 12.5; x = x + 0.5)
        {
            i = 2 + (y + 0.5 * x);
            printf("%.2f\t%d\t%.2f\n", i, y, x);
        }
    }
}