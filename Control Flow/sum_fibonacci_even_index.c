/*
    Program: Sum of Fibonacci Numbers at Even Indexes up to N Terms
    Author: Arindam Ghosh

    Description:
    This program calculates the sum of Fibonacci numbers that appear at even indexes
    (starting from index 0) up to a given number of terms (N). The Fibonacci series
    follows the recurrence relation:
    
        F(n) = F(n-1) + F(n-2)
    
    where:
        - F(0) = 0
        - F(1) = 1
    
    Example Fibonacci sequence (up to 10 terms):
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34
        
    Even index numbers (0-based index positions): 
        0, 1, 3, 8, 21
        
    Sum of Fibonacci numbers at even indexes for N=10: 
        0 + 1 + 3 + 8 + 21 = 33

    Process:
      - The user is prompted to enter the number of terms (N).
      - The Fibonacci sequence is generated iteratively.
      - The program adds Fibonacci numbers that appear at even index positions.
      - The sum is displayed as the final result.

    Example:
      Input: N = 10
      Output: "Sum of Fibonacci numbers at even indexes up to 10 terms is: 33"

    This program demonstrates the use of loops, conditionals, and iterative calculations in C.
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm, sum = 0;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Compute Fibonacci series and sum numbers at even indexes
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Check if index is even
            sum += a;
        }
        nextTerm = a + b; // Generate next Fibonacci number
        a = b;
        b = nextTerm;
    }

    // Display the result
    printf("Sum of Fibonacci numbers at even indexes up to %d terms is: %d\n", n, sum);

    return 0;
}
