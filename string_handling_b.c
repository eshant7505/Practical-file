//string length calculation 
#include <stdio.h>
#include <string.h>

int main() {
    // Declare a string
    char myString[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove the newline character at the end if present
    if (myString[strlen(myString) - 1] == '\n') {
        myString[strlen(myString) - 1] = '\0';
    }

    // Calculate and display the length of the string
    int length = strlen(myString);
    printf("Length of the string: %d\n", length);

    return 0;
}

