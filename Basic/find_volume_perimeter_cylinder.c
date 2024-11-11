/*
    Program: Calculate Perimeter and Volume of a Cylinder
    Author: Arindam Ghosh

    This program calculates the perimeter (circumference) of the base and the volume
    of a cylinder, based on its radius and height, which are provided by the user.

    Formulas:
    - Perimeter (Circumference of the base) = 2 * π * Radius
    - Volume = π * Radius^2 * Height

    In this program:
    - The user is prompted to enter two values:
      1. Radius of the cylinder's base
      2. Height of the cylinder
    - The program calculates the perimeter of the base and the volume using the formulas above.
    - It then displays the calculated perimeter and volume.

    Example:
    If the user inputs:
      Radius = 3, Height = 5
    The program will output:
      Perimeter of Cylinder's Base = 18.85
      Volume of Cylinder = 141.37

    This program provides an example of mathematical calculations in C and demonstrates 
    the use of constants and basic geometry.
*/

#include <stdio.h>
#define PI 3.14159  // Define the constant value of π

int main() {
    float radius, height, perimeter, volume;

    // Input radius of the cylinder's base from the user
    printf("Enter the radius of the cylinder's base: ");
    scanf("%f", &radius);

    // Input height of the cylinder from the user
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate perimeter (circumference of the base)
    perimeter = 2 * PI * radius;

    // Calculate volume of the cylinder
    volume = PI * radius * radius * height;

    // Print the calculated perimeter and volume
    printf("Perimeter (Circumference) of Cylinder's Base = %.2f\n", perimeter);
    printf("Volume of Cylinder = %.2f\n", volume);

    return 0;
}
