//52. C Program to print contents of file

#include <stdio.h>
#include<string.h>

void printFileContents(FILE *file) {
    char ch;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print the character to standard output
    }
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

    // Print the contents of the file
    printf("\nContents of the file %s:\n", filename);
    printFileContents(file);

    // Close the file
    fclose(file);

    return 0;
}
