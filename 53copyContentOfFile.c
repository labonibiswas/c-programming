//53. C Program to copy contents of one file to another file

#include <stdio.h>
#include<string.h>

void copyFileContents(FILE *source, FILE *destination) {
    char ch;

    // Read from source file and write to destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);  // Write each character to destination file
    }
}

int main() {
    char sourceFilename[100], destFilename[100];
    FILE *sourceFile, *destFile;

    // Ask user for source and destination file names
    printf("Enter the name of the source file: ");
    fgets(sourceFilename, sizeof(sourceFilename), stdin);
    sourceFilename[strcspn(sourceFilename, "\n")] = 0;  // Remove newline character

    printf("Enter the name of the destination file: ");
    fgets(destFilename, sizeof(destFilename), stdin);
    destFilename[strcspn(destFilename, "\n")] = 0;  // Remove newline character

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents from source file to destination file
    copyFileContents(sourceFile, destFile);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Contents of file %s copied to file %s successfully.\n", sourceFilename, destFilename);

    return 0;
}
