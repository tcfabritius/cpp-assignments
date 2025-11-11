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
	void kiihdyta(int maara) {
		_nopeus += maara;
		if (_nopeus > _huippunopeus) {
			_nopeus = _huippunopeus;
		}
		else if (_nopeus < 0) {
			_nopeus = 0;
		}
	}
	void kulje(int tunnit) {
		_kuljettu += _nopeus * tunnit;
	}
	void tulosta_tiedot() {
		cout << "Rekisterinumero: " << _rekisterinumero << ", Huippunopeus: " << _huippunopeus
			<< ", Nopeus: " << _nopeus << ", Kuljettu matka: " << _kuljettu << endl;
	}
};

int main() {
	Car* car = new Car("ABC-123", 180);
	car->kiihdyta(30);
	car->kiihdyta(70);
	car->kiihdyta(50);
	car->kulje(2);
	car->tulosta_tiedot();
	car->kiihdyta(-200);
	car->tulosta_tiedot();

	delete car;
	return 0;
}