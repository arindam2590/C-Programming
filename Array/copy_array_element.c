/*
    Program: Copy Elements of One Array to Another
    Author: Arindam Ghosh

    Description:
    This program copies all elements from one array (source) to another array (destination).
    The user is prompted to enter the number of elements and the elements of the source array.
    The program then copies each element from the source array to the destination array using a loop.
    Finally, it displays the contents of both arrays to verify the copy operation.

    Process:
      - Prompt the user to enter the number of elements in the array.
      - Read the elements of the source array from the user.
      - Use a loop to copy each element from the source array to the destination array.
      - Print both the source and destination arrays.

    Example:
      Input:
        Number of elements: 5
        Source array: 10 20 30 40 50
      Output:
        Source array: 10 20 30 40 50
        Copied array: 10 20 30 40 50

    This program demonstrates basic array manipulation and copying in C.
*/

#include <stdio.h>

int main() {
    int n, i;
    int source[100], dest[100];

    // Prompt user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements of source array
    printf("Enter %d element(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    // Copy elements from source to destination
    for (i = 0; i < n; i++) {
        dest[i] = source[i];
    }

    // Display both arrays
    printf("Source array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }
    printf("\nCopied array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
