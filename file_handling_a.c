//write operation
#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100];

    // Open file in write mode
    filePointer = fopen("example.txt", "w");

    // Check if the file is successfully opened
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Input data to be written into the file
    printf("Enter data to write into the file:\n");
    fgets(data, sizeof(data), stdin);

    // Write data to the file
    fprintf(filePointer, "%s", data);

    // Close the file
    fclose(filePointer);

    printf("Data has been written to the file successfully.\n");

    return 0;
}
