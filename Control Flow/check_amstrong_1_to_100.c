/*
    Program: Find Armstrong Numbers Between 1 and 100
    Author: Arindam Ghosh

    This program finds and displays all Armstrong numbers in the range of 1 to 100.
    An Armstrong number (also called a Narcissistic number) is a number that is equal 
    to the sum of its digits raised to the power of the number of digits.

    Description:
    - For a number with `n` digits, it is an Armstrong number if:
        number = (d1^n) + (d2^n) + ... + (dk^n)
      where d1, d2, ..., dk are the digits of the number.
    - For example:
        - 1 is an Armstrong number because 1¹ = 1.
        - 153 is an Armstrong number because 1³ + 5³ + 3³ = 153.
        - 9474 is an Armstrong number because 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474.

    Process:
    - Loop through numbers from 1 to 100.
    - For each number, calculate the number of digits.
    - Extract each digit, raise it to the power of the number of digits, and compute the sum.
    - If the computed sum equals the original number, it is an Armstrong number.

    Output:
    - The program prints all Armstrong numbers between 1 and 100.
*/

#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int number, originalNumber, remainder, numDigits;
    double result;

    printf("Armstrong numbers between 1 and 100:\n");

    // Loop through numbers from 1 to 100
    for (number = 1; number <= 100; number++) {
        originalNumber = number;
        numDigits = 0;
        result = 0.0;

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
        if ((int)result == number) {
            printf("%d\n", number); // Print the Armstrong number
        }
    }

    return 0;
}
