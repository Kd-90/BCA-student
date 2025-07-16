#include <iostream> // Required for input/output operations

int main() {
    int a, b;       // Declare two integer variables
    int temp;       // Declare a temporary variable for swapping

    // Prompt the user to enter the first number
    std::cout << "Enter first number (a): ";
    std::cin >> a;

    // Prompt the user to enter the second number
    std::cout << "Enter second number (b): ";
    std::cin >> b;

    std::cout << "\nBefore swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Swap using a temporary variable
    temp = a; // Store the value of 'a' in 'temp'
    a = b;    // Assign the value of 'b' to 'a'
    b = temp; // Assign the original value of 'a' (stored in 'temp') to 'b'

    std::cout << "\nAfter swapping (using a temporary variable):" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // --- Optional: Swap without a temporary variable (using arithmetic operations) ---
    // This method works only for numeric types and can lead to overflow issues if numbers are very large.
    // It's generally less readable and less safe than using a temp variable.
    
    // Re-initialize for demonstration
    std::cout << "\n--- Demonstrating swap without a temporary variable ---" << std::endl;
    int x, y;
    std::cout << "Enter first number (x) for re-demonstration: ";
    std::cin >> x;
    std::cout << "Enter second number (y) for re-demonstration: ";
    std::cin >> y;

    std::cout << "Before swapping (x, y): x = " << x << ", y = " << y << std::endl;
    x = x + y; // x now holds the sum of original x and y
    y = x - y; // y now holds (original x + original y) - original y = original x
    x = x - y; // x now holds (original x + original y) - original x = original y
    std::cout << "After swapping (x, y): x = " << x << ", y = " << y << std::endl;

    return 0; // Indicate successful execution
}
