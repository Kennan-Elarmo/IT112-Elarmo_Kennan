#include <stdio.h>
#include <string.h>

#define CORRECT_PIN "1234"
#define MIN_BALANCE 100.00f

void showMenu(void);
void checkBalance(float balance);
void deposit(float *balance);
void withdraw(float *balance);

int main(void) {
    float balance = 500.00f;
    int choice, attempts = 0;
    int authenticated = 0;
    char pin[20];

    printf("================================\n");
    printf("           BSIT BANK\n");
    printf("      ATM SIMULATION SYSTEM\n");
    printf("================================\n");

    while (attempts < 3) {
        printf("\nEnter your 4-digit PIN: ");

        if (scanf("%19s", pin) != 1) {
            printf("Input error.\n");
            return 1;
        }
        
        if (strlen(pin) == 4 &&
            strcmp(pin, CORRECT_PIN) == 0) {
            authenticated = 1;
            printf("PIN accepted! Welcome.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n",
                   3 - attempts);
        }
    }

    if (authenticated == 0) {
        printf("\nATM access locked. Goodbye!\n");
        return 0;
    }

    do {
        showMenu();

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                deposit(&balance);
                break;

            case 3:
                withdraw(&balance);
                break;

            case 4:
                printf("\nThank you for using BSIT BANK!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

void showMenu(void) {
    int i;

    const char *menu[] = {
        "Balance Inquiry",
        "Deposit",
        "Withdraw",
        "Exit"
    };

    printf("\n================================\n");
    printf("Please Select your Transaction\n");

    for (i = 0; i < 4; i++) {
        printf("[%d] %s\n", i + 1, menu[i]);
    }
}

void checkBalance(float balance) {
    printf("\nYour current balance: P%.2f\n", balance);
}

void deposit(float *balance) {
    float amount;

    printf("\nEnter amount to deposit: P");

    if (scanf("%f", &amount) != 1) {
        printf("Invalid amount.\n");
        while (getchar() != '\n');
        return;
    }

    if (amount > 0) {
        *balance = *balance + amount;

        printf("P%.2f deposited successfully!\n", amount);
        printf("Your new balance: P%.2f\n", *balance);
    } else {
        printf("Invalid amount! Enter a positive value.\n");
    }
}

void withdraw(float *balance) {
    float amount;

    printf("\nEnter amount to withdraw: P");

    if (scanf("%f", &amount) != 1) {
        printf("Invalid amount.\n");
        while (getchar() != '\n');
        return;
    }

    if (amount <= 0) {
        printf("Invalid amount! Enter a positive value.\n");
    } else if (*balance - amount < MIN_BALANCE) {
        printf("Withdrawal denied! You must maintain at least "
               "P100.00 in your account.\n");
    } else {
        *balance = *balance - amount;

        printf("You withdrew P%.2f successfully!\n", amount);
        printf("Your remaining balance: P%.2f\n", *balance);
    }
}
