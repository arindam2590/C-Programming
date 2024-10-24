/*
    Program: Find ASCII Value of a Character Using Explicit Typecasting
    Author: Arindam Ghosh
    
    This program demonstrates how to find the ASCII value of a character in C
    by using explicit typecasting. ASCII (American Standard Code for Information
    Interchange) is a character encoding standard that represents text in computers
    and other devices that use text.

    In this program:
    - The user is prompted to enter a single character.
    - The program reads the character input using `scanf`.
    - The character is then explicitly typecast to an integer using `(int)`.
    - The ASCII value of the character is displayed as an integer output.

    Example:
    If the user inputs the character 'A', the program will output:
    The ASCII value of 'A' is: 65.
    
    This program effectively illustrates the conversion of a character to its
    corresponding ASCII value using typecasting.
*/

#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Explicitly typecast the character to an integer
    int asciiValue = (int) ch;

    // Print the ASCII value
    printf("The ASCII value of '%c' is: %d\n", ch, asciiValue);

    return 0;
}
