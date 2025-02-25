/*
    Program: Fibonacci Series Generator Using Loops
    Author: Arindam Ghosh

    Description:
    This program prints the Fibonacci series up to a specified number of terms.
    The Fibonacci series is a sequence where each term is the sum of the two preceding ones,
    starting from 0 and 1. For example, if the user enters 10, the series will be:
       0, 1, 1, 2, 3, 5, 8, 13, 21, 34

    Process:
      - The program prompts the user to enter the number of terms (n) to display.
      - It initializes the first two terms of the series: 0 and 1.
      - Using a loop, the program calculates each subsequent term by summing the previous two terms.
      - The computed Fibonacci series is then printed to the console.

    Example:
      Input: n = 10
      Output: 0 1 1 2 3 5 8 13 21 34

    This program demonstrates the use of loops and basic arithmetic operations in C.
*/

#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        // If only one term is requested, print the first term
        printf("Fibonacci series up to %d term: 0\n", n);
    } else {
        // Initialize the first two Fibonacci numbers
        int a = 0, b = 1, nextTerm;
        
        // Print the first two terms
        printf("Fibonacci series up to %d terms:\n", n);
        printf("%d %d ", a, b);
        
        // Generate and print the remaining terms using a loop
        for (int i = 3; i <= n; i++) {
            nextTerm = a + b;
            printf("%d ", nextTerm);
            a = b;
            b = nextTerm;
        }
        printf("\n");
    }
    
    return 0;
}
