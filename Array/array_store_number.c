/*
    Program: Read and Print Array Elements in Reverse Order
    Author: Arindam Ghosh

    Description:
    This program reads five integer values into an array from the user and then prints them 
    in reverse order. It uses two independent `for` loops — the first one to read the values 
    into the array and the second one to print the values in reverse order.

    Process:
      - Declare an array of size 5 to hold the input values.
      - Use the first loop to take input from the user and store the values in the array.
      - Use the second loop to iterate over the array in reverse order and print the values.

    Example:
      Input: 10 20 30 40 50
      Output: 50 40 30 20 10

    This program demonstrates the use of arrays and basic loop operations in C.
*/

#include <stdio.h>

int main() {
    int arr[5];

    // First loop: Read 5 values from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Second loop: Print values in reverse order
    printf("Array elements in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
