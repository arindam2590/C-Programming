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
