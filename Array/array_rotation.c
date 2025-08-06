/*
    Program: Array Rotation
    Author: Arindam Ghosh

    Description:
    This program rotates the elements of an array to the left by a specified number of positions.
    The user is prompted to enter the number of elements, the elements of the array, and the number of positions to rotate.
    The program then performs the rotation and displays the resulting array.

    Process:
      - Prompt the user to enter the number of elements in the array.
      - Read the elements of the array from the user.
      - Prompt the user to enter the number of positions to rotate.
      - Use a loop to perform the left rotation.
      - Print the rotated array.

    Example:
      Input:
        Number of elements: 5
        Array: 1 2 3 4 5
        Number of positions to rotate: 2
      Output:
        Rotated array: 3 4 5 1 2

    This program demonstrates array manipulation and rotation in C.
*/

#include <stdio.h>

int main() {
    int n, i, j, d, temp;
    int arr[100];

    // Prompt user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements of the array
    printf("Enter %d element(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt user for number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);
    d = d % n; // Handle cases where d >= n

    // Perform left rotation d times
    for (i = 0; i < d; i++) {
        temp = arr[0];
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    // Display rotated array
    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
