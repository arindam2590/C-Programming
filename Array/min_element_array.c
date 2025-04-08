/*
    Program: Find the Minimum Element in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integers into an array and finds the minimum element among them.
    It uses a loop to traverse through each element of the array, comparing each value to 
    the current minimum and updating the minimum value when a smaller element is found.

    Process:
      - The user is prompted to enter the number of elements (n).
      - The user inputs n integers which are stored in an array.
      - The first element of the array is assumed to be the minimum initially.
      - A loop then compares each element with the current minimum and updates it if a smaller value is found.
      - The final minimum value is displayed to the user.

    Example:
      Input:
        n = 5
        arr = [23, 15, 9, 42, 31]
      Output:
        Minimum element in the array = 9

    This program demonstrates the use of arrays, conditional logic, and iteration in C.
*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[20];

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be greater than zero.\n");
        return 1;
    }

    // Read array elements from the user
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min with the first element
    int min = arr[0];

    // Loop through the array to find the minimum
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the minimum element
    printf("Minimum element in the array = %d\n", min);

    return 0;
}
