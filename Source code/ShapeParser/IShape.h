/// \file IShape.h
/// \brief Header file for the IShape interface.
///

#pragma once

#include <string>
#include "Object.h"

/// \class IShape
/// \brief Interface for geometric shapes.
///
/// The IShape class is an interface that defines the contract for geometric shapes.
/// Derived classes should implement the area, perimeter, and output methods to provide
/// specific functionality for each shape.
///
class IShape : public Object {
public:
    /// \brief Virtual destructor for proper cleanup in derived classes.
    virtual ~IShape() = default;

    /// \brief Calculates the area of the shape.
    ///
    /// \return The area of the shape.
    ///
    virtual double area() = 0;

    /// \brief Calculates the perimeter of the shape.
    ///
    /// \return The perimeter of the shape.
    ///
    virtual double perimeter() = 0;

    /// \brief Gets a string representation of the IShape.
    ///
    /// \return A string representation of the IShape.
    ///
    std::string toString() override {
        return "IShape";
    }

    /// \brief Outputs shape information as a string.
    ///
    /// \return A string representation of the shape information.
    ///
    virtual std::string output() = 0;
};
