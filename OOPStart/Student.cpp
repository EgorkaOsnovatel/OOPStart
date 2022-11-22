#include "Student.h"

Student::Student(std::string nNLS[], std::string nDateOfBorn, std::string nPhoneNumber, std::string nCity, std::string nCountry,
	std::string nInstituionOfStudy, std::string nCityOfStudy, std::string nCountryOfStudy, std::string nNumberGroupOfStudy) : dateOfBorn(nDateOfBorn),
	phoneNumber(nPhoneNumber), city(nCity), country(nCountry), instituionOfStudy(nInstituionOfStudy), cityOfStudy(nCityOfStudy), countryOfStudy(nCountryOfStudy),
	numberGroupOfStudy(nNumberGroupOfStudy)
{
	SetToArray(nNLS);
}

void Student::SetToArray(std::string sourceArray[])
{
	for (int i = 0; i < 3; i++)
	{
		NLS[i] = sourceArray[i];
	}
}

void Student::PrintFields()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << NLS[i] << ' ';
	}

	std::cout << dateOfBorn << std::endl 
		<< phoneNumber << std::endl <<
		city << std::endl <<
		country << std::endl <<
		instituionOfStudy << std::endl <<
		cityOfStudy << std::endl <<
		countryOfStudy << std::endl <<
		numberGroupOfStudy << std::endl;

}