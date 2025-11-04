#include <iostream>
using namespace std;

// unresolved externam symbol int jorma

void tulosta();
static int jorma;

int main() {
	jorma = 1;
	tulosta();
	return 0;
}