/// \file RectangleParser.h
/// \brief Header file for the RectangleParser class.
///

#pragma once

#include "IParser.h"
#include "Rectangle.h"
#include <tuple>
#include <regex>
#include <memory>

/// \class RectangleParser
/// \brief Parses a string to create a Rectangle object.
///
/// The RectangleParser class is responsible for parsing a string containing Rectangle information
/// and creating a Rectangle object. It implements the IParser interface.
///
class RectangleParser : public IParser {
public:
    /// \brief Parses a string to create a Rectangle object.
    ///
    /// \param line The input string containing information about the rectangle.
    /// \return A tuple containing a shared pointer to a Rectangle object
    ///         and a boolean indicating parsing success.
    ///
    std::tuple<std::shared_ptr<Object>, bool> parse(std::string line) override;
};