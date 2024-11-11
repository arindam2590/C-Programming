/*
    Program: Calculate Surface Area and Volume of a Cone
    Author: Arindam Ghosh

    This program calculates the surface area and volume of a cone based on its radius
    and height, which are provided by the user.

    Formulas:
    - Surface Area = π * Radius * (Radius + Slant Height)
      where Slant Height (l) = sqrt(Radius^2 + Height^2)
    - Volume = (1/3) * π * Radius^2 * Height

    In this program:
    - The user is prompted to enter two values:
      1. Radius of the cone's base
      2. Height of the cone
    - The program calculates the slant height using the Pythagorean theorem, then
      uses this to calculate the surface area and volume based on the formulas.
    - Finally, it displays the calculated surface area and volume.

    Example:
    If the user inputs:
      Radius = 3, Height = 4
    The program will output:
      Surface Area of Cone = 75.40
      Volume of Cone = 37.70

    This program demonstrates basic geometric calculations in C and uses the math library for
    square root operations.
*/

#include <stdio.h>
#include <math.h>  // Include math library for sqrt function
#define PI 3.14159  // Define the constant value of π

int main() {
    float radius, height, slantHeight, surfaceArea, volume;

    // Input radius of the cone's base from the user
    printf("Enter the radius of the cone's base: ");
    scanf("%f", &radius);

    // Input height of the cone from the user
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    // Calculate the slant height using the Pythagorean theorem
    slantHeight = sqrt((radius * radius) + (height * height));

    // Calculate surface area of the cone
    surfaceArea = PI * radius * (radius + slantHeight);

    // Calculate volume of the cone
    volume = (1.0 / 3.0) * PI * radius * radius * height;

    // Print the calculated surface area and volume
    printf("Surface Area of Cone = %.2f\n", surfaceArea);
    printf("Volume of Cone = %.2f\n", volume);

    return 0;
}
