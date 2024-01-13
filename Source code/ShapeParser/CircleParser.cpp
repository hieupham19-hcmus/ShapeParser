#include "CircleParser.h"


std::tuple<std::shared_ptr<Object>, bool> CircleParser::parse(std::string line) {
    // Create a stringstream from the input string
    std::stringstream ss(line);

    // Variables to store intermediate values during parsing
    std::string buffer;
    double radius = 0;

    // Regular expression pattern to match integers
    std::regex numberPattern("\\d+");

    // Read the attribute name and check if it is valid
    getline(ss, buffer, '=');

    // Read the attribute value
    getline(ss, buffer);

    // If the attribute value does not match the expected pattern, return parsing failure
    if (!std::regex_match(buffer, numberPattern)) {
        return std::make_tuple(nullptr, false);
    }

    // Convert the attribute value to a double
    try {
        radius = std::stod(buffer);
    }
    catch (const std::invalid_argument&) {
        return std::make_tuple(nullptr, false);
    }

    // Parsing was successful, create a Circle object and indicate success
    bool success = true;
    auto result = std::make_tuple(std::make_shared<Circle>(radius), success);

    return result;
}
