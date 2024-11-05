/*
    Program: Convert Decimal to Binary
    Author: Arindam Ghosh

    This program converts a decimal (base 10) number to its equivalent
    binary (base 2) representation. The binary number system uses only
    two digits, 0 and 1, to represent values.

    In this program:
    - The user is prompted to enter a decimal integer.
    - The program reads the input value.
    - It repeatedly divides the decimal number by 2, storing the remainders,
      which represent the binary digits.
    - The binary representation is built by storing these remainders in reverse order.
    - Finally, the program displays the binary equivalent of the entered decimal number.

    Example:
    If the user inputs the decimal number 13, the program will output:
    The binary equivalent of 13 is 1101.

    This program helps in understanding the conversion between different number systems
    and utilizes basic arithmetic operations and control structures.
*/

#include <stdio.h>

int main() {
    int decimal;
    char binary[100]; // Array to store the binary digits
    int index = 0;    // Index for the binary array

    // Input decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Handle the special case for 0
    if (decimal == 0) {
        printf("The binary equivalent is: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        int remainder = decimal % 2; // Get the remainder (0 or 1)
        binary[index] = remainder + '0'; // Store as character ('0' or '1')
        index++; // Increment index
        decimal /= 2; // Divide decimal by 2
    }

    // Print the binary equivalent in reverse order
    printf("The binary equivalent is: ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%c", binary[j]);
    }
    printf("\n");

    return 0;
}
