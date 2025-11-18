#include <iostream>
#include <string>
using namespace std;


class Car;
void print_car_info(Car*);
void print_car_info1(Car);

class Car {
private:
	string _brand;
	int _year;
public:
	Car(string brand, int year) : _brand(brand), _year(year) {}
	void print_info() {
		cout << _brand << " " << _year << endl;
	}
};

int main() {
	Car* c = new Car("Audi", 1995);
	print_car_info(c);
	Car d("Toyota", 2010);
	print_car_info1(d);
	delete c;
	return 0;
}

void print_car_info(Car& car) {
	car.print_info();
}


void print_car_info1(Car car) {
	car.print_info();
}