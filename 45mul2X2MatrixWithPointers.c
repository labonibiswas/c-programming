//45. Write a program to multiply two 2 X 2 matrix using pointers.

#include <stdio.h>

void multiplyMatrices(int *mat1, int *mat2, int *result) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(result + i * 2 + j) = 0; // Initialize the result element
            for (int k = 0; k < 2; k++) {
                *(result + i * 2 + j) += *(mat1 + i * 2 + k) * *(mat2 + k * 2 + j);
            }
        }
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

    multiplyMatrices((int*)mat1, (int*)mat2, (int*)result);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
