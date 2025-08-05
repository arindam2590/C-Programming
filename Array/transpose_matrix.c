/*
    Program: Find the Transpose of a Matrix
    Author: Arindam Ghosh

    Description:
    This program calculates the transpose of a given matrix.
    The transpose of a matrix is obtained by swapping rows with columns.
    That is, the element at position (i, j) becomes the element at position (j, i).

    Process:
      - Prompt the user to enter the number of rows and columns of the matrix.
      - Read the elements of the matrix from the user.
      - Use nested loops to transpose the matrix by swapping indices.
      - Store the result in a new matrix.
      - Print the transposed matrix.

    Example:
      Input:
        Matrix (2x3):
        1 2 3
        4 5 6
      Output:
        Transpose (3x2):
        1 4
        2 5
        3 6

    This program demonstrates 2D array manipulation and matrix operations using nested loops in C.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Prompt user to input dimensions
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    int matrix[20][20], transpose[20][20];

    // Read matrix elements
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transpose
    printf("Transpose of the matrix (%d x %d):\n", cols, rows);
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
