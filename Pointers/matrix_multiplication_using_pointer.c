/*
    Program: Find the Largest and Smallest Numbers in an Array Using Pointers
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to find the largest and smallest numbers 
    in an integer array using pointers. Instead of directly using array 
    indexing, pointers are used to traverse and compare the elements.

    How it Works:
    - The user is prompted to enter the number of elements in the array.
    - The array elements are read from the user.
    - A pointer is initialized to point to the first element of the array.
    - The pointer traverses the array, comparing each element to find:
        - The largest number.
        - The smallest number.
    - The results are then displayed.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 integers: 10 4 25 3 18
    Output:
        Largest number: 25
        Smallest number: 3
*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    int largest, smallest;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer
    ptr = arr;

    // Initialize largest and smallest
    largest = smallest = *ptr;

    // Traverse the array using pointer
    for (i = 0; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    // Display results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
