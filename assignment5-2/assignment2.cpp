#include <iostream>
using namespace std;

void lue_arvot(int*, int);

int main() {
	int lkm;
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	lue_arvot(arvot, lkm);
	return 0;
}

void lue_arvot(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
}