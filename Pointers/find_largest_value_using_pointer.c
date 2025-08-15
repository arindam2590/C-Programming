/*
    Program: Find the Largest of Three Integers Using Pointers
    Author: Arindam Ghosh

    Description:
    This program reads three integer values from the user using pointers 
    and determines the largest value among them. The use of pointers 
    allows direct access to the memory addresses of the variables, 
    demonstrating pointer operations in C.

    How it Works:
    - Three integer variables are declared to store the numbers.
    - Three pointers are declared and assigned the addresses of 
      the integer variables.
    - The user inputs values, which are stored via the pointers.
    - A comparison is made using dereferenced pointers to find 
      the largest value.
    - The largest value is displayed.

    Example:
    Input:
        Enter first number: 10
        Enter second number: 25
        Enter third number: 15
    Output:
        The largest number is: 25
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    // Assigning addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    // Input values using pointers
    printf("Enter first number: ");
    scanf("%d", ptr1);
    printf("Enter second number: ");
    scanf("%d", ptr2);
    printf("Enter third number: ");
    scanf("%d", ptr3);

    // Finding the largest value
    int largest = *ptr1;
    if (*ptr2 > largest)
        largest = *ptr2;
    if (*ptr3 > largest)
        largest = *ptr3;

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
