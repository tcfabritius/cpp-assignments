#include <iostream>

int main()
{
	int x;
	x = 0;
	while (x <= 1000)
	{
		if (x % 3 == 0) {
			std::cout << x << "\n";
		}
		x++;
	}
	return 0;
}