#include <stdio.h>

int main() {
    float num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
