#pragma once

#include <string>
#include <iostream>

class Student
{
private:
	// Name Lastname Surname
	std::string NLS[3], dateOfBorn, phoneNumber, city, country, instituionOfStudy, cityOfStudy, countryOfStudy, numberGroupOfStudy;
	
	void SetToArray(std::string sourceArray[]);

public:
	Student(std::string nNLS[], std::string nDateOfBorn, std::string nPhoneNumber, std::string nCity, std::string nCountry,
		std::string nInstituionOfStudy, std::string nCityOfStudy, std::string nCountryOfStudy, std::string nNumberGroupOfStudy);
	
	void PrintFields();
};