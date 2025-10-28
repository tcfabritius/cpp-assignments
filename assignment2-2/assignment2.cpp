#include <iostream>

int main() {
	double x = 3;
	std::cout << x << std::endl;
	double *y;
	y = &x;
	*y = *y + 3;
	std::cout << x;
	return 0;
}