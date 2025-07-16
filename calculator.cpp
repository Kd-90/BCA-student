#include "calculator.h" // Include the header file

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    // Implement error handling for division by zero
    if (b == 0) {
        // You might want to throw an exception or return a special value
        // For simplicity, we'll print an error and return 0.0
        // In a real application, more robust error handling is needed.
        return 0.0; // Or indicate an error
    }
    return static_cast<double>(a) / b; // Cast to double for floating-point division
}
