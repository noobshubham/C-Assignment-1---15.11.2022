/*
Write a C program to find out if input character is a digit, alphabet or special symbol
*/

#include <stdio.h>

int main()
{
    char c;

    printf("Enter a Character: ");
    scanf("%c", &c);

    int i = c;

    if (i > 47 && i < 58)
        printf("Given Character '%c' is a Digit", c);
    else if ((i > 64 && i < 91) || (i > 96 && i < 123))
        printf("Given Character '%c' is a Alphabet", c);
    else
        printf("Given Character '%c' is a Special Symbol", c);
}