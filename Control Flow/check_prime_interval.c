/*
    Program: Display Prime Numbers Between Given Intervals
    Author: Arindam Ghosh

    Description:
    This program prints all prime numbers within a user-specified range. 
    A prime number is a natural number greater than 1 that has no divisors other 
    than 1 and itself.

    Process:
      - The user is prompted to enter the lower and upper bounds of the range.
      - The program iterates through each number within the range.
      - For each number, it checks whether it is prime by testing divisibility from 
        2 up to the square root of the number.
      - If a number has no divisors other than 1 and itself, it is printed as a prime number.

    Example:
      Input: Lower bound = 10, Upper bound = 30
      Output:
          Prime numbers between 10 and 30 are: 11 13 17 19 23 29

    This program demonstrates the use of loops, conditionals, and nested iteration 
    in C to check for prime numbers efficiently.
*/

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2)
        return 0; // Numbers less than 2 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0; // Number is divisible, hence not prime
    }
    return 1; // Number is prime
}

int main() {
    int lower, upper;

    // Prompt the user to enter the range
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    // Loop through the given range and check for prime numbers
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
