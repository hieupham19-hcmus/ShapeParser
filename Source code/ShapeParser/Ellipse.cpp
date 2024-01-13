#include "Ellipse.h"

Ellipse::Ellipse() : _semi_minor_axis(0.0), _semi_major_axis(0.0) {}

Ellipse::Ellipse(double semiMinorAxis, double semiMajorAxis)
    : _semi_minor_axis(semiMinorAxis), _semi_major_axis(semiMajorAxis) {}

double Ellipse::area() {
    return PI * _semi_minor_axis * _semi_major_axis;
}

double Ellipse::perimeter() {
    return 2 * PI * sqrt(((_semi_minor_axis * _semi_minor_axis) + (_semi_major_axis * _semi_major_axis)) / 2);
}

std::string Ellipse::toString() {
    return "Ellipse";
}

double Ellipse::getSemiMinorAxis() const {
    return _semi_minor_axis;
}

double Ellipse::getSemiMajorAxis() const {
    return _semi_major_axis;
}

std::string Ellipse::output() {
    std::stringstream builder;
    builder << "Ellipse: Semi-Minor Axis=" << _semi_minor_axis
        << ", Semi-Major Axis=" << _semi_major_axis;
    std::string result = builder.str();
    return result;
}