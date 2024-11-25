#include<stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return a / b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Addition of %d and %d is: %d\n", a, b, add(a, b));
    printf("Subtraction of %d and %d is: %d\n", a, b, sub(a, b));
    printf("Multiplication of %d and %d is: %d\n", a, b, mul(a, b));

    if (b != 0) {
        printf("Division of %d by %d is: %d\n", a, b, div(a, b));
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
