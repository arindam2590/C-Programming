/*
    Program: Find the Normal and Trace of a Matrix
    Author: Arindam Ghosh

    Description:
    This C program calculates two important properties of a square matrix:
    
    1. Trace: The trace of a matrix is the sum of the elements on the main diagonal (from top-left to bottom-right).
       Formula: Trace = ∑ a[i][i] for all i from 0 to n-1

    2. Normal: The normal of a matrix is the square root of the sum of the squares of all elements in the matrix.
       Formula: Normal = √(∑ a[i][j]²) for all i, j in the matrix

    Steps:
      - Prompt the user to enter the order (n x n) of the square matrix.
      - Input the matrix elements.
      - Calculate the trace by summing the diagonal elements.
      - Calculate the normal by squaring and summing all elements, then taking the square root.
      - Display both trace and normal values.

    Example:
      Input:
        2x2 Matrix:
        1 2
        3 4
      Output:
        Trace = 5
        Normal = √(1² + 2² + 3² + 4²) = √30 ≈ 5.48

    This program demonstrates matrix input/output, nested loops, and usage of math functions in C.
*/

#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    int matrix[10][10];
    int i, j, n;
    int trace = 0;
    float normal = 0.0;

    // Input matrix order
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace and normal
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                trace += matrix[i][j]; // Sum of diagonal elements
            }
            normal += matrix[i][j] * matrix[i][j]; // Sum of squares of all elements
        }
    }

    // Take square root of normal
    normal = sqrt(normal);

    // Output results
    printf("Trace of the matrix = %d\n", trace);
    printf("Normal of the matrix = %.2f\n", normal);

    return 0;
}
