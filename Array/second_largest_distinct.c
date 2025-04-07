/*
    Program: Find the Second Largest Distinct Element in an Array
    Author: Arindam Ghosh

    Description:
    This program takes an array of positive integers and finds the second largest distinct 
    element within it. It works by traversing the array once to determine the largest and 
    second largest elements while ensuring they are distinct.

    Process:
      - The user is prompted to enter the number of elements in the array.
      - The array elements are read from the user.
      - The program initializes two variables:
          1. `first` to store the largest element.
          2. `second` to store the second largest distinct element.
      - As it traverses the array:
          - If the current element is greater than `first`, `second` is updated to `first`, and `first` is updated.
          - Else if the current element is distinct and greater than `second`, update `second`.
      - If no second largest is found (e.g., all elements are the same), it reports accordingly.

    Example:
      Input:
        n = 6
        arr = [10, 20, 20, 5, 15, 30]
      Output:
        Second largest distinct element is: 20

    This program demonstrates the use of arrays, conditionals, and single-pass logic in C.
*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input validation
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d positive integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = -1, second = -1;

    // Find the largest and second largest distinct elements
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1) {
        printf("There is no second largest distinct element in the array.\n");
    } else {
        printf("Second largest distinct element is: %d\n", second);
    }

    return 0;
}
