//read operations
#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[50];
    char data[1000];

    printf("Enter the name of the file to read: ");
    scanf("%s", fileName);

    filePointer = fopen(fileName, "r");

    if (filePointer == NULL) {
        printf("Unable to open the file. Please check the file name and try again.\n");
        return 1; // Exit the program with an error code
    }

    while (fgets(data, sizeof(data), filePointer) != NULL) {
        // Print the data to the console
        printf("%s", data);
    }

    fclose(filePointer);

    return 0; // Exit the program successfully
}
