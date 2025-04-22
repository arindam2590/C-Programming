/*
    Program: Remove Duplicate Elements from an Array
    Author: Arindam Ghosh

    Description:
    This program removes duplicate elements from a given array of integers.
    It first reads the array elements from the user and then checks for duplicate values.
    When duplicates are found, the program shifts the remaining elements left to overwrite the duplicate.
    The final array contains only distinct elements, and its updated size is displayed.

    Process:
      - The user is prompted to enter the number of elements and the array elements.
      - A nested loop checks each element against all elements that follow.
      - When a duplicate is found:
          - All elements after it are shifted left by one position.
          - The size of the array is reduced.
      - The array with unique elements is printed at the end.

    Example:
      Input:
        n = 7
        arr = [1, 2, 3, 2, 4, 1, 5]
      Output:
        Array after removing duplicates: 1 2 3 4 5

    This program demonstrates array traversal, element comparison, and in-place modification in C.
*/

#include <stdio.h>

int main() {
    int n, i, j, k;
    int arr[20];

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicate elements
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite duplicate
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce array size
            } else {
                j++;
            }
        }
    }

    // Print updated array
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
