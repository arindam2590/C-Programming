/*
    Program: Sort Words of a Sentence Alphabetically
    Author: Arindam Ghosh

    Description:
    This program takes a sentence as input from the user and sorts all the words 
    in alphabetical order (case-insensitive). The sorted list of words is then 
    displayed back to the user.

    How it Works:
    - The program reads the sentence using `fgets()` to allow spaces in input.
    - It removes the newline character from the sentence.
    - The `strtok()` function is used to split the sentence into words using spaces as delimiters.
    - The extracted words are stored in a 2D character array.
    - A simple bubble sort algorithm is applied to arrange the words alphabetically 
      without considering letter case (`strcasecmp` is used for case-insensitive comparison).
    - Finally, the sorted words are printed.

    Example:
    Input:
        Enter a sentence: this is a test
    Output:
        Sorted words: a is test this
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[500], words[100][50], temp[50];
    int i, j, count = 0;

    // Read sentence from user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Split sentence into words
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }

    // Sort words alphabetically (case-insensitive)
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcasecmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Display sorted words
    printf("Sorted words: ");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
