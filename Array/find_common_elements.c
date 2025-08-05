/*
    Program: Find Common Elements Between Two Arrays
    Author: Arindam Ghosh

    Description:
    This program finds and prints the common elements between two arrays of integers.
    The user provides the sizes and elements of the two arrays. The program compares each
    element of the first array with every element of the second array to find matches.
    It ensures that duplicates in the common output are avoided by marking already matched elements.

    Process:
      - Read sizes and elements of two arrays from the user.
      - Compare elements of the first array with the second using nested loops.
      - If a common element is found and hasn’t been printed before, display it.
      - Optional: Use a temporary array or flag mechanism to prevent duplicate outputs.

    Example:
      Input:
        arr1 = [1, 2, 3, 4]
        arr2 = [3, 4, 5, 6]
      Output:
        Common elements: 3 4

    This program demonstrates nested iteration, comparison logic, and basic duplicate handling in C.
*/

#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int arr1[20], arr2[20];

    // Read size of the first array
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    

    printf("Enter %d element(s) for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read size of the second array
    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    

    printf("Enter %d element(s) for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Array to store common elements (assuming worst case: all elements are common)
    int minSize = (n1 < n2) ? n1 : n2;
    int common[20];
    int commonCount = 0;

    // Find common elements
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if this common element is already recorded
                int alreadyExists = 0;
                for (int k = 0; k < commonCount; k++) {
                    if (common[k] == arr1[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    common[commonCount++] = arr1[i];
                }
                break; // Stop further matching once one match is found
            }
        }
    }

    // Display the result
    if (commonCount > 0) {
        printf("Common elements: ");
        for (i = 0; i < commonCount; i++) {
            printf("%d ", common[i]);
        }
        printf("\n");
    } else {
        printf("No common elements found.\n");
    }

    return 0;
}
