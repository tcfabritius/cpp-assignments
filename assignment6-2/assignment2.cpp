#include <iostream>
#include <string>
using namespace std;

class Lamp {
private:
	bool _on;
public:
	Lamp() {
		cout << "Lamp created" << endl;
	}

	~Lamp() {
		cout << "Lamp destroyed" << endl;
	}
	void turn_on() {
		_on = true;
		cout << "Lamp is on" << endl;
	}
	void turn_off() {
		_on = false;
		cout << "Lamp is off" << endl;
	}
};

int main() {
	Lamp* lamp = new Lamp();
	delete lamp;
}