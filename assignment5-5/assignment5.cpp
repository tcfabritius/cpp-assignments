#include <iostream>
using namespace std;

void lue_arvot(int*, int);
void kaanna(int*, int);
void tulosta_arvot(const int*, int);

int main() {
	int lkm;
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	int* arvot = new int[lkm];
	lue_arvot(arvot, lkm);
	kaanna(arvot, lkm);
	tulosta_arvot(arvot, lkm);
	return 0;
}

void lue_arvot(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Anna arvo: " << endl;
		cin >> t[i];
	}
}

void kaanna(int* t, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = t[i];
		t[i] = t[n - 1 - i];
		t[n - 1 - i] = temp;
	}
}

void tulosta_arvot(const int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << t[i] << endl;
	}
}