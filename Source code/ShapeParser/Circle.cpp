#include "Circle.h"

Circle::Circle() {
    //TODO:
}

Circle::Circle(double radius) {
    this->_radius = radius;
}

double Circle::area() {
    return _radius * _radius * PI;
}

double Circle::perimeter() {
    return _radius * 2 * PI;
}

std::string Circle::toString() {
    return "Circle";
}

double Circle::radius() {
    return this->_radius;
}

std::string Circle::output() {
    std::stringstream builder;
    builder << "Circle: Radius=" << std::to_string((int)_radius);
    std::string result = builder.str();
    return result;
}

