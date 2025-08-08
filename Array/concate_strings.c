/*
    Program: Concatenate Two Strings Entered by the User
    Author: Arindam Ghosh

    Description:
    This program reads two strings from the user and concatenates them 
    manually (without using the built-in `strcat()` function). It appends 
    the second string to the end of the first string using a loop.

    How it Works:
    - The user inputs two strings.
    - The program first calculates the length of the first string.
    - It then appends each character of the second string to the first string 
      starting from the end of the first string.
    - The resulting concatenated string is null-terminated and printed.

    Note:
    - This approach works for strings without spaces if `scanf()` is used.
    - To support strings with spaces, `fgets()` should be used.

    Example:
    Input: Hello  World
    Output: Concatenated String: HelloWorld
*/

#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    // Read the first string
    printf("Enter the first string: ");
    scanf("%s", str1);  // Use fgets(str1, sizeof(str1), stdin); to allow spaces

    // Read the second string
    printf("Enter the second string: ");
    scanf("%s", str2);  // Use fgets(str2, sizeof(str2), stdin); to allow spaces

    // Move i to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  // Null-terminate the resulting string

    // Display the concatenated string
    printf("Concatenated String: %s\n", str1);

    return 0;
}
