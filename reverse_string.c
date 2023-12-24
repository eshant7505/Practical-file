//reverse string
#include <stdio.h>

// Function to reverse a string
void reverseString(char str[]) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Swap characters from start to end
    int start = 0;
    int end = length - 1;
    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move start and end towards the center
        start++;
        end--;
    }
}

int main() {
    // Maximum length of the input string
    int max_length = 100;
    
    // Input string
    char inputString[max_length];

    printf("Enter a string: ");
    // Read input string from the user
    fgets(inputString, max_length, stdin);

    // Remove the newline character at the end of the input string
    for (int i = 0; i < max_length; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    // Reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}



i
    
