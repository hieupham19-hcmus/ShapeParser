/// \file RowConfig.h
/// \brief Header file for the RowConfig class.
///

#pragma once

#include <string>
#include <vector>
#include "Object.h"

/// \class RowConfig
/// \brief Configuration class for row formatting.
///
/// The RowConfig class is responsible for holding configuration settings related
/// to the widths of columns in a row for formatting purposes.
///
class RowConfig : public Object {
private:
    std::vector<int> _widths; ///< Widths of columns in the row.

public:
    /// \brief Default constructor for RowConfig class.
    ///
    RowConfig();

    /// \brief Constructor for RowConfig class with specified column widths.
    ///
    /// \param widths Vector of column widths.
    ///
    RowConfig(std::vector<int> widths);

    /// \brief Gets the vector of column widths.
    ///
    /// \return The vector of column widths.
    ///
    std::vector<int> widths();

    /// \brief Gets a string representation of the RowConfig.
    ///
    /// \return A string representation of the RowConfig.
    ///
    std::string toString() override;
};
