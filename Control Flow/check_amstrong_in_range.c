/*
    Program: Find Armstrong Numbers Within a Given Range
    Author: Arindam Ghosh

    This program finds and prints all Armstrong numbers within a user-defined range. 
    An Armstrong number (also known as a Narcissistic number) is a number that is equal to 
    the sum of its own digits raised to the power of the number of digits.

    Description:
    - For a number with `n` digits, it is an Armstrong number if:
        number = (d1^n) + (d2^n) + ... + (dk^n)
      where d1, d2, ..., dk are the digits of the number.

    Process:
    - The user inputs the lower and upper bounds of the range.
    - For each number in the range:
        1. Determine the number of digits.
        2. Calculate the sum of the digits raised to the power of the number of digits.
        3. Check if this sum is equal to the number.
    - If it is, the number is an Armstrong number and is printed.

    Example:
    Input: Range 1 to 500
    Output: 
        1 is an Armstrong number.
        153 is an Armstrong number.
        370 is an Armstrong number.
        371 is an Armstrong number.
        407 is an Armstrong number.

    This program demonstrates the use of loops, nested loops, conditionals, and basic mathematics in C.
*/

#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int lower, upper;

    // Prompt the user to enter the range
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    // Iterate through each number in the range
    for (int number = lower; number <= upper; number++) {
        int originalNumber = number;
        int remainder, numDigits = 0;
        double result = 0.0;

        // Calculate the number of digits
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
        if ((int)result == number) {
            printf("%d is an Armstrong number.\n", number);
        }
    }

    return 0;
}
