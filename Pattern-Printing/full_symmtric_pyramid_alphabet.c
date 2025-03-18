/*
    Program: Print Full Symmetric Pyramid Pattern Using Alphabets
    Author: [Your Name]

    Description:
    This program prints a full symmetric pyramid pattern using alphabets instead of numbers.
    The number of rows in the pyramid is determined by user input, and the pyramid is centered.
    The pattern forms a symmetric structure where alphabets increase from 'A' at the center
    and symmetrically decrease on the other side.

    A full symmetric pyramid of height N using alphabets looks like this:

    Example (N = 5):
    ```
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
    ```

    Process:
      - The user is prompted to enter the number of rows for the pyramid.
      - A nested loop is used to generate the pattern:
          - The first inner loop prints leading spaces for center alignment.
          - The second loop prints increasing alphabets from 'A'.
          - The third loop prints decreasing alphabets to maintain symmetry.
      - The pattern is printed row by row.

    Example:
      Input: 5
      Output:
        ```
            A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A
        ```

    This program demonstrates the use of loops, nested iterations, and character manipulation in C.
*/

#include <stdio.h>

int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   char ch;

   // Prompt the user to enter the number of rows for the pyramid
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; ++i) {
      // Print leading spaces for center alignment
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }

      ch = 'A'; // Start with 'A' for each row

      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%c ", ch); // Print increasing alphabet
            ++ch;
            ++count;
         } else {
            --ch;
            ++count1;
            printf("%c ", ch - 1); // Print decreasing alphabet for symmetry
         }
         ++k;
      }

      count1 = count = k = 0; // Reset counters
      printf("\n"); // Move to the next line after each row
   }

   return 0;
}
