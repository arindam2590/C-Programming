/*
    Program: Count Occurrences of a Substring in a String
    Author: Arindam Ghosh

    Description:
    This program reads a main string and a substring from the user, 
    then counts how many times the substring appears in the main string.
    The search is case-sensitive and allows overlapping matches.

    How it Works:
    - The program uses `fgets()` to read both the main string and the substring, 
      allowing spaces in input.
    - It removes the newline character from both inputs.
    - It iterates through the main string, checking at each position if the substring matches.
    - If a match is found, the count is increased.
    - The total count of occurrences is displayed.

    Example:
    Input:
        Main string: abcabcabc
        Substring: abc
    Output:
        The substring appears 3 times.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    int i, j, found, count = 0;
    int strLen, subLen;

    // Read main string
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    strLen = strlen(str);
    if (str[strLen - 1] == '\n') {
        str[strLen - 1] = '\0';
        strLen--;
    }

    // Read substring
    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    subLen = strlen(sub);
    if (sub[subLen - 1] == '\n') {
        sub[subLen - 1] = '\0';
        subLen--;
    }

    // Search for substring in main string
    for (i = 0; i <= strLen - subLen; i++) {
        found = 1;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            count++;
        }
    }

    // Output result
    printf("The substring appears %d time(s).\n", count);

    return 0;
}
