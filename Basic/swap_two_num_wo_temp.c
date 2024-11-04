/*
    Program: Swap Two Numbers Without Using a Temporary Variable
    Author: Arindam Ghosh
    
    This program demonstrates how to swap two numbers in C without using a 
    temporary variable. The swapping is achieved using arithmetic operations 
    (addition and subtraction) to exchange the values of two variables.

    In this program:
    - The user is prompted to input two numbers.
    - The program performs the swap using the following steps:
        1. Add the two numbers and store the result in the first number.
        2. Subtract the second number from the first number (which now contains the sum) to get the original first number.
        3. Subtract the new first number from the sum to retrieve the original second number.
    - Finally, the values of the two numbers are displayed after the swap.

    Example:
    If the user inputs num1 = 5 and num2 = 10,
    After swapping, num1 will be 10 and num2 will be 5.

    This method eliminates the need for a temporary variable and shows an alternative 
    approach to variable manipulation.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values without using a temporary variable
    num1 = num1 + num2;  // Step 1: Add both numbers
    num2 = num1 - num2;  // Step 2: Subtract the new num1 (sum) with num2 to get original num1
    num1 = num1 - num2;  // Step 3: Subtract the new num2 (original num1) from the sum to get original num2

    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
