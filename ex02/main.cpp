#include <iostream>
#include <string>

int main() {
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;

	std::string& stringREF = brain;

	std::cout << "Memory Address of brain:   " << &brain << std::endl;
	std::cout << "Memory Address in stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address in stringREF: " << &stringREF << std::endl;

	std::cout << "Value of brain:   " << brain << std::endl;
	std::cout << "Value pointed by stringPT: " << *stringPTR << std::endl;
	std::cout << "Value referenced by stringREF: " << stringREF << std::endl;

	return 0;
}
