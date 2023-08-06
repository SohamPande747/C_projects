#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matA[MAX_SIZE][MAX_SIZE], matB[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions of matrix A
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    // Input dimensions of matrix B
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Input elements of matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    // Perform matrix multiplication
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
    } else {
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                result[i][j] = 0;
                for (int k = 0; k < colsA; k++) {
                    result[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }

        // Display the result matrix
        printf("Result of matrix multiplication:\n");
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
