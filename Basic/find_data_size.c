/*
    Program: Find the Size of int, float, double, and char
    Author: Arindam Ghosh

    This program demonstrates how to find the memory size (in bytes) of different
    fundamental data types in C: `int`, `float`, `double`, and `char`. Understanding
    the size of data types is essential for memory management and optimization
    in programming.

    In this program:
    - We use the `sizeof` operator to find the size of `int`, `float`, `double`, and `char` types.
    - Sizes are found in two ways:
        1. Directly using `sizeof(type)` syntax for each data type.
        2. Using `sizeof` on variables of each type.

    Example Output:
    The program will output the size of each data type in bytes, which may vary
    depending on the system and compiler. For example:
      - On a typical 32-bit system:
        Size of int: 4 bytes
        Size of float: 4 bytes
        Size of double: 8 bytes
        Size of char: 1 byte

    This program helps in understanding memory allocation for basic data types in C.
*/

#include <stdio.h>

int main() {
    // Variables of different data types
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Display sizes using direct data types
    printf("Size of int (direct): %zu bytes\n", sizeof(int));
    printf("Size of float (direct): %zu bytes\n", sizeof(float));
    printf("Size of double (direct): %zu bytes\n", sizeof(double));
    printf("Size of char (direct): %zu bytes\n", sizeof(char));

    // Display sizes using variables
    printf("\nSize of int (variable): %zu bytes\n", sizeof(intVar));
    printf("Size of float (variable): %zu bytes\n", sizeof(floatVar));
    printf("Size of double (variable): %zu bytes\n", sizeof(doubleVar));
    printf("Size of char (variable): %zu bytes\n", sizeof(charVar));

    return 0;
}
