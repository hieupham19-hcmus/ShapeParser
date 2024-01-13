/// \file Square.h
/// \brief Header file for the Square class.
///

#pragma once

#include <string>
#include "IShape.h"
#include <sstream>

/// \class Square
/// \brief Represents a square.
///
/// The Square class is a concrete implementation of the IShape interface,
/// representing a square with a specified side length.
///
class Square : public IShape {
private:
    double _a; ///< Side length of the square.

public:
    /// \brief Default constructor for Square class.
    ///
    Square();

    /// \brief Constructor for Square class with specified side length.
    ///
    /// \param a The side length of the square.
    ///
    Square(double a);

    /// \brief Calculates the area of the square.
    ///
    /// \return The area of the square.
    ///
    double area() override;

    /// \brief Calculates the perimeter of the square.
    ///
    /// \return The perimeter of the square.
    ///
    double perimeter() override;

    /// \brief Gets a string representation of the Square.
    ///
    /// \return A string representation of the Square.
    ///
    std::string toString() override;

    /// \brief Gets the side length of the square.
    ///
    /// \return The side length of the square.
    ///
    double a();

    /// \brief Outputs square information as a string.
    ///
    /// \return A string representation of the square information.
    ///
    std::string output() override;
};
