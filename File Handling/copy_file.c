/*
    Program: Copy a Text File
    Author: Arindam Ghosh

    Description:
    This program copies the contents of one text file into another file.
    It demonstrates how to read from a source file and write the same data
    into a destination file using buffered file operations.

    How it Works:
    - The program takes source and destination file names from the command line.
    - It opens the source file in read mode and the destination file in write mode.
    - It reads chunks of data from the source file using `fread()`.
    - It writes those chunks into the destination file using `fwrite()`.
    - The destination file becomes an exact copy of the source file.

    Example:
    Input:
        Source file: source.txt
        Destination file: copy.txt
    Output:
        copy.txt contains the same text as source.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) { fprintf(stderr, "Usage: %s <src> <dest>\n", argv[0]); return 1; }
    FILE *in = fopen(argv[1], "rb"); if (!in) { perror("fopen src"); return 1; }
    FILE *out = fopen(argv[2], "wb"); if (!out) { perror("fopen dest"); fclose(in); return 1; }

    char buf[8192];
    size_t n;
    while ((n = fread(buf, 1, sizeof buf, in)) > 0) {
        if (fwrite(buf, 1, n, out) != n) { perror("fwrite"); fclose(in); fclose(out); return 1; }
    }
    if (ferror(in)) { perror("fread"); fclose(in); fclose(out); return 1; }

    fclose(in); fclose(out);
    return 0;
}
