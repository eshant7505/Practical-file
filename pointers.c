#include <stdio.h>

// Function declarations for arithmetic operations
typedef int (*ArithmeticOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Function to perform arithmetic operation using function pointer
int performOperation(int a, int b, ArithmeticOperation operation) {
    return operation(a, b);
}

int main() {
    int num1, num2, result;
    
    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function pointers for different arithmetic operations
    ArithmeticOperation addPtr = add;
    ArithmeticOperation subtractPtr = subtract;
    ArithmeticOperation multiplyPtr = multiply;
    ArithmeticOperation dividePtr = divide;

    // Perform addition
    result = performOperation(num1, num2, addPtr);
    printf("Addition: %d\n", result);

    // Perform subtraction
    result = performOperation(num1, num2, subtractPtr);
    printf("Subtraction: %d\n", result);

    // Perform multiplication
    result = performOperation(num1, num2, multiplyPtr);
    printf("Multiplication: %d\n", result);

    // Perform division
    result = performOperation(num1, num2, dividePtr);
    printf("Division: %d\n", result);

    return 0;
}
