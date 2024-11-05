/*
    Program: Convert Binary to Decimal
    Author: Arindam Ghosh

    This program converts a binary (base 2) number to its equivalent
    decimal (base 10) representation. The binary number system uses
    only two digits, 0 and 1, and each digit's place value is a power
    of 2.

    In this program:
    - The user is prompted to enter a binary number.
    - The program reads the input value as a string to handle each digit individually.
    - It calculates the decimal equivalent by multiplying each digit by its
      corresponding power of 2 based on its position.
    - Finally, the program displays the decimal equivalent of the entered binary number.

    Example:
    If the user inputs the binary number 1011, the program will output:
    The decimal equivalent of 1011 is 11.

    This program helps in understanding the conversion between different number systems
    and utilizes basic string manipulation and arithmetic operations.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char binary[100]; // Array to store the binary number as a string
    int decimal = 0; // Variable to store the decimal equivalent
    int length, base = 1; // Base starts from 2^0

    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary); // Get the length of the binary number

    // Convert binary to decimal
    for (int i = length - 1; i >= 0; i--) {
        char digit = binary[i];

        // Check if the digit is valid (0 or 1)
        if (digit != '0' && digit != '1') {
            printf("Invalid binary number.\n");
            return 1; // Exit the program with error code
        }

        // Convert character to integer
        int value = digit - '0'; // For binary digits 0 and 1

        // Calculate the decimal value
        decimal += value * base;
        base *= 2; // Increase the base (2^n)
    }

    // Print the decimal equivalent
    printf("The decimal equivalent of %s is: %d\n", binary, decimal);

    return 0;
}
