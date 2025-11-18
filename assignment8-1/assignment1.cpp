#include <iostream>
#include <string>
using namespace std;

class Henkilo {
private:
	string _nimi;

public:
	Henkilo(const string& nimi) {
		_nimi = nimi;
	}
};

class Opiskelija : public Henkilo {
private:
	int _opiskelijanumero;
public:
	Opiskelija(const string& nimi,int opiskelijanumero): Henkilo(nimi) {
		_opiskelijanumero = opiskelijanumero;
	}
};

int main() {
	Opiskelija* opiskelija = new Opiskelija("Erkki", 53);
	return 0;
}