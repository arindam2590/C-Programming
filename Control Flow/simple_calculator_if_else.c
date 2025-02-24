/*
    Program: Simple Calculator using if-else
    Author: Arindam Ghosh

    Description:
    This program implements a simple calculator that performs basic arithmetic operations:
    addition, subtraction, multiplication, and division. It uses a series of if-else 
    statements to determine the operation to be performed based on the operator input by the user.

    Process:
      - The user is prompted to enter an operator (one of +, -, *, or /) and two operands.
      - The program then uses if-else statements to check the operator and perform the corresponding
        arithmetic operation.
      - For division, the program verifies that the divisor is not zero to avoid division by zero errors.
      - The result of the operation is then displayed to the user.

    Example:
      Input:
        Operator: +
        Operand 1: 8
        Operand 2: 2
      Output:
        "8.00 + 2.00 = 10.00"

    This program demonstrates the use of conditional logic with if-else statements, basic arithmetic 
    operations, and formatted input/output in C.
*/

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c helps to ignore any leading whitespace

    // Prompt the user to enter two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Determine the operation using if-else statements
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
