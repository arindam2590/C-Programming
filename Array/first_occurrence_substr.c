/*
    Program: Implement strstr() Function with Position Index
    Author: Arindam Ghosh

    Description:
    This program implements a custom version of the `strstr()` function, 
    which returns the first occurrence of a substring (needle) in a main 
    string (haystack) and also prints the position (index) of the first 
    match in the main string. If the substring is not found, it displays 
    an appropriate message.

    How it Works:
    - The program reads two strings from the user: the main string and the substring to find.
    - It loops through the main string character by character.
    - For each position, it compares the substring with the part of the main string starting at that position.
    - If a match is found, it returns a pointer to the starting position and calculates the index by subtracting 
      the base address of the main string from the match address.
    - If no match is found, it returns NULL.
    - The program displays the found substring and its index.

    Example:
    Input:
        Enter main string: hello world
        Enter substring to find: world
    Output:
        Substring found at position (index): 6
        Matched substring: world
*/

#include <stdio.h>

char* my_strstr(const char* haystack, const char* needle) {
    if (!*needle)  // If needle is empty, return haystack
        return (char*)haystack;

    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n)  // Found the complete needle
            return (char*)haystack;

        haystack++;
    }
    return NULL; // Not found
}

int main() {
    char str[200], substr[100];

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter substring to find: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters if present
    for (int i = 0; str[i]; i++)
        if (str[i] == '\n') str[i] = '\0';
    for (int i = 0; substr[i]; i++)
        if (substr[i] == '\n') substr[i] = '\0';

    char* result = my_strstr(str, substr);

    if (result) {
        int index = result - str; // Calculate position index
        printf("Substring found at position (index): %d\n", index);
        printf("Matched substring: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
