/*
    Program: Swap Two Numbers Using Bitwise XOR Operator
    Author: Arindam Ghosh
    
    This program demonstrates how to swap two numbers in C using the 
    Bitwise XOR operator. The XOR operation is a powerful tool in programming
    that allows us to manipulate bits directly.

    In this program:
    - The user is prompted to input two numbers.
    - The program performs the swap using the Bitwise XOR operator with the following steps:
        1. The first number is XORed with the second number and stored in the first number.
        2. The second number is then XORed with the new value of the first number to get the original first number.
        3. The first number is XORed again with the new value of the second number to retrieve the original second number.
    - Finally, the values of the two numbers are displayed after the swap.

    Example:
    If the user inputs num1 = 5 and num2 = 10,
    After swapping, num1 will be 10 and num2 will be 5.

    This method provides an efficient way to swap values without using a temporary 
    variable and without any arithmetic operations, making it useful in certain scenarios.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using the Bitwise XOR operator
    num1 = num1 ^ num2;  // Step 1: XOR the two numbers and store in num1
    num2 = num1 ^ num2;  // Step 2: XOR the new num1 with num2 to get original num1
    num1 = num1 ^ num2;  // Step 3: XOR the new num1 with the new num2 to get original num2

    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
