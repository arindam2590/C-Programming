/*
    Program: Print Inverted Full Pyramid Pattern Using Numbers
    Author: [Your Name]

    Description:
    This program prints an inverted full pyramid pattern using numbers instead of asterisks (`*`).
    The number of rows in the pyramid is determined by user input, and the pyramid is centered.
    The numbers start from 1 at the top and decrease sequentially in each row.

    An inverted full pyramid of height N using numbers looks like this:

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
          - The first inner loop prints leading spaces to center-align the pyramid.
          - The second inner loop prints numbers from 1 up to the current row position.
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

    // Generate the inverted full pyramid pattern with numbers
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
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
