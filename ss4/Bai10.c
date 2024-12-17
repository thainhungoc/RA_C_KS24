#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &n1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &n2);
    printf("Nhập số thứ ba: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n1 > n3) {
        int temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", n1, n2, n3);

    return 0;
}