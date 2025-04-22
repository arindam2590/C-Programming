/*
    Program: Count Positive and Negative Numbers in an Array
    Author: Arindam Ghosh

    Description:
    This program reads a set of integers into an array and counts how many of them are 
    positive and how many are negative. Zeros are ignored in the count.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The program then reads each element from the user into an array.
      - It uses a loop to traverse the array, checking each element:
          - If greater than zero, it's counted as positive.
          - If less than zero, it's counted as negative.
      - Finally, the counts of positive and negative numbers are displayed.

    Example:
      Input:
        n = 6
        arr = [10, -2, 0, -5, 7, 3]
      Output:
        Positive numbers: 3
        Negative numbers: 2

    This program demonstrates array traversal and conditional logic in C.
*/

#include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0;
    int arr[20];

    // Prompt user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Array size must be a positive number.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive and negative numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
    }

    // Display the result
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);

    return 0;
}
