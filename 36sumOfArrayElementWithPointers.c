//36. Write a program to find the sum of all the elements of an array using pointers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
