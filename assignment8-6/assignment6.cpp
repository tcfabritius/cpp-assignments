#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
	Elain() {
		cout << "Elain luotu" << endl;
	}

	virtual void aantele() = 0;

	virtual ~Elain() {
		cout << "Elain tuhottu" << endl;
	}
};

class Koira : public Elain {
public:
	Koira() {
		cout << "Koira luotu" << endl;
	}

	void aantele() {
		cout << "Hau hau!" << endl;
	}

	~Koira() {
		cout << "Koira tuhottu" << endl;
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

	~Kissa() {
		cout << "Kissa tuhottu" << endl;
	}
};

int main() {
	Elain* kissa = new Kissa();
	Elain* koira = new Koira();
	koira->aantele();
	kissa->aantele();
	delete koira;
	delete kissa;
	return 0;
}