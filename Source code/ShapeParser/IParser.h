/// \file IParser.h
/// \brief Header file for the IParser interface.
///

#pragma once

#include <string>
#include <sstream>
#include "Object.h"
#include <tuple>
#include <memory>

/// \class IParser
/// \brief Interface for parsers.
///
/// The IParser class is an interface that defines the contract for parsers.
/// Derived classes should implement the parse method to parse a string and create an object.
///
class IParser : public Object {
public:
    /// \brief Virtual destructor for proper cleanup in derived classes.
    virtual ~IParser() = default;

    /// \brief Parses a string to create an object.
    ///
    /// \param line The input string to be parsed.
    /// \return A tuple containing a shared pointer to the created object
    ///         and a boolean indicating parsing success.
    ///
    virtual std::tuple<std::shared_ptr<Object>, bool> parse(std::string line) = 0;

    /// \brief Gets a string representation of the IParser.
    ///
    /// \return A string representation of the IParser.
    ///
    std::string toString() override {
        return "IParser";
    }
};
