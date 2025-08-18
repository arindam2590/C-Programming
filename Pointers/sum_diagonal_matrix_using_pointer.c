/*
    Program: Sum of Diagonal Elements of a Matrix Using Pointer Arithmetic
    Author: Arindam Ghosh

    Description:
    This program calculates the sum of the diagonal elements of a square 
    matrix using pointer arithmetic. Both the main diagonal (from top-left 
    to bottom-right) and secondary diagonal (from top-right to bottom-left) 
    can be summed together or separately.

    How it Works:
    - The user enters the order (n) of the square matrix.
    - The matrix elements are read into a 2D array.
    - A pointer is used to traverse the matrix memory in row-major order.
    - For the main diagonal, elements at positions where row index equals 
      column index are summed.
    - For the secondary diagonal, elements at positions where 
      row index + column index = n - 1 are summed.
    - The program displays both sums and optionally the total sum.

    Example:
    Input:
        Enter order of square matrix: 3
        Enter elements:
        1 2 3
        4 5 6
        7 8 9
    Output:
        Sum of main diagonal: 15
        Sum of secondary diagonal: 15
        Total diagonal sum (counting center once): 25
*/

#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[50][50];
    int *ptr;
    int sum_main = 0, sum_secondary = 0;

    // Input order of matrix
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Pointer to first element of matrix
    ptr = &matrix[0][0];

    // Calculate diagonal sums using pointer arithmetic
    for (i = 0; i < n; i++) {
        sum_main += *(ptr + i * n + i);            // Main diagonal
        sum_secondary += *(ptr + i * n + (n - 1 - i)); // Secondary diagonal
    }

    printf("Sum of main diagonal: %d\n", sum_main);
    printf("Sum of secondary diagonal: %d\n", sum_secondary);

    // If matrix has odd order, subtract center once from total sum
    int total_sum = sum_main + sum_secondary;
    if (n % 2 == 1) {
        total_sum -= matrix[n / 2][n / 2];
    }

    printf("Total diagonal sum (counting center once): %d\n", total_sum);

    return 0;
}
