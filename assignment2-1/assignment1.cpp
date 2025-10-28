#include <iostream>

int main() {
	int x = 1;
	int *y;
	y = &x;
	std::cout << x << std::endl << *y;
	return 0;
}