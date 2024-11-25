//54. C Program to merge contents of two files into a third file

#include <stdio.h>
#include<string.h>
void mergeFiles(FILE *file1, FILE *file2, FILE *destination) {
    char ch;

    // Copy contents of first file to destination
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, destination);
    }

    // Copy contents of second file to destination
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    char file1Name[100], file2Name[100], destFileName[100];
    FILE *file1, *file2, *destinationFile;

    // Ask user for the file names
    printf("Enter the name of the first source file: ");
    fgets(file1Name, sizeof(file1Name), stdin);
    file1Name[strcspn(file1Name, "\n")] = 0;  // Remove newline character

    printf("Enter the name of the second source file: ");
    fgets(file2Name, sizeof(file2Name), stdin);
    file2Name[strcspn(file2Name, "\n")] = 0;  // Remove newline character

    printf("Enter the name of the destination file: ");
    fgets(destFileName, sizeof(destFileName), stdin);
    destFileName[strcspn(destFileName, "\n")] = 0;  // Remove newline character

    // Open the first source file in read mode
    file1 = fopen(file1Name, "r");
    if (file1 == NULL) {
        printf("Could not open file %s\n", file1Name);
        return 1;
    }

    // Open the second source file in read mode
    file2 = fopen(file2Name, "r");
    if (file2 == NULL) {
        printf("Could not open file %s\n", file2Name);
        fclose(file1);  // Close the first file
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destFileName, "w");
    if (destinationFile == NULL) {
        printf("Could not open file %s\n", destFileName);
        fclose(file1);  // Close the first file
        fclose(file2);  // Close the second file
        return 1;
    }

    // Merge the contents of both files into the destination file
    mergeFiles(file1, file2, destinationFile);

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(destinationFile);

    printf("Contents of %s and %s have been merged into %s successfully.\n", file1Name, file2Name, destFileName);

    return 0;
}
