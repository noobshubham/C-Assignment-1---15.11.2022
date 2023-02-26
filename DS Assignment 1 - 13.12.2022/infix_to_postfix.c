/*
Rules of Infix to Post:
    1. If scanned operator is opening bracket '(' push it to the stack & if it is closing bracket ')' then pop untill you get '('
    2. If stack's top operator preceedence is greater than or equal to than of upcoming / scanned operator pop and print
*/

#include<stdio.h>
#include<ctype.h>



