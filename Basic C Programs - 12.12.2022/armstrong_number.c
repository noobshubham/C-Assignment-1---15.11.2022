/*
Write a c program to check Armstrong number.
*/
#include <stdio.h>
#include <math.h>

void main()
{
    int num, n = 0, originalNum, remainder;
    float result = 0.0;
    printf("enter the number: ");
    scanf("%d", &num);

    // store the number of digits of num to n;
    for (originalNum = num; originalNum != 0; ++n)
        originalNum /= 10;

    // find armstrong number
    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // if num is equal to result, the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}