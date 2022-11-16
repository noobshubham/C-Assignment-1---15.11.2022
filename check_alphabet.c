#include<stdio.h>

void main() {
    char alphabet;

    printf("Enter the Alphabet: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowels");
        break;
    
    default:
        printf("Consonent");
    }
}