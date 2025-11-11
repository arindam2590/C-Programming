/*
    Program: Add Two Times Using Structures
    Author: Arindam Ghosh

    Description:
    This program takes two time values as input (hours, minutes, and seconds),
    adds them together, and displays the result in proper time format using 
    a structure named `Time`. The program ensures that seconds and minutes 
    are properly normalized — meaning that if seconds exceed 60, they are 
    converted into minutes, and if minutes exceed 60, they are converted 
    into hours.

    How it Works:
    - A structure named `Time` is defined with members: `hours`, `minutes`, and `seconds`.
    - The user inputs two time values.
    - The program adds the corresponding hours, minutes, and seconds.
    - If seconds >= 60, one minute is carried over.
    - If minutes >= 60, one hour is carried over.
    - The result is displayed in standard time format (HH:MM:SS).

    Example:
    Input:
        Enter first time:
        Hours: 2
        Minutes: 45
        Seconds: 50
        Enter second time:
        Hours: 1
        Minutes: 30
        Seconds: 25

    Output:
        Sum of times = 4:16:15
*/

#include <stdio.h>

// Define structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    // Add seconds
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.seconds %= 60;

    // Add hours
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes %= 60;

    return result;
}

int main() {
    struct Time t1, t2, sum;

    // Input first time
    printf("Enter first time:\n");
    printf("Hours: ");
    scanf("%d", &t1.hours);
    printf("Minutes: ");
    scanf("%d", &t1.minutes);
    printf("Seconds: ");
    scanf("%d", &t1.seconds);

    // Input second time
    printf("\nEnter second time:\n");
    printf("Hours: ");
    scanf("%d", &t2.hours);
    printf("Minutes: ");
    scanf("%d", &t2.minutes);
    printf("Seconds: ");
    scanf("%d", &t2.seconds);

    // Add times
    sum = addTime(t1, t2);

    // Display result
    printf("\nSum of times = %d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
