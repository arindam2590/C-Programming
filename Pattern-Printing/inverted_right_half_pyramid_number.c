/*
    Program: Print Inverted Right Half Pyramid Pattern Using Numbers
    Author: Arindam Ghosh

    Description:
    This program prints an inverted right half pyramid pattern using numbers instead of asterisks (`*`).
    The number of rows in the pyramid is determined by user input.
    The numbers start from 1 and decrease in each row.

    An inverted right half pyramid of height N using numbers looks like this:

    Example (N = 5):
    ```
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The outer loop runs from N down to 1 (decreasing rows).
          - The inner loop prints numbers starting from 1 up to the current row position.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
        ```

    This program demonstrates the use of loops, nested iterations, and number formatting in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the inverted right half pyramid pattern with numbers
    for (int i = 0; i < rows; i++) {
        // Print numbers with spaces
        for (int num = 1; num <= (rows - i); num++) {
            printf("%d ", num);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
