/*
    Program: Simple Calculator using switch Statement
    Author: Arindam Ghosh

    Description:
    This program implements a simple calculator that performs basic arithmetic operations:
    addition, subtraction, multiplication, and division. The calculator uses a switch
    statement to determine the operation to perform based on the operator input by the user.

    Process:
      - The user is prompted to enter an operator (+, -, *, or /) and two operands.
      - The program uses a switch statement to execute the corresponding arithmetic operation.
      - For division, the program checks to ensure that the divisor is not zero to prevent
        division by zero errors.
      - The result of the operation is displayed to the user.

    Example:
      Input:
        Operator: *
        Operand 1: 5
        Operand 2: 3
      Output:
        "5.00 * 3.00 = 15.00"

    This program demonstrates the use of conditional logic with switch-case statements,
    basic arithmetic operations, and formatted input/output in C.
*/

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to skip any whitespace

    // Prompt the user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Use switch statement to perform the appropriate operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
