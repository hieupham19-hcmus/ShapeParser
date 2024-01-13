#include "Rectangle.h"

Rectangle::Rectangle() {
    //TODO:
}

Rectangle::Rectangle(double width, double height) {
    this->_width = width;
    this->_height = height;
}

double Rectangle::area() {
    return _width * _height;
}

double Rectangle::perimeter() {
    return (_width + _height) * 2;
}

std::string Rectangle::toString() {
    return "Rectangle";
}

double Rectangle::width() {
    return this->_width;
}

double Rectangle::height() {
    return this->_height;
}

std::string Rectangle::output() {
    std::stringstream builder;
    builder << "Rectangle Width=" << std::to_string((int)_width) << ", Height=" << std::to_string((int)_height);
    std::string result = builder.str();
    return result;
}


