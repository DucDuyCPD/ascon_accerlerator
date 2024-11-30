#ifndef ASCON_PERMUTATION_H
#define ASCON_PERMUTATION_H

#include <cstdint>  // Thư viện cần thiết cho kiểu dữ liệu uint64_t

// Hàm thêm hằng số vào trạng thái
void add_constant(int p, int round, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);

// Hàm S-box
void s_box(uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);

// Hàm phân tán tuyến tính
void linear_diffusion(uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);

// Hàm thực hiện phép hoán vị Ascon
void ascon_permutation(int permutation, uint64_t &x0, uint64_t &x1, uint64_t &x2, uint64_t &x3, uint64_t &x4);

#endif // ASCON_PERMUTATION_H
