/*

Write a C program to calculate area and circumference of a circle using pre-processor directive.

Universal Value of PI is 22/7 which is 3.147

Formula :

area = PI * r * r

circumference = 2 * PI * r

*/

#include <stdio.h>
#define PI 3.147

void main()
{
    float circumference;
    float area;
    float radius;

    printf("Enter the Radius Value of the Circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Area of Circle is %f and Circumference is %f", area, circumference);
}
