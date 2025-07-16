#include <iostream> // Required for input/output operations

int main() {
    // Declare two integer variables to store the numbers
    int num1, num2;
    // Declare a variable to store the sum
    int sum;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    // Read the first number from the user
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    // Read the second number from the user
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Print the sum to the console
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0; // Indicate successful execution
}
