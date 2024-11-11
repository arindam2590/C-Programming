/*
    Program: Calculate Perimeter and Area of a Trapezium
    Author: Arindam Ghosh

    This program calculates the perimeter and area of a trapezium based on its four sides 
    and the height, which are provided by the user.

    A trapezium (also known as a trapezoid in some regions) is a quadrilateral with one pair of 
    parallel sides. In this program:
    - The user provides the lengths of the two parallel sides (base1 and base2),
      the lengths of the other two sides (side1 and side2), and the height of the trapezium.

    Formulas:
    - Area of a Trapezium = (1/2) * (Base1 + Base2) * Height
    - Perimeter of a Trapezium = Base1 + Base2 + Side1 + Side2

    Example:
    If the user inputs:
      Base1 = 5, Base2 = 7, Side1 = 4, Side2 = 3, Height = 6
    The program will output:
      Area of Trapezium = 36.00
      Perimeter of Trapezium = 19.00

    This program demonstrates simple arithmetic operations in C for calculating
    geometric properties of a trapezium.
*/

#include <stdio.h>

int main() {
    float base1, base2, side1, side2, height, area, perimeter;

    // Input the lengths of the two parallel sides of the trapezium
    printf("Enter the length of the first parallel side (Base1): ");
    scanf("%f", &base1);
    printf("Enter the length of the second parallel side (Base2): ");
    scanf("%f", &base2);

    // Input the lengths of the other two sides of the trapezium
    printf("Enter the length of the first non-parallel side (Side1): ");
    scanf("%f", &side1);
    printf("Enter the length of the second non-parallel side (Side2): ");
    scanf("%f", &side2);

    // Input the height of the trapezium
    printf("Enter the height of the trapezium: ");
    scanf("%f", &height);

    // Calculate the area of the trapezium
    area = 0.5 * (base1 + base2) * height;

    // Calculate the perimeter of the trapezium
    perimeter = base1 + base2 + side1 + side2;

    // Print the calculated area and perimeter
    printf("Area of Trapezium = %.2f\n", area);
    printf("Perimeter of Trapezium = %.2f\n", perimeter);

    return 0;
}
