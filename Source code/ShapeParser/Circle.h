/// \file Circle.h
/// \brief Header file for the Circle class.
///

#pragma once

#include <string>
#include "IShape.h"
#include <sstream>

/// \class Circle
/// \brief Represents a circle.
///
/// The Circle class is a concrete implementation of the IShape interface,
/// representing a circle with a specified radius.
///
class Circle : public IShape {
private:
    inline static const double PI = 3.14; ///< Constant for the mathematical constant pi.
    double _radius; ///< Radius of the circle.

public:
    /// \brief Default constructor for Circle class.
    ///
    Circle();

    /// \brief Constructor for Circle class with specified radius.
    ///
    /// \param radius The radius of the circle.
    ///
    Circle(double radius);

    /// \brief Calculates the area of the circle.
    ///
    /// \return The area of the circle.
    ///
    double area() override;

    /// \brief Calculates the perimeter of the circle.
    ///
    /// \return The perimeter of the circle.
    ///
    double perimeter() override;

    /// \brief Gets a string representation of the Circle.
    ///
    /// \return A string representation of the Circle.
    ///
    std::string toString() override;

    /// \brief Gets the radius of the circle.
    ///
    /// \return The radius of the circle.
    ///
    double radius();

    /// \brief Outputs circle information as a string.
    ///
    /// \return A string representation of the circle information.
    ///
    std::string output() override;
};