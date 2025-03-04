/*
    Program: Print Inverted Full Pyramid Pattern Using Alphabets
    Author: Arindam Ghosh

    Description:
    This program prints an inverted full pyramid pattern using alphabets instead of asterisks (`*`).
    The number of rows in the pyramid is determined by user input, and the pyramid is centered.
    The alphabets start from 'A' at the top and decrease sequentially in each row.

    An inverted full pyramid of height N using alphabets looks like this:

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
          - The first inner loop prints leading spaces to center-align the pyramid.
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

    This program demonstrates the use of loops, nested iterations, and character formatting in C.
*/

#include <stdio.h>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the inverted full pyramid pattern with alphabets
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
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
