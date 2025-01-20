/*
    Program: Check if a Character is a Vowel or Consonant
    Author: Arindam Ghosh

    This program determines whether a given character is a vowel or consonant. 
    Vowels are the letters 'a', 'e', 'i', 'o', 'u', and their uppercase equivalents.
    All other alphabetic characters are considered consonants.

    Process:
    1. Input a character from the user.
    2. Check if the character is an alphabet letter.
        - If not, display an appropriate message.
    3. If the character is a letter:
        - Check if it is one of the vowels ('a', 'e', 'i', 'o', 'u' or their uppercase equivalents).
        - If it is, print that the character is a vowel.
        - Otherwise, print that the character is a consonant.

    Example:
    Input: 'a'
    Output: "a is a vowel."

    Input: 'Z'
    Output: "Z is a consonant."

    Input: '1'
    Output: "1 is not an alphabet character."

    This program demonstrates the use of conditional statements, character handling, and basic input/output in C.
*/

#include <stdio.h>
#include <ctype.h> // For tolower() and isalpha() functions

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet letter
    if (isalpha(ch)) {
        // Convert the character to lowercase for uniformity
        char lowerChar = tolower(ch);

        // Check if the character is a vowel
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}
