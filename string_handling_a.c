// checking palidrome or not
#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    // Compare characters from the beginning and end of the string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char inputString[100];

    // Input a string from the user
    printf("Enter a string: ");
    gets(inputString);

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString)) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }

    return 0;
}
