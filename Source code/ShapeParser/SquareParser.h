/// \file SquareParser.h
/// \brief Header file for the SquareParser class.
///

#pragma once

#include "IParser.h"
#include "Square.h"
#include <tuple>
#include <regex>
#include <memory>

/// \class SquareParser
/// \brief Parses a string to create a Square object.
///
/// The SquareParser class is responsible for parsing a string containing Square information
/// and creating a Square object. It implements the IParser interface.
///
class SquareParser : public IParser {
public:
    /// \brief Parses a string to create a Square object.
    ///
    /// \param line The input string containing information about the square.
    /// \return A tuple containing a shared pointer to a Square object
    ///         and a boolean indicating parsing success.
    ///
    std::tuple<std::shared_ptr<Object>, bool> parse(std::string line) override;
};
