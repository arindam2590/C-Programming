/*
    Program: Split a String into a Number of Sub-Strings (Using Delimiter or Length)
    Author: Arindam Ghosh

    Description:
    This program splits a given string into multiple sub-strings based on 
    either:
        1. A delimiter character provided by the user, or
        2. A fixed length for each sub-string provided by the user.
    The user selects the splitting method and enters the required input.

    How it Works:
    - The program prompts the user for a string.
    - The user chooses one of the two options:
        a) Split by a delimiter.
        b) Split by fixed length.
    - For the delimiter option:
        - The program uses `strtok()` to break the string into tokens 
          separated by the given delimiter.
    - For the fixed length option:
        - The program loops through the string and prints each sub-string 
          with the given length until the end of the string.
    - The program displays each sub-string separately.

    Example 1 (Delimiter):
    Input:
        Enter string: apple,banana,grape
        Choose split method (1-Delimiter, 2-Length): 1
        Enter delimiter: ,
    Output:
        Sub-string 1: apple
        Sub-string 2: banana
        Sub-string 3: grape

    Example 2 (Length):
    Input:
        Enter string: HelloWorld
        Choose split method (1-Delimiter, 2-Length): 2
        Enter sub-string length: 3
    Output:
        Sub-string 1: Hel
        Sub-string 2: loW
        Sub-string 3: orl
        Sub-string 4: d
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], delimiter[2];
    int choice, length, i, j, count = 1;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    printf("Choose split method (1 - Delimiter, 2 - Length): ");
    scanf("%d", &choice);
    getchar(); // clear newline from buffer

    if (choice == 1) {
        printf("Enter the delimiter: ");
        fgets(delimiter, sizeof(delimiter), stdin);
        delimiter[strcspn(delimiter, "\n")] = '\0'; // Remove newline

        char *token = strtok(str, delimiter);
        while (token != NULL) {
            printf("Sub-string %d: %s\n", count++, token);
            token = strtok(NULL, delimiter);
        }
    } 
    else if (choice == 2) {
        printf("Enter sub-string length: ");
        scanf("%d", &length);

        int strLen = strlen(str);
        for (i = 0; i < strLen; i += length) {
            printf("Sub-string %d: ", count++);
            for (j = i; j < i + length && j < strLen; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
        }
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
