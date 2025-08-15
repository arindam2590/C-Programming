/*
    Program: Replace a Substring in a String with a Given Substring
    Author: Arindam Ghosh

    Description:
    This program takes a main string, a target substring to be replaced, 
    and a replacement substring as inputs from the user. It replaces all 
    occurrences of the target substring in the main string with the given 
    replacement substring and prints the updated string.

    How it Works:
    - The program reads the main string, target substring, and replacement substring using `fgets()` to allow spaces.
    - It removes any newline characters from the input strings.
    - It searches for the target substring in the main string using `strstr()`.
    - Whenever the target substring is found:
        - The portion of the string before the match is copied to the result.
        - The replacement substring is appended instead of the target substring.
        - The search continues after the replaced section.
    - Finally, the result string containing all replacements is displayed.

    Example:
    Input:
        Enter main string: I love programming in C.
        Enter substring to replace: programming
        Enter replacement substring: coding
    Output:
        Updated string: I love coding in C.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[500], sub[100], rep[100], result[500];
    char *pos, temp[500];
    int index = 0;
    int subLen;

    // Input main string
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    // Input substring to replace
    printf("Enter the substring to replace: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    // Input replacement substring
    printf("Enter the replacement substring: ");
    fgets(rep, sizeof(rep), stdin);
    rep[strcspn(rep, "\n")] = '\0';

    subLen = strlen(sub);
    result[0] = '\0';

    // Search and replace loop
    while ((pos = strstr(str, sub)) != NULL) {
        // Copy the part before the found substring
        strncpy(temp, str, pos - str);
        temp[pos - str] = '\0';

        // Append to result
        strcat(result, temp);
        strcat(result, rep);

        // Move past the replaced substring in main string
        strcpy(str, pos + subLen);
    }

    // Append the remaining part of the string
    strcat(result, str);

    printf("Updated string: %s\n", result);

    return 0;
}
