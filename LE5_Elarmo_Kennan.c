#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        }

    } while (num > 0);

    printf("Total sum is: %d\n", sum);

    return 0;
}
