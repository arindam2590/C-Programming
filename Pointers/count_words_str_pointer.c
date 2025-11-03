/*
    Program: Count the Number of Words in a Sentence Using Pointers
    Author: Arindam Ghosh

    Description:
    This program counts the number of words in a sentence using pointers.
    A word is defined as a sequence of characters separated by one or more spaces.
    Instead of array indexing, pointer arithmetic is used to traverse the string.

    How it Works:
    - The program reads a sentence from the user using `fgets()` (to allow spaces).
    - A pointer is initialized to point to the first character of the string.
    - The program skips leading spaces to avoid counting empty words.
    - It traverses the string character by character:
        * When a non-space character is followed by a space or the null terminator,
          it is considered the end of a word, so the word count is incremented.
    - Finally, the total word count is displayed.

    Example:
    Input:
        Enter a sentence:  Hello   world from   C
    Output:
        Number of words: 3
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char *ptr;
    int count = 0;
    int inWord = 0; // flag to check if we are inside a word

    // Input string
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Initialize pointer
    ptr = str;

    // Traverse string using pointer
    while (*ptr != '\0') {
        if (!isspace(*ptr) && inWord == 0) {
            // Starting a new word
            inWord = 1;
            count++;
        } else if (isspace(*ptr)) {
            // End of a word
            inWord = 0;
        }
        ptr++; // Move pointer forward
    }

    // Print result
    printf("Number of words: %d\n", count);

    return 0;
}
