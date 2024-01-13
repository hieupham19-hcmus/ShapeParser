#include "EllipseParser.h"

std::tuple<std::shared_ptr<Object>, bool> EllipseParser::parse(std::string line)
{
    // Assuming the input format is: "Ellipse: ma=5, mi=6"
    std::stringstream ss(line);
    std::string buffer;
    double majorAxis = 0;
    double minorAxis = 0;
    std::regex numberPattern("\\d+");

    // Parse major axis
    getline(ss, buffer, '=');
    getline(ss, buffer, ',');
    if (!std::regex_match(buffer, numberPattern)) {
        return std::make_tuple(nullptr, false);
    }
    try {
        majorAxis = std::stod(buffer);
    }
    catch (const std::invalid_argument& e) {
        return std::make_tuple(nullptr, false);
    }

    // Parse minor axis
    getline(ss, buffer, '=');
    getline(ss, buffer);
    if (!std::regex_match(buffer, numberPattern)) {
        return std::make_tuple(nullptr, false);
    }
    try {
        minorAxis = std::stod(buffer);
    }
    catch (const std::invalid_argument& e) {
        return std::make_tuple(nullptr, false);
    }

    bool success = true;
    return std::make_tuple(std::make_shared<Ellipse>(majorAxis, minorAxis), success);
}