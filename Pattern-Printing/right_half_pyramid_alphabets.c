/*
    Program: Print Right Half Pyramid Pattern for Alphabets
    Author: Arindam Ghosh

    Description:
    This program prints a right half pyramid pattern using alphabets.
    The number of rows in the pyramid is determined by user input, and each row contains 
    uppercase letters starting from 'A'.

    A right half pyramid of height N looks like this:

    Example (N = 5):
    ```
    A
    A B
    A B C
    A B C D
    A B C D E
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The outer loop runs from 1 to N (number of rows).
          - The inner loop prints alphabets from 'A' up to the current row position.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
        A
        A B
        A B C
        A B C D
        A B C D E
        ```

    This program demonstrates the use of loops, nested iterations, and character manipulation in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the right half pyramid pattern with alphabets
    for (int i = 1; i <= rows; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
