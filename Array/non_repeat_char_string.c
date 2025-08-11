/*
    Program: Find the First Non-Repeating Character in a String
    Author: Arindam Ghosh

    Description:
    This program takes a string as input from the user and finds the first 
    character that does not repeat anywhere else in the string. 
    If all characters repeat, the program will indicate that no such character exists.

    How it Works:
    - The program reads the string using `fgets()` to allow spaces in input.
    - It removes the newline character if present.
    - An integer array `freq[256]` is used to store the frequency of each ASCII character.
    - The program iterates through the string twice:
        1. First pass: Count frequency of each character.
        2. Second pass: Identify the first character with a frequency of 1.
    - If found, it is displayed; otherwise, a message is shown that all characters repeat.

    Example:
    Input:
        Enter a string: swiss
    Output:
        The first non-repeating character is: w
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i, len;
    char result = '\0';

    // Read input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Count frequency of each character
    for (i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    for (i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    // Display result
    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
