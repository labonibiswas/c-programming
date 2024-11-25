//46. Write a program to find length of string using pointers.

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;  // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string including spaces

    int length = stringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
