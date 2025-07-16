#include <iostream> // Required for input/output operations

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero using if-else if-else
    if (number > 0) {
        std::cout << "The number " << number << " is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number " << number << " is negative." << std::endl;
    } else { // If not greater than 0 and not less than 0, it must be 0
        std::cout << "The number " << number << " is zero." << std::endl;
    }

    return 0; // Indicate successful execution
}
