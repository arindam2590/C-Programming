/*
    Program: Calculate the Sum of All Elements in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integers into an array and calculates the sum of all 
    the elements in that array. The program uses a single loop to iterate through 
    each element of the array and accumulates the total sum.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The array is filled with user-input values.
      - A loop runs from index 0 to n-1, adding each value to a `sum` variable.
      - The final result (sum of all elements) is displayed at the end.

    Example:
      Input:
        n = 5
        arr = [10, 20, 30, 40, 50]
      Output:
        Sum of array elements = 150

    This program demonstrates basic array manipulation, user input handling, and summation using loops in C.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[20];

    // Prompt the user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate array size
    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    // Read array elements from user
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
