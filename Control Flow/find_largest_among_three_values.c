/*
    Program: Find the Largest Number Among Three Numbers
    Author: Arindam Ghosh

    This program determines the largest number among three user-provided numbers.
    It uses conditional statements to compare the three numbers and identifies the largest.

    Description:
    - The program accepts three numbers as input from the user.
    - It compares the numbers using conditional statements.
    - Depending on the comparisons, it prints which number is the largest.

    Process:
    - Input three numbers from the user.
    - Use a series of conditional checks:
        - If the first number is greater than or equal to the other two, it is the largest.
        - Otherwise, if the second number is greater than or equal to the other two, it is the largest.
        - If neither of the above conditions is true, the third number is the largest.
    - Display the largest number.

    Example:
    Input: 10, 20, 15
    Output: "The largest number is 20."

    Input: -5, -1, -10
    Output: "The largest number is -1."

    This program demonstrates basic input/output, conditional statements, and comparisons in C.
*/

#include <stdio.h>

int main() {
    float num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers:\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    printf("Third number: ");
    scanf("%f", &num3);

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %.2f\n", num2);
    } else {
        printf("The largest number is %.2f\n", num3);
    }

    return 0;
}
