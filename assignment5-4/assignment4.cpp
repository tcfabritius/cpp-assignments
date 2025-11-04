#include <iostream>
using namespace std;

void tulosta_arvot(const int*, int);

int main() {
	int lkm;
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	for (int i = 0; i < lkm; i++) {
		arvot[i] = i;
	}
	tulosta_arvot(arvot, lkm);
	return 0;
}

void tulosta_arvot(const int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << t[i] << endl;
	}
}