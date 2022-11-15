/*
Write a C program to find out if input alphabet is a vowel or not.
*/

#include <stdio.h>

int CheckForVowels(int val)
{
    if (val == 65 || val == 69 || val == 73 || val == 79 || val == 85 || val == 97 || val == 101 || val == 105 || val == 111 || val == 117)
    {
        return 1;
    }

    return 0;
}

void main()
{
    char alphabet;

    printf("Enter the Alphabet Value: ");
    scanf("%c", &alphabet);

    if (CheckForVowels(alphabet) != 0)
        printf("well done, it's a vowel value.");
    else
        printf("Its not a vowels.");
}