/*
    Program: Print Left Half Pyramid Pattern with Alphabets
    Author: Arindam Ghosh

    Description:
    This program prints a left half pyramid pattern using alphabets,
    with spaces between each letter. The pyramid is right-aligned, 
    and the number of rows is determined by user input.

    A left half pyramid of height N looks like this:

    Example (N = 3):
    ```
        A
      A B
    A B C
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for alignment.
          - The second inner loop prints alphabets with a space between them.
      - The pattern is printed row by row.

    Example:
      Input: 3
      Output:
        ```
            A
          A B
        A B C
        ```

    This program demonstrates the use of loops, nested iterations, 
    character manipulation, and formatted output in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the left half pyramid pattern with alphabets
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }
        // Print alphabets with spaces
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
