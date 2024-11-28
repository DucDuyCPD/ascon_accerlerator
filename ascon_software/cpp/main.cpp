#include <iostream>
#include <ascon_permutation.h>

using namespace std;

struct plaintext {
	uint64_t x0;
	uint64_t x1;
	uint64_t x2;
	uint64_t x3;
	uint64_t x4;
};

int main() {

	plaintext data;
	data.x0 = 0;
	data.x1 = 0;
	data.x2 = 0;
	data.x3 = 0;
	data.x4 = 0;

	int permutation = 12;

	ascon_permutation(6, data.x0, data.x1, data.x2, data.x3, data.x4);

	cout << "x0 = " << hex << data.x0 << endl;
	cout << "x1 = " << hex << data.x1 << endl;
	cout << "x2 = " << hex << data.x2 << endl;
	cout << "x3 = " << hex << data.x3 << endl;
	cout << "x4 = " << hex << data.x4 << endl;
	return 0;
}