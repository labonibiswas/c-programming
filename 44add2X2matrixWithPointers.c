//44. Write a program to add two 2 X 2 matrix using pointers.


#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int *result) {
    for (int i = 0; i < 4; i++) {
        *(result + i) = *(mat1 + i) + *(mat2 + i);
    }
}

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];

    printf("Enter elements of the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices((int*)mat1, (int*)mat2, (int*)result);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
