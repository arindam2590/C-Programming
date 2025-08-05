/*
    Program: Merge Two Arrays into a Single Array
    Author: Arindam Ghosh

    Description:
    This program reads two arrays of integers from the user and merges them into a third array.
    The elements of the first array are placed first, followed by the elements of the second array.
    The merged array is then displayed as output.

    Process:
      - The user is prompted to enter the sizes and elements of the two arrays.
      - A third array is declared with enough size to hold both arrays.
      - The program copies all elements from the first array to the merged array.
      - Then it appends all elements of the second array after the first.
      - The merged array is printed.

    Example:
      Input:
        arr1 = [1, 2, 3]
        arr2 = [4, 5, 6]
      Output:
        Merged array: 1 2 3 4 5 6

    This program demonstrates array input, element copying, and array concatenation in C.
*/

#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[20], arr2[20], merged[50];

    // Read size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    // Validate input
    if (n1 < 0) {
        printf("Size must be non-negative.\n");
        return 1;
    }    

    // Read elements of the first array
    printf("Enter %d element(s) for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    // Validate input
    if (n2 < 0) {
        printf("Size must be non-negative.\n");
        return 1;
    }

    // Read elements of the second array
    printf("Enter %d element(s) for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays into a third array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
