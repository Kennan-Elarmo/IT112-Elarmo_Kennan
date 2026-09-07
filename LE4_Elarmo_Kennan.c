#include <stdio.h>

int main() {
    char name[60];
    char section[40];
    float grade1;
    float grade2;
    float grade3;
    float grade4;
    float average;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Section: ");
    scanf("%s", section);

    printf("\nEnter 1st Quarter Grade: ");
    scanf("%f", &grade1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &grade2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &grade3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("\nStudent: %s", name);
    printf("Section: %s\n", section);
    printf("General Average: %.2f\n", average);

    if (average >= 90 && average <= 100) {
        printf("Remarks: Outstanding\n");
    }
    else if (average >= 85) {
        printf("Remarks: Very Satisfactory\n");
    }
    else if (average >= 80) {
        printf("Remarks: Satisfactory\n");
    }
    else if (average >= 75) {
        printf("Remarks: Fair\n");
    }
    else {
        printf("Remarks: Failed\n");
    }

    return 0;
}
