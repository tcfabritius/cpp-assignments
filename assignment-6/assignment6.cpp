#include <iostream>

int main()
{
	int tuuma;
	double cm;
	std::cout << "Anna tuumamäärä (negatiivinen lopettaa): \n";
	std::cin >> tuuma;
	while (tuuma >= 0)
	{
		cm = tuuma * 2.54;
		std::cout << "Senttimetreinä: " << cm << "\n";
		std::cout << "Anna tuumamäärä (negatiivinen lopettaa): \n";
		std::cin >> tuuma;
	}
	return 0;
}