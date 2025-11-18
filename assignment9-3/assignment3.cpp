#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Writable {
	public:
	virtual void writeToFile(const string& filename) = 0;
	virtual ~Writable() {}
};

class Readable {
	public:
	virtual void readFromFile(const string& filename) = 0;
	virtual ~Readable() {}
};

class Document : public Writable, public Readable {
private:
	string _content;
	int _version;

public:
	Document() : _content("Blaa"), _version(1) {}
	void writeToFile(const string& filename) {
		ofstream myfile(filename);
		if (myfile.is_open())
		{
			myfile << _content;
			myfile << _version;
			myfile.close();
		}
		else cout << "Unable to open file";
	}
	void readFromFile(const string& filename) {
		string line;
		ifstream myfile(filename);
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				cout << line << '\n';
			}
			myfile.close();
		}
		else cout << "Unable to open file";
	}
};

int main() {
	Document* doc = new Document();
	doc->writeToFile("document.txt");
	doc->readFromFile("document.txt");
	return 0;
}