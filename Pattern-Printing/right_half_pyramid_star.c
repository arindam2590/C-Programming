/*
    Program: Print Right Half Pyramid Pattern
    Author: Arindam Ghosh

    Description:
    This program prints a right half pyramid pattern using asterisks (`*`).
    The number of rows in the pyramid is determined by the user input.

    A right half pyramid of height N looks like this:
    
    Example (N = 5):
    ```
    *
    * *
    * * *
    * * * *
    * * * * *
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The outer loop runs from 1 to N (number of rows).
          - The inner loop prints asterisks (`*`) equal to the current row number.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
        *
        * *
        * * *
        * * * *
        * * * * *
        ```

    This program demonstrates the use of loops and nested iterations in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the right half pyramid pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
