#include <stdio.h>

int main() {
    int number;
    double sum = 0;
    printf("Nhap 1 so nguyen duong: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Vui long nhap vao 1 so nguyen duong\n");
        return 1;
    }
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %.0f\n", number, sum);

    return 0;
}