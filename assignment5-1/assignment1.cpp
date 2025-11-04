#include <iostream>
using namespace std;

int* varaa_taulukko(int);

int main() {
	int* taulukko = varaa_taulukko(10);
	return 0;
}

int* varaa_taulukko(int n) {
	int* taulukko = new int[n];
	return taulukko;
}