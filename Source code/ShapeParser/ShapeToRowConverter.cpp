#include "ShapeToRowConverter.h"

ShapeToRowConverter::ShapeToRowConverter() {
    //TODO:
}

ShapeToRowConverter::ShapeToRowConverter(ShapeConfig sConfig, RowConfig rConfig) {
    this->_sConfig = sConfig;
    this->_rConfig = rConfig;
}

string ShapeToRowConverter::convert(shared_ptr<Object> obj) {
    // Attempt to cast the shared pointer to IShape using dynamic_pointer_cast
    shared_ptr<IShape> p = dynamic_pointer_cast<IShape>(obj);

    // Retrieve column widths from the configuration
    vector<int> w = _rConfig.widths();

    // Initialize a stringstream to build the formatted string
    stringstream builder;

    // Construct the formatted string row

    // Column 1: Shape Name
    if (w[1] == 0) {
        builder << "| " << p->toString() << " ";
    }
    else {
        // Adjust the width of the column based on the configured width
        builder << "| " << p->toString() << setw(w[1] - (p->toString()).length() - 1) << " ";
    }

    // Column 2: Perimeter
    if (w[2] == 0) {
        builder << "| Perimeter=" << fixed << setprecision(_sConfig.periPrecision()) << p->perimeter() << " ";
    }
    else {
        // Adjust the width of the column based on the configured width
        builder << "| Perimeter=" << fixed << setprecision(_sConfig.periPrecision()) << setw(w[2]) << p->perimeter() << " ";
    }

    // Column 3: Area
    if (w[3] == 0) {
        builder << "| Area=" << fixed << setprecision(_sConfig.areaPrecision()) << p->area() << " |";
    }
    else {
        // Adjust the width of the column based on the configured width
        builder << "| Area=" << fixed << setprecision(_sConfig.areaPrecision()) << setw(w[3]) << p->area() << " |";
    }

    // Convert the stringstream to a string
    string res = builder.str();

    // Return the formatted string row
    return res;
}


