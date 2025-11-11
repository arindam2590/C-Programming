/*
    Program: Add Two Complex Numbers by Passing Structure to Function
    Author: [Your Name]

    Description:
    This program demonstrates how to add two complex numbers using structures 
    and functions in C. The complex numbers are represented as structures 
    containing real and imaginary parts. The addition is performed by 
    passing the structure variables as function arguments and returning 
    the result as a structure.

    How it Works:
    - A structure named `Complex` is defined with two float members: `real` and `imag`.
    - The user enters two complex numbers (real and imaginary parts).
    - These two structure variables are passed to a function `addComplex()` which 
      performs the addition of their corresponding real and imaginary parts.
    - The function returns a structure containing the sum.
    - The result is displayed in standard complex number format (a + bi).

    Example:
    Input:
        Enter first complex number:
        Real part: 3.4
        Imaginary part: 2.7
        Enter second complex number:
        Real part: 1.6
        Imaginary part: 4.3

    Output:
        Sum = 5.00 + 7.00i
*/

#include <stdio.h>

// Define structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input first complex number
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    // Input second complex number
    printf("Enter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    // Function call to add complex numbers
    sum = addComplex(num1, num2);

    // Display result
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
