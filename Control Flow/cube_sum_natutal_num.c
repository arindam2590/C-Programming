/*
    Program: Cube Sum of First N Natural Numbers
    Author: Arindam Ghosh

    This program calculates the sum of the cubes of the first `n` natural numbers. 
    The cube sum of the first `n` natural numbers is calculated using the formula:
    
        Sum = (1^3) + (2^3) + ... + (n^3)
    
    Alternatively, the mathematical formula for the cube sum of the first `n` natural numbers is:
    
        Sum = [(n * (n + 1)) / 2]^2

    This program provides two approaches:
    1. Using a loop to calculate the sum of cubes directly.
    2. Using the mathematical formula to compute the cube sum.

    Process:
    - Input the value of `n` (the number of natural numbers to consider).
    - Compute the cube sum using either a loop or the mathematical formula.
    - Output the result.

    Example:
    Input: n = 3
    Output: Sum of cubes of the first 3 natural numbers = 36 
            (as 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36)

    This program demonstrates the use of loops, mathematical formulas, and basic arithmetic operations in C.
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the number of natural numbers (n): ");
    scanf("%d", &n);

    // Calculate the cube sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += (i * i * i); // Add the cube of i to the sum
    }

    // Display the cube sum
    printf("The sum of cubes of the first %d natural numbers using a loop is: %d\n", n, sum);

    // Alternatively, calculate the cube sum using the mathematical formula
    int formulaSum = ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);

    // Display the result from the formula
    printf("The sum of cubes of the first %d natural numbers using the formula is: %d\n", n, formulaSum);

    return 0;
}
