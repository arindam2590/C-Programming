/*
    Program: Convert Hexadecimal to Decimal
    Author: Arindam Ghosh

    This program converts a hexadecimal (base 16) number to its equivalent
    decimal (base 10) representation. The hexadecimal number system uses
    digits from 0 to 9 and letters A to F (where A represents 10, B represents
    11, C represents 12, D represents 13, E represents 14, and F represents 15).

    In this program:
    - The user is prompted to enter a hexadecimal number.
    - The program reads the input value as a string to handle each digit individually.
    - It calculates the decimal equivalent by multiplying each digit by its
      corresponding power of 16 based on its position.
    - Finally, the program displays the decimal equivalent of the entered hexadecimal number.

    Example:
    If the user inputs the hexadecimal number 1A3, the program will output:
    The decimal equivalent of 1A3 is 419.

    This program helps in understanding the conversion between different number systems
    and utilizes basic string manipulation and arithmetic operations.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char hex[100]; // Array to store the hexadecimal number as a string
    int decimal = 0; // Variable to store the decimal equivalent
    int length, base = 1; // Base starts from 16^0

    // Input hexadecimal number from the user
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex); // Get the length of the hexadecimal number

    // Convert hexadecimal to decimal
    for (int i = length - 1; i >= 0; i--) {
        char digit = hex[i];

        // Convert character to integer
        int value;
        if (isdigit(digit)) {
            value = digit - '0'; // For digits 0-9
        } else if (digit >= 'A' && digit <= 'F') {
            value = digit - 'A' + 10; // For letters A-F
        } else if (digit >= 'a' && digit <= 'f') {
            value = digit - 'a' + 10; // For letters a-f
        } else {
            printf("Invalid hexadecimal number.\n");
            return 1; // Exit the program with error code
        }

        // Calculate the decimal value
        decimal += value * base;
        base *= 16; // Increase the base (16^n)
    }

    // Print the decimal equivalent
    printf("The decimal equivalent of %s is: %d\n", hex, decimal);

    return 0;
}
