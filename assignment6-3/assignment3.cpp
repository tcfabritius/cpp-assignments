#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y) : _x(x), _y(y){}
	void print_info() {
		cout << "Point(" << _x << ", " << _y << ")" << endl;
	}
};

int main() {
	int x, y;
	cout << "Enter x coordinate: ";
	cin >> x;
	cout << "Enter y coordinate: ";
	cin >> y;
	Point* point = new Point(x, y);
	point->print_info();
	delete point;
	return 0;
}