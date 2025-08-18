/*
    Program: Traverse and Print All Elements of an Integer Array Using Pointers
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to use a pointer to traverse and print 
    all elements of an integer array. Instead of using traditional array 
    indexing, the program accesses each element using pointer arithmetic.

    How it Works:
    - The user is prompted to enter the number of elements in the array.
    - The program then reads the elements from the user and stores them in the array.
    - A pointer is initialized to point to the first element of the array.
    - Using a loop, the program traverses the array by incrementing the pointer, 
      printing each element until the end of the array is reached.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 integers: 10 20 30 40 50
    Output:
        Array elements are: 10 20 30 40 50
*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the array
    ptr = arr;

    // Print elements using pointer
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
