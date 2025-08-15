/*
    Program: Change Variable Value Using Pointer
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to change the value of a variable 
    by accessing it through its pointer. It shows that pointers can 
    be used not only to read values but also to modify them directly 
    in memory.

    How it Works:
    - An integer variable is declared and initialized.
    - A pointer to an integer is declared and assigned the address of the variable.
    - The pointer is used to change the value stored in the variable by 
      dereferencing it and assigning a new value.
    - The updated value of the variable is printed to verify the change.

    Example:
    Input:
        (No user input required)
    Output:
        Original value: 10
        Updated value: 50
*/

#include <stdio.h>

int main() {
    int num = 10;   // Declare and initialize integer variable
    int *ptr;       // Declare pointer to integer

    ptr = &num;     // Assign address of num to pointer

    // Print original value
    printf("Original value: %d\n", num);

    // Change value using pointer
    *ptr = 50;

    // Print updated value
    printf("Updated value: %d\n", num);

    return 0;
}
