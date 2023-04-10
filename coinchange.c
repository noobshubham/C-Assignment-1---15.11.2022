#include<stdio.h>

void main() {
    int value, coins[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Enter the Value: ");
    scanf("%d", &value);

    int i = 0, coin_count = 0;
    while (value > 0) {
        if (coins[i] <= value) {
            printf("Coin Used %d\n", coins[i]);
            coin_count++;
            value -= coins[i];
        } else i++;
    }

    printf("Total Number of Coins is %d.", coin_count);
}