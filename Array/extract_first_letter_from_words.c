/*
    Program: Print the First Letter of Each Word
    Author: Arindam Ghosh

    Description:
    This program reads a sentence from the user and prints the first 
    letter of each word in the sentence. Words are considered to be 
    sequences of characters separated by spaces.

    How it Works:
    - The program takes a string as input using `fgets()` to allow spaces.
    - It removes the newline character at the end if present.
    - It prints the first character of the string if it is not a space.
    - It then traverses the string:
        - Whenever it finds a space followed by a non-space character,
          it prints that next character (indicating the start of a new word).
    - This way, the program extracts and prints only the first letters 
      of all words in the given sentence.

    Example:
    Input:
        Enter a sentence: Artificial Intelligence in C Programming
    Output:
        First letters: A I i C P
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("First letters: ");

    // Print first character if it's not space
    if (str[0] != ' ') {
        printf("%c ", str[0]);
    }

    // Traverse string to find first letters of words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c ", str[i + 1]);
        }
    }

    printf("\n");
    return 0;
}
