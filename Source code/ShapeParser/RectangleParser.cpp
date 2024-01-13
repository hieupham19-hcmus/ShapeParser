#include "RectangleParser.h"

std::tuple<std::shared_ptr<Object>, bool> RectangleParser::parse(std::string line) {
    //Rectangle: w=3, h=4
    std::stringstream ss(line);
    std::string buffer;
    double width = 0;
    double height = 0;
    std::regex numberPatter("\\d+");

    getline(ss, buffer, '=');
    getline(ss, buffer, ',');

    if(!regex_match(buffer, numberPatter)) return std::make_tuple(nullptr, false);
    width = stod(buffer);


    getline(ss, buffer, '=');
    getline(ss, buffer);
    if(!regex_match(buffer, numberPatter)) return std::make_tuple(nullptr, false);
    height = stod(buffer);

    bool success = true;
    //auto result = make_tuple(new Rectangle(width, height), success);
    auto result = std::make_tuple(std::make_shared<Rectangle>(width, height), success);

    return result;
}
