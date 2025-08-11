/*
    Program: Check if a String is a Palindrome
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user and checks whether it is a palindrome.
    A palindrome is a word, phrase, or sequence that reads the same forward and backward.
    The check is case-insensitive and ignores spaces for accurate results.

    How it Works:
    - The program uses `fgets()` to read the input string, allowing spaces.
    - It removes the newline character from the input.
    - Both ends of the string are compared character-by-character while ignoring case.
    - If all characters match, it is a palindrome; otherwise, it is not.

    Example:
    Input:  madam
    Output: The string is a palindrome.

    Input:  Hello
    Output: The string is not a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, j, len;
    int isPalindrome = 1;

    // Prompt the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Check palindrome (case-insensitive)
    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (i < j && !isalpha(str[i])) i++; // Skip non-alphabetic characters
        while (i < j && !isalpha(str[j])) j--; // Skip non-alphabetic characters
        if (tolower(str[i]) != tolower(str[j])) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
