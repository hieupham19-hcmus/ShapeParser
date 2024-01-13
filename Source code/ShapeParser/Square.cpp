#include "Square.h"

Square::Square() {
    //TODO:
}

Square::Square(double a) {
    this->_a = a;
}

double Square::area() {
    return _a * _a;
}

double Square::perimeter() {
    return _a * 4;
}

std::string Square::toString() {
    return "Square";
}

double Square::a() {
    return this->_a;
}

std::string Square::output() {
    std::stringstream builder;
    builder << "Square: Side=" << std::to_string((int)_a);
    std::string result = builder.str();
    return result;
}

