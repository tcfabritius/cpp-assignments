#include <iostream>
using namespace std;

int summa(int*, int);

int lkm;
int sum;

int main() {
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	for (int i = 0; i < lkm; i++) {
		arvot[i] = 1;
	}
	for (int i = 0; i < lkm; i++) {
		cout << arvot[i];
	}
	sum = summa(arvot, lkm);
	delete[] arvot;
	cout << endl << sum;
	return 0;
}

int summa(int* arvot, int lk) {
	int summa = 0;
	for (int i = 0; i < lk; i++) {
		if (arvot[i] == 1) {
			summa++;
		}
	}
	return summa;
}