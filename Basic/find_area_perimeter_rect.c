/*
    Program: Calculate Area and Perimeter of a Rectangle
    Author: Arindam Ghosh

    This program calculates both the area and perimeter of a rectangle
    based on its length and width, which are provided by the user.

    Formulas:
    - Area = Length * Width
    - Perimeter = 2 * (Length + Width)

    In this program:
    - The user is prompted to enter two values:
      1. Length of the rectangle
      2. Width of the rectangle
    - The program calculates the area and perimeter using the formulas above.
    - Finally, it displays the calculated area and perimeter.

    Example:
    If the user inputs:
      Length = 5, Width = 3
    The program will output:
      Area of Rectangle = 15
      Perimeter of Rectangle = 16

    This program demonstrates basic arithmetic calculations and
    helps users understand geometric properties of rectangles.
*/

#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length of the rectangle from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Input width of the rectangle from the user
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area of the rectangle
    area = length * width;

    // Calculate perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Print the calculated area and perimeter
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}
