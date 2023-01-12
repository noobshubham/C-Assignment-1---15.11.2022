/*
If
the ages of Ram, Shyam and Ajay are input through the keyboard, write a program
to determine the youngest of the three.
*/

#include <stdio.h>

void main()
{
    int ram, shyaam, ajay;
    printf("enter the age of Ram, Shyaam and Ajay: ");
    scanf("%d %d %d", &ram, &shyaam, &ajay);

    int youngest;

    if (ram < shyaam && ram < ajay)
        youngest = 0;
    else if (shyaam < ajay && shyaam < ram)
        youngest = 1;
    else
        youngest = 2;

    switch (youngest)
    {
    case 0:
        printf("Youngest is Ram!");
        break;

    case 1:
        printf("Youngest is Shyaam");
        break;

    case 2:
        printf("Youngest is Ajay");
        break;
    }
}