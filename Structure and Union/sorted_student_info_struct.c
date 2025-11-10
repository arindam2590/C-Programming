/*
    Program: Store and Sort Student Information by Name Using Structure
    Author: Arindam Ghosh

    Description:
    This program stores the information of multiple students (name, roll number, and marks)
    using structures and sorts them alphabetically by name. It demonstrates how structures
    can be used to represent and organize student data, and how string comparison can be
    applied to sort structures by a specific field (name).

    How it Works:
    - A structure named `Student` is defined with members: `name`, `roll`, and `marks`.
    - The user inputs the number of students and their details.
    - The program uses a simple bubble sort algorithm to sort the students by name 
      using the `strcmp()` function for string comparison.
    - After sorting, the program displays the list of students in alphabetical order.

    Example:
    Input:
        Enter number of students: 3
        Enter details for student 1:
        Name: Charlie
        Roll Number: 103
        Marks: 78.5
        Enter details for student 2:
        Name: Alice
        Roll Number: 101
        Marks: 89.0
        Enter details for student 3:
        Name: Bob
        Roll Number: 102
        Marks: 84.5

    Output:
        Students sorted by name:
        Name: Alice, Roll No: 101, Marks: 89.00
        Name: Bob, Roll No: 102, Marks: 84.50
        Name: Charlie, Roll No: 103, Marks: 78.50
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[100], temp;
    int n, i, j;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline from input buffer

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove newline
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar(); // clear newline for next input
    }

    // Sort students by name using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display sorted list
    printf("\nStudents sorted by name:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
