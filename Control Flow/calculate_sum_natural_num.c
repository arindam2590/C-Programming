/*
    Program: Calculate Sum of Natural Numbers
    Author: Arindam Ghosh

    This program calculates the sum of the first N natural numbers, where N is input by the user. 
    Natural numbers are positive integers starting from 1 (e.g., 1, 2, 3, ...).

    Formula for Sum:
    - The sum of the first N natural numbers can be calculated using the formula:
        Sum = N * (N + 1) / 2
    - This formula provides a direct way to compute the sum efficiently without using loops.

    Alternatively, the sum can also be computed iteratively using a loop.

    Process:
    1. Prompt the user to input a positive integer N.
    2. Calculate the sum using a loop or the formula.
    3. Display the result.

    Example:
    Input: 5
    Output: Sum of first 5 natural numbers is 15.

    This program demonstrates the use of loops, mathematical calculations, and basic input/output operations in C.
*/

#include <stdio.h>

int main() {
    int N, sum = 0;

    // Prompt the user to input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of the first N natural numbers using a loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
