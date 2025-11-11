#include <iostream>
#include <string>
using namespace std;

class Box {
private:
	int _size;
public:
	Box(int size) : _size(size) {}
	void show_size() {
		cout << "Box size: " << _size << endl;
	}
};

int main() {
	int size;
	cout << "Enter box size: ";
	cin >> size;
	Box* b = new Box(size);
	b->show_size();
	delete b;
	return 0;
}