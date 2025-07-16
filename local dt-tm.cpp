#include <iostream> // Required for input/output operations
#include <chrono>   // Required for std::chrono for time points and durations
#include <ctime>    // Required for std::time_t, std::localtime, std::mktime, and std::strftime

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Convert the time point to a time_t object
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert time_t to a tm structure (local time)
    // std::localtime returns a pointer to a static object, so it's not thread-safe.
    // For thread-safety, use std::localtime_s (Microsoft specific) or std::gmtime_r (POSIX specific)
    // or acquire a mutex. For this simple example, it's fine.
    std::tm* localTime = std::localtime(&currentTime);

    // Use std::strftime to format the date and time into a string
    char buffer[80]; // Buffer to hold the formatted string
    
    // Format: "YYYY-MM-DD HH:MM:SS"
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
    std::cout << "Current Date and Time: " << buffer << std::endl;

    // You can explore other format specifiers for strftime (e.g., %c for standard date and time string)
    // std::strftime(buffer, sizeof(buffer), "%c", localTime);
    // std::cout << "Standard Format: " << buffer << std::endl;

    return 0; // Indicate successful execution
}
