#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	string _rekisterinumero;
	int _huippunopeus;
	int _nopeus;
	int _kuljettu;
public:
	Car(string rekisterinumero, int huippunopeus) {
		_rekisterinumero = rekisterinumero;
		_huippunopeus = huippunopeus;
		_nopeus = 0;
		_kuljettu = 0;
	}
	void tulosta_tiedot() {
		cout << "Rekisterinumero: " << _rekisterinumero << ", Huippunopeus: " << _huippunopeus
			<< ", Nopeus: " << _nopeus << ", Kuljettu matka: " << _kuljettu << endl;
	}
};

int main() {
	Car* car = new Car("ABC-123", 180);
	car->tulosta_tiedot();
	delete car;
	return 0;
}