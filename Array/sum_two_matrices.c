/*
    Program: Sum of Two Matrices
    Author: Arindam Ghosh

    Description:
    This program calculates the sum of two matrices entered by the user.
    It takes the number of rows and columns from the user, then inputs the values
    for both matrices. After that, it adds the corresponding elements from each matrix 
    and stores the result in a third matrix, which is then displayed.

    Process:
      - Prompt the user to enter the number of rows and columns.
      - Read the elements of the first and second matrices.
      - Use nested loops to add corresponding elements of both matrices.
      - Store the result in a third matrix.
      - Print the resulting matrix (sum).

    Example:
      Input:
        Matrix A:        Matrix B:
        1 2              5 6
        3 4              7 8
      Output:
        Sum Matrix:
        6 8
        10 12

    This program demonstrates the use of 2D arrays, nested loops, and matrix operations in C.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Prompt user for matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare matrices (fixed size for compatibility)
    int matrixA[20][20], matrixB[20][20], sum[20][20];

    // Read elements of first matrix
    printf("Enter elements of Matrix A (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read elements of second matrix
    printf("Enter elements of Matrix B (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Compute sum of matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("Sum of Matrix A and Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
