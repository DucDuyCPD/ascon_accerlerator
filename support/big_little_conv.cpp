#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap_endian_string(char *hex) {
    int len = strlen(hex);
    if (len % 2 != 0) {
        printf("Lỗi: Chuỗi hex phải có số ký tự chẵn!\n");
        return;
    }

    // Đảo từng cặp byte
    for (int i = 0; i < len / 2; i += 2) {
        char temp1 = hex[i];
        char temp2 = hex[i + 1];
        hex[i] = hex[len - 2 - i];
        hex[i + 1] = hex[len - 1 - i];
        hex[len - 2 - i] = temp1;
        hex[len - 1 - i] = temp2;
    }
}

int main() {
    char hex_string[256];

while (1) {
    printf("Nhập chuỗi hex (số ký tự chẵn, VD: 12345678ABCDEF00): ");
    scanf("%255s", hex_string);

    // Kiểm tra chuỗi chỉ chứa ký tự hợp lệ (0-9, A-F, a-f)
    for (int i = 0; hex_string[i]; i++) {
        if (!isxdigit(hex_string[i])) {
            printf("Lỗi: Chuỗi chứa ký tự không hợp lệ!\n");
            return 1;
        }
    }

    swap_endian_string(hex_string);
    printf("Chuỗi hex sau khi đổi endian: %s\n", hex_string);
    printf("=================================\n\n");
}
    return 0;
}
