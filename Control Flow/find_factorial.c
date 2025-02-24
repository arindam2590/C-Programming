/*
    Program: Factorial Calculator
    Author: Arindam Ghosh
    
    Description:
    This program calculates the factorial of a given non-negative integer. 
    The factorial of a number n (denoted as n!) is the product of all positive integers 
    less than or equal to n, and by definition, 0! is 1.

    Process:
      - The user is prompted to enter a non-negative integer.
      - The program checks if the input is negative. If so, it displays an error message 
        as factorials are not defined for negative numbers.
      - For a non-negative integer, the program uses an iterative loop to calculate the factorial.
      - The computed factorial is then displayed to the user.

    Example:
      If the user inputs 5, the program will output:
        "Factorial of 5 is 120"

    This program demonstrates the use of loops, conditional statements, and arithmetic operations in C.
*/

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Using unsigned long long to handle large factorial values

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using an iterative loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Print the result
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}
