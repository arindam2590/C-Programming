/*
    Program: Convert Octal to Decimal
    Author: Arindam Ghosh

    This program converts an octal (base 8) number to its equivalent
    decimal (base 10) representation. The octal number system uses digits
    from 0 to 7, and each digit's place value is a power of 8.

    In this program:
    - The user is prompted to enter an octal number.
    - The program reads the input value as a string to handle each digit individually.
    - It calculates the decimal equivalent by multiplying each digit by its 
      corresponding power of 8 based on its position.
    - Finally, the program displays the decimal equivalent of the entered octal number.

    Example:
    If the user inputs the octal number 157, the program will output:
    The decimal equivalent of 157 is 111.

    This program helps in understanding the conversion between different number systems
    and utilizes basic string manipulation and arithmetic operations.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char octal[100]; // Array to store the octal number as a string
    int decimal = 0; // Variable to store the decimal equivalent
    int length, base = 1; // Base starts from 8^0

    // Input octal number from the user
    printf("Enter an octal number: ");
    scanf("%s", octal);

    length = strlen(octal); // Get the length of the octal number

    // Convert octal to decimal
    for (int i = length - 1; i >= 0; i--) {
        // Convert char to integer
        int digit = octal[i] - '0'; // Subtract '0' to get the integer value

        // Check if the digit is valid (0-7)
        if (digit < 0 || digit > 7) {
            printf("Invalid octal number.\n");
            return 1; // Exit the program with error code
        }

        // Calculate the decimal value
        decimal += digit * base;
        base *= 8; // Increase the base (8^n)
    }

    // Print the decimal equivalent
    printf("The decimal equivalent of %s is: %d\n", octal, decimal);

    return 0;
}
