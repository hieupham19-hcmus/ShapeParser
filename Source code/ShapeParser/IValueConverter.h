/// \file IValueConverter.h
/// \brief Header file for the IValueConverter interface.
///

#pragma once

#include <string>
#include <memory>
#include "Object.h"

/// \class IValueConverter
/// \brief Interface for value converters.
///
/// The IValueConverter class is an interface that defines the contract for value converters.
/// Derived classes should implement the convert method to provide specific conversion logic.
///
class IValueConverter : public Object {
public:
    /// \brief Virtual destructor for proper cleanup in derived classes.
    virtual ~IValueConverter() = default;

    /// \brief Converts an object to a formatted string.
    ///
    /// \param obj The object to be converted.
    /// \return A formatted string representing the converted value.
    ///
    virtual std::string convert(std::shared_ptr<Object> obj) = 0;

    /// \brief Gets a string representation of the IValueConverter.
    ///
    /// \return A string representation of the IValueConverter.
    ///
    std::string toString() override {
        return "IValueConverter";
    }
};
