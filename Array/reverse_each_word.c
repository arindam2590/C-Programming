/*
    Program: Reverse Each Word in a Sentence
    Author: Arindam Ghosh

    Description:
    This program takes a sentence as input from the user and reverses each
    individual word while keeping the overall order of the words intact.
    For example, "Hello World" becomes "olleH dlroW".

    How it Works:
    - The program reads the sentence using `fgets()` to allow spaces in the input.
    - It removes the newline character if present.
    - It loops through each character in the string:
        - When a space or the end of the string is encountered, it reverses 
          the characters from the start index of the current word to the 
          character before the space/end.
        - It uses a helper function to swap characters for reversing the word.
    - The modified sentence with reversed words is then printed.

    Example:
    Input:
        Enter a sentence: This is ChatGPT
    Output:
        Reversed sentence: sihT si TPGTahC
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a portion of the string
void reverseWord(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i, start = 0, len;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed sentence: %s\n", sentence);
    return 0;
}
