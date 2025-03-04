/*
    Program: Print Diamond Pattern
    Author: Arindam Ghosh

    Description:
    This program prints a diamond pattern using asterisks (`*`), with spaces for alignment.
    The number of rows in the upper half of the diamond is determined by user input, and the lower 
    half mirrors the upper half.

    A diamond pattern of height N looks like this:

    Example (N = 5):
    ```
        *    
       * *    
      * * *    
     * * * *    
    * * * * *    
     * * * *    
      * * *    
       * *    
        *    
    ```

    Process:
      - The user is prompted to enter the number of rows for the upper half of the diamond.
      - The first loop generates the upper half of the diamond using nested loops:
          - The first inner loop prints leading spaces for center alignment.
          - The second inner loop prints asterisks with spaces.
      - The second loop generates the lower half by mirroring the upper half.

    Example:
      Input: 5
      Output:
        ```
            *    
           * *    
          * * *    
         * * * *    
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

    // Prompt the user to enter the number of rows for the upper half of the diamond
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate the upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks with spaces
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    // Generate the lower half of the diamond (inverted pyramid)
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
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
