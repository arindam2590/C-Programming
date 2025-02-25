/*
    Program: Fibonacci Series Generator Using Recursion
    Author: Arindam Ghosh

    Description:
    This program prints the Fibonacci series up to a specified number of terms using recursion.
    The Fibonacci series is a sequence where each number is the sum of the two preceding ones,
    starting from 0 and 1. For example, the first ten terms of the Fibonacci series are:
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34

    The program employs a recursive function named `fibonacci()` to compute the nth Fibonacci number:
        - Base cases:
            fibonacci(0) = 0
            fibonacci(1) = 1
        - Recursive case:
            fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)
    
    Process:
      - The user is prompted to enter the number of terms (n) they wish to see in the Fibonacci series.
      - A loop iterates from 0 to n - 1, and the recursive function is called to compute each term.
      - Each computed Fibonacci number is printed to the console.

    Example:
      Input: 10
      Output: 0 1 1 2 3 5 8 13 21 34

    This program demonstrates the use of recursion, loops, and formatted input/output in C.
*/

#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Prompt the user to enter the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
