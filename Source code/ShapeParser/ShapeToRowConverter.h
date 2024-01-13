/// \file ShapeToRowConverter.h
/// \brief Header file for the ShapeToRowConverter class.
///

#pragma once

#include <sstream>
#include <iomanip>
#include "IValueConverter.h"
#include "ShapeConfig.h"
#include "RowConfig.h"
#include "IShape.h"
#include <memory>

using namespace std;

/// \class ShapeToRowConverter
/// \brief Converts a shape object to a formatted string row.
///
/// The ShapeToRowConverter class is responsible for converting a shape object
/// to a formatted string row based on provided configuration settings.
///
class ShapeToRowConverter : public IValueConverter {
private:
    ShapeConfig _sConfig; ///< The ShapeConfig object containing configuration for shape properties.
    RowConfig _rConfig;   ///< The RowConfig object containing configuration for row formatting.

public:
    /// \brief Default constructor for ShapeToRowConverter class.
    ///
    ShapeToRowConverter();

    /// \brief Constructor for ShapeToRowConverter class.
    ///
    /// \param sConfig The ShapeConfig object containing configuration for shape properties.
    /// \param rConfig The RowConfig object containing configuration for row formatting.
    ///
    ShapeToRowConverter(ShapeConfig sConfig, RowConfig rConfig);

    /// \brief Converts a shape object to a formatted string row.
    ///
    /// \param obj The shape object to be converted.
    /// \return A formatted string representing the shape information in a row.
    ///
    string convert(shared_ptr<Object> obj);
};