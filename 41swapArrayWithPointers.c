//41. Write a program to swap two arrays using pointers.

#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int n;

    printf("Enter the number of elements for the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Arrays before swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, n);

    printf("\n\nArrays after swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;
}
