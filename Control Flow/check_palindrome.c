/*
    Program: Check Palindrome Number
    Author: Arindam Ghosh

    Description:
    This program checks whether a given integer is a palindrome. A palindrome number 
    reads the same forwards and backwards. For example, 121 is a palindrome, whereas 123 is not.

    Process:
      - The user is prompted to enter an integer.
      - The original number is stored for comparison.
      - The program reverses the digits of the number by using a loop to extract each digit.
      - The reversed number is then compared with the original number.
      - If both numbers are the same, the program outputs that the number is a palindrome.
      - Otherwise, it outputs that the number is not a palindrome.

    Example:
      Input:  12321
      Output: "12321 is a palindrome number."

    This program demonstrates the use of loops, arithmetic operations, and conditional statements in C.
*/

#include <stdio.h>

int main() {
    int num, original, remainder, reversed = 0;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    original = num;

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;             // Extract the last digit
        reversed = reversed * 10 + remainder; // Append the digit to the reversed number
        num /= 10;                        // Remove the last digit
    }

    // Check if the reversed number is equal to the original number
    if (reversed == original) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
