/*
    Program: Calculate Compound Interest
    Author: Arindam Ghosh

    This program calculates compound interest based on the principal amount, 
    rate of interest, time period, and number of times interest is compounded
    per year. Compound interest is widely used in finance and investment 
    to determine the amount accrued over time.

    Formula:
    Compound Interest (CI) = Principal * ( (1 + Rate/100) ^ (Time * Compounds) ) - Principal
    where:
    - Principal is the initial amount of money
    - Rate is the annual interest rate (in percentage)
    - Time is the period of time in years
    - Compounds is the number of times interest is compounded per year

    In this program:
    - The user is prompted to enter four values:
      1. Principal (initial amount)
      2. Rate of interest (percentage per year)
      3. Time period (in years)
      4. Number of times the interest is compounded per year
    - The program then calculates compound interest using the formula.
    - Finally, it displays the calculated compound interest.

    Example:
    If the user inputs:
      Principal = 1000, Rate = 5, Time = 2, Compounds = 4
    The program will output the compound interest accrued over 2 years.

    This program helps in understanding compound interest calculations 
    and demonstrates the use of power functions in C.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    int compounds;

    // Input principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input rate of interest from the user
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    // Input time period in years from the user
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Input the number of times interest is compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compounds);

    // Calculate compound interest using the formula
    compoundInterest = principal * (pow((1 + rate / (100 * compounds)), (compounds * time))) - principal;

    // Print the calculated compound interest
    printf("The Compound Interest is: %.2f\n", compoundInterest);

    return 0;
}
