/*
    Program: Count the Number of Occurrences of a Specific Element in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integers into an array and then counts how many times
    a specific element (provided by the user) occurs in that array.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The user enters each array element.
      - The user is then asked to enter the number to be searched for.
      - A loop iterates through the array, comparing each element with the target number.
      - A counter is incremented each time the target number is found.
      - The program prints the total number of occurrences.

    Example:
      Input:
        n = 6
        arr = [4, 2, 4, 3, 4, 1]
        target = 4
      Output:
        Element 4 occurs 3 time(s) in the array.

    This program demonstrates basic array traversal, user input handling, and condition checking in C.
*/

#include <stdio.h>

int main() {
    int n, i, target, count = 0;
    int arr[50];

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    // Read elements into the array
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the element to search
    printf("Enter the number to count occurrences of: ");
    scanf("%d", &target);

    // Count occurrences of the target element
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Display the result
    printf("Element %d occurs %d time(s) in the array.\n", target, count);

    return 0;
}
