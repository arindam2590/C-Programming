/*
    Program: Display Factors of a Number
    Author: Arindam Ghosh

    Description:
    This program displays all the factors of a given integer. A factor of a number 
    is any integer that divides the number exactly (without leaving a remainder).

    Process:
      - The user is prompted to enter an integer.
      - The program iterates from 1 to the given number.
      - For each iteration, the program checks if the number is divisible by the iterator.
      - If divisible, the iterator is a factor and is printed.

    Example:
      Input: 12
      Output: "Factors of 12 are: 1 2 3 4 6 12"

      Input: 25
      Output: "Factors of 25 are: 1 5 25"

    This program demonstrates the use of loops, conditional checks, and arithmetic operations in C.
*/

#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Display factors of the number
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { // Check if 'i' is a factor
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
