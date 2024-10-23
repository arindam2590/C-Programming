/*
    Program: Addition of Two Complex Numbers
    Author: Arindam Ghosh
    
    This program adds two complex numbers represented by their real and imaginary parts.
    
    In mathematics, a complex number is expressed in the form a + bi, where:
    - 'a' is the real part
    - 'b' is the imaginary part (multiplied by the imaginary unit 'i')

    In this program:
    - The user will be prompted to enter the real and imaginary parts of two complex numbers.
    - The program will then calculate the sum of the two complex numbers by adding their respective real and imaginary parts.
    - Finally, it will display the resulting complex number in the format: 
      "The sum of the two complex numbers is: realSum + imagSum i".

    Example:
    If the user inputs:
    - First complex number: 3 (real) and 4 (imaginary)
    - Second complex number: 1 (real) and 2 (imaginary)
    
    The output will be:
    The sum of the two complex numbers is: 4.00 + 6.00i
*/

#include <stdio.h>

int main() {
    // Variables to store real and imaginary parts of two complex numbers
    float real1, imag1, real2, imag2, realSum, imagSum;

    // Input for the first complex number
    printf("Enter real part of the first complex number: ");
    scanf("%f", &real1);
    printf("Enter imaginary part of the first complex number: ");
    scanf("%f", &imag1);

    // Input for the second complex number
    printf("Enter real part of the second complex number: ");
    scanf("%f", &real2);
    printf("Enter imaginary part of the second complex number: ");
    scanf("%f", &imag2);

    // Add the real parts and imaginary parts separately
    realSum = real1 + real2;
    imagSum = imag1 + imag2;

    // Print the result
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", realSum, imagSum);

    return 0;
}
