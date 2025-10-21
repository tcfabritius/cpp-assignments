#include <iostream>

int main()
{
	char sukupuoli;
	int arvo;
	std::cout << "Anna sukupuoli (m tai n): ";
	std::cin >> sukupuoli;
	std::cout << "Anna hemoglobiiniarvo: ";
	std::cin >> arvo;
	if (sukupuoli == 'n' && arvo < 117)
	{
		std::cout << "Alhainen hemoglobiini";
	}
	else if (sukupuoli == 'n' && arvo >= 117 && arvo <= 175)
	{
		std::cout << "Normaali hemoglobiini";
	}
	else if (sukupuoli == 'n' && arvo > 175) 
	{
		std::cout << "Korkea hemoglobiini";
	}
	else if (sukupuoli == 'm' && arvo < 134)
	{
		std::cout << "Alhainen hemoglobiini";
	}
	else if (sukupuoli == 'm' && arvo >= 134 && arvo <= 195)
	{
		std::cout << "Normaali hemoglobiini";
	}
	else if (sukupuoli == 'm' && arvo > 195)
	{
		std::cout << "Korkea hemoglobiini";
	}
	return 0;
}