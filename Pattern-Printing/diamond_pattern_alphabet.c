/*
    Program: Print Diamond Pattern Using Alphabets
    Author: [Your Name]

    Description:
    This program prints a diamond pattern using alphabets instead of asterisks (`*`).
    The number of rows in the upper half of the diamond is determined by user input, 
    and the lower half mirrors the upper half.

    A diamond pattern of height N using alphabets looks like this:

    Example (N = 5):
    ```
        A    
       A B    
      A B C    
     A B C D    
    A B C D E    
     A B C D    
      A B C    
       A B    
        A    
    ```

    Process:
      - The user is prompted to enter the number of rows for the upper half of the diamond.
      - The first loop generates the upper half of the diamond using nested loops:
          - The first inner loop prints leading spaces for center alignment.
          - The second inner loop prints alphabets from 'A' up to the current row position.
      - The second loop generates the lower half by mirroring the upper half.

    Example:
      Input: 5
      Output:
        ```
            A    
           A B    
          A B C    
         A B C D    
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

    // Prompt the user to enter the number of rows for the upper half of the diamond
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the upper half of the diamond
    for (int i = 1; i <= rows; i++) {
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

    // Generate the lower half of the diamond (inverted pyramid)
    for (int i = rows - 1; i >= 1; i--) {
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
