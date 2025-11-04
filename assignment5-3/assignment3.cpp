#include <iostream>
using namespace std;

void kaanna(int*, int);

int main() {
	int lkm;
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	for (int i = 0; i < lkm; i++) {
		arvot[i] = i;
	}
	kaanna(arvot, lkm);

	return 0;
}

void kaanna(int* t, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = t[i];
		t[i] = t[n - 1 - i];
		t[n - 1 - i] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << t[i] << endl;
	}
}