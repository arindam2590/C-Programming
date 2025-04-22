/*
    Program: Calculate the Average of Elements in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integer values into an array and calculates the average of all the elements.
    The average is computed as the sum of all elements divided by the number of elements.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The program reads each element from user input into an array.
      - It calculates the sum of all array elements using a loop.
      - The average is then computed by dividing the sum by the total number of elements.
      - Finally, the average value is displayed.

    Example:
      Input:
        n = 5
        arr = [10, 20, 30, 40, 50]
      Output:
        Average of array elements = 30.00

    This program demonstrates basic array handling, summation, and average calculation using loops in C.
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    int arr[20];


    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Number of elements must be a positive integer.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum during input
    }

    // Calculate average
    average = sum / n;

    // Display result
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
