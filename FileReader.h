#pragma once
#include <iostream>
#include <fstream>

class FileReader {
public:
	static std::wstring ReadText(std::wstring filename) {
		std::wifstream t(filename);
		t.seekg(0, std::ios::end);
		long long size = t.tellg();
		std::wstring buffer(size, ' ');
		t.seekg(0);
		t.read(&buffer[0], size);
		return buffer;
	}
};	