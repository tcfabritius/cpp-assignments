#include <iostream>
using namespace std;

int* arvot;
int lkm;

void lue_arvot();
void kaanna();
void tulosta_arvot();

int main() {
	cout << "Anna arvojen lukumaara: ";
	cin >> lkm;
	arvot = new int[lkm];
	lue_arvot();
	kaanna();
	tulosta_arvot();
	return 0;
}

void lue_arvot() {
	for (int i = 0; i < lkm; i++) {
		cout << "Anna arvo: " << endl;
		cin >> arvot[i];
	}
}

void kaanna() {
	for (int i = 0; i < lkm / 2; i++) {
		int temp = arvot[i];
		arvot[i] = arvot[lkm - 1 - i];
		arvot[lkm - 1 - i] = temp;
	}
}

void tulosta_arvot() {
	for (int i = 0; i < lkm; i++) {
		cout << arvot[i] << endl;
	}
}