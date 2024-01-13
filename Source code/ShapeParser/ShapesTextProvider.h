/// \file ShapesTextProvider.h
/// \brief Header file for the ShapesTextProvider class.
///

#pragma once

#include <vector>
#include <fstream>
#include <tuple>
#include "IShape.h"
#include "IParser.h"
#include "ParserFactory.h"
#include <memory>
#include <stdexcept>

using namespace std;

/// \class ShapesTextProvider
/// \brief Reads and parses shape information from a file.
///
/// The ShapesTextProvider class is responsible for reading and parsing shape information
/// from a file and returning a tuple containing shapes, the expected count, and the actual count
/// of parsed shapes.
///
class ShapesTextProvider {
public:
    /// \brief Reads and parses shape information from a file.
    ///
    /// \param filename The name of the file to read shape information from.
    /// \return A tuple containing a vector of shared pointers to IShape,
    ///         the expected count of shapes, and the actual count of successfully parsed shapes.
    ///
    static std::tuple<std::vector<std::shared_ptr<IShape>>, int, int> next(const std::string& filename);

    /// \brief Reads and parses shape information from a vector of strings.
    ///
    /// \param lines The vector of strings containing shape information.
    /// \return A tuple containing a vector of shared pointers to IShape,
    ///         the expected count of shapes, and the actual count of successfully parsed shapes.
    ///
    std::tuple<std::vector<std::shared_ptr<IShape>>, int, int> next(const std::vector<std::string>& lines);
};