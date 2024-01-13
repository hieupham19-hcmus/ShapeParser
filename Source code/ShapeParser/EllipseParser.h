/// \file EllipseParser.h
/// \brief Header file for the EllipseParser class.
///

#pragma once

#include "IParser.h"
#include "Ellipse.h"
#include <tuple>
#include <regex>
#include <memory>

/// \class EllipseParser
/// \brief Parses a string to create an Ellipse object.
///
/// The EllipseParser class is responsible for parsing a string containing Ellipse information
/// and creating an Ellipse object. It implements the IParser interface.
///
class EllipseParser : public IParser {
public:
    /// \brief Parses a string to create an Ellipse object.
    ///
    /// \param line The string containing the Ellipse information.
    /// \return A tuple containing a shared pointer to the created Ellipse object
    ///         and a boolean indicating parsing success.
    ///
    std::tuple<std::shared_ptr<Object>, bool> parse(std::string line) override;
};
