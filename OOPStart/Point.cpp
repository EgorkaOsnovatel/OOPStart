#include "Point.h"

Point::Point(float x, float y, float z) : x(x), y(y), z(z) {}

void Point::SaveToFile(std::string pathFile)
{
	std::ofstream outFile(pathFile, std::ios::app);
	
	if (outFile.is_open())
	{
		outFile << x << ',' << y << ',' << z << std::endl;
	}

	outFile.close();
}

void Point::LoadFile(std::string pathFile)
{
	std::ifstream inFile(pathFile, std::ifstream::in);
	std::string data, buff;

	inFile >> data;
	inFile.close();

	int i = 0;
	while (i < 3)
	{
		if (data[i] == ',')
		{
			coord[i] = atof(buff.c_str());
			i++;
		}

		buff += data[i];
	}
}