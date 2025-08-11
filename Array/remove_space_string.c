/*
    Program: Remove All Spaces from an Input String
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user (including spaces) and removes all spaces from it.
    The modified string is then displayed without any spaces.

    How it Works:
    - The program uses `fgets()` to read the input string, so it can capture spaces.
    - It loops through each character of the input string.
    - Only non-space characters are copied to a new position in the same string.
    - Finally, the updated string without spaces is printed.

    Example:
    Input:  Hello   World from   C
    Output: HelloWorldfromC
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j = 0;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null terminate the modified string

    // Display result
    printf("String without spaces: %s\n", str);

    return 0;
}
