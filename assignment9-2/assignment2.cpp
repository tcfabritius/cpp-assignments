#include <iostream>
#include <string>
using namespace std;

class Laskutoimitus {
public:
	virtual double laske(double a, double b) = 0;
	virtual ~Laskutoimitus() {}
};

class Summa : public Laskutoimitus {
public:
	double laske(double a, double b) {
		return a + b;
	}
};

class Kertolasku : public Laskutoimitus {
public:
	double laske(double a, double b) {
		return a * b;
	}
};

int main() {
	Laskutoimitus* laskutoimitus;
	laskutoimitus = new Summa();
	cout << "Summa: " << laskutoimitus->laske(5, 3) << endl;
	laskutoimitus = new Kertolasku();
	cout << "Kertolasku: " << laskutoimitus->laske(5, 3) << endl;
	delete laskutoimitus;
	return 0;
}