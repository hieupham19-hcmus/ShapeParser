#include "ShapesTextProvider.h"
#include <iostream>

namespace Utils {
    class String {
    public:
        /// <summary>
        /// Splits a string into a vector of substrings based on a specified delimiter.
        /// </summary>
        /// <param name="haystack">The string to be split.</param>
        /// <param name="needle">The delimiter to split the string by.</param>
        /// <returns>A vector of substrings resulting from the split operation.</returns>
        static vector<string> split(string haystack, string needle) {
            vector<string> result;
            int startPos = 0;
            size_t foundPos = haystack.find(needle, startPos);

            while (foundPos != string::npos) {
                int count = foundPos - startPos;
                string token = haystack.substr(startPos, count);
                result.push_back(token);

                startPos = foundPos + needle.length();
                foundPos = haystack.find(needle, startPos);
            }

            // The remaining
            string token = haystack.substr(startPos, haystack.length() - startPos);
            result.push_back(token);

            return result;
        }
    };
}



std::tuple<std::vector<std::shared_ptr<IShape>>, int, int> ShapesTextProvider::next(const std::string& filename) {
    std::ifstream fIn(filename);

    if (!fIn.is_open()) {
        // Handle the error, e.g., throw an exception or return an error code.
        throw std::runtime_error("Unable to open file: " + filename);
    }

    int expectedN = 0;
    int practiceN = 0;
    ParserFactory factory;

    fIn >> expectedN;
    fIn.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume the newline

    std::vector<std::shared_ptr<IShape>> shapes;

    for (int i = 0; i < expectedN; ++i) {
        std::string line;
        std::getline(fIn, line);

        std::vector<std::string> tokens = Utils::String::split(line, ": ");
        std::shared_ptr<IParser> parser = factory.create(tokens[0]);

        bool check = false;
        std::shared_ptr<Object> tmp = nullptr;
        std::shared_ptr<IShape> shape = nullptr;

        std::tie(tmp, check) = parser->parse(tokens[1]);
        shape = std::dynamic_pointer_cast<IShape>(tmp);

        if (check && shape) {
            shapes.push_back(shape);
            ++practiceN;
        }
    }

    fIn.close();

    return std::make_tuple(shapes, expectedN, practiceN);
}

std::tuple<std::vector<std::shared_ptr<IShape>>, int, int> ShapesTextProvider::next(const std::vector<std::string>& lines) {
    int expectedN = 0;
    int practiceN = 0;
    ParserFactory factory;

    if (lines.empty()) {
        // Handle the error, e.g., throw an exception or return an error code.
        throw std::invalid_argument("Input lines are empty");
    }

    expectedN = std::stoi(lines[0]);
    if (expectedN <= 0) {
        // Handle the error, e.g., throw an exception or return an error code.
        throw std::runtime_error("Invalid input format");
    }

    std::vector<std::shared_ptr<IShape>> shapes;

    for (int i = 1; i <= expectedN && i < lines.size() - 1; ++i) {
        std::vector<std::string> tokens = Utils::String::split(lines[i], ": ");
        if (tokens.size() != 2) {
            // Handle the error, e.g., throw an exception or return an error code.
            throw std::runtime_error("Invalid input format for line " + std::to_string(i));
        }

        std::shared_ptr<IParser> parser = factory.create(tokens[0]);

        bool check = false;
        std::shared_ptr<Object> tmp = nullptr;
        std::shared_ptr<IShape> shape = nullptr;

        std::tie(tmp, check) = parser->parse(tokens[1]);
        shape = std::dynamic_pointer_cast<IShape>(tmp);

        if (check && shape) {
            shapes.push_back(shape);
            ++practiceN;
        }
    }

    return std::make_tuple(shapes, expectedN, practiceN);
}