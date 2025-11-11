/*
    Program: Add N Distances in Feet-Inch System Using Structures
    Author: Arindam Ghosh

    Description:
    This program adds N distances provided in the feet-inch system using structures.
    Each distance is represented as a structure containing two members: feet and inches.
    The program calculates the total sum of all distances entered by the user while 
    ensuring that inches are properly converted into feet when they exceed 12.

    How it Works:
    - A structure named `Distance` is defined with two members: `feet` and `inch`.
    - The user enters the number of distances (N).
    - Each distance is read from the user and stored in an array of structures.
    - The program iterates through all distances to sum up the feet and inches.
    - If the total inches are 12 or more, they are converted into feet.
    - The final total distance is displayed in feet and inches format.

    Example:
    Input:
        Enter number of distances: 3
        Enter details for distance 1:
        Feet: 5
        Inches: 8
        Enter details for distance 2:
        Feet: 3
        Inches: 11
        Enter details for distance 3:
        Feet: 6
        Inches: 4

    Output:
        Total Distance = 16 feet 11 inches
*/

#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d[100], total = {0, 0};
    int n, i;

    // Input number of distances
    printf("Enter number of distances: ");
    scanf("%d", &n);

    // Input distances
    for (i = 0; i < n; i++) {
        printf("\nEnter details for distance %d:\n", i + 1);
        printf("Feet: ");
        scanf("%d", &d[i].feet);
        printf("Inches: ");
        scanf("%d", &d[i].inch);
    }

    // Calculate total distance
    for (i = 0; i < n; i++) {
        total.feet += d[i].feet;
        total.inch += d[i].inch;
    }

    // Convert inches to feet if 12 or more
    total.feet += total.inch / 12;
    total.inch = total.inch % 12;

    // Display result
    printf("\nTotal Distance = %d feet %d inches\n", total.feet, total.inch);

    return 0;
}
