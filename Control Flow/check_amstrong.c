/*
    Program: Check Whether a Given Number is an Armstrong Number
    Author: Arindam Ghosh

    This program determines whether a given number is an Armstrong number or not. 
    An Armstrong number (also known as a Narcissistic number) is a number that is equal to the sum 
    of its own digits raised to the power of the number of digits.

    Description:
    - For a number with `n` digits, it is an Armstrong number if:
        number = (d1^n) + (d2^n) + ... + (dk^n)
      where d1, d2, ..., dk are the digits of the number.
    - For example:
        - 153 is an Armstrong number because 1³ + 5³ + 3³ = 153.
        - 9474 is an Armstrong number because 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474.
        - 123 is not an Armstrong number because 1³ + 2³ + 3³ ≠ 123.

    Process:
    - Input a number from the user.
    - Calculate the number of digits in the number.
    - Extract each digit and raise it to the power of the number of digits.
    - Sum these powers.
    - Check if the sum is equal to the original number.
    - Display whether the number is an Armstrong number or not.

    Example:
    Input: 153
    Output: "153 is an Armstrong number."

    Input: 123
    Output: "123 is not an Armstrong number."

    This program demonstrates the use of loops, conditional statements, and basic mathematics in C.
*/

#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int number, originalNumber, remainder, numDigits = 0;
    double result = 0.0, power;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number for comparison
    originalNumber = number;

    // Calculate the number of digits in the number
    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }

    // Reset the original number
    originalNumber = number;

    // Calculate the sum of the digits raised to the power of numDigits
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Extract the last digit
        result += pow((double)remainder, (double)numDigits); // Add the digit raised to the power of numDigits
        originalNumber /= 10; // Remove the last digit
    }

    // Check if the result is equal to the original number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
