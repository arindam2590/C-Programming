/*
    Program: Calculate Perimeter and Area of a Semicircle
    Author: Arindam Ghosh

    This program calculates the perimeter and area of a semicircle based on its radius, 
    which is provided by the user.

    Formulas:
    - Area = (1/2) * π * Radius^2
    - Perimeter = π * Radius + 2 * Radius
      Note: The perimeter of a semicircle includes the curved part (half of the circumference)
            and the diameter.

    In this program:
    - The user is prompted to enter the radius of the semicircle.
    - The program calculates the area and perimeter using the formulas above.
    - Finally, it displays the calculated area and perimeter.

    Example:
    If the user inputs:
      Radius = 4
    The program will output:
      Area of Semicircle = 25.13
      Perimeter of Semicircle = 18.28

    This program demonstrates simple geometric calculations in C, using a constant value for π.
*/

#include <stdio.h>
#define PI 3.14159  // Define the constant value of π

int main() {
    float radius, area, perimeter;

    // Input radius of the semicircle from the user
    printf("Enter the radius of the semicircle: ");
    scanf("%f", &radius);

    // Calculate area of the semicircle
    area = (0.5) * PI * radius * radius;

    // Calculate perimeter of the semicircle
    perimeter = (PI * radius) + (2 * radius);

    // Print the calculated area and perimeter
    printf("Area of Semicircle = %.2f\n", area);
    printf("Perimeter of Semicircle = %.2f\n", perimeter);

    return 0;
}
