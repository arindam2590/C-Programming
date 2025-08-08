/*
    Program: Copy One String into Another Using a Loop
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user and copies its content into 
    another string using a loop. It avoids using the built-in `strcpy()` 
    function and demonstrates manual character-by-character copying.

    How it Works:
    - The user inputs a source string.
    - A loop is used to copy each character from the source string to the destination string,
      until the null terminator (`\0`) is reached.
    - The destination string is terminated with `\0` to ensure it is a valid C string.

    This is a good practice for understanding string manipulation at a lower level in C.

    Example:
    Input: Hello
    Output: Copied string: Hello
*/

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    // Prompt the user to enter the source string
    printf("Enter a string: ");
    scanf("%s", source);  // Use fgets(source, sizeof(source), stdin); to include spaces

    // Copy each character from source to destination using a loop
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  // Null-terminate the destination string

    // Display the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
