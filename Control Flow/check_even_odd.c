/*
    Program: Check Whether a Given Number is Odd or Even
    Author: Arindam Ghosh

    This program checks whether a given integer is odd or even. 
    The determination is based on the remainder when the number is divided by 2.

    Description:
    - An **even number** is any number that is divisible by 2 (remainder is 0 when divided by 2).
    - An **odd number** is any number that is not divisible by 2 (remainder is not 0 when divided by 2).

    Process:
    - Input a number from the user.
    - Use the modulus operator `%` to find the remainder when the number is divided by 2.
    - If the remainder is 0, the number is even.
    - Otherwise, the number is odd.
    - Display the result to the user.

    Example:
    Input: 4
    Output: "The number 4 is even."

    Input: 7
    Output: "The number 7 is odd."

    This program demonstrates basic input/output operations and the use of conditional statements in C.
*/

#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }

    return 0;
}
