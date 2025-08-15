/*
    Program: Print Address of an Integer Variable
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to declare an integer variable 
    in C and print its memory address using the address-of operator (&).

    How it Works:
    - An integer variable is declared and initialized.
    - The address-of operator (&) is used to get the memory address of the variable.
    - The memory address is printed using the `%p` format specifier in `printf()`.

    Example:
    Input:
        (No user input required)
    Output:
        Value of variable: 10
        Address of variable: 0x7ffdd3c4a9ac   (Example, actual address will vary)
*/

#include <stdio.h>

int main() {
    int num = 10; // Declare and initialize an integer variable

    printf("Value of variable: %d\n", num);
    printf("Address of variable: %p\n", (void*)&num); // Print address using &

    return 0;
}
