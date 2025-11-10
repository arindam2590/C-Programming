/*
    Program: Store Information of Students Using Structure
    Author: Arindam Ghosh

    Description:
    This program demonstrates how to use a structure in C to store and display 
    information of multiple students. Each student record contains details such 
    as name, roll number, and marks. Structures allow grouping of related data 
    items of different types under a single name, making data management easier.

    How it Works:
    - A structure named `Student` is defined with members: `name`, `roll`, and `marks`.
    - The user is prompted to enter the number of students.
    - Using a loop, the program reads and stores information for each student.
    - The stored information is then displayed in a formatted manner.

    Example:
    Input:
        Enter number of students: 2
        Enter details for student 1:
        Name: Alice
        Roll Number: 101
        Marks: 88.5
        Enter details for student 2:
        Name: Bob
        Roll Number: 102
        Marks: 92.0

    Output:
        Student Details:
        Name: Alice, Roll No: 101, Marks: 88.50
        Name: Bob, Roll No: 102, Marks: 92.00
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;
    
    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline from input buffer

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // Remove newline
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar(); // clear newline for next iteration
    }

    // Print the Students information
    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");
    
    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    
    printf("========================================\n");

    return 0;
}
