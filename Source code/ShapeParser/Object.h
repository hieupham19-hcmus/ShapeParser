/// \file Object.h
/// \brief Header file for the Object class.
///

#pragma once

#include <string>

/// \class Object
/// \brief Base class for objects with a string representation.
///
/// The Object class is a base class that defines a virtual function toString(),
/// which should be implemented by derived classes to provide a string representation.
///
class Object {
public:
    /// \brief Virtual destructor for proper cleanup in derived classes.
    virtual ~Object() = default;

    /// \brief Gets a string representation of the object.
    ///
    /// \return A string representation of the object.
    ///
    virtual std::string toString() = 0;
};