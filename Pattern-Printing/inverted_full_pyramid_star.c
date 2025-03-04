/*
    Program: Print Inverted Full Pyramid Pattern
    Author: Arindam Ghosh

    Description:
    This program prints an inverted full pyramid pattern using asterisks (`*`), with spaces between them.
    The number of rows in the pyramid is determined by user input, and the pyramid is centered.

    An inverted full pyramid of height N with spaces looks like this:

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
          - The first inner loop prints leading spaces to center-align the pyramid.
          - The second inner loop prints asterisks with spaces in between.
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

    // Generate the inverted full pyramid pattern with spaces
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        // Print asterisks with spaces
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
