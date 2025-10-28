#include <iostream>

void multiply(int*);

int main() {
	int x = 5;
	multiply(&x);
	std::cout << x;
	return 0;
}

void multiply(int *y) {
	*y = *y * 2;
}