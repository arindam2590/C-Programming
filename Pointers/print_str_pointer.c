/*
    Program: Print String Character by Character Using a Pointer
    Author: Arindam Ghosh

    Description:
    This program takes a string as input from the user and prints 
    each character of the string individually by using a pointer 
    to traverse the string.

    How it Works:
    - The program reads the string using `fgets()` to allow spaces in the input.
    - It initializes a pointer to point to the first character of the string.
    - Using a loop, the program prints each character pointed to by the pointer.
    - The pointer is incremented to move to the next character until 
      the null terminator '\0' is encountered.

    Example:
    Input:
        Enter a string: Hello World
    Output:
        H
        e
        l
        l
        o
         
        W
        o
        r
        l
        d
*/

#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Initialize pointer to the string
    ptr = str;

    // Traverse and print each character
    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}
