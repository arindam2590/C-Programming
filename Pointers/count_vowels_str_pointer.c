/*
    Program: Count the Number of Vowels in a String Using Pointers
    Author: Arindam Ghosh

    Description:
    This program counts the number of vowels in a string using pointers. 
    Instead of accessing characters through array indexing, a pointer 
    is used to traverse the string character by character.

    How it Works:
    - The program takes a string input from the user using `fgets()` 
      (so that spaces are also allowed).
    - A pointer is initialized to point to the first character of the string.
    - The pointer traverses the string until the null terminator '\0' is reached.
    - For each character, the program checks if it is a vowel 
      (a, e, i, o, u in both uppercase and lowercase).
    - A counter keeps track of the number of vowels found.
    - Finally, the total number of vowels is displayed.

    Example:
    Input:
        Enter a string: Hello World
    Output:
        Number of vowels: 3
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char *ptr;
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Initialize pointer
    ptr = str;

    // Traverse string using pointer
    while (*ptr != '\0') {
        char ch = tolower(*ptr); // convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        ptr++; // move pointer to next character
    }

    // Print result
    printf("Number of vowels: %d\n", count);

    return 0;
}
