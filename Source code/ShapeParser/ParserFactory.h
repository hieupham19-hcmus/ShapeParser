/// \file ParserFactory.h
/// \brief Header file for the ParserFactory class.
///

#pragma once

#include <map>
#include "Object.h"
#include "IParser.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
#include "EllipseParser.h"
#include <memory>


/// \class ParserFactory
/// \brief Creates and returns a specific parser based on the provided name.
///
/// The ParserFactory class is responsible for creating and returning a specific parser
/// based on the provided name. It inherits from the Object class.
///
class ParserFactory : public Object {
public:
    /// \brief Creates and returns a specific parser based on the provided name.
    ///
    /// \param name The name of the parser to create.
    /// \return A shared pointer to the created parser.
    ///
    std::shared_ptr<IParser> create(std::string name);

    /// \brief Returns a string representation of the ParserFactory object.
    ///
    /// \return A string representation of the ParserFactory object.
    ///
    std::string toString();
};
