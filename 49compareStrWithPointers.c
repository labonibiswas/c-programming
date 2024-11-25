//49. Write a program to compare two strings using pointers.

#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;  // Strings are not equal
        }
        str1++;
        str2++;
    }

    // If both strings ended together, they are equal; otherwise, they are not
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string including spaces

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string including spaces

    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
