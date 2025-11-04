/*
    Program: Sum All Elements of a Float Array Using a Float Pointer
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to use a float pointer to sum all 
    elements of a float array. Instead of using array indexing, the 
    pointer is used to traverse the array and access each element.

    How it Works:
    - The user enters the number of elements in the array.
    - The program reads the float elements into an array.
    - A pointer to float is initialized to the base address of the array.
    - Using pointer arithmetic, the program traverses the array and 
      adds each element to a running sum.
    - Finally, the sum of all elements is displayed.

    Example:
    Input:
        Enter number of elements: 4
        Enter 4 float numbers: 1.1 2.2 3.3 4.4
    Output:
        Sum of float array elements: 11.00
*/

#include <stdio.h>

int main() {
    int n, i;
    float arr[100];
    float *ptr, sum = 0.0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d float numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Initialize pointer to array
    ptr = arr;

    // Calculate sum using pointer
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    // Display result
    printf("Sum of float array elements: %.2f\n", sum);

    return 0;
}
