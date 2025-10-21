#include <iostream>
#include <string>

int main()
{
	std::cout << "Syötä nimi: ";
	std::string name;
	std::cin >> name;
	std::cout << "Terve, " << name << "!" << std::endl;
	return 0;
}