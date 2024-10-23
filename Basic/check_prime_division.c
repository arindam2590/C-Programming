/*
    Program: Check if a Number is Prime
    Author: Arindam Ghosh
    
    This program checks whether a given positive integer is a prime number using the 
    simple trial division method. A prime number is a natural number greater than 1 
    that cannot be formed by multiplying two smaller natural numbers. In other words, 
    a prime number is only divisible by 1 and itself.

    In this program:
    - The user is prompted to enter a positive integer.
    - The program handles special cases (numbers less than or equal to 1).
    - A simple trial division approach is used to check for factors of the input number 
      by iterating from 2 up to the square root of the number.
    - If any number in this range divides the input number evenly, it is determined that 
      the number is not prime.
    
    Example:
    If the user inputs 29, the program will determine that 29 is a prime number. 
    If the user inputs 30, it will determine that 30 is not a prime number.
*/

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Simple trial division check for factors
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Set flag to 0 if a divisor is found
            break;        // No need to check further
        }
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
