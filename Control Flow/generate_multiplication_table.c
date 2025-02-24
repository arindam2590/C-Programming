/*
    Program: Multiplication Table Generator
    Author: Arindam Ghosh

    Description:
    This program generates and displays the multiplication table for a user-specified number.
    The user is prompted to enter an integer, and the program then uses a loop to calculate
    and print the products of that number with multipliers from 1 to 10.

    Process:
      - Prompt the user to enter an integer.
      - Use a for loop to iterate from 1 through 10.
      - For each iteration, multiply the user-entered number by the loop counter.
      - Display the formatted multiplication result.
      
    Example:
      If the user enters 5, the program will output:
          5 x 1 = 5
          5 x 2 = 10
          5 x 3 = 15
          ...
          5 x 10 = 50

    This program demonstrates the use of loops, arithmetic operations, and formatted output in C.
*/

#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number for which you want the multiplication table: ");
    scanf("%d", &num);

    // Generate and display the multiplication table for the entered number
    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
