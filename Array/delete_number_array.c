/*
    Program: Delete an Element from an Array
    Author: Arindam Ghosh

    Description:
    This program deletes a specific element from an array of integers.
    The user provides the size of the array, the elements of the array, and the element to be deleted.
    If the element is found, it is removed by shifting the subsequent elements to the left.
    The new array is displayed after deletion.

    Process:
      - Prompt the user to enter the number of elements and the elements themselves.
      - Ask the user for the element to be deleted.
      - Traverse the array to find the first occurrence of the element.
      - If found, shift all elements after the deleted element one position to the left.
      - Print the updated array. If the element is not found, display an appropriate message.

    Example:
      Input:
        n = 5
        arr = [10, 20, 30, 40, 50]
        delete = 30
      Output:
        Array after deleting 30: 10 20 40 50

    This program demonstrates the use of arrays, linear search, and element shifting in C.
*/

#include <stdio.h>

int main() {
    int n, i, del, pos = -1;
    int arr[20];

    // Prompt user for the number of elements
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

    // Ask the user which element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &del);

    // Search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == del) {
            pos = i;
            break;
        }
    }

    // If element found, perform deletion
    if (pos != -1) {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        n--; // Decrease size of array
        printf("Array after deleting %d:\n", del);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", del);
    }

    return 0;
}
