/// \file CircleParser.h
/// \brief Header file for the CircleParser class.
///

#pragma once

#include "IParser.h"
#include "Circle.h"
#include <tuple>
#include <regex>
#include <memory>

/// \class CircleParser
/// \brief Parses a string to create a Circle object.
///
/// The CircleParser class is responsible for parsing a string containing Circle information
/// and creating a Circle object. It implements the IParser interface.
///
class CircleParser : public IParser {
public:
    /// \brief Parses a string to create a Circle object.
    ///
    /// \param line The input string containing information about the circle.
    /// \return A tuple containing a shared pointer to a Circle object
    ///         and a boolean indicating parsing success.
    ///
    std::tuple<std::shared_ptr<Object>, bool> parse(std::string line) override;
};