#include <stdio.h>

int main() {
    char fullName[60];
    char section[30];
    int num1, num2;

    printf("Enter Complete Name:");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section:");
    fgets(section, sizeof(section), stdin);

    printf("\nEnter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    printf("\n Student Calculator\n");
    printf("Student name: %s", fullName);
    printf("Section: %s", section);

    printf(" Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);

    return 0;
}
