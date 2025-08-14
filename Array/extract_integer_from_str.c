/*
    Program: Convert String to Integer (Custom atoi Implementation)
    Author: Arindam Ghosh

    Description:
    This program converts a numeric string entered by the user into an integer,
    similar to the standard library function `atoi()`. It handles optional leading
    whitespace, optional '+' or '-' sign, and numeric digits. Non-numeric characters
    after the number are ignored.

    How it Works:
    - The program reads the string using `fgets()` to allow spaces.
    - It skips leading whitespace characters.
    - It checks for an optional '+' or '-' sign to determine the number's sign.
    - It iterates over each character:
        - If the character is a digit, it updates the integer result by 
          multiplying the previous result by 10 and adding the digit value.
        - If a non-digit is encountered, it stops processing.
    - The final result (with sign) is displayed.

    Example:
    Input:
        Enter a string:   -12345abc
    Output:
        Converted integer: -12345
*/

#include <stdio.h>
#include <ctype.h>

int stringToInt(char str[]) {
    int i = 0, sign = 1, result = 0;

    // Skip leading whitespaces
    while (isspace((unsigned char)str[i])) {
        i++;
    }

    // Check for sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convert digits to integer
    while (isdigit((unsigned char)str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    char str[100];

    printf("Enter a numeric string: ");
    fgets(str, sizeof(str), stdin);

    int num = stringToInt(str);

    printf("Converted integer: %d\n", num);

    return 0;
}
