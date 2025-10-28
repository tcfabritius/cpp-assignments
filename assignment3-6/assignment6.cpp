#include <iostream>

int main() {
	char mjono[] = "Hello";
	char* osoitin = mjono;
	int pituus = 0;
	while (*osoitin) {
		pituus++;
		*osoitin++;
	}
	std::cout << pituus;
	return 0;
}