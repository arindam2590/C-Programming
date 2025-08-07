/*
    Program: Interchange First and Last Rows of a Matrix
    Author: Arindam Ghosh

    Description:
    This program takes a 2D matrix from the user and interchanges the elements of 
    the first row with the last row, leaving all other elements unchanged.

    Use Case:
    - This operation is often used in matrix manipulation tasks, especially in 
      transformations, matrix rearrangements, or visual pattern changes.

    Steps:
    1. Prompt the user to enter the number of rows and columns.
    2. Read the elements of the matrix.
    3. Swap corresponding elements in the first and last rows.
    4. Print the modified matrix after row interchange.

    Example:
    Input Matrix:
    1  2  3
    4  5  6
    7  8  9

    Output Matrix:
    7  8  9
    4  5  6
    1  2  3
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter matrix elements (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap first and last row elements
    for (int j = 0; j < cols; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[rows - 1][j];
        matrix[rows - 1][j] = temp;
    }

    // Output the modified matrix
    printf("Matrix after interchanging first and last rows:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
