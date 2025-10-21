#include <iostream>

int main()
{
	int korkeus;
	int kanta;
	double piiri;
	double ala;
	std::cout << "Anna korkeus: ";
	std::cin >> korkeus;
	std::cout << "Anna kanta: ";
	std::cin >> kanta;
	piiri = 2 * korkeus + 2 * kanta;
	ala = korkeus * kanta;
	std::cout << "Piiri on " << piiri << std::endl;
	std::cout << "Ala on " << ala << std::endl;
	return 0;
}