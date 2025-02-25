/*
    Program: Find LCM of Two Numbers
    Author: Arindam Ghosh

    Description:
    This program calculates the Least Common Multiple (LCM) of two integers.
    The LCM of two numbers is the smallest positive integer that is divisible by both numbers.
    To achieve this, the program first computes the Greatest Common Divisor (GCD) using the
    Euclidean algorithm and then applies the formula:

        LCM(a, b) = |a * b| / GCD(a, b)

    Process:
      - The user is prompted to enter two integers.
      - The program calculates the GCD of the two numbers.
      - Using the GCD, the LCM is calculated via the above formula.
      - The result is then displayed to the user.

    Example:
      Input: 12 and 18
      Output: "LCM of 12 and 18 is 36"

    This program demonstrates the use of loops, functions, conditional logic, and arithmetic
    operations in C.
*/

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the GCD of the two numbers using their absolute values
    int gcdValue = gcd(abs(num1), abs(num2));

    // Calculate the LCM using the formula: LCM = |num1 * num2| / GCD
    int lcm = (abs(num1) * abs(num2)) / gcdValue;

    // Display the result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
