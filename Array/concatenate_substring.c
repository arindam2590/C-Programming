/*
    Program: Concatenate a Substring within a Given String at a Given Position (Without Using strcat)
    Author: Arindam Ghosh

    Description:
    This program reads a main string and a substring from the user, along with 
    a position in the main string where the substring will be inserted (concatenated) 
    without using the built-in `strcat()` function.

    How it Works:
    - The program takes the main string, the substring, and the insertion position as inputs.
    - It ensures the given position is valid (between 0 and length of the main string).
    - It manually creates a new string by:
        - Copying characters from the main string up to the insertion position.
        - Appending all characters of the substring.
        - Appending the remaining characters from the main string after the insertion position.
    - Finally, it displays the new concatenated string.

    Example:
    Input:
        Enter main string: HelloWorld
        Enter substring: _New_
        Enter position: 5
    Output:
        Resultant string: Hello_New_World
*/

#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[200], subStr[100], result[300];
    int pos, i, j = 0, k = 0;

    // Input main string
    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; // Remove newline

    // Input substring
    printf("Enter the substring: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; // Remove newline

    // Input position
    printf("Enter the position to insert substring: ");
    scanf("%d", &pos);

    // Validate position
    int lenMain = strlen(mainStr);
    if (pos < 0 || pos > lenMain) {
        printf("Invalid position! Position should be between 0 and %d.\n", lenMain);
        return 1;
    }

    // Copy characters from main string up to position
    for (i = 0; i < pos; i++) {
        result[k++] = mainStr[i];
    }

    // Add substring
    for (j = 0; subStr[j] != '\0'; j++) {
        result[k++] = subStr[j];
    }

    // Add remaining characters from main string
    for (i = pos; i < lenMain; i++) {
        result[k++] = mainStr[i];
    }

    // Null terminate the result
    result[k] = '\0';

    // Display result
    printf("Resultant string: %s\n", result);

    return 0;
}
