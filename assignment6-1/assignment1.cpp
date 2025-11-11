#include <iostream>
#include <string>
using namespace std;

class Car{
private:
	string _brand;
	int _year;

public:
	void set_brand(string brand) {
		_brand = brand;
	}
	void set_year(int year) {
		_year = year;
	}
	void print_info() {
		cout << _brand << _year;
	}
};

int main() {
	Car* car = new Car();
	car->set_brand("Audi");
	car->set_year(1995);
	car->print_info();
	return 0;
}