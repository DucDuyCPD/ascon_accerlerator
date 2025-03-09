#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void swap_endian_string(char *hex) {
    int len = strlen(hex);
    if (len % 2 != 0) {
        fprintf(stderr, "Lỗi: Chuỗi hex phải có số ký tự chẳn!\n");
        exit(1);
    }

    for (int i = 0; i < len / 2; i += 2) {
        char temp1 = hex[i];
        char temp2 = hex[i + 1];
        hex[i] = hex[len - 2 - i];
        hex[i + 1] = hex[len - 1 - i];
        hex[len - 2 - i] = temp1;
        hex[len - 1 - i] = temp2;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Error: can not open input file %s\n", argv[1]);
        return 1;
    }

    FILE *output_file = fopen(argv[2], "w");
    if (!output_file) {
        printf("Error: can ont open output file %s\n", argv[2]);
        fclose(input_file);
        return 1;
    }

    char hex_string[256];
    while (fscanf(input_file, "%255s", hex_string) == 1) {
        for (int i = 0; hex_string[i]; i++) {
            if (!isxdigit(hex_string[i])) {
                fprintf(stderr, "Error: invalid value\n");
                fclose(input_file);
                fclose(output_file);
                return 1;
            }
        }
        
        swap_endian_string(hex_string);
        fprintf(output_file, "%s\n", hex_string);
    }

    fclose(input_file);
    fclose(output_file);
    printf("Done! Result save in %s\n", argv[2]);
    return 0;
}