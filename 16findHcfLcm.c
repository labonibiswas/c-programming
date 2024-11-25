#include <stdio.h>


int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int num1, num2, gcd, lcm;


    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);


    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }


    gcd = findGCD(num1, num2);
    lcm = findLCM(num1, num2, gcd);


    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
