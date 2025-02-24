/*
    Program: Print Alphabets from A to Z (Uppercase and Lowercase) Using All Three Loops
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to print the alphabets from A to Z in both uppercase 
    and lowercase using three different types of loops in C:
      1. For loop
      2. While loop
      3. Do-While loop

    The program illustrates the versatility of loop constructs by performing the same task 
    (printing alphabets) with each loop type. It helps in understanding how different loops 
    work and can be applied to achieve the same result.

    Process:
      - Using a for loop:
          * Print uppercase alphabets from A to Z.
          * Print lowercase alphabets from a to z.
      - Using a while loop:
          * Print uppercase alphabets from A to Z.
          * Print lowercase alphabets from a to z.
      - Using a do-while loop:
          * Print uppercase alphabets from A to Z.
          * Print lowercase alphabets from a to z.

    Example Output:
      Using for loop:
        Uppercase: A B C ... Z
        Lowercase: a b c ... z

      Using while loop:
        Uppercase: A B C ... Z
        Lowercase: a b c ... z

      Using do-while loop:
        Uppercase: A B C ... Z
        Lowercase: a b c ... z
*/

#include <stdio.h>

int main() {
    // Using for loop
    printf("Using for loop:\n");
    
    // Print uppercase alphabets using a for loop
    printf("Uppercase: ");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    // Print lowercase alphabets using a for loop
    printf("Lowercase: ");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n\n");

    // Using while loop
    printf("Using while loop:\n");
    
    // Print uppercase alphabets using a while loop
    printf("Uppercase: ");
    char ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    // Print lowercase alphabets using a while loop
    printf("Lowercase: ");
    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n\n");

    // Using do-while loop
    printf("Using do-while loop:\n");
    
    // Print uppercase alphabets using a do-while loop
    printf("Uppercase: ");
    ch = 'A';
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'Z');
    printf("\n");

    // Print lowercase alphabets using a do-while loop
    printf("Lowercase: ");
    ch = 'a';
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'z');
    printf("\n");

    return 0;
}