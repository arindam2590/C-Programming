/*
    Program: Print Inverted Right Half Pyramid Pattern Using Stars
    Author: Arindam Ghosh

    Description:
    This program prints an inverted right half pyramid pattern using asterisks (`*`).
    The number of rows in the pyramid is determined by user input.
    The first row contains `N` stars, and each subsequent row decreases in size by one star.

    An inverted right half pyramid of height N using stars looks like this:

    Example (N = 5):
    ```
    * * * * *
    * * * *
    * * *
    * *
    *
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The outer loop runs from N down to 1 (decreasing rows).
          - The inner loop prints stars based on the current row number.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
        * * * * *
        * * * *
        * * *
        * *
        *
        ```

    This program demonstrates the use of loops, nested iterations, and formatted output in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the inverted right half pyramid pattern with stars
    for (int i = rows; i >= 1; i--) {
        // Print stars with spaces
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
