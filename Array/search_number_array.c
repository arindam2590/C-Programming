/*
    Program: Search for a Specific Numeric Element in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integers into an array and searches for a specific
    numeric element provided by the user. It performs a linear search to check if the 
    element exists in the array and also prints its index position(s) if found.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The array elements are read from user input.
      - The user is asked to enter the number to be searched.
      - A loop iterates through the array comparing each element with the target.
      - If the element is found, its index is displayed.
      - If the element is not found, an appropriate message is shown.

    Example:
      Input:
        n = 5
        arr = [10, 20, 30, 40, 50]
        target = 30
      Output:
        Element 30 found at index 2

    This program demonstrates linear search using arrays and conditional logic in C.
*/

#include <stdio.h>

int main() {
    int n, i, target, found = 0;
    int arr[50];

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be a positive number.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the element to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            // Uncomment the next line if you want to stop after the first match
            // break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
