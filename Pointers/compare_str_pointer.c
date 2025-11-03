/*
    Program: Compare Two Strings Using Pointers (Without strcmp)
    Author: Arindam Ghosh

    Description:
    This program compares two strings using pointers without using the 
    built-in `strcmp()` function. It checks whether the two strings are 
    equal or different by traversing both strings character by character 
    with pointers.

    How it Works:
    - The program reads two strings from the user using `fgets()`.
    - It removes the newline character at the end (if present).
    - Two pointers are initialized to point to the first characters of the 
      two strings.
    - A loop is used to traverse the strings:
        * If characters pointed by both pointers are equal, both pointers 
          move to the next character.
        * If a mismatch is found, the strings are declared different.
        * If both pointers reach the null terminator simultaneously, 
          the strings are equal.
    - The result is displayed accordingly.

    Example:
    Input:
        Enter first string: Hello
        Enter second string: Hello
    Output:
        The strings are equal.

    Input:
        Enter first string: Hello
        Enter second string: World
    Output:
        The strings are not equal.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *p1, *p2;
    int isEqual = 1;

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    // Initialize pointers
    p1 = str1;
    p2 = str2;

    // Compare using pointers
    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            isEqual = 0;
            break;
        }
        p1++;
        p2++;
    }

    // Check if both strings ended
    if (*p1 != '\0' || *p2 != '\0') {
        isEqual = 0;
    }

    // Print result
    if (isEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
