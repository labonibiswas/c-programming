//40. Write a program to copy one array to another using pointer.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];
    int *srcPtr = source, *destPtr = destination;

    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (srcPtr + i));
    }

    for (int i = 0; i < n; i++) {
        *(destPtr + i) = *(srcPtr + i);
    }

    printf("Elements of the destination array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(destPtr + i));
    }

    printf("\n");
    return 0;
}

