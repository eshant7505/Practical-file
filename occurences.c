#include <stdio.h>
#include <ctype.h>

int count_successive_vowels(char *text) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int successive_vowel_count = 0;

    // Convert the input text to lowercase for case-insensitive comparison
    for (int i = 0; text[i]; i++) {
        text[i] = tolower(text[i]);
    }

    // Check for two successive vowels
    for (int i = 0; text[i + 1]; i++) {
        for (int j = 0; j < 5; j++) {
            if (text[i] == vowels[j] && text[i + 1] == vowels[j]) {
                successive_vowel_count++;
                break;
            }
        }
    }

    return successive_vowel_count;
}

int main() {
    char input_text[] = "such occurrences are ea, ue, io, ou. in";
    int result = count_successive_vowels(input_text);
    printf("Number of occurrences of two vowels in succession: %d\n", result);

    return 0;
}
