#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string _title;
	int _pages;
public:
	Book(string title, int p) : _title(title), _pages(p) {}
	Book(const Book& original) {
		_title = original._title;
		_pages = original._pages;
		cout << "Copy constructor called for <title>";
	}
	
};

int main() {
	Book b1("C++ Basics", 200);
	Book b2 = b1;  
	return 0;
}