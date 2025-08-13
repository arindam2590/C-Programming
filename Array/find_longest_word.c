/*
    Program: Find the Longest Word in a Sentence
    Author: Arindam Ghosh

    Description:
    This program takes a sentence as input from the user and identifies 
    the longest word in that sentence. A word is defined as a sequence of 
    characters separated by spaces.

    How it Works:
    - The program reads the sentence using `fgets()` to allow spaces in the input.
    - It removes the newline character if present.
    - It iterates through each character in the sentence to determine the 
      length of each word.
    - Whenever a space or the end of the string is encountered, the program 
      checks if the current word length is greater than the maximum recorded 
      length.
    - If so, it updates the maximum length and stores the longest word found so far.
    - Finally, it displays the longest word.

    Example:
    Input:
        Enter a sentence: This program finds the longest word
    Output:
        Longest word: program
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longestWord[50], currentWord[50];
    int i, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            currentWord[j++] = sentence[i];
            currLen++;
        } else {
            currentWord[j] = '\0'; // end the current word
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longestWord, currentWord);
            }
            j = 0;
            currLen = 0;
        }
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}
