/*
    Program: Check if a String is a Pangram
    Author: Arindam Ghosh

    Description:
    This program checks whether a given string is a pangram.
    A pangram is a sentence that contains every letter of the English alphabet at least once.
    For example, "The quick brown fox jumps over the lazy dog" is a pangram.

    How it Works:
    - The program takes a string as input from the user.
    - It initializes an array to track whether each letter from 'a' to 'z' 
      has appeared in the string.
    - The program loops through each character in the string:
        - If the character is an alphabet letter, it is converted to lowercase 
          and marked as found in the array.
    - After processing the string, the program checks if all 26 letters 
      have been found at least once.
    - If all letters are found, it declares the string a pangram; otherwise, it is not.

    Example:
    Input:
        Enter a string: The quick brown fox jumps over the lazy dog
    Output:
        The string is a pangram.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[500];
    int alphabet[26] = {0}; // Track occurrence of each letter
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Mark letters present in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabet[tolower(str[i]) - 'a'] = 1;
        }
    }

    // Check if all letters are present
    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            printf("The string is NOT a pangram.\n");
            return 0;
        }
    }

    printf("The string is a pangram.\n");
    return 0;
}
