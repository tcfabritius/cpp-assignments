#include <iostream>
using namespace std;

int lkm;

int main() {
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	for (int i=0; i < lkm; i++) {
		arvot[i] = 1;
	}
	for (int i=0; i < lkm; i++) {
		cout << arvot[i];
	}
	delete[] arvot;
	return 0;
}