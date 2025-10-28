#include <iostream>

int main() {
	int x = 5;
	int* y;
	y = &x;
	int** z;
	z = &y;
	**z = 10;
	std::cout << x;
	return 0;
}