#include <iostream>
#include "Disemvoweler.h"

int main(int argc, char* argv[]){
	std::cout << "Enter a string: ";
	std::string text;
	std::getline(std::cin, text);

	std::cout << text << std::endl;
	Disemvoweler d(text);
	std::cout << "String with spaces removed: ";
	d.removeSpaces();

	std::cout << "String with vowels removed: ";
	d.removeVowels();
	std::cin.get();
	return 0;
}