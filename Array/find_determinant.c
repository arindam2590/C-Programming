/*
    Program: Find the Determinant of a Matrix (2x2 and 3x3)
    Author: Arindam Ghosh

    Description:
    This program calculates the determinant of a square matrix.
    For simplicity, it supports both 2x2 and 3x3 matrices. The user is asked to enter the order 
    and the corresponding elements of the matrix. Based on the order, the appropriate formula 
    is applied to compute the determinant.

    Determinant Formulas:
      - For 2x2 matrix:
            |a b|
            |c d|      ⇒  det = (a * d) - (b * c)

      - For 3x3 matrix:
            |a b c|
            |d e f|     ⇒  det = a(ei − fh) − b(di − fg) + c(dh − eg)
            |g h i|

    Example:
      Input:
        Matrix:
        1 2 3
        4 5 6
        7 8 9
      Output:
        Determinant = 0

    This program demonstrates matrix traversal, nested loops, and basic algebraic operations in C.
*/

#include <stdio.h>

int main() {
    int matrix[3][3], order, i, j;
    int det = 0;

    // Prompt user to enter the order of the matrix
    printf("Enter the order of the square matrix (2 or 3): ");
    scanf("%d", &order);

    // Check for valid order
    if (order != 2 && order != 3) {
        printf("This program only supports 2x2 and 3x3 matrices.\n");
        return 1;
    }

    // Read matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", order, order);
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate determinant
    if (order == 2) {
        det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else if (order == 3) {
        det = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))
            - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))
            + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
    }

    // Display result
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}
