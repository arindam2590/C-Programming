/*
    Program: Calculate Simple Interest
    Author: Arindam Ghosh

    This program calculates the simple interest based on the principal amount,
    rate of interest, and time period provided by the user. Simple interest is
    a financial calculation commonly used to determine the interest on loans
    or investments over a fixed period.

    Formula:
    Simple Interest (SI) = (Principal * Rate * Time) / 100

    In this program:
    - The user is prompted to enter three values:
      1. Principal (the initial amount of money)
      2. Rate of interest (percentage per year)
      3. Time period (in years)
    - The program calculates the simple interest using the formula above.
    - Finally, it displays the calculated simple interest.

    Example:
    If the user inputs:
      Principal = 1000, Rate = 5, Time = 2
    The program will output:
      Simple Interest = 100.00

    This program demonstrates basic arithmetic operations in C and helps in understanding
    simple financial calculations.
*/

#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input rate of interest from the user
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Input time period from the user
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Print the calculated simple interest
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
