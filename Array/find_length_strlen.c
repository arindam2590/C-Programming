/*
    Program: Find the Length of a String Using strlen()
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user and calculates its length 
    using the built-in `strlen()` function provided by the `<string.h>` library.
    It demonstrates the usage of standard string functions in C.

    Key Points:
    - `strlen()` counts the number of characters in the string excluding the null terminator (`\0`).
    - This method is accurate and efficient for most general use cases.

    Note:
    - If using `scanf("%s", ...)`, the input will be limited to a single word.
    - To read full sentences (including spaces), `fgets()` should be used.

    Example:
    Input: Hello
    Output: Length of the string is: 5
*/

#include <stdio.h>
#include <string.h>  // Required for strlen()

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string (without spaces): ");
    scanf("%s", str);  // Use fgets(str, sizeof(str), stdin); for input with spaces

    // Use strlen to calculate length
    int length = strlen(str);

    // Display the result
    printf("Length of the string is: %d\n", length);

    return 0;
}
