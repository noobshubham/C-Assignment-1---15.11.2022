/*
We'll be writing the code for Fractional Knapsack Problem using Greedy Algorithms
*/

#include <stdio.h>

void main()
{
    int i, j, n, sack_weight, total_profit = 0;

    printf("Enter the Number of Items: ");
    scanf("%d", &n);

    int profit[n], weight[n], ratio[n];

    printf("Enter the Knapsack Weight: ");
    scanf("%d", &sack_weight);

    printf("\nEnter the Profit & Weight of the Items\n");
    for (i = 0; i < n; i++)
    {
        printf("Profit for Item %d: ", i + 1);
        scanf("%d", &profit[i]);
        printf("Enter Weight for Item %d: ", i + 1);
        scanf("%d", &weight[i]);
        // store the profit/weight ration in ratio[]
        ratio[i] = profit[i] / weight[i];
    }

    int iteration = n;
    while (iteration-- > 0)
    {
        int max_ratio_value = 0, max_ratio = 0;

        for (i = 0; i < n; i++)
        {
            if (ratio[i] > max_ratio_value && ratio[i] != 0)
            {
                max_ratio_value = ratio[i];
                max_ratio = i;
            }
        }

        if (weight[max_ratio] <= sack_weight)
        {
            total_profit += profit[max_ratio];
            sack_weight -= weight[max_ratio];
        }
        else
        {
            total_profit += (int)((float)sack_weight / (float)weight[max_ratio] * profit[max_ratio]);
            sack_weight -= (int)((float)sack_weight / (float)weight[max_ratio] * weight[max_ratio]);
        }

        ratio[max_ratio] = 0;
    }
    
    printf("\nThe Final Profit is %d.", total_profit);
}