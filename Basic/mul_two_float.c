/*
    Program: Multiply Two Floating-Point Numbers
    Author: Arindam Ghosh

    This program demonstrates how to multiply two floating-point numbers in C. 
    The user will be prompted to input two numbers with decimal points, 
    and the program will then calculate and display the product of those two numbers.

    Steps:
    1. The program will take two floating-point numbers as input from the user.
    2. It will multiply the two numbers.
    3. The result (product) will be displayed up to two decimal points.

    Example:
    If the user inputs 5.5 and 2.3, the program will output:
    "The product of 5.50 and 2.30 is: 12.65"
*/

#include <stdio.h>

int main() {
    float num1, num2, product;

    // Input two floating-point numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Multiply the two numbers
    product = num1 * num2;

    // Print the product
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);

    return 0;
}
