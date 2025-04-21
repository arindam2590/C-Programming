/*
    Program: Check for Duplicate Elements in an Array
    Author: Arindam Ghosh

    Description:
    This program checks whether there are any duplicate elements in a given array of integers.
    It reads elements from the user and uses a nested loop to compare each element with all 
    subsequent elements in the array. If a duplicate is found, it is reported to the user.

    Process:
      - The user is prompted to enter the number of elements.
      - The array elements are then read from user input.
      - A nested loop compares each element with the ones that follow it.
      - If any element is found more than once, the program prints that a duplicate exists.
      - If no duplicates are found after scanning the entire array, a message is displayed accordingly.

    Example:
      Input:
        n = 6
        arr = [10, 20, 30, 20, 40, 10]
      Output:
        Duplicate element found: 20
        Duplicate element found: 10

    This program demonstrates basic array traversal and comparison logic in C.
*/

#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    int arr[50];

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Array size must be a positive number.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicate elements using nested loop
    printf("Checking for duplicate elements...\n");
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element found: %d\n", arr[i]);
                found = 1;
                break; // To avoid showing the same duplicate multiple times
            }
        }
    }

    if (!found) {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}
