#pragma once

#include <iostream>
#include <fstream>

class Point
{
private:
	float x, y, z = NULL;

public:
	float coord[3] = {x, y, z};
	Point(float x, float y, float z);

	void SaveToFile(std::string pathFile);
	void LoadFile(std::string pathFile);
};