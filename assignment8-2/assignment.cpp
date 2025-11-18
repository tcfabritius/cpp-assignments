#include <iostream>
#include <string>
using namespace std;

class Elain {
public:
	Elain() {
		cout << "Elain luotu" << endl;
	}
};

class Koira : public Elain {
	public:
	Koira() {
		cout << "Koira luotu" << endl;
	}
};

class Kissa : public Elain {
	public:
	Kissa() {
		cout << "Kissa luotu" << endl;
	}
};

int main() {
	Elain* elain = new Elain();
	Koira* koira = new Koira();
	Kissa* kissa = new Kissa();
	return 0;
}