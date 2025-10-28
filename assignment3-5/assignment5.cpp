#include <iostream>

void nollaa(int*, int);

int main() {
	int taulukko[] = {1,2,3,4,5};
	int n = 5;
	int* y;
	y = taulukko;
	nollaa(y, n);
	int x = 0;
	while (x < 5) {
		std::cout << taulukko[x];
		x++;
	}
	return 0;
}

void nollaa(int *y, int n) {
	int x = 0;
	while (x < n) {
		*y = 0;
		x++;
		y++;
	}
}