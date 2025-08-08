/*
    Program: Read and Print a String using scanf and printf
    Author: Arindam Ghosh

    Description:
    This C program reads a string input from the user using `scanf()` and 
    then displays the entered string using `printf()`. It demonstrates 
    basic string input-output handling in C.

    Note:
    - This program uses `scanf("%s", ...)` which reads a string only 
      until the first whitespace (space, tab, newline).
    - It is suitable for single-word input. To read full sentences with 
      spaces, `fgets()` should be used instead.

    Steps:
    1. Declare a character array to store the string.
    2. Use `scanf()` to read the string from the user.
    3. Use `printf()` to display the entered string.

    Example:
    Input: Hello
    Output: You entered: Hello
*/

#include <stdio.h>

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string (single word only): ");
    scanf("%s", str);  // Read string input (up to whitespace)

    // Display the string
    printf("You entered: %s\n", str);

    return 0;
}
