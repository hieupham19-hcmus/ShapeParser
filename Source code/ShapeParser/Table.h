/// \file Table.h
/// \brief Header file for the Table class.
///

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <memory>
#include "Object.h"
#include "IShape.h"
#include "IValueConverter.h"
#include "RowConfig.h"
//#include "DisplayStrategy.h"

/// \class Table
/// \brief Represents a table displaying shape information.
///
/// The Table class is responsible for displaying shape information in a tabular format.
/// It uses the strategy pattern to convert and format shape data.
///
class Table {
private:
    std::vector<std::shared_ptr<IShape>> _data; ///< Vector of shared pointers to IShape representing shapes in the table.
    std::shared_ptr<IValueConverter> _converter; ///< Shared pointer to IValueConverter representing the converter strategy.
    RowConfig _rConfig; ///< Row configuration object for formatting.

public:
    /// \brief Default constructor for Table class.
    ///
    Table();

    /// \brief Constructor for Table class with specified data, converter, and row configuration.
    ///
    /// \param data Vector of shared pointers to IShape representing shapes in the table.
    /// \param converter Shared pointer to IValueConverter representing the converter strategy.
    /// \param rConfig RowConfig object containing configuration for row formatting.
    ///
    Table(std::vector<std::shared_ptr<IShape>> data, std::shared_ptr<IValueConverter> converter, RowConfig rConfig);

    /// \brief Displays the table, using the strategy pattern to convert and format shape data.
    ///
    void display();
};