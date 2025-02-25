/*
    Program: Prime Number Checker using Trial Division with Optimization
    Author: Arindam Ghosh
    
    This program checks whether a given positive integer is a prime number using an optimized 
    version of the trial division method. A prime number is a number greater than 1 that has 
    no divisors other than 1 and itself.
    
    The optimization involves checking divisors only up to the square root of the number (`√N`) 
    instead of checking all the way up to `N`. If a number has a divisor larger than its square 
    root, the corresponding divisor must be smaller than the square root.

    Steps:
    1. The user inputs a positive integer.
    2. Special cases (like numbers less than or equal to 1) are handled directly.
    3. The program checks divisibility from 2 up to `√N`. If a divisor is found, the number is 
       not prime.
    4. If no divisors are found, the number is declared prime.

    Example:
    If the user inputs `29`, the program will output that `29 is a prime number` because it is 
    only divisible by 1 and 29.
*/

#include <stdio.h>
#include <math.h>  // Include math.h for the sqrt() function

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

    // Loop up to the square root of the number
    int limit = (int)sqrt(num);  // Get the square root of the number
    for (i = 2; i <= limit; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Set flag to 0 if a divisor is found
            break;  // No need to check further, it's not prime
        }
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
