#include <iostream>

int main() {
	int x[] = { 1,2,3,4,5 };
	int *y;
	y = x;
	std::cout << *y << std::endl;
	y++;
	std::cout << *y << std::endl;
	y++;
	std::cout << *y << std::endl;
	y++;
	std::cout << *y << std::endl;
	y++;
	std::cout << *y << std::endl;
	return 0;
}