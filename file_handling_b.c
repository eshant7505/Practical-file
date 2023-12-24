//read operations
#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[50];
    char data[1000];

    // Get the file name from the user
    printf("Enter the name of the file to read: ");
    scanf("%s", fileName);

    // Open the file in read mode
    filePointer = fopen(fileName, "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Unable to open the file. Please check the file name and try again.\n");
        return 1; // Exit the program with an error code
    }

    // Read data from the file until the end is reached
    while (fgets(data, sizeof(data), filePointer) != NULL) {
        // Print the data to the console
        printf("%s", data);
    }

    // Close the file
    fclose(filePointer);

    return 0; // Exit the program successfully
}
