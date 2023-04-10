#include<stdio.h>

void main() {
    int n, i, j, total_profit = 0;
    printf("Enter Number of Jobs: ");
    scanf("%d", &n);
    int deadline[n], profit[n], job[n];

    printf("\n>>>>Enter Deadline & Profit\n");
    for (i = 0; i < n; i++)
    {
        printf("\nDeadline & Profit for Job %d\n", i + 1);
        scanf("%d%d", &deadline[i], &profit[i]);
        job[i] = i + 1;
    }

    // Sort the jobs according to their profits in descending order
    for (i = 1; i < n; i++) {
        int valp = profit[i];
        int vald = deadline[i];
        int valj = job[i];
        j = i - 1;
        while (j >= 0 && profit[j] < valp)
        {
            profit[j + 1] = profit[j];
            deadline[j + 1] = deadline[j];
            job[j + 1] = job[j];
            j--;
        }
        profit[j + 1] = valp;
        deadline[j + 1] = vald;
        job[j + 1] = valj;
    }

    // find max profit within deadline
    printf("\n");
    int deadlines = 1;
    for (i = 0; i < n; i++) {
        if (deadline[i] == deadlines) {
            printf("We Select Job %d with Profit %d\n", job[i], profit[i]);
            deadlines++;
            total_profit += profit[i];
        } else 
            printf("We Can't Take Job %d because its Deadline is Over.\n", job[i]);
    }
    printf("\nTotal Profit is %d", total_profit);
}