#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    do {
        printf("\nMultiple functions to perform Arithmetic Operations\n");

        // Ask for two numbers
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        // Display menu
        printf("\nChoose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n");

        printf("\nEnter choice [1-5]: ");
        scanf("%d", &choice);

        // Perform selected operation
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("\n%.0f + %.0f = %.0f\n", num1, num2, result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("\n%.0f - %.0f = %.0f\n", num1, num2, result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("\n%.0f * %.0f = %.0f\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\nError: Cannot divide by zero.\n");
                } else {
                    result = divide(num1, num2);
                    printf("\n%.0f / %.0f = %.2f\n",
                           num1, num2, result);
                }
                break;

            case 5:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice. Please choose 1-5.\n");
        }

    } while (choice != 5);

    return 0;
}

// Addition function
float add(float a, float b) {
    return a + b;
}

// Subtraction function
float subtract(float a, float b) {
    return a - b;
}

// Multiplication function
float multiply(float a, float b) {
    return a * b;
}

// Division function
float divide(float a, float b) {
    return a / b;
}
