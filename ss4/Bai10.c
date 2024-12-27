#include <stdio.h>

int main() {
    int so1, so2, so3;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &so1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &so2);
    printf("Nhập số thứ ba: ");
    scanf("%d", &so3);

    if (so1 > so2) {
        int temp = so1;
        so1 = so2;
        so2 = temp;
    }

    if (so1 > so3) {
        int temp = so1;
        so1 = so3;
        so3 = temp;
    }

    if (so2 > so3) {
        int temp = so2;
        so2 = so3;
        so3 = temp;
    }
    printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", so1, so2, so3);

    return 0;
}