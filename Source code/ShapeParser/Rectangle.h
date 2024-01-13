/// \file Rectangle.h
/// \brief Header file for the Rectangle class.
///

#pragma once

#include <string>
#include "IShape.h"
#include <sstream>

/// \class Rectangle
/// \brief Represents a rectangle.
///
/// The Rectangle class is a concrete implementation of the IShape interface,
/// representing a rectangle with specified width and height.
///
class Rectangle : public IShape {
private:
    double _width; ///< Width of the rectangle.
    double _height; ///< Height of the rectangle.

public:
    /// \brief Default constructor for Rectangle class.
    ///
    Rectangle();

    /// \brief Constructor for Rectangle class with specified width and height.
    ///
    /// \param width The width of the rectangle.
    /// \param height The height of the rectangle.
    ///
    Rectangle(double width, double height);

    /// \brief Calculates the area of the rectangle.
    ///
    /// \return The area of the rectangle.
    ///
    double area() override;

    /// \brief Calculates the perimeter of the rectangle.
    ///
    /// \return The perimeter of the rectangle.
    ///
    double perimeter() override;

    /// \brief Gets a string representation of the Rectangle.
    ///
    /// \return A string representation of the Rectangle.
    ///
    std::string toString() override;

    /// \brief Gets the width of the rectangle.
    ///
    /// \return The width of the rectangle.
    ///
    double width();

    /// \brief Gets the height of the rectangle.
    ///
    /// \return The height of the rectangle.
    ///
    double height();

    /// \brief Outputs rectangle information as a string.
    ///
    /// \return A string representation of the rectangle information.
    ///
    std::string output() override;
};
