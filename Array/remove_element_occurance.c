/*
    Program: Remove All Occurrences of an Element in an Array
    Author: Arindam Ghosh

    Description:
    This program removes all occurrences of a specific element from an integer array.
    The user is prompted to enter the array size, elements, and the element to be removed.
    Every occurrence of the specified element is removed by shifting the following elements to the left.
    The updated array is then displayed.

    Process:
      - Read the number of elements and the array values from the user.
      - Prompt the user for the element to be removed.
      - Traverse the array and shift elements left whenever the target element is found.
      - Reduce the array size each time an element is removed.
      - Print the updated array after all occurrences are removed.

    Example:
      Input:
        n = 7
        arr = [1, 2, 3, 2, 4, 2, 5]
        remove = 2
      Output:
        Array after removing all occurrences of 2: 1 3 4 5

    This program demonstrates array manipulation and element filtering using in-place modification in C.
*/

#include <stdio.h>

int main() {
    int n, i, j, value;
    int arr[20];

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    

    // Read array elements
    printf("Enter %d element(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be removed
    printf("Enter the element to remove: ");
    scanf("%d", &value);

    // Remove all occurrences of the value
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1]; // Shift elements to the left
            }
            n--;  // Reduce size of array
            i--;  // Adjust index to recheck the new element at current position
        }
    }

    // Display the updated array
    printf("Array after removing all occurrences of %d:\n", value);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
