/*
    Program: Count Lines, Words, and Characters in a Text File
    Author: Arindam Ghosh

    Description:
    This program counts the total number of lines, words, and characters
    present in a given text file. It is useful for basic text analysis and
    demonstrates character-by-character file reading and classification.

    How it Works:
    - The program takes the input file name/path from the command line.
    - It opens the file in read mode.
    - It reads the file character by character using `fgetc()`.
    - It increments:
        - Line count when a '\n' is encountered.
        - Character count for every character read.
        - Word count when a new word begins (transition from space to non-space).
    - Finally, it prints the total counts.

    Example:
    Input:
        File contents:
            Hello World
            File Handling
    Output:
        Lines: 2, Words: 4, Chars: 25
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) { fprintf(stderr, "Usage: %s <input.txt>\n", argv[0]); return 1; }
    FILE *fp = fopen(argv[1], "r");
    if (!fp) { perror("fopen"); return 1; }

    int c, prev = '\n', in_word = 0;
    long lines = 0, words = 0, chars = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) in_word = 0;
        else if (!in_word) { in_word = 1; words++; }
        prev = c;
    }
    if (ferror(fp)) { perror("fgetc"); fclose(fp); return 1; }
    printf("Lines: %ld, Words: %ld, Chars: %ld\n", lines+1, words, chars);
    fclose(fp);
    return 0;
}
