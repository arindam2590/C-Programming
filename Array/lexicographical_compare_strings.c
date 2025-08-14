/*
    Program: Compare Two Strings Lexicographically
    Author: Arindam Ghosh

    Description:
    This program reads two strings from the user and compares them 
    lexicographically (dictionary order) without using any built-in 
    string comparison function like `strcmp()`.

    How it Works:
    - The program takes two strings as input using `fgets()` to allow spaces.
    - It removes the newline characters if present.
    - It then compares the strings character by character:
        - If the ASCII value of the character in the first string is less 
          than that of the second string, the first string is considered smaller.
        - If the ASCII value of the character in the first string is greater, 
          the first string is considered larger.
        - If all corresponding characters match and lengths are equal, 
          the strings are considered equal.
    - The result is displayed accordingly.

    Example:
    Input:
        Enter first string: Apple
        Enter second string: Apricot
    Output:
        "Apple" is lexicographically smaller than "Apricot"
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            if (str1[i] < str2[i]) {
                printf("\"%s\" is lexicographically smaller than \"%s\"\n", str1, str2);
            } else {
                printf("\"%s\" is lexicographically greater than \"%s\"\n", str1, str2);
            }
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0) {
        if (strlen(str1) == strlen(str2)) {
            printf("\"%s\" is equal to \"%s\"\n", str1, str2);
        } else if (strlen(str1) < strlen(str2)) {
            printf("\"%s\" is lexicographically smaller than \"%s\"\n", str1, str2);
        } else {
            printf("\"%s\" is lexicographically greater than \"%s\"\n", str1, str2);
        }
    }

    return 0;
}
