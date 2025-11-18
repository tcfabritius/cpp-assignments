#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
	Elain() {
		cout << "Elain luotu" << endl;
	}

	virtual void aantele() = 0;
};

class Koira : public Elain {
public:
	Koira() {
		cout << "Koira luotu" << endl;
	}

	void aantele() {
		cout << "Hau hau!" << endl;
	}
};

class Kissa : public Elain {
public:
	Kissa() {
		cout << "Kissa luotu" << endl;
	}

	void aantele() {
		cout << "Miau miau!" << endl;
	}
};

int main() {
	Elain* elain = new Elain(); // Puhtaan virtuaalifunktion vuoksi tämä rivi aiheuttaa käännösvirheen
	Koira* koira = new Koira();
	Kissa* kissa = new Kissa();
	koira->aantele();
	kissa->aantele();
	return 0;
}