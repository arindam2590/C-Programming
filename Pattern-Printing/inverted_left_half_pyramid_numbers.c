/*
    Program: Print Inverted Left Half Pyramid Pattern Using Numbers
    Author: [Your Name]

    Description:
    This program prints an inverted left half pyramid pattern using numbers instead of asterisks (`*`).
    The number of rows in the pyramid is determined by user input.
    The first row contains numbers from 1 to N, and each subsequent row decreases in size by one while
    maintaining proper alignment.

    An inverted left half pyramid of height N using numbers looks like this:

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
          - The first inner loop prints leading spaces for right alignment.
          - The second inner loop prints numbers starting from 1 up to the current row position.
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

    // Generate the inverted left half pyramid pattern with numbers
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" "); // Two spaces for proper alignment
        }
        // Print numbers with spaces
        for (int num = 1; num <= (rows - i); num++) {
            printf("%d ", num);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
