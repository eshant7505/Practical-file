//program that reads n name and corresponding n addresses
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to hold name and address
struct Person {
    char name[100];
    char address[100];
};

// Function to compare two names for qsort
int compareNames(const void *a, const void *b) {
    return strcmp(((struct Person *)a)->name, ((struct Person *)b)->name);
}

int main() {
    int n;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Person *people = (struct Person *)malloc(n * sizeof(struct Person));

    // Input names and addresses
    for (int i = 0; i < n; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Enter address for person %d: ", i + 1);
        scanf("%s", people[i].address);
    }

    // Sort the array of structures based on names
    qsort(people, n, sizeof(struct Person), compareNames);

    // Print the sorted names and addresses
    printf("\nSorted Names and Addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %-20s Address: %s\n", people[i].name, people[i].address);
    }

    // Free the allocated memory
    free(people);

    return 0;
}
