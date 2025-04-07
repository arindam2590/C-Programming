/*
    Program: Print Pascal's Pyramid Pattern Using Numbers
    Author: Arindam Ghosh

    Description:
    This program prints Pascal's Triangle in a pyramid shape using numbers.
    Pascal's Triangle is a triangular array where each number is the sum of the two numbers directly above it.
    The first and last elements of each row are always 1.

    Pascal's Triangle of height N looks like this:

    Example (N = 5):
    ```
        1
       1  1
      1  2  1
     1  3  3  1
    1  4  6  4  1
    ```

    Process:
      - The user is prompted to enter the number of rows for Pascal's Triangle.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for center alignment.
          - The second inner loop calculates Pascal's numbers using the formula:
            coef = coef * (i - j + 1) / j
          - The numbers are printed in a symmetric format.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
            1
           1  1
          1  2  1
         1  3  3  1
        1  4  6  4  1
        ```

    This program demonstrates the use of loops, nested iterations, and Pascal's Triangle formula in C.
*/

#include <stdio.h>

int main() {
   int rows, coef = 1, space, i, j;

   // Prompt the user to enter the number of rows for Pascal's Pyramid
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   // Generate Pascal's Triangle
   for (i = 0; i < rows; i++) {
      // Print leading spaces for center alignment
      for (space = 1; space <= rows - i; space++) {
         printf("  ");
      }

      // Calculate and print Pascal's numbers
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }

      printf("\n"); // Move to the next line after each row
   }

   return 0;
}
