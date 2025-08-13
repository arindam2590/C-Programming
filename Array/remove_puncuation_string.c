/*
    Program: Remove All Punctuation Marks from a String
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user and removes all punctuation 
    marks from it, leaving only letters, digits, and spaces. 
    It demonstrates basic string manipulation using character checking.

    How it Works:
    - The program takes a string as input using `fgets()` to allow spaces.
    - It iterates through each character of the string:
        - If the character is NOT a punctuation mark (based on `ispunct()` from <ctype.h>), 
          it is copied to a new string.
        - Punctuation marks are skipped during copying.
    - The final string without punctuation marks is displayed.

    Example:
    Input:
        Enter a string: Hello, World! Welcome to C-programming.
    Output:
        String without punctuation: Hello World Welcome to Cprogramming
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove punctuation marks
    for (i = 0; str[i] != '\0'; i++) {
        if (!ispunct((unsigned char)str[i])) { // Keep non-punctuation characters
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the new string

    printf("String without punctuation: %s", result);

    return 0;
}
