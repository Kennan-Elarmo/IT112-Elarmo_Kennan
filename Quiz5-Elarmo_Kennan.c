#include <stdio.h>

int main() {
    int day = 1;
    float savings, total = 0;
    float average, needed;

    printf("====================================\n");
    printf("       DAILY SAVINGS TRACKER\n");
    printf("====================================\n");

    do {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &savings);

        total = total + savings;
        day++;

    } while (day <= 7);

    average = total / 7;

    printf("\n====================================\n");
    printf("          SAVINGS SUMMARY\n");
    printf("====================================\n");

    printf("Total Savings: PHP %.2f\n", total);
    printf("Daily Average: PHP %.2f\n", average);

    if (total >= 500) {
        printf("Status: GOAL REACHED\n");
    } else {
        needed = 500 - total;
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", needed);
    }

    printf("====================================\n");

    return 0;
}
