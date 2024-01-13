#include "pch.h"
#include <fstream>
#include <exception>
#include "TextToVec.h"

std::vector<std::string> TextToVec::read(std::string fileName) {
	std::ifstream inf(fileName);

	if (!inf) {
		throw std::exception("Can't open file to read");
	}

	std::vector<std::string> line;

	std::string buffer;

	while (getline(inf, buffer)) {
		line.push_back(buffer);
	}

	return line;
}
