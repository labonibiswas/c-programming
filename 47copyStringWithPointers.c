//47. Write a program to copy one string to another using pointer.


#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;  
        source++;   
        destination++;  
    }
    *destination = '\0'; 
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  

    copyString(source, destination);

    printf("Source String: %s", source);
    printf("Destination String: %s", destination);

    return 0;
}
