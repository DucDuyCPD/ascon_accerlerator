#include <iostream>
using namespace std;

struct p12 {
	static const uint64_t rc0 = 0xf0;
	static const uint64_t rc1 = 0xe1;
	static const uint64_t rc2 = 0xd2;
	static const uint64_t rc3 = 0xc3;
	static const uint64_t rc4 = 0xb4;
	static const uint64_t rc5 = 0xa5;
	static const uint64_t rc6 = 0x96;
	static const uint64_t rc7 = 0x87;
	static const uint64_t rc8 = 0x78;
	static const uint64_t rc9 = 0x69;
	static const uint64_t rc10 = 0x5a;
	static const uint64_t rc11 = 0x4b;
};

struct p8 {
	static const uint64_t rc0 = 0xb4;
	static const uint64_t rc1 = 0xa5;
	static const uint64_t rc2 = 0x96;
	static const uint64_t rc3 = 0x87;
	static const uint64_t rc4 = 0x78;
	static const uint64_t rc5 = 0x69;
	static const uint64_t rc6 = 0x5a;
	static const uint64_t rc7 = 0x4b;
};

struct p6 {
	static const uint64_t rc0 = 0x96;
	static const uint64_t rc1 = 0x87;
	static const uint64_t rc2 = 0x78;
	static const uint64_t rc3 = 0x69;
	static const uint64_t rc4 = 0x5a;
	static const uint64_t rc5 = 0x4b;
};

struct plaintext {
	uint64_t x0;
	uint64_t x1;
	uint64_t x2;
	uint64_t x3;
	uint64_t x4;
};

void add_constant (int p, int round, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4) {
	if (p == 12) {
		switch (round) {
			case 0: x2 = x2 ^ p12::rc0; break; 
			case 1: x2 = x2 ^ p12::rc1; break;
			case 2: x2 = x2 ^ p12::rc2; break; 
			case 3: x2 = x2 ^ p12::rc3; break;
			case 4: x2 = x2 ^ p12::rc4; break; 
			case 5: x2 = x2 ^ p12::rc5; break;
			case 6: x2 = x2 ^ p12::rc6; break; 
			case 7: x2 = x2 ^ p12::rc7; break;
			case 8: x2 = x2 ^ p12::rc8; break; 
			case 9: x2 = x2 ^ p12::rc9; break;
			case 10: x2 = x2 ^ p12::rc10; break; 
			case 11: x2 = x2 ^ p12::rc11; break;
		}
	}
	else if (p == 8) {
		switch (round) {
			case 0: x2 = x2 ^ p8::rc0; break; 
			case 1: x2 = x2 ^ p8::rc1; break;
			case 2: x2 = x2 ^ p8::rc2; break; 
			case 3: x2 = x2 ^ p8::rc3; break;
			case 4: x2 = x2 ^ p8::rc4; break; 
			case 5: x2 = x2 ^ p8::rc5; break;
			case 6: x2 = x2 ^ p8::rc6; break; 
			case 7: x2 = x2 ^ p8::rc7; break;
		}
	}
	else if (p == 6) {
		switch (round) {
			case 0: x2 = x2 ^ p6::rc0; break; 
			case 1: x2 = x2 ^ p6::rc1; break;
			case 2: x2 = x2 ^ p6::rc2; break; 
			case 3: x2 = x2 ^ p6::rc3; break;
			case 4: x2 = x2 ^ p6::rc4; break; 
			case 5: x2 = x2 ^ p6::rc5; break;
		}
	}
}

void s_box (uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4) {
	uint64_t a, b, c, d, e, f, g, h, i, j;
	const uint64_t one = 0xFFFFFFFFFFFFFFFF;
	a = ((x0 ^ x4) ^ one) & x1;
	b = (x1 ^ one) & (x2 ^ x1);
	c = ((x2 ^ x1) ^ one) & x3;
	d = (x3 ^ one) & (x4 ^ x3);
	e = ((x4 ^ x3) ^ one) & (x0 ^ x4);
	f = (x0 ^ x4) ^ b;
	g = x1 ^ c;
	h = (x2 ^ x1) ^ d;
	i = x3 ^ e;
	j = (x4 ^ x3) ^ a;

	x0 = f ^ j;
	x1 = g ^ f;
	x2 = h ^ one;
	x3 = i ^ h;
	x4 = j;
}

void linear_diffusion (uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4) {
	uint64_t x0_sr19 = (x0 >> 19) | (x0 << (64-19));
	uint64_t x0_sr28 = (x0 >> 28) | (x0 << (64-28));

	uint64_t x1_sr61 = (x1 >> 61) | (x1 << (64-61));
	uint64_t x1_sr39 = (x1 >> 39) | (x1 << (64-39));

	uint64_t x2_sr1 = (x2 >> 1) | (x2 << (64-1));
	uint64_t x2_sr6 = (x2 >> 6) | (x2 << (64-6));

	uint64_t x3_sr10 = (x3 >> 10) | (x3 << (64-10));
	uint64_t x3_sr17 = (x3 >> 17) | (x3 << (64-17));

	uint64_t x4_sr7 = (x4 >> 7) | (x4 << (64-7));
	uint64_t x4_sr41 = (x4 >> 41) | (x4 << (64-41));

	x0 = x0 ^ x0_sr19 ^ x0_sr28;
	x1 = x1 ^ x1_sr61 ^ x1_sr39;
	x2 = x2 ^ x2_sr1 ^ x2_sr6;
	x3 = x3 ^ x3_sr10 ^ x3_sr17;
	x4 = x4 ^ x4_sr7 ^ x4_sr41;
}

void ascon_permutation(int permutation, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4) {
	for (int i = 0; i < permutation; i++) {
		add_constant (permutation, i, x0, x1, x2, x3, x4);
		s_box (x0, x1, x2, x3, x4);
		linear_diffusion (x0, x1, x2, x3, x4);
	}
}

int main() {

	plaintext data;
	data.x0 = 0;
	data.x1 = 0;
	data.x2 = 0;
	data.x3 = 0;
	data.x4 = 0;

	int permutation = 12;

	ascon_permutation(12, data.x0, data.x1, data.x2, data.x3, data.x4);

	cout << "x0 = " << hex << data.x0 << endl;
	cout << "x1 = " << hex << data.x1 << endl;
	cout << "x2 = " << hex << data.x2 << endl;
	cout << "x3 = " << hex << data.x3 << endl;
	cout << "x4 = " << hex << data.x4 << endl;
	return 0;
}
