/*
    Program: Calculate Sum and Average of Array Elements Using Pointers
    Author: Arindam Ghosh

    Description:
    This program reads 'n' integers from the user, stores them in an array, 
    and uses pointers to calculate the sum and average of the elements. 
    The program demonstrates pointer arithmetic by accessing array elements 
    without using traditional indexing.

    How it Works:
    - The user is prompted to enter the number of elements (n).
    - The program reads 'n' integer values into an array.
    - A pointer variable is used to traverse the array and calculate the sum.
    - The average is computed by dividing the sum by 'n'.
    - The sum and average are then displayed to the user.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 integers: 10 20 30 40 50
    Output:
        Sum = 150
        Average = 30.00
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    int arr[100];
    int *ptr;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assign pointer to the array
    ptr = arr;

    // Calculate sum using pointer
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    // Calculate average
    average = (float)sum / n;

    // Output results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
