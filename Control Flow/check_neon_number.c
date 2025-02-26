/*
    Program: Check Neon Number
    Author: Arindam Ghosh

    Description:
    This program checks whether a given number is a Neon number. A Neon number is a number 
    where the sum of the digits of its square equals the original number.

    Process:
      - The user is prompted to enter an integer.
      - The square of the number is calculated.
      - The digits of the square are extracted and summed up.
      - If the sum of the digits equals the original number, it is a Neon number.
      - Otherwise, it is not a Neon number.

    Example:
      Input: 9
      Calculation: Square of 9 = 81, Sum of digits = 8 + 1 = 9
      Output: "9 is a Neon number."

    Example:
      Input: 10
      Calculation: Square of 10 = 100, Sum of digits = 1 + 0 + 0 = 1
      Output: "10 is not a Neon number."

    This program demonstrates the use of loops, arithmetic operations, and conditional statements in C.
*/

#include <stdio.h>

int main() {
    int num, square, sum = 0, remainder;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the square of the number
    square = num * num;

    // Calculate the sum of the digits of the square
    while (square > 0) {
        remainder = square % 10; // Extract the last digit
        sum += remainder; // Add the digit to sum
        square /= 10; // Remove the last digit
    }

    // Check if the sum of digits equals the original number
    if (sum == num) {
        printf("%d is a Neon number.\n", num);
    } else {
        printf("%d is not a Neon number.\n", num);
    }

    return 0;
}
