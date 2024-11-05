/*
    Program: Convert Celsius to Fahrenheit
    Author: Arindam Ghosh

    This program converts a temperature value given in Celsius to its equivalent
    Fahrenheit value using the standard conversion formula. Temperature conversion
    between Celsius and Fahrenheit is often used in science, engineering, and daily life.

    Conversion Formula:
    Fahrenheit = (Celsius * 9/5) + 32

    In this program:
    - The user is prompted to enter a temperature in Celsius.
    - The program reads the input value.
    - It applies the conversion formula to calculate the temperature in Fahrenheit.
    - Finally, the program displays the equivalent temperature in Fahrenheit.

    Example:
    If the user inputs a temperature of 25 degrees Celsius, the program will output:
    The equivalent Fahrenheit temperature is 77.00°F.

    This program provides a straightforward way to convert temperature values between
    Celsius and Fahrenheit, useful for many practical applications.
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print the Fahrenheit equivalent
    printf("The equivalent Fahrenheit temperature is: %.2f F\n", fahrenheit);

    return 0;
}
