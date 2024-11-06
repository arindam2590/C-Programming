/*
    Program: Print Prime Numbers from 1 to N
    Author: Arindam Ghosh

    This program prints all prime numbers between 1 and a user-defined upper limit, N.
    A prime number is a natural number greater than 1 that has no divisors other than 
    1 and itself. For example, 2, 3, 5, and 7 are prime numbers, while 4, 6, and 9 are not.

    In this program:
    - The user is prompted to enter an integer N (upper limit).
    - The program then checks each number from 2 up to N to see if it is prime.
    - A number is considered prime if it is not divisible by any integer other than 1 
      and itself, which is checked by dividing it by all integers up to its square root.
    - The prime numbers are displayed on the screen.

    Example:
    If the user enters 10, the program will output:
    Prime numbers between 1 and 10 are: 2, 3, 5, 7

    This program provides a straightforward method to identify and display prime numbers 
    within a specified range, demonstrating loops and conditional logic in C.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N;

    // Input upper limit from the user
    printf("Enter the upper limit (N): ");
    scanf("%d", &N);

    // Check if N is less than 2, there are no prime numbers in this range
    if (N < 2) {
        printf("No prime numbers in the range 1 to %d.\n", N);
        return 0;
    }

    printf("Prime numbers between 1 and %d are: ", N);

    // Loop through each number from 2 to N
    for (int num = 2; num <= N; num++) {
        bool isPrime = true;

        // Check divisibility up to the square root of the number
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // If number is prime, print it
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
