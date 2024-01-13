/// \file DisplayContext.h
/// \brief Header file for the DisplayContext class.
///

#pragma once

#include "DisplayStrategy.h"
#include <memory>
#include <vector>

/// \class DisplayContext
/// \brief Context class for executing display strategies.
///
/// The DisplayContext class is responsible for managing and executing different display strategies
/// for a collection of shapes.
///
class DisplayContext {
private:
    DisplayStrategy* _strategy; ///< Pointer to the current display strategy.

public:
    /// \brief Sets the display strategy.
    ///
    /// \param strategy Pointer to the display strategy.
    ///
    void setStrategy(DisplayStrategy* strategy) {
        this->_strategy = strategy;
    }

    /// \brief Executes the current display strategy for a collection of shapes.
    ///
    /// \param shapes Vector of shared pointers to IShape representing the shapes to display.
    ///
    void executeStrategy(std::vector<std::shared_ptr<IShape>> shapes) {
        _strategy->Display(shapes);
    }
};