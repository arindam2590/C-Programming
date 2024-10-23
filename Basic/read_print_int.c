/*
    Program: Read and Print an Integer Value
    Author: [Your Name]
    
    This program prompts the user to input an integer, reads the input, 
    and then displays the entered integer on the screen. It demonstrates 
    basic input/output operations in C.

    Steps involved:
    1. The program asks the user to input an integer using the `printf` function.
    2. The `scanf` function is used to read the user input and store it in a variable.
    3. The entered value is then displayed back to the user using the `printf` function.

    This program is a simple example of working with integer data types and performing basic I/O in C.
*/

#include <stdio.h>

int main() {
    int num;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Print the entered integer
    printf("You entered: %d\n", num);

    return 0;
}

