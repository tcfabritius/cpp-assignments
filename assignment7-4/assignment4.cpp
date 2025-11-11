#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Car {
private:
	string _rekisterinumero;
	int _huippunopeus;
	int _nopeus;
	int _kuljettu;
public:
	Car() {
	}
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
	int get_kuljettu() {
		return _kuljettu;
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
	Car autot[10];
	for (int i = 0; i < 10; i++) {
		autot[i] = Car("ABC-" + to_string(i), rand() % 200 + 100);
	}
	while (true) {
		for (int i = 0; i < 10; i++) {
			autot[i].kiihdyta(rand() % 15 - 10);
			autot[i].kulje(1);
		}
		bool kaikki_perille = true;
		for (int i = 0; i < 10; i++) {
			if (autot[i].get_kuljettu() < 10000) {
				kaikki_perille = false;
				break;
			}
		}
		if (kaikki_perille) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		autot[i].tulosta_tiedot();
	}
	return 0;
}