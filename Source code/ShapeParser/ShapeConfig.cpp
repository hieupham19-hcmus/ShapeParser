#include "ShapeConfig.h"

/// <summary>
/// Default constructor for ShapeConfig class.
/// </summary>
ShapeConfig::ShapeConfig() {
    // TODO: Initialize any default values or perform setup if needed.
}

/// <summary>
/// Parameterized constructor for ShapeConfig class.
/// </summary>
/// <param name="areaPrecision">The precision for area calculations.</param>
/// <param name="periPrecision">The precision for perimeter calculations.</param>
ShapeConfig::ShapeConfig(int areaPrecision, int periPrecision) {
    // Initialize the precision values with the provided parameters
    this->_areaPrecision = areaPrecision;
    this->_periPrecision = periPrecision;
}

/// <summary>
/// Gets the precision value for area calculations.
/// </summary>
/// <returns>The precision value for area calculations.</returns>
int ShapeConfig::areaPrecision() {
    return this->_areaPrecision;
}

/// <summary>
/// Gets the precision value for perimeter calculations.
/// </summary>
/// <returns>The precision value for perimeter calculations.</returns>
int ShapeConfig::periPrecision() {
    return this->_periPrecision;
}

/// <summary>
/// Returns a string representation of the ShapeConfig.
/// </summary>
/// <returns>A string indicating the type of configuration, in this case, "ShapeConfig".</returns>
std::string ShapeConfig::toString() {
    return "ShapeConfig";
}
