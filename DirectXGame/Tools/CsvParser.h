#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class CsvParser {
public:
	CsvParser(const std::string& filePath);
	std::vector<std::vector<std::string>> Read();

private:
	std::string filePath;
};