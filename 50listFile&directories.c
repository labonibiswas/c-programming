//50. C Program to list all files and sub-directories in a directory

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>


void listFiles(const char *path) {
    DIR *dir = opendir(path);
    if (dir == NULL) {
        printf("Could not open directory %s\n", path);
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        // Skip the '.' and '..' directories
        if (entry->d_name[0] == '.') {
            continue;
        }
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}

int main() {
    char path[100];

    printf("Enter directory path: ");
    fgets(path, sizeof(path), stdin);
    
    // Remove newline character if fgets is used
    path[strcspn(path, "\n")] = 0;

    printf("Listing files and sub-directories in %s:\n", path);
    listFiles(path);

    return 0;
}
