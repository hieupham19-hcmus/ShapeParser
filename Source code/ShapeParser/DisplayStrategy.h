/// \file DisplayStrategy.h
/// \brief Header file for the DisplayStrategy and its derived classes.
///

#pragma once

#include <vector>
#include <memory>
#include "IShape.h"

/// \class DisplayStrategy
/// \brief Abstract base class for display strategies.
///
/// The DisplayStrategy class defines the interface for different display strategies
/// for a collection of shapes.
///
class DisplayStrategy {
public:
    /// \brief Virtual destructor for proper cleanup in derived classes.
    virtual ~DisplayStrategy();

    /// \brief Displays a collection of shapes according to the specific strategy.
    ///
    /// \param shapes Vector of shared pointers to IShape representing the shapes to display.
    ///
    virtual void Display(std::vector<std::shared_ptr<IShape>> shapes) = 0;
};

/// \class TableDisplayStrategy
/// \brief Concrete class implementing a table display strategy.
///
/// The TableDisplayStrategy class displays a collection of shapes in a tabular format.
///
class TableDisplayStrategy : public DisplayStrategy {
public:
    /// \brief Displays a collection of shapes in a tabular format.
    ///
    /// \param shapes Vector of shared pointers to IShape representing the shapes to display.
    ///
    void Display(std::vector<std::shared_ptr<IShape>> shapes) override;
};

/// \class LineDisplayStrategy
/// \brief Concrete class implementing a line-by-line display strategy.
///
/// The LineDisplayStrategy class displays a collection of shapes line by line.
///
class LineDisplayStrategy : public DisplayStrategy {
public:
    /// \brief Displays a collection of shapes line by line.
    ///
    /// \param shapes Vector of shared pointers to IShape representing the shapes to display.
    ///
    void Display(std::vector<std::shared_ptr<IShape>> shapes) override;
};
