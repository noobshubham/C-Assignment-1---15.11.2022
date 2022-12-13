#include <stdio.h>

void main()
{
    char name[20];
    printf("Enter Your Name: ");
    gets(name);
    printf("---------------------------\n\n");
    printf("Your Name is %s", name);
}