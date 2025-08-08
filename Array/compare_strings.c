/*
    Program: Compare Two Strings Entered by the User
    Author: Arindam Ghosh

    Description:
    This program takes two strings as input from the user and compares them character by character
    to determine whether they are the same or different. It does not use the built-in strcmp() function,
    but instead performs a manual comparison using a loop.

    How it Works:
    - The user is prompted to input two strings.
    - A loop is used to compare corresponding characters from both strings.
    - If any mismatch is found or if the lengths differ, the strings are declared different.
    - Otherwise, they are declared the same.

    Note:
    - This version handles single-word strings using scanf(). To compare full lines (with spaces),
      use fgets() instead.

    Example:
    Input 1: hello
    Input 2: hello
    Output: The strings are the same.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, isSame = 1;

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);  // Use fgets for multi-word input
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare characters of both strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isSame = 0;
            break;
        }
        i++;
    }

    // Print result
    if (isSame)
        printf("The strings are the same.\n");
    else
        printf("The strings are different.\n");

    return 0;
}
