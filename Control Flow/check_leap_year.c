/*
    Program: Leap Year Checker
    Author: Arindam Ghosh

    Description:
    This program checks whether a given year is a leap year or not. 
    A leap year has 366 days instead of the usual 365 days, with an extra day added to February.
    
    The rules to determine a leap year are:
      1. A year that is divisible by 400 is a leap year.
      2. A year that is divisible by 4 but not divisible by 100 is a leap year.
      3. All other years are not leap years.

    Process:
      - The user is prompted to enter a year.
      - The program uses conditional statements to check if the year meets the leap year criteria.
      - The result is then displayed to the user.

    Example:
      If the user enters 2020, the output will be:
          "2020 is a leap year."
      If the user enters 1900, the output will be:
          "1900 is not a leap year."

    This program demonstrates the use of conditional logic and arithmetic operations in C.
*/

#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
