//31. Write a program to read an integer number and print the reverse of that number using recursion.

#include <stdio.h>

void reverseNumber(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n % 10);
    reverseNumber(n / 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The reverse of the number is: ");
    if (number < 0) {
        printf("-");
        number = -number;
    }

    reverseNumber(number);
    printf("\n");

    return 0;
}
