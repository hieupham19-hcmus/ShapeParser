#include "DisplayStrategy.h"
#include "ShapeConfig.h"
#include "RowConfig.h"
#include "Table.h"
#include <memory>
#include "ShapeToRowConverter.h"

DisplayStrategy::~DisplayStrategy() {
	//TODO:
}

void TableDisplayStrategy::Display(vector<shared_ptr<IShape>> shapes) {

    vector<int> widths = { 0, 14, 8, 8 }; // Columns' width data, use 0 for auto width based on data length.
    ShapeConfig sConfig(2, 1);
    RowConfig rConfig(widths);

    shared_ptr<IValueConverter> converter = make_shared<ShapeToRowConverter>(sConfig, rConfig);

    Table table(shapes, converter, rConfig);
    // Using the strategy pattern to convert and format shape data
    table.display();
}

void LineDisplayStrategy::Display(vector<shared_ptr<IShape>> shapes) {
    int cnt = 0;
    for (weak_ptr<IShape> shape : shapes) {
        ++cnt;
        cout << cnt << ". " << shape.lock()->output() << "\n";
    }
}
