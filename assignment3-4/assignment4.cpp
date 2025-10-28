#include <iostream>

int summaaA(int*, int*);
int summaaB(int&, int&);

int main() {
	int luku1 = 1;
	int luku2 = 2;
	int summaA = summaaA(&luku1, &luku2);
	int summaB = summaaB(luku1, luku2);
	std::cout << summaA << std::endl << summaB;
	return 0;
}

int summaaA(int *luku1, int *luku2) {
	int summa = *luku1 + *luku2;
	return summa;
}

int summaaB(int& luku1, int& luku2) {
	int summa = luku1 + luku2;
	return summa;
}