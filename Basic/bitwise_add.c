/*
    Program: Bitwise Addition of Two Integers
    Author: Arindam Ghosh
    
    This program demonstrates how to add two integers using bitwise operators 
    instead of the conventional addition operator (+). The approach utilizes 
    the properties of bitwise operations to calculate the sum.

    Key Concepts:
    - The addition is performed without using the '+' operator.
    - Bitwise AND (&) is used to calculate the carry bits.
    - Bitwise XOR (^) is used to calculate the sum of the bits without carry.
    - The carry is then shifted left (<<) to align it with the corresponding 
      bits for the next addition iteration.

    The program will:
    - Prompt the user to enter two integers.
    - Use a custom `add` function that performs addition using bitwise operations.
    - Display the result of the addition.

    Example:
    If the user inputs the integers 5 and 10, the program will output:
    The sum of 5 and 10 is: 15.
*/

#include <stdio.h>

int add(int a, int b) {
    int carry;
    while (b != 0) {
        // Carry is calculated by ANDing the bits of a and b
        carry = a & b;

        // Sum is calculated using XOR, which adds bits without considering the carry
        a = a ^ b;

        // Carry is shifted left and added to a in the next iteration
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2, sum;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Call the bitwise addition function
    sum = add(num1, num2);

    // Print the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
