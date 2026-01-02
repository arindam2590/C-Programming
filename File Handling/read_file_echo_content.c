/*
    Program: Read & Echo Text File
    Author: Arindam Ghosh

    Description:
    This program reads a text file and prints its entire contents on the screen
    exactly as it appears in the file. It is a basic file handling program that
    demonstrates how to open a file in read mode, read line by line, and display
    the same text using standard output.

    How it Works:
    - The program takes the input file name/path from the command line.
    - It opens the file in read mode using `fopen()`.
    - It reads the file line by line using `fgets()`.
    - Each line is printed to the screen using `fputs()`.
    - If the file cannot be opened, an error message is displayed.

    Example:
    Input:
        File name: sample.txt
        File contents:
            Hello World
            Welcome to File Handling
    Output:
        Hello World
        Welcome to File Handling
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) { fprintf(stderr, "Usage: %s <input.txt>\n", argv[0]); return 1; }
    FILE *fp = fopen(argv[1], "r");
    if (!fp) { perror("fopen"); return 1; }

    char buf[4096];
    while (fgets(buf, sizeof buf, fp)) fputs(buf, stdout);

    if (ferror(fp)) { perror("read"); fclose(fp); return 1; }
    fclose(fp);
    return 0;
}
