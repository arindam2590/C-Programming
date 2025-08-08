/*
    Program: Find the Length of a String Without Using strlen()
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user and calculates its length manually 
    without using the built-in `strlen()` function from the C standard library. 
    It demonstrates the fundamental concept of string traversal in C using loops.

    How it Works:
    - A character array is used to store the input string.
    - A loop traverses the string character by character until the null terminator (`'\0'`) is encountered.
    - A counter variable increments with each iteration to keep track of the number of characters.

    Notes:
    - This program handles single-line strings and ignores spaces (if entered with `scanf`).
    - To allow input with spaces, `fgets()` should be used instead of `scanf`.

    Example:
    Input: Hello
    Output: Length of the string is 5
*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    // Prompt the user to enter a string
    printf("Enter a string (without spaces): ");
    scanf("%s", str);  // Use fgets(str, 100, stdin); for strings with spaces

    // Traverse the string until null character is found
    while (str[i] != '\0') {
        length++;
        i++;
    }

    // Output the length
    printf("Length of the string is: %d\n", length);

    return 0;
}
