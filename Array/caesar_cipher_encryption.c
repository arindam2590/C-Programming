/*
    Program: Caesar Cipher Encryption and Decryption
    Author: Arindam Ghosh

    Description:
    This program implements a simple encryption and decryption algorithm 
    known as the Caesar cipher. It shifts each letter of the input string 
    by a fixed number of positions in the alphabet. The same shift value 
    is used for both encryption and decryption.

    How it Works:
    - The program reads a string from the user and a shift value (key).
    - For encryption:
        - Each alphabetic character is shifted forward by the key value.
        - Uppercase and lowercase letters are handled separately to preserve case.
        - Non-alphabetic characters remain unchanged.
    - For decryption:
        - Each alphabetic character is shifted backward by the key value.
        - The same case-preservation logic applies.
    - The encrypted and decrypted strings are displayed.

    Example:
    Input:
        Enter a string: Hello World
        Enter shift value: 3
    Output:
        Encrypted string: Khoor Zruog
        Decrypted string: Hello World
*/

#include <stdio.h>
#include <ctype.h>

void encrypt(char str[], int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = ((str[i] - 'A' + shift) % 26) + 'A';
        } 
        else if (islower(str[i])) {
            str[i] = ((str[i] - 'a' + shift) % 26) + 'a';
        }
    }
}

void decrypt(char str[], int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = ((str[i] - 'A' - shift + 26) % 26) + 'A';
        } 
        else if (islower(str[i])) {
            str[i] = ((str[i] - 'a' - shift + 26) % 26) + 'a';
        }
    }
}

int main() {
    char text[200];
    int shift;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    // Encrypt
    encrypt(text, shift);
    printf("Encrypted string: %s", text);

    // Decrypt
    decrypt(text, shift);
    printf("Decrypted string: %s", text);

    return 0;
}
