/*
    Program: Sum of Two Integers Using Pointers
    Author: Arindam Ghosh

    Description:
    This program takes two integer inputs from the user, stores them in 
    variables, and then uses pointers to access and sum their values. 
    The result is displayed to the user.

    How it Works:
    - Two integer variables are declared for storing the numbers.
    - Two integer pointers are declared and assigned the addresses of 
      these variables.
    - The program takes input for both integers from the user.
    - The values pointed to by the pointers are added together, and 
      the sum is displayed.

    Example:
    Input:
        Enter first integer: 5
        Enter second integer: 7
    Output:
        Sum = 12
*/

#include <stdio.h>

int main() {
    int num1, num2;     // Variables to store integers
    int *ptr1, *ptr2;   // Pointers to integers

    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Take input from user
    printf("Enter first integer: ");
    scanf("%d", ptr1);
    printf("Enter second integer: ");
    scanf("%d", ptr2);

    // Calculate and display sum
    printf("Sum = %d\n", (*ptr1) + (*ptr2));

    return 0;
}
