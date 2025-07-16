#include <iostream> // Required for input/output operations
#include <limits>   // Required for numeric_limits to get min/max values (though not directly used for size_of)

int main() {
    std::cout << "Size of fundamental data types in bytes:" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    // sizeof operator returns the size of a type or a variable in bytes.
    std::cout << "Size of char:        " << sizeof(char) << " byte(s)" << std::endl;
    std::cout << "Size of short:       " << sizeof(short) << " byte(s)" << std::endl;
    std::cout << "Size of int:         " << sizeof(int) << " byte(s)" << std::endl;
    std::cout << "Size of long:        " << sizeof(long) << " byte(s)" << std::endl;
    std::cout << "Size of long long:   " << sizeof(long long) << " byte(s)" << std::endl;
    std::cout << "Size of float:       " << sizeof(float) << " byte(s)" << std::endl;
    std::cout << "Size of double:      " << sizeof(double) << " byte(s)" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " byte(s)" << std::endl;
    std::cout << "Size of bool:        " << sizeof(bool) << " byte(s)" << std::endl;

    return 0; // Indicate successful execution
}
