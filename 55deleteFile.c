//55. C program to delete a file

#include <stdio.h>
#include<string.h>

int main() {
    char filename[100];


    printf("Enter the name of the file to delete: ");
    fgets(filename, sizeof(filename), stdin);


    filename[strcspn(filename, "\n")] = 0;

     x
    if (remove(filename) == 0) {
        printf("File %s deleted successfully.\n", filename);
    } else {
        printf("Unable to delete the file %s. Please check if the file exists.\n", filename);
    }

    return 0;
}
