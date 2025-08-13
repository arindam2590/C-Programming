/*
    Program: Convert String to Uppercase Without Using Built-in Functions
    Author: Arindam Ghosh

    Description:
    This program takes a string as input from the user and converts all 
    lowercase letters into uppercase letters without using any built-in 
    string manipulation functions like `strupr()` or `toupper()`.

    How it Works:
    - The program reads the string using `fgets()` to allow spaces in the input.
    - It removes the newline character if present.
    - It loops through each character of the string:
        - If the character is between 'a' and 'z' in ASCII,
          it is converted to uppercase by subtracting 32 from its ASCII value.
        - All other characters remain unchanged.
    - The resulting uppercase string is displayed.

    Example:
    Input:
        Enter a string: Hello World
    Output:
        Uppercase string: HELLO WORLD
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    // Read input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Convert to uppercase manually
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }

    // Display result
    printf("Uppercase string: %s\n", str);

    return 0;
}
