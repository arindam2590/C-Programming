/*
    Program: Rotate Matrix Elements (Clockwise by One Position)
    Author: Arindam Ghosh

    Description:
    This program rotates the elements of a given 2D matrix (M x N) by one position in a clockwise direction, layer by layer.

    For example:
    Input Matrix:
    1  2  3
    4  5  6
    7  8  9

    Output Matrix after one clockwise rotation:
    4  1  2
    7  5  3
    8  9  6

    Approach:
    - The matrix is processed in layers (from outermost to innermost).
    - For each layer, the elements are rotated by shifting them one-by-one using temporary variables.
    - Rotation is done by:
        1. Saving the top-left value
        2. Moving values from left → top, bottom → left, right → bottom, saved top-left → right

    Constraints:
    - This program works for matrices of size up to 10x10
    - The matrix should be at least 2x2 to show noticeable rotation

    This program demonstrates matrix manipulation, layer-wise traversal, and careful use of temporary variables.
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int m, n;

    // Input matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter the elements of the matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int row = 0, col = 0;
    int lastRow = m, lastCol = n;

    while (row < lastRow && col < lastCol) {
        if (row + 1 == lastRow || col + 1 == lastCol)
            break;

        int prev = matrix[row + 1][col];

        // Move elements of top row
        for (int i = col; i < lastCol; i++) {
            int curr = matrix[row][i];
            matrix[row][i] = prev;
            prev = curr;
        }
        row++;

        // Move elements of rightmost column
        for (int i = row; i < lastRow; i++) {
            int curr = matrix[i][lastCol - 1];
            matrix[i][lastCol - 1] = prev;
            prev = curr;
        }
        lastCol--;

        // Move elements of bottom row
        if (row < lastRow) {
            for (int i = lastCol - 1; i >= col; i--) {
                int curr = matrix[lastRow - 1][i];
                matrix[lastRow - 1][i] = prev;
                prev = curr;
            }
        }
        lastRow--;

        // Move elements of leftmost column
        if (col < lastCol) {
            for (int i = lastRow - 1; i >= row; i--) {
                int curr = matrix[i][col];
                matrix[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }

    // Output rotated matrix
    printf("Matrix after rotating elements by one position clockwise:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
