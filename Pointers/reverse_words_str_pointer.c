/*
    Program: Reverse Each Word in a Sentence Using Pointer Manipulation
    Author: Arindam Ghosh

    Description:
    This program reverses each word in a sentence while keeping 
    the order of the words intact. Pointer arithmetic is used 
    instead of array indexing for string manipulation.

    How it Works:
    - The user enters a sentence using `fgets()` (to allow spaces).
    - A helper function is written to reverse a word between two 
      given pointers (`start` and `end`).
    - A main pointer traverses the sentence:
        * When a word boundary (space or '\0') is reached, the 
          reverse function is called to reverse that word.
        * The traversal continues until the end of the string.
    - The sentence is then printed with each word reversed, 
      but in the same word order.

    Example:
    Input:
        Enter a sentence: Hello World from C
    Output:
        Reversed sentence: olleH dlroW morf C
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a word between two pointers
void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *ptr, *wordStart;

    // Input string
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    ptr = str;
    wordStart = NULL;

    // Traverse the string
    while (*ptr != '\0') {
        if (!isspace(*ptr) && wordStart == NULL) {
            // Mark the beginning of a word
            wordStart = ptr;
        }

        if ((isspace(*ptr) || *(ptr + 1) == '\0') && wordStart != NULL) {
            // Mark the end of the word
            char *wordEnd = (isspace(*ptr)) ? (ptr - 1) : ptr;
            reverseWord(wordStart, wordEnd);
            wordStart = NULL; // Reset for next word
        }
        ptr++;
    }

    // Print the modified string
    printf("Reversed sentence: %s\n", str);

    return 0;
}
