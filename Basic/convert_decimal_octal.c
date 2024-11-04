/*
    Program: Convert Decimal to Octal
    Author: Arindam Ghosh

    This program converts a decimal (base 10) number to its equivalent
    octal (base 8) representation. The octal number system uses digits
    from 0 to 7, and each octal digit represents three binary digits.

    In this program:
    - The user is prompted to enter a decimal integer.
    - The program reads the input value.
    - It uses a loop to divide the decimal number by 8 and collect the remainders,
      which represent the octal digits.
    - The octal representation is built by storing these remainders.
    - Finally, the program displays the octal equivalent of the entered decimal number.

    Example:
    If the user inputs the decimal number 65, the program will output:
    The octal equivalent of 65 is 101.

    This program helps in understanding the conversion between different number systems
    and utilizes basic arithmetic operations and control structures.
*/

#include <stdio.h>

int main() {
    int decimal, remainder;
    int octal[100];  // Array to store octal digits
    int i = 0;       // Index for the octal array

    // Input decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to octal
    while (decimal != 0) {
        remainder = decimal % 8;  // Get the remainder
        octal[i] = remainder;      // Store the remainder
        decimal /= 8;              // Divide decimal by 8
        i++;                       // Increment index
    }

    // Print the octal equivalent
    printf("The octal equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {  // Print in reverse order
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
