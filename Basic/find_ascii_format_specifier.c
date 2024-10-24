/*
    Program: Find ASCII Value of a Character using format specifier
    Author: Arindam Ghosh
    
    This program demonstrates how to find the ASCII value of a character in C. 
    The ASCII (American Standard Code for Information Interchange) value is a numerical representation 
    of a character, which allows computers to handle text.
    
    In this program:
    - The user is prompted to enter a single character.
    - The program reads the character input.
    - It then prints the ASCII value of the entered character using the format specifier %d.
    
    Example:
    If the user inputs the character 'A', the program will output:
    The ASCII value of 'A' is: 65
    
    This is useful for understanding character encoding and manipulation in programming.
*/

#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the ASCII value using the format specifier %d
    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}
