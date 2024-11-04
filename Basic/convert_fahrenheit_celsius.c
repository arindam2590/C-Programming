/*
    Program: Convert Fahrenheit to Celsius
    Author: Arindam Ghosh

    This program converts a temperature given in Fahrenheit to its equivalent
    value in Celsius. The conversion formula used is:
    
    Celsius = (Fahrenheit - 32) * 5 / 9

    In this program:
    - The user is prompted to enter a temperature in Fahrenheit.
    - The program reads the input value.
    - It applies the conversion formula to calculate the temperature in Celsius.
    - Finally, the program displays the converted temperature.

    Example:
    If the user inputs a temperature of 100°F, the program will output:
    100°F is equivalent to 37.78°C.

    This program helps in understanding the basic concept of temperature conversion
    and utilizes simple arithmetic operations.
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the converted temperature
    printf("%.2f F is equivalent to %.2f C.\n", fahrenheit, celsius);

    return 0;
}
