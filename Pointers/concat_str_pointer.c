/*
    Program: Concatenate Two Strings Using Pointer Arithmetic
    Author: Arindam Ghosh

    Description:
    This program concatenates two strings using only pointer arithmetic 
    instead of using built-in functions like strcat() or array indexing. 
    It demonstrates how pointers can be used to traverse and manipulate 
    strings directly in memory.

    How it Works:
    - The program takes two strings as input using `fgets()` to allow spaces.
    - It removes newline characters (if present) at the end of each string.
    - A pointer is assigned to the first string and moved to the end 
      (just before the null terminator).
    - Another pointer traverses the second string and copies each character 
      to the end of the first string, moving the pointer forward until the 
      null terminator is reached.
    - The resulting concatenated string is then displayed.

    Example:
    Input:
        Enter first string: Hello
        Enter second string: World
    Output:
        Concatenated string: HelloWorld
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    char *p1, *p2;

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

    // Move p1 to the end of str1
    while (*p1 != '\0') {
        p1++;
    }

    // Copy str2 to str1 using pointer arithmetic
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0'; // Null-terminate the concatenated string

    // Print result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
