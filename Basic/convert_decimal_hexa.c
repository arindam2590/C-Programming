/*
    Program: Convert Decimal to Hexadecimal
    Author: Arindam Ghosh

    This program converts a decimal (base 10) number to its equivalent
    hexadecimal (base 16) representation. The hexadecimal number system 
    uses digits from 0 to 9 and letters A to F (where A represents 10, 
    B represents 11, C represents 12, D represents 13, E represents 14, 
    and F represents 15).

    In this program:
    - The user is prompted to enter a decimal integer.
    - The program reads the input value.
    - It uses a loop to divide the decimal number by 16 and collect the remainders,
      which represent the hexadecimal digits.
    - The hexadecimal representation is built by storing these remainders.
    - Finally, the program displays the hexadecimal equivalent of the entered decimal number.

    Example:
    If the user inputs the decimal number 255, the program will output:
    The hexadecimal equivalent of 255 is FF.

    This program helps in understanding the conversion between different number systems
    and utilizes basic arithmetic operations and control structures.
*/

#include <stdio.h>

int main() {
    int decimal;
    char hexadecimal[100]; // Array to store the hexadecimal digits
    int index = 0;         // Index for the hexadecimal array

    // Input decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to hexadecimal
    if (decimal == 0) {
        // Handle the special case for 0
        printf("The hexadecimal equivalent is: 0\n");
        return 0;
    }

    while (decimal != 0) {
        int remainder = decimal % 16; // Get the remainder
        // Convert remainder to hexadecimal character
        if (remainder < 10) {
            hexadecimal[index] = remainder + '0'; // Store 0-9 as '0'-'9'
        } else {
            hexadecimal[index] = remainder - 10 + 'A'; // Store 10-15 as 'A'-'F'
        }
        index++; // Increment index
        decimal /= 16; // Divide decimal by 16
    }

    // Print the hexadecimal equivalent in reverse order
    printf("The hexadecimal equivalent is: ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");

    return 0;
}
