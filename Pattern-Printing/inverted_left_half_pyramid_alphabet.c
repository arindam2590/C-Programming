/*
    Program: Print Inverted Left Half Pyramid Pattern Using Alphabets
    Author:  Arindam Ghosh

    Description:
    This program prints an inverted left half pyramid pattern using alphabets instead of asterisks (`*`).
    The number of rows in the pyramid is determined by user input.
    The first row contains `N` alphabets, and each subsequent row decreases in size by one letter while
    maintaining proper alignment.

    An inverted left half pyramid of height N using alphabets looks like this:

    Example (N = 5):
    ```
    A B C D E
      A B C D
        A B C
          A B
            A
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for right alignment.
          - The second inner loop prints alphabets starting from 'A' up to the current row position.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
        A B C D E
          A B C D
            A B C
              A B
                A
        ```

    This program demonstrates the use of loops, nested iterations, and character manipulation in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the inverted left half pyramid pattern with alphabets
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" "); // Two spaces for proper alignment
        }
        // Print alphabets with spaces
        for (char ch = 'A'; ch < 'A' + (rows - i); ch++) {
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
