#include <iostream>

int main() {
	int x = 5;
	int* y;
	y = &x;
	std::cout << &x << std::endl << &y << std::endl;
	std::cout << x << std::endl << y << std::endl;
	return 0;
}