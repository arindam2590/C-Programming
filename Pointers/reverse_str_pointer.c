/*
    Program: Reverse a String Using Pointers (Without Array Indices)
    Author: Arindam Ghosh

    Description:
    This program reverses a string using pointers only, without directly 
    accessing the array elements via indices. It demonstrates pointer 
    arithmetic by manipulating characters from both ends of the string.

    How it Works:
    - The program takes a string input using `fgets()` (to allow spaces).
    - It uses two pointers:
        * One pointing to the beginning of the string.
        * One pointing to the end of the string (before the null terminator).
    - The characters pointed to by these pointers are swapped, and the 
      pointers move inward until they meet or cross each other.
    - Finally, the reversed string is printed.

    Example:
    Input:
        Enter a string: Hello World
    Output:
        Reversed string: dlroW olleH
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end, temp;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Initialize pointers
    start = str;
    end = str + len - 1;

    // Reverse the string using pointer arithmetic
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
