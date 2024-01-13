#include "ParserFactory.h"


std::shared_ptr<IParser> ParserFactory::create(std::string name) {
    std::map<std::string, std::shared_ptr<IParser>> container {
        {"Rectangle", std::make_shared<RectangleParser>()},
        {"Square", std::make_shared<SquareParser>()},
        {"Circle", std::make_shared<CircleParser>()},
        {"Ellipse", std::make_shared<EllipseParser>()}
    };
    std::shared_ptr<IParser> result = container[name];
    return result;
}


std::string ParserFactory::toString() {
    return "ParserFactory";
}
