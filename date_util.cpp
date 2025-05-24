#include "date-util.h"
#include <ctime>
#include <regex>

std::string DateUtil::getCurrentDate() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    char buffer[11];  // YYYY-MM-DD + '\0'
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", localTime);

    return std::string(buffer);
}

bool DateUtil::validateDate(const std::string& dateStr) {
    // Basic regex pattern to check YYYY-MM-DD format
    std::regex datePattern(R"(^\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])$)");

    if (!std::regex_match(dateStr, datePattern)) {
        return false;
    }

    // Additional date validation (like checking days per month, leap years) can be added here

    return true;
}
