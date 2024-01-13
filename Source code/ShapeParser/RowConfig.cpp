#include "RowConfig.h"

/// <summary>
/// Default constructor for RowConfig class.
/// </summary>
RowConfig::RowConfig() {
    // TODO: Initialize any default values or perform setup if needed.
}

/// <summary>
/// Parameterized constructor for RowConfig class.
/// </summary>
/// <param name="widths">A vector representing the widths of different columns in a row.</param>
RowConfig::RowConfig(std::vector<int> widths) {
    // Initialize the widths with the provided vector
    this->_widths = widths;
}

/// <summary>
/// Gets the vector of column widths for a row.
/// </summary>
/// <returns>A vector of integers representing the column widths.</returns>
std::vector<int> RowConfig::widths() {
    return this->_widths;
}

/// <summary>
/// Returns a string representation of the RowConfig.
/// </summary>
/// <returns>A string indicating the type of configuration, in this case, "RowConfig".</returns>
std::string RowConfig::toString() {
    return "RowConfig";
}
