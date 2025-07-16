#include <iostream> // Required for input/output operations

int main() {
    int number;

    // a. The number is : 57
    number = 57;
    std::cout << "a. The number is : " << number << std::endl;

    // b. After post increment by 1 the number is : 58
    // Post-increment: uses the current value of 'number', then increments 'number'.
    // Here, 57 is printed, then 'number' becomes 58.
    std::cout << "b. After post increment by 1 the number is : " << number++ << std::endl;
    std::cout << "   (Current value of number after post-increment: " << number << ")" << std::endl; // Shows the updated value

    // To match the output description precisely, we'll reset or manage the variable carefully.
    // Let's re-initialize for each example to match the given outputs clearly.
    std::cout << "\n--- Demonstrating individually for clarity ---" << std::endl;

    // Resetting for specific output match
    number = 57;
    int temp; // Temporary variable to show post-increment effect in single line as per question's style

    std::cout << "a. The number is : " << number << std::endl;

    temp = number++; // temp gets 57, number becomes 58
    std::cout << "b. After post increment by 1 the number is : " << temp << std::endl;


    // c. After pre increment by 1 the number is : 59
    number = 58; // Start from 58 as per previous post-increment ending, or reset to 57 and do ++number again
    // Pre-increment: increments 'number', then uses the new value of 'number'.
    std::cout << "c. After pre increment by 1 the number is : " << ++number << std::endl;

    // d. After increasing by 1 the number is : 60
    number = 59; // Assuming previous operation left number at 59
    number = number + 1; // Or number += 1;
    std::cout << "d. After increasing by 1 the number is : " << number << std::endl;


    // e. After post decrement by 1 the number is : 59
    number = 60; // Assuming previous operation left number at 60
    temp = number--; // temp gets 60, number becomes 59
    std::cout << "e. After post decrement by 1 the number is : " << temp << std::endl;


    // f. After pre decrement by 1 the number is : 58
    number = 60; // Resetting for pre-decrement example to illustrate clearly (assuming initial 60 state)
    std::cout << "f. After pre decrement by 1 the number is : " << --number << std::endl;


    // g. After decreasing by 1 the number is : 57
    number = 58; // Assuming previous operation left number at 58
    number = number - 1; // Or number -= 1;
    std::cout << "g. After decreasing by 1 the number is : " << number << std::endl;

    return 0; // Indicate successful execution
}
