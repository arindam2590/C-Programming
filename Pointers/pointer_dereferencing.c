/*
    Program: Pointer Dereferencing Example
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to declare an integer variable, 
    assign its address to a pointer variable, and use pointer dereferencing (*) 
    to access and print the value stored in the integer variable.

    How it Works:
    - An integer variable is declared and initialized.
    - A pointer to an integer is declared.
    - The address of the integer variable is assigned to the pointer.
    - Using the dereference operator (*), the value stored in the integer 
      variable is accessed via the pointer and printed.

    Example:
    Input:
        (No user input required)
    Output:
        Value of variable: 10
        Address of variable: 0x7ffeefbff5ac    (Example, actual address will vary)
        Value using pointer dereferencing: 10
*/

#include <stdio.h>

int main() {
    int num = 10;       // Declare and initialize integer variable
    int *ptr;           // Declare pointer to integer

    ptr = &num;         // Assign address of num to pointer

    // Display value and address
    printf("Value of variable: %d\n", num);
    printf("Address of variable: %p\n", (void*)&num);
    printf("Value using pointer dereferencing: %d\n", *ptr);

    return 0;
}
