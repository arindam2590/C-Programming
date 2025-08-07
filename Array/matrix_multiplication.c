/*
    Program: Multiply Two Matrices
    Author: Arindam Ghosh

    Description:
    This program performs matrix multiplication between two user-defined matrices.
    The number of columns in the first matrix must be equal to the number of rows in the second matrix
    for multiplication to be valid.

    Matrix Multiplication Rule:
    If matrix A is of order m x n and matrix B is of order n x p, 
    then their product C = A × B will be of order m x p.

    Formula:
    C[i][j] = Σ (A[i][k] * B[k][j]) for k from 0 to n-1

    Steps:
    1. Take input for the number of rows and columns of Matrix A and B.
    2. Check if multiplication is possible (columns of A == rows of B).
    3. Input the elements of both matrices.
    4. Multiply them using three nested loops.
    5. Print the resulting matrix.

    Example:
    Matrix A (2x3):           Matrix B (3x2):
    1 2 3                     1 2
    4 5 6                     3 4
                              5 6

    Resultant Matrix C (2x2):
    1*1 + 2*3 + 3*5 = 22      1*2 + 2*4 + 3*6 = 28
    4*1 + 5*3 + 6*5 = 49      4*2 + 5*4 + 6*6 = 64
*/

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, k, r1, c1, r2, c2;

    // Input dimensions
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    // Input Matrix A
    printf("Enter elements of Matrix A (%dx%d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B (%dx%d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix C (%dx%d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
