#include <iostream>
#include <string>
using namespace std;

class Ajoneuvo {
private:
	int _huippunopeus;
	int _kayttoonottovuosi;
	int _paino;

public:
	Ajoneuvo() : _huippunopeus(200),
		_kayttoonottovuosi(2020),
		_paino(50) {
	}
};

class Auto : public Ajoneuvo {
private:
	int _ovienmaara;
	int _renkaidenmaara;

public:
	Auto() : Ajoneuvo(), _ovienmaara(4),
		_renkaidenmaara(4)  {
	}
};

class Henkiloauto : public Auto {
private:
	int _istumapaikat;

public:
	Henkiloauto() : Auto(), _istumapaikat(5) {
	}
};

class Kuormaauto : public Auto {
private:
	int _maksimikuorma;

public:
	Kuormaauto() : Auto(), _maksimikuorma(10000) {}
};

class Lentokone : public Ajoneuvo {
private:
	int _maksimilentokorkeus;

public:
	Lentokone() : Ajoneuvo(), _maksimilentokorkeus(10000) {}
};

class Laiva : public Ajoneuvo {
private:
	int _maksimisyvyys;

public:
	Laiva() : Ajoneuvo(), _maksimisyvyys(5000) {}
};

int main() {
	Ajoneuvo* ajoneuvo = new Ajoneuvo();
	Auto* auto1 = new Auto();
	Henkiloauto* henkiloauto = new Henkiloauto();
	Kuormaauto* kuormaauto = new Kuormaauto();
	Lentokone* lentokone = new Lentokone();
	Laiva* laiva = new Laiva();
	return 0;
}