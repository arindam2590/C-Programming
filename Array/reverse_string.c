/*
    Program: Count the Number of Vowels and Consonants in a Given String
    Author: [Your Name]

    Description:
    This program reads a string from the user (including spaces) and counts 
    the number of vowels and consonants in it. It ignores spaces, digits, and 
    special characters when counting consonants.

    How it Works:
    - The program takes input using `fgets()` to allow spaces.
    - It loops through each character and checks whether it is a vowel 
      (a, e, i, o, u in both lowercase and uppercase).
    - If it is an alphabetic character but not a vowel, it is counted as a consonant.
    - The counts for vowels and consonants are displayed.

    Example:
    Input: Hello World
    Output: Vowels: 3, Consonants: 7
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0;
    int i;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') { // Check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
