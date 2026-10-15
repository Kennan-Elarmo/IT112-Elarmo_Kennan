
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int arr[100];
    int n, i, largest;
    char str[200];
    int vowels = 0;

    // Part 1: Find the Largest Element
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n",
           largest);

    // Clear the input buffer
    getchar();

    // Part 2: Count Vowels in a String
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' ||
            ch == 'u') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n",
           vowels);

    return 0;
}
