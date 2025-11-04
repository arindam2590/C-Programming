/*
    Program: Print Addresses of All Elements in an Array Using Pointers
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to print the memory addresses of all 
    elements in an integer array using pointers. It shows how arrays 
    and pointers are closely related in C.

    How it Works:
    - The user enters the number of elements in the array.
    - The program takes input for all array elements.
    - A pointer is initialized to the base address of the array.
    - Using pointer arithmetic, the program traverses the array and 
      prints the address of each element.
    - The `%p` format specifier is used to display addresses.

    Example:
    Input:
        Enter number of elements: 3
        Enter 3 integers: 10 20 30
    Output:
        Address of element 0: 0x7ffcac1a40
        Address of element 1: 0x7ffcac1a44
        Address of element 2: 0x7ffcac1a48
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

    // Initialize pointer to array
    ptr = arr;

    // Print addresses of all elements
    printf("Addresses of array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Address of element %d: %p\n", i, (ptr + i));
    }

    return 0;
}
