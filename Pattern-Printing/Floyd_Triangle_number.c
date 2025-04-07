/*
    Program: Print Floyd's Triangle Pattern Using Numbers
    Author: Arindam Ghosh

    Description:
    This program prints Floyd's Triangle using numbers.
    Floyd’s Triangle is a right-angled triangular array of natural numbers,
    where each row contains one more element than the previous one,
    and numbers are printed in a continuous increasing order starting from 1.

    A Floyd's Triangle of height N looks like this:

    Example (N = 5):
    ```
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    ```

    Process:
      - The user is prompted to enter the number of rows.
      - A nested loop structure is used:
          - The outer loop controls the number of rows.
          - The inner loop prints the increasing numbers, increasing the count with each number.
      - Each row prints one more number than the previous row.

    Example:
      Input: 5
      Output:
        ```
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
        ```

    This program demonstrates the use of loops, counters, and number formatting in C.
*/

#include <stdio.h>

int main() {
   int rows, i, j, number = 1;

   // Prompt the user to enter the number of rows
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   // Generate Floyd's Triangle
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n"); // Move to the next line after each row
   }

   return 0;
}
