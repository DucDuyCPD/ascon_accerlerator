#include <iostream>

void add_constant (int p, int round, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);
void s_box (uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);
void linear_diffusion (uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);
void ascon_permutation(int permutation, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);