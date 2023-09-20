#include <iostream>
#include <ctime>


int main() {
    Get the current time
    std::time_t currentTime = std::time(NULL);     // like gettimeofday from c return the time from 1970 in seconds
    std::cout << currentTime << std::endl;
    // Convert the time to a struct tm to have human readable time
    struct std::tm* timeInfo = std::localtime(&currentTime);
    // tm contain year since 1900, months 0 based, day , h ,..
    char buffer[20]; // To hold the formatted timestamp
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeInfo);

    // Print the formatted timestamp
    std::cout << "Timestamp: " << buffer << std::endl;

    return 0;
}
