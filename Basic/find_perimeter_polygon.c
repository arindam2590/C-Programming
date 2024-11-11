/*
    Program: Calculate Perimeter of a Regular Polygon
    Author: Arindam Ghosh

    This program calculates the perimeter of a regular polygon based on its number of sides 
    and the length of each side, which are provided by the user.

    Formulas:
    - Perimeter = Number of Sides * Length of Each Side

    In this program:
    - The user is prompted to enter two values:
      1. Number of sides of the polygon
      2. Length of each side
    - The program calculates the perimeter by multiplying the number of sides by the length of each side.
    - Finally, it displays the calculated perimeter.

    Example:
    If the user inputs:
      Number of Sides = 6, Length of Each Side = 4
    The program will output:
      Perimeter of Polygon = 24.00

    This program demonstrates simple multiplication operations and can be used to calculate the 
    perimeter of any regular polygon, such as a triangle, square, pentagon, hexagon, etc.
*/

#include <stdio.h>

int main() {
    int numSides;
    float sideLength, perimeter;

    // Input the number of sides of the polygon from the user
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &numSides);

    // Input the length of each side from the user
    printf("Enter the length of each side: ");
    scanf("%f", &sideLength);

    // Calculate perimeter of the polygon
    perimeter = numSides * sideLength;

    // Print the calculated perimeter
    printf("Perimeter of Polygon = %.2f\n", perimeter);

    return 0;
}
