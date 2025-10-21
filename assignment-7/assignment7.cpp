#include <iostream>

double laske_litrat(int);

int main()
{
	double litrat;
	int gallonat;
	std::cout << "Anna gallonamäärä (negatiivinen lopettaa): \n";
	std::cin >> gallonat;
	while (gallonat >= 0)
	{
		litrat = laske_litrat(gallonat);
		std::cout << "Litroina: " << litrat << "\n";
		std::cout << "Anna gallonamäärä (negatiivinen lopettaa): \n";
		std::cin >> gallonat;
	}
	return 0;
}

double laske_litrat(int gallonat) {
	double litrat = gallonat * 3.785;
	return litrat;
}

