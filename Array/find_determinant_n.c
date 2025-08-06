/*
    Program: Find the Determinant of an n x n Matrix
    Author: Arindam Ghosh

    Description:
    This program calculates the determinant of a square matrix of order n (n ≤ 10).
    It uses a recursive approach based on Laplace expansion (cofactor expansion).
    For each element in the first row, it calculates the cofactor by recursively 
    finding the determinant of the (n-1) submatrix.

    Key Steps:
      - Input the order (n) and elements of the square matrix.
      - Use a recursive function `determinant()` to:
          - Directly compute determinant for 1x1 and 2x2 matrices.
          - For larger matrices, expand along the first row:
                det(A) = Σ (-1)^(col) * A[0][col] * determinant(cofactor)
      - Display the computed determinant.

    Example:
      Input:
        n = 3
        Matrix:
        1 2 3
        4 5 6
        7 8 9
      Output:
        Determinant = 0

    This program demonstrates recursion, 2D array manipulation, and cofactor-based determinant calculation in C.
*/

#include <stdio.h>

#define MAX 10  // Maximum allowed matrix size

// Function to find cofactor of matrix
void getCofactor(int mat[MAX][MAX], int temp[MAX][MAX], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function to find determinant of a matrix
int determinant(int mat[MAX][MAX], int n) {
    int det = 0; // Initialize result

    // Base case: single element
    if (n == 1) {
        return mat[0][0];
    }

    // Base case: 2x2 matrix
    if (n == 2) {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    }

    int temp[MAX][MAX]; // To store cofactors
    int sign = 1;       // To store sign multiplier

    // Iterate for each element of first row
    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        det += sign * mat[0][f] * determinant(temp, n - 1);

        // Alternate signs
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    int mat[MAX][MAX];

    // Input matrix order
    printf("Enter the order of the matrix (n x n, n <= %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Input matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Compute determinant
    int det = determinant(mat, n);

    // Output result
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}
