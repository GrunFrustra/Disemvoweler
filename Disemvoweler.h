#include <iostream>
#include <string>
class Disemvoweler{
public:
	Disemvoweler();
	Disemvoweler(std::string);

	void removeSpaces();
	void removeVowels();

	std::string getStringWithoutSpaces();
	std::string getStringWithoutVowels();
private:
	std::string defaultString;
	std::string removedSpaces;
	std::string removedVowels;
};