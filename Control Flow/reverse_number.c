/*
    Program: Reverse a Number
    Author: Arindam Ghosh

    Description:
    This program reverses a given integer number. The reversal is performed by extracting 
    the digits of the number one by one and constructing a new number in reverse order.
    
    Process:
      - The user is prompted to enter an integer.
      - The program stores the original number for display purposes.
      - Using a loop, the program extracts the last digit of the number using the modulus operator (%).
      - The extracted digit is added to a new number (reversed) after shifting the previously reversed digits.
      - The process continues until all digits have been processed.
      - Finally, the program displays the reversed number.

    Example:
      Input:  12345
      Output: Reversed number of 12345 is 54321

    This program demonstrates the use of loops, arithmetic operations, and input/output handling in C.
*/

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later use
    original = num;

    // Process to reverse the number
    while (num != 0) {
        remainder = num % 10;         // Extract the last digit
        reversed = reversed * 10 + remainder; // Append the digit to the reversed number
        num = num / 10;               // Remove the last digit
    }

    // Display the result
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
