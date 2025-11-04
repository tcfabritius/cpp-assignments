#include <iostream>
using namespace std;

void funktioA();
void funktioB();
void funktioC();

// Kutsupinossa on funktioC, funktioB, funktioA ja main ylh‰‰lt‰ alasp‰in

int main() {
	funktioA();
	return 0;
}

void funktioA() {
	cout << "A";
	funktioB();
}

void funktioB() {
	cout << "B";
	funktioC();
}

void funktioC() {
	cout << "C";
}