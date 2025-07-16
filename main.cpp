#include <iostream> // For input/output
#include "calculator.h" // Include our custom header file

int main() {
    int num1, num2;
    int choice;
    double result; // Use double for result to accommodate division

    do {
        // Display menu
        std::cout << "\n--- Simple Calculator Menu ---" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            break; // Exit the loop
        }

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                    break;
                case 2:
                    result = subtract(num1, num2);
                    std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                    break;
                case 3:
                    result = multiply(num1, num2);
                    std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                    break;
                case 4:
                    if (num2 == 0) {
                        std::cout << "Error: Division by zero is not allowed." << std::endl;
                    } else {
                        result = divide(num1, num2);
                        std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                    }
                    break;
                default:
                    // This case should ideally not be reached due to the outer if
                    std::cout << "Invalid choice. Please try again." << std::endl;
                    break;
            }
        } else {
            std::cout << "Invalid choice. Please enter a number between 0 and 4." << std::endl;
        }

    } while (choice != 0);

    std::cout << "Calculator exiting. Goodbye!" << std::endl;

    return 0; // Indicate successful execution
}
