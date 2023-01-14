/*
Write a program for a matchstick game being played between the computer and a user.
Your program should ensure that the computer always wins.
Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Lets play the matchstick game!\n");
    int matchstick = 21, computer, user;

    while (matchstick >= 1)
    {

        printf("Total Match Sticks is %d\n", matchstick);
        printf("Pick a matchstick from 1 - 4: ");
        scanf("%d", &user);

        if (user > 4)
        {
            printf("Invalid Entry");
            break;
        }

        computer = 5 - user;
        printf("computer picks up the %d matchsticks!\n", computer);
        matchstick = matchstick - user - computer;

        if (matchstick == 1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
}