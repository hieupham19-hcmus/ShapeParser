/// \file main.h
/// \brief Header file containing all declarations for shape-related classes.

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <map>
#include <tuple>
#include <memory>

#include "Object.h"

// Forward declarations for shape-related classes
class IShape;
class Circle;
class Square;
class Rectangle;
class Ellipse;

// Forward declarations for parser-related classes
class IParser;
class CircleParser;
class SquareParser;
class RectangleParser;
class EllipseParser;

// Forward declarations for utility and configuration classes
class ShapesTextProvider;
class ShapeConfig;
class RowConfig;
class IValueConverter;
class ShapeToRowConverter;
class Table;

class DisplayStrategy;
class TableDisplayStrategy;
class LineDisplayStrategy;

class DisplayContext;

// Include the actual class declarations
#include "IShape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Ellipse.h"

#include "TextToVec.h"
#include "IParser.h"
#include "CircleParser.h"
#include "SquareParser.h"
#include "RectangleParser.h"
#include "EllipseParser.h"

#include "ShapesTextProvider.h"
#include "ShapeConfig.h"
#include "RowConfig.h"
#include "IValueConverter.h"
#include "ShapeToRowConverter.h"
#include "Table.h"

#include "DisplayStrategy.h"
#include "DisplayContext.h"
