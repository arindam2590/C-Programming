
/*
    Program: Check Whether Two Matrices Are Equal or Not
    Author: Arindam Ghosh

    Description:
    This program checks whether two matrices of the same size are equal or not.
    The user is prompted to enter the number of rows and columns, then the elements of both matrices.
    The program compares each corresponding element of the two matrices. If all elements are equal, it prints that the matrices are equal; otherwise, it prints that they are not equal.

    Process:
      - Prompt the user to enter the number of rows and columns of the matrices.
      - Read the elements of the first and second matrices from the user.
      - Use nested loops to compare corresponding elements of both matrices.
      - If all elements match, print that the matrices are equal; otherwise, print that they are not equal.

    Example:
      Input:
        Rows: 2
        Columns: 2
        Matrix A:
        1 2
        3 4
        Matrix B:
        1 2
        3 4
      Output:
        The matrices are equal.

    This program demonstrates 2D array manipulation and comparison in C.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, isEqual = 1;
    int matrixA[20][20], matrixB[20][20];

    // Prompt user for matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

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

    // Compare matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrixA[i][j] != matrixB[i][j]) {
                isEqual = 0;
                break;
            }
        }
        if (!isEqual) break;
    }

    if (isEqual) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}
