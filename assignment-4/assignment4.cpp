#include <iostream>

int main()
{
	int vuosi;
	std::cout << "Anna vuosiluku";
	std::cin >> vuosi;
	if ((vuosi % 4 == 0 && vuosi % 100 == 0) || (vuosi % 400 == 0))
	{
		std::cout << "Vuosi on karkausvuosi";
	}
	else
	{
		std::cout << "Vuosi ei ole karkausvuosi";
	}
	return 0;
}