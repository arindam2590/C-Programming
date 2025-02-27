/*
    Program: Print Left Half Pyramid Pattern with Numbers
    Author: Arindam Ghosh

    Description:
    This program prints a left half pyramid pattern using numbers,
    with spaces between each number. The pyramid is right-aligned, 
    and the number of rows is determined by user input.

    A left half pyramid of height N looks like this:

    Example (N = 3):
    ```
        1
      1 2
    1 2 3
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for alignment.
          - The second inner loop prints numbers with a space between them.
      - The pattern is printed row by row.

    Example:
      Input: 3
      Output:
        ```
            1
          1 2
        1 2 3
        ```

    This program demonstrates the use of loops, nested iterations, 
    number manipulation, and formatted output in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the left half pyramid pattern with numbers
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }
        // Print numbers with spaces
        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
