/*
    Program: Swap Two Numbers Using a Temporary Variable
    Author: Arindam Ghosh
    
    This program demonstrates how to swap two numbers in C using a temporary variable. 
    Swapping refers to the process of exchanging the values of two variables.
    
    In this program:
    - We will take two numbers as input from the user.
    - A temporary variable will be used to hold the value of one number while swapping.
    - After swapping, the values of the two numbers will be exchanged.
    
    Example:
    If the user inputs num1 = 5 and num2 = 10,
    After swapping, num1 will be 10 and num2 will be 5.
    
    The temporary variable allows us to perform this swap without losing any of the original values.
*/

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using a temporary variable
    temp = num1;  // Store the value of num1 in temp
    num1 = num2;  // Assign the value of num2 to num1
    num2 = temp;  // Assign the value of temp (original num1) to num2

    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
