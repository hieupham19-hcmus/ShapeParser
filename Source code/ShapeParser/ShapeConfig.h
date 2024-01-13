/// \file ShapeConfig.h
/// \brief Header file for the ShapeConfig class.
///

#pragma once

#include <string>
#include "Object.h"

/// \class ShapeConfig
/// \brief Configuration class for shape properties precision.
///
/// The ShapeConfig class is responsible for holding configuration settings related
/// to the precision of area and perimeter calculations for geometric shapes.
///
class ShapeConfig : public Object {
private:
    int _areaPrecision; ///< Precision for area calculations.
    int _periPrecision; ///< Precision for perimeter calculations.

public:
    /// \brief Default constructor for ShapeConfig class.
    ///
    ShapeConfig();

    /// \brief Constructor for ShapeConfig class with specified precision values.
    ///
    /// \param areaPrecision The precision for area calculations.
    /// \param periPrecision The precision for perimeter calculations.
    ///
    ShapeConfig(int areaPrecision, int periPrecision);

    /// \brief Gets the precision for area calculations.
    ///
    /// \return The precision for area calculations.
    ///
    int areaPrecision();

    /// \brief Gets the precision for perimeter calculations.
    ///
    /// \return The precision for perimeter calculations.
    ///
    int periPrecision();

    /// \brief Gets a string representation of the ShapeConfig.
    ///
    /// \return A string representation of the ShapeConfig.
    ///
    std::string toString() override;
};
