/*
    Program: Check if a Number is Positive, Negative, or Zero
    Author: Arindam Ghosh
    
    This program checks whether a given floating-point number is positive, 
    negative, or zero. It prompts the user to enter a number and then evaluates
    the input. The program categorizes the number based on its value:
    
    - If the number is greater than zero, it is classified as positive.
    - If the number is less than zero, it is classified as negative.
    - If the number is exactly zero, it is classified as zero.

    The program demonstrates basic conditional statements in C 
    (using `if`, `else if`, and `else`) and user input handling with `scanf`.
    
    Example:
    Input: -5
    Output: The number is negative.
*/

#include <stdio.h>

int main() {
    float num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
