/*
Rules of Infix to Post:
    1. If scanned operator is opening bracket '(' push it to the stack & if it is closing bracket ')' then pop untill you get '('
    2. If stack's top operator preceedence is greater than or equal to than of upcoming / scanned operator pop and print
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int Precedence(char operator) {
    switch (operator)
    {
        case '-':
        case '+':
            return 1;
            break;
        
        case '*':
        case '/':
        case '%':
            return 2;
            break;
        
        case '^':
            return 3;
            break;
    
    default:
        return -1;
        break;
    }
}

void InfixToPostfix(char *infix) {
    int i, j, len;
    len = strlen(infix);

    for (i = 0; i < len; i++) {
        if (isalnum(infix[i]) == 1) printf("%c", infix[i]);
        else if (isalnum(infix[i] == 0)) {
            While (Precedence(infix[i]) )
        }
    }
}

