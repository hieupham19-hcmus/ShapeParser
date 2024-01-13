/// \file TextToVec.h
/// \brief Header file for the FileReader class.
///

#pragma once

#include <vector>
#include <string>

#ifdef TEXTTOVEC_EXPORTS
#define TEXTTOVEC_API __declspec(dllexport)
#else
#define TEXTTOVEC_API __declspec(dllimport)
#endif

/// \class TextToVec
/// \brief Reads content from a file.
///
/// The TextToVec class provides functionality to read content from a file.
/// It can be used to read lines from a file and store them in a vector of strings.
///
class TEXTTOVEC_API TextToVec {
public:
    /// \brief Gets a string representation of the FileReader.
    ///
    /// \return A string representation of the FileReader.
    ///
    std::string toString() {
        return "TextToVec";
    }

    /// \brief Reads lines from a file and returns them as a vector of strings.
    ///
    /// \param fileName The name of the file to read.
    /// \return A vector of strings containing the lines read from the file.
    ///
    std::vector<std::string> read(std::string fileName);
};