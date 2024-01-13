/// \file Ellipse.h
/// \brief Header file for the Ellipse class.
///

#pragma once

#include <string>
#include <sstream>
#include <cmath>
#include "IShape.h"

/// \class Ellipse
/// \brief Represents an ellipse.
///
/// The Ellipse class is a concrete implementation of the IShape interface,
/// representing an ellipse with semi-minor and semi-major axes.
///
class Ellipse : public IShape {
private:
    double _semi_minor_axis; ///< Semi-minor axis of the ellipse.
    double _semi_major_axis; ///< Semi-major axis of the ellipse.
    inline static const double PI = 3.14; ///< Constant for the mathematical constant pi.

public:
    /// \brief Default constructor for Ellipse class.
    ///
    Ellipse();

    /// \brief Constructor for Ellipse class with specified semi-minor and semi-major axes.
    ///
    /// \param semiMinorAxis The semi-minor axis of the ellipse.
    /// \param semiMajorAxis The semi-major axis of the ellipse.
    ///
    Ellipse(double semiMinorAxis, double semiMajorAxis);

    /// \brief Calculates the area of the ellipse.
    ///
    /// \return The area of the ellipse.
    ///
    double area() override;

    /// \brief Calculates the perimeter of the ellipse.
    ///
    /// \return The perimeter of the ellipse.
    ///
    double perimeter() override;

    /// \brief Gets a string representation of the Ellipse.
    ///
    /// \return A string representation of the Ellipse.
    ///
    std::string toString() override;

    /// \brief Gets the semi-minor axis of the ellipse.
    ///
    /// \return The semi-minor axis of the ellipse.
    ///
    double getSemiMinorAxis() const;

    /// \brief Gets the semi-major axis of the ellipse.
    ///
    /// \return The semi-major axis of the ellipse.
    ///
    double getSemiMajorAxis() const;

    /// \brief Outputs ellipse information as a string.
    ///
    /// \return A string representation of the ellipse information.
    ///
    std::string output() override;
};
