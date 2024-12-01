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

struct uint128_t {
	uint64_t low = 0;
	uint64_t high = 0;
};


void initialization(uint8_t k, uint8_t n, uint8_t a, uint8_t b, uint128_t K, uint128_t N, uint64_t &s0, uint64_t &s1, uint64_t &s2, uint64_t &s3, uint64_t &s4) {
	uint64_t IV = 0;

	IV = IV + k;
	IV = (IV << 8) + n;
	IV = (IV << 8) + a;
	IV = (IV << 8) + b;
	IV = (IV << (160-k));
	cout << hex << IV << endl;

	s0 = IV;
	s1 = K.high;
	s2 = K.low;
	s3 = N.high;
	s4 = N.low;

	ascon_permutation(12, s0, s1, s2, s3, s4);

	s0 = s0 ^ 0;
	s1 = s1 ^ 0;
	s2 = s2 ^ 0;
	s3 = s3 ^ K.high;
	s4 = s4 ^ K.low;
}

void process_associated_data() {
	
}

int main() {

	plaintext data;
	data.x0 = 0;
	data.x1 = 0;
	data.x2 = 0;
	data.x3 = 0;
	data.x4 = 0;

	uint8_t k = 128;
	uint8_t n = 128;
	uint8_t a = 12;
	uint8_t b = 6;

	uint128_t K;
	K.low = 0;
	K.high = 0;

	uint128_t N;
	N.low = 0;
	N.high = 0;

	initialization(k, n, a, b, K, N, data.x0, data.x1, data.x2, data.x3, data.x4);

	cout << "x0 = " << hex << data.x0 << endl;
	cout << "x1 = " << hex << data.x1 << endl;
	cout << "x2 = " << hex << data.x2 << endl;
	cout << "x3 = " << hex << data.x3 << endl;
	cout << "x4 = " << hex << data.x4 << endl;
	return 0;
}