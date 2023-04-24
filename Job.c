#include<stdio.h>
#include<stdlib.h>

struct Job {
    int id;
    int deadline;
    int profit;
};

int cmpfunc(const void* a, const void* b) {
    return ((struct Job*)b)->profit - ((struct Job*)a)->profit;
}

int main() {
    int n, i, j, k;
    int max_deadline = 0;
    int total_profit = 0;

    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[n];
    int slot[n];

    for (i = 0; i < n; i++) {
        printf("Enter the deadline and profit of job %d: ", i + 1);
        scanf("%d %d", &jobs[i].deadline, &jobs[i].profit);
        jobs[i].id = i + 1;
    }

    qsort(jobs, n, sizeof(struct Job), cmpfunc);

    for (i = 0; i < n; i++) {
        slot[i] = -1;
    }

    for (i = 0; i < n; i++) {
        for (j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = jobs[i].id;
                total_profit += jobs[i].profit;
                break;
            }
        }
    }

    printf("Job sequence: ");
    for (i = 0; i < n; i++) {
        if (slot[i] != -1) {
            printf("%d ", slot[i]);
        }
    }

    printf("\nTotal profit: %d\n", total_profit);

    return 0;
}
