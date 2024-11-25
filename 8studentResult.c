#include <stdio.h>
#include <string.h>

int main() {
    char name[50], resultClass[20] = ""; // Increased name size for safety
    int i;
    float marks[5], total = 0, per;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read full name including spaces
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline character if present

    printf("Enter marks of 5 subjects out of 100:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        
        if (marks[i] > 100 || marks[i] < 0) {
            printf("Invalid input for subject %d. Please re-enter.\n", i + 1);
            i--; // Retry the current subject
            continue;
        }
        total += marks[i];
    }

    per = (total / 500) * 100;
    if (per >= 80) {
        strcpy(resultClass, "Distinction");
    } else if (per >= 60) {
        strcpy(resultClass, "First Class");
    } else if (per >= 50) {
        strcpy(resultClass, "Second Class");
    } else if (per >= 40) {
        strcpy(resultClass, "Pass Class");
    } else {
        strcpy(resultClass, "Fail");
    }

    printf("\nName of student: %s\n", name);
    printf("Total marks scored: %.2f\n", total);
    printf("Percentage scored: %.2f%%\n", per);
    printf("Result class: %s\n", resultClass);

    return 0;
}
