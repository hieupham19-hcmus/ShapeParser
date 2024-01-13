#include "Table.h"


Table::Table() {
    //TODO;
}

/// <summary>
/// Constructor for the Table class.
/// </summary>
/// <param name="shapes">A vector of shared pointers to IShape representing the shapes in the table.</param>
/// <param name="converter">A shared pointer to IValueConverter representing the converter strategy for formatting shape data.</param>
/// <param name="rConfig">The RowConfig object containing configuration for row formatting.</param>
Table::Table(std::vector<std::shared_ptr<IShape>> shapes, std::shared_ptr<IValueConverter> converter, RowConfig rConfig) {
    // Assign the provided vector of shapes to the member variable
    this->_data = shapes;

    // Assign the provided converter strategy to the member variable
    this->_converter = converter;

    // Assign the provided RowConfig object to the member variable
    this->_rConfig = rConfig;
}

void Table::display() {
    // Retrieve column widths from the configuration
    std::vector<int> w = _rConfig.widths();

    // Counter to keep track of the shape index
    int cnt = 0;

    // Iterate through each shape in the table data
    for (std::weak_ptr<IShape> shape : _data) {
        // Increment the counter for each shape
        ++cnt;

        // Column 0: Shape Index
        if (w[0] == 0) {
            std::cout << "| " << cnt << " ";
        }

        // Use the converter strategy to convert and format the shape data
        std::cout << _converter->convert(shape.lock()) << "\n";
    }
}
