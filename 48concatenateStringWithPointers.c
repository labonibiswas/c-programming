//48. Write a program to concatenate two strings using pointers.

#include <stdio.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    // Copy the first string to the result
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }
    
    // Copy the second string to the result
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    
    // Null-terminate the result string
    *result = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string including spaces

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string including spacesz

    concatenateStrings(str1, str2, result);

    printf("Concatenated String: %s", result);

    return 0;
}
