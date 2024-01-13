#include "SquareParser.h"

std::tuple<std::shared_ptr<Object>, bool> SquareParser::parse(std::string line) {
    //Square: a=8
    std::stringstream ss(line);
    std::string buffer;
    double a = 0;
    std::regex numberPatter("\\d+");

    getline(ss, buffer, '=');
    getline(ss, buffer);
    if(!regex_match(buffer, numberPatter)) return std::make_tuple(nullptr, false);
    a = stod(buffer);

    bool success = true;
    //auto result = make_tuple(new Square(a), success);
    auto result = std::make_tuple(std::make_shared<Square>(a), success);

    return result;
}
