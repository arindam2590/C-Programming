/*
    Program: Read and Print a String with Spaces using gets() and puts()
    Author: Arindam Ghosh

    Description:
    This program reads a string from the user, including spaces, using the `gets()` function
    and then prints it back using the `puts()` function. 
    It demonstrates basic string input and output functions in C.

    Important Notes:
    - `gets()` is unsafe because it does not check for buffer overflow and can cause security issues.
      In modern C standards (C11 and later), it is deprecated. 
      Safer alternatives include `fgets()`.
    - `puts()` automatically appends a newline at the end of the output.

    Example:
    Input: Hello World from C
    Output: Hello World from C
*/

#include <stdio.h>

int main() {
    char str[100];

    // Prompt the user
    printf("Enter a string (with spaces): ");
    
    // Read input string (deprecated method)
    gets(str);  // Warning: Unsafe, use fgets() in secure programs

    // Display the string
    printf("You entered: ");
    puts(str);

    return 0;
}
