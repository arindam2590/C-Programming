/*
    Program: Reverse the Digits of a Number Using Recursion
    Author: Arindam Ghosh

    Description:
    This program reverses the digits of a given integer using recursion.
    It employs a recursive helper function to process each digit of the number,
    accumulating the reversed result as it progresses through the digits.

    Process:
      - The user is prompted to enter an integer.
      - A recursive function `reverseRec` is defined that takes two parameters:
          1. The remaining part of the number to be reversed.
          2. The currently accumulated reversed number.
      - In each recursive call, the last digit of the current number is extracted 
        and appended to the reversed number, and the process repeats with the remaining digits.
      - The recursion terminates when the number becomes 0, at which point the accumulated
        reversed number is returned.
      - Finally, the program displays the reversed number.

    Example:
      Input:  12345
      Output: Reversed number of 12345 is 54321

    This program demonstrates the use of recursion, arithmetic operations, and input/output handling in C.
*/

#include <stdio.h>

// Recursive function to reverse the digits of a number.
// 'num' is the part of the number left to process.
// 'rev' is the accumulated reversed number.
int reverseRec(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseRec(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num, reversed;

    // Prompt the user to enter an integer.
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the recursive function with an initial reversed value of 0.
    reversed = reverseRec(num, 0);

    // Display the result.
    printf("Reversed number of %d is %d\n", num, reversed);

    return 0;
}
