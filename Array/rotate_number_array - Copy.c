/*
    Program: Rotate (Shift) Elements in an Array by a Given Number of Places
    Author: Arindam Ghosh

    Description:
    This program shifts the elements of an array to the right by a number of positions specified by the user.
    The rotation is circular, meaning elements shifted off the end are wrapped around to the beginning.

    Process:
      - The user is prompted to enter the number of elements and then the array elements.
      - The user specifies how many positions (1 or 2 or any number less than n) to shift the array.
      - The rotation is performed by shifting elements and wrapping the last elements to the front.
      - The updated array is then displayed.

    Example:
      Input:
        n = 5
        arr = [1, 2, 3, 4, 5]
        shift = 2
      Output:
        Rotated array: 4 5 1 2 3

    This program demonstrates array manipulation, user input handling, and circular right shift logic in C.
*/

#include <stdio.h>

int main() {
    int n, shift;
    int rotated[20], arr[20];

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Array size must be greater than zero.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask how many positions to rotate
    printf("Enter number of positions to rotate (1 to %d): ", n);
    scanf("%d", &shift);

    // Normalize shift if greater than array size
    shift = shift % n;

    // Perform rotation if shift > 0
    if (shift > 0) {
        // Copy last 'shift' elements to beginning
        for (int i = 0; i < shift; i++) {
            rotated[i] = arr[n - shift + i];
        }

        // Copy the remaining elements
        for (int i = shift; i < n; i++) {
            rotated[i] = arr[i - shift];
        }

        // Print the rotated array
        printf("Rotated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", rotated[i]);
        }
        printf("\n");
    } else {
        // If shift is 0, no rotation
        printf("No rotation performed. Array remains the same:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
