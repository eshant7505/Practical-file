//Apppend operation
#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }

    printf("Enter data to append to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);

    fclose(file);

    printf("Data appended to the file successfully.\n");

    return 0;
}
