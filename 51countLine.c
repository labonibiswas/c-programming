//51. C Program to count number of lines in a file

#include <stdio.h>
#include <string.h>

int countLines(FILE *file) {
    int count = 0;
    char ch;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Increment count when newline character is encountered
        if (ch == '\n') {
            count++;
        }
    }

    return count;
}

int main() {
    char filename[100];
    FILE *file;

    // Ask user to input the file name
    printf("Enter the name of the file: ");
    fgets(filename, sizeof(filename), stdin);
    
    // Remove newline character if fgets is used
    filename[strcspn(filename, "\n")] = 0;

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Count and print the number of lines in the file
    int lines = countLines(file);
    printf("The file %s contains %d lines.\n", filename, lines);

    // Close the file
    fclose(file);

    return 0;
}
