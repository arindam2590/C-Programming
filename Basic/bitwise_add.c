#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        // Carry is calculated by ANDing the bits of a and b
        int carry = a & b;

        // Sum is calculated using XOR, which adds bits without considering the carry
        a = a ^ b;

        // Carry is shifted left and added to a in the next iteration
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Call the bitwise addition function
    int sum = add(num1, num2);

    // Print the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
