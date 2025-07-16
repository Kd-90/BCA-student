#include <iostream> // Required for input/output operations
#include <limits>   // Required for std::numeric_limits

int main() {
    std::cout << "Upper and Lower Limits of Integer Types:" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    // std::numeric_limits<Type>::min() gives the minimum representable value for Type.
    // std::numeric_limits<Type>::max() gives the maximum representable value for Type.

    std::cout << "Minimum value for short:     " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "Maximum value for short:     " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Minimum value for int:       " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value for int:       " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Minimum value for long:      " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "Maximum value for long:      " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Minimum value for long long: " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "Maximum value for long long: " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "Maximum value for unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl; // Unsigned types only have a max, min is 0.

    return 0; // Indicate successful execution
}
