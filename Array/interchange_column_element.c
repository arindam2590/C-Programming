/*
    Program: Interchange First and Last Columns of a Matrix
    Author: Arindam Ghosh

    Description:
    This program reads a 2D matrix from the user and interchanges the elements 
    of the first and last columns across all rows. This is a basic matrix manipulation 
    operation useful in array transformations and visual rearrangements.

    Use Case:
    - Interchanging columns is helpful in scenarios like mirroring data, 
      reshaping matrix views, or applying boundary swaps in algorithms.

    Steps:
    1. Prompt the user to input the number of rows and columns of the matrix.
    2. Read the matrix elements.
    3. Traverse each row and swap the first and last column elements.
    4. Display the matrix after modification.

    Example:
    Input Matrix:
    1  2  3
    4  5  6
    7  8  9

    Output Matrix:
    3  2  1
    6  5  4
    9  8  7
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap first and last columns for each row
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][cols - 1];
        matrix[i][cols - 1] = temp;
    }

    // Output the modified matrix
    printf("Matrix after interchanging first and last columns:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
