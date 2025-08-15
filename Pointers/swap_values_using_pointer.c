/*
    Program: Swap Two Variables Without Using a Third Variable
    Author: Arindam Ghosh

    Description:
    This program swaps the values of two integer variables without 
    using a third (temporary) variable. The swapping is done using 
    arithmetic operations.

    How it Works:
    - Two integer variables are declared to store the values.
    - The program takes input for both variables from the user.
    - The values are swapped using the following steps:
        1. a = a + b
        2. b = a - b
        3. a = a - b
      These steps work because the first operation stores the sum 
      of both numbers in `a`. The next two operations use this sum 
      to recover and swap the original values.
    - The swapped values are then displayed.

    Example:
    Input:
        Enter first number: 10
        Enter second number: 20
    Output:
        After swapping:
        First number: 20
        Second number: 10
*/

#include <stdio.h>

int main() {
    int a, b;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping without third variable using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the swapped values
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}
