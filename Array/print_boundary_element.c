/*
    Program: Print Boundary Elements of a Matrix
    Author: Arindam Ghosh

    Description:
    This C program takes a 2D matrix as input and prints only the boundary elements of the matrix.
    Boundary elements are those that lie on the outermost rows and columns of the matrix:
      - First row
      - Last row
      - First column (excluding first and last rows to avoid repetition)
      - Last column (excluding first and last rows to avoid repetition)

    Steps:
    1. Prompt the user to enter the number of rows and columns.
    2. Read the matrix elements from the user.
    3. Traverse and print:
       - First row completely.
       - Last column from second row to second-last row.
       - Last row in reverse order.
       - First column from second-last to second row in reverse order.
    4. This ensures each boundary element is printed only once.

    Example:
    Input Matrix:
    1  2  3
    4  5  6
    7  8  9

    Output:
    Boundary Elements: 1 2 3 6 9 8 7 4

    This program demonstrates 2D array traversal, boundary condition handling, and matrix input-output.
*/

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Boundary elements of the matrix are:\n");

    // Top row
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]);
    }

    // Right column (excluding first and last element)
    for (int i = 1; i < rows - 1; i++) {
        printf("%d ", matrix[i][cols - 1]);
    }

    // Bottom row (if more than one row)
    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--) {
            printf("%d ", matrix[rows - 1][j]);
        }
    }

    // Left column (excluding first and last element)
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }

    printf("\n");

    return 0;
}
