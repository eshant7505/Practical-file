#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    INTEGER,
    FLOAT,
    CHARACTER,
    STRING
} DataType;


typedef union {
    int intData;
    float floatData;
    char charData;
    char* strData;
} DataValue;


typedef struct {
    DataType type;
    DataValue value;
} DataContainer;

void setData(DataContainer* container, DataType type, void* data) {
    container->type = type;

    switch (type) {
        case INTEGER:
            container->value.intData = *((int*)data);
            break;
        case FLOAT:
            container->value.floatData = *((float*)data);
            break;
        case CHARACTER:
            container->value.charData = *((char*)data);
            break;
        case STRING:
            container->value.strData = strdup((char*)data);
            break;
        default:
            printf("Invalid data type\n");
            exit(EXIT_FAILURE);
    }
}

void getData(DataContainer* container, void* output) {
    if (container->type == STRING) {
        // For string type, copy the string to the output
        strcpy((char*)output, container->value.strData);
    } else {
        // For other types, directly copy the data
        memcpy(output, &container->value, sizeof(DataValue));
    }
}

// Function to free memory allocated for string data
void freeStringData(DataContainer* container) {
    if (container->type == STRING) {
        free(container->value.strData);
    }
}

// Example usage of the generic data container
int main() {
    DataContainer container;

    int intValue = 42;
    setData(&container, INTEGER, &intValue);

    int retrievedIntValue;
    getData(&container, &retrievedIntValue);
    printf("Retrieved Integer: %d\n", retrievedIntValue);

    char stringValue[] = "Hello, World!";
    setData(&container, STRING, stringValue);

    char retrievedStringValue[50];
    getData(&container, retrievedStringValue);
    printf("Retrieved String: %s\n", retrievedStringValue);

    freeStringData(&container);

    return 0;
}
