/*
    Program: Reverse the Contents of an Array Using Pointer Arithmetic
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to reverse the contents of an integer 
    array using pointer arithmetic. Instead of using array indexing, 
    pointers are used to swap elements from the start and end of the array.

    How it Works:
    - The user is prompted to enter the number of elements in the array.
    - The program reads the elements and stores them in the array.
    - Two pointers are initialized:
        - One pointing to the first element of the array.
        - Another pointing to the last element of the array.
    - Using a loop, the program swaps the values pointed to by the two 
      pointers and then moves them towards each other until they meet 
      or cross.
    - The reversed array is then displayed.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 integers: 1 2 3 4 5
    Output:
        Reversed array: 5 4 3 2 1
*/

#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];
    int *start, *end;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointers
    start = arr;          // points to the first element
    end = arr + n - 1;    // points to the last element

    // Reverse the array using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    // Print reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
