#include <iostream> // Required for input/output operations

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter an integer number to display its multiplication table: ";
    std::cin >> number;

    std::cout << "\nMultiplication Table for " << number << ":" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    // Loop from 1 to 10 to generate the multiplication table
    for (int i = 1; i <= 10; ++i) {
        // Print each line of the table: number x i = (number * i)
        std::cout << number << " x " << i << " = " << (number * i) << std::endl;
    }

    return 0; // Indicate successful execution
}
