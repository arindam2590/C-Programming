/*
    Program: Check Whether a Number is Positive, Negative, or Zero
    Author: Arindam Ghosh

    This program checks whether a given number is positive, negative, or zero.
    The user inputs a number, and the program determines its nature by comparing it with zero.

    Description:
    - A number is **positive** if it is greater than zero.
    - A number is **negative** if it is less than zero.
    - A number is **zero** if it equals zero.

    Process:
    - The program prompts the user to input a number.
    - It uses conditional statements to compare the input number with zero.
    - Based on the comparison, it outputs whether the number is positive, negative, or zero.

    Example:
    Input: 5
    Output: "The number is positive."

    Input: -3
    Output: "The number is negative."

    Input: 0
    Output: "The number is zero."

    This program demonstrates the use of basic input/output operations and conditional statements in C.
*/

#include <stdio.h>

int main() {
    float number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
