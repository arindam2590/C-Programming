/*
    Program: Print Full Symmetric Pyramid Pattern Using Numbers
    Author: Arindam Ghosh

    Description:
    This program prints a full symmetric pyramid pattern using numbers.
    The number of rows in the pyramid is determined by user input, and the numbers in each row 
    follow a symmetric pattern.

    A full symmetric pyramid of height N using numbers looks like this:

    Example (N = 5):
    ```
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for center alignment.
          - The second inner loop prints numbers symmetrically increasing and then decreasing.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
        ```

    This program demonstrates the use of loops, nested iterations, and number manipulation in C.
*/

#include <stdio.h>

int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;

   // Prompt the user to enter the number of rows for the pyramid
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   // Generate the full symmetric pyramid pattern with numbers
   for (i = 1; i <= rows; ++i) {
      // Print leading spaces
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }

      // Print numbers symmetrically increasing and then decreasing
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      
      // Reset counters for the next row
      count1 = count = k = 0;
      printf("\n"); // Move to the next line after each row
   }

   return 0;
}
