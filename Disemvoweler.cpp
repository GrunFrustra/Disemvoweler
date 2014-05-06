#include "Disemvoweler.h"
#include <iostream>
#include <algorithm>
#include <string>

Disemvoweler::Disemvoweler() :
defaultString("Hello World")
{}

Disemvoweler::Disemvoweler(std::string s) :
defaultString(s)
{}

void Disemvoweler::removeSpaces(){
	removedSpaces = defaultString;
	int spacesRemoved = 0;
	for (size_t i = 0, j = 0; i < defaultString.size(); i++, j++){
		if (defaultString[i] != ' '){
			removedSpaces[j] = defaultString[i];
		}
	   	else{
			j--;
			spacesRemoved++;
		}
	}

	//Remove garbage at the end of the String
	for (int i = 1; i <= spacesRemoved; i++){
		removedSpaces[defaultString.size() - i] = 0;
	}
	std::cout << removedSpaces << std::endl;
}

void Disemvoweler::removeVowels(){
	removedVowels = removedSpaces;
	std::string vowels;
	int vowelsRemoved = 0;
	for (size_t i = 0, j = 0; i < removedSpaces.size(); i++, j++){
		if (removedSpaces[i] == 'a'){
			j--;
			vowelsRemoved++;
			vowels.append("a");
		}
		else if (removedSpaces[i] == 'e'){
			j--;
			vowelsRemoved++;
			vowels.append("e");
		}
		else if (removedSpaces[i] == 'i'){
			j--;
			vowelsRemoved++;
			vowels.append("i");
		}
		else if (removedSpaces[i] == 'o'){
			j--;
			vowelsRemoved++;
			vowels.append("o");
		}
		else if (removedSpaces[i] == 'u'){
			j--;
			vowelsRemoved++;
			vowels.append("u");
		}
		else{
			removedVowels[j] = removedSpaces[i];
		}
	}
	//Remove garbage at the end of the string.
	for (int i = 1; i <= vowelsRemoved; i++){
		removedVowels[removedSpaces.size() - i] = 0;
	}

	std::cout << removedVowels << std::endl;

	std::cout << "Vowels removed: ";
	std::cout << vowels << std::endl;
}

std::string Disemvoweler::getStringWithoutSpaces(){
	std::string temp = removedSpaces;
	return temp;
}

std::string Disemvoweler::getStringWithoutVowels(){
	std::string temp = removedVowels;
	return temp;
}

