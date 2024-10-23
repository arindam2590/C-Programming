/*
    Program: Sum of Two Integers
    Author: Arindam Ghosh
    
    This program prompts the user to enter two integers and calculates their sum. 
    It demonstrates basic input and output operations in C, as well as arithmetic operations.
    
    The program follows these steps:
    1. It declares three integer variables: num1, num2, and sum.
    2. The user is prompted to input two integers.
    3. The program calculates the sum of the two integers and stores the result in the variable 'sum'.
    4. Finally, it outputs the result, displaying both the original integers and their sum.
    
    Example:
    If the user inputs num1 = 7 and num2 = 5,
    The program will output: "The sum of 7 and 5 is: 12".
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
