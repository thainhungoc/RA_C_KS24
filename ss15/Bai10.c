#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int demKyTu[256] = {0};

    printf("Nhap mot chuoi bat ky: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        demKyTu[str[i]]++;
    }

    printf("\nSo lan xuat hien cua tung ky tu trong chuoi:\n");
    for(int i = 0; i < 256; i++) {
        if(demKyTu[i] > 0) {
            if(i == 32)
                printf("Khoang trang: %d lan\n", demKyTu[i]);
            else
                printf("Ky tu '%c': %d lan\n", i, demKyTu[i]);
        }
    }

    return 0;
}