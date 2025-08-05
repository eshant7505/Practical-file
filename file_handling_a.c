//write operation
#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100];

    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    printf("Enter data to write into the file:\n");
    fgets(data, sizeof(data), stdin);

    fprintf(filePointer, "%s", data);

    fclose(filePointer);

    printf("Data has been written to the file successfully.\n");

    return 0;
}
