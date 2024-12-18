#include <stdio.h>
int main() {
    int numbers[5];
    int kiemTraSoChan = 0;

    printf("Vui long nhap 5 so nguyen\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Cac phan tu chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            kiemTraSoChan = 1;
        }
    }
    if (kiemTraSoChan == 0) {
        printf("Mang khong chua so chan");
    }

    return 0;
}